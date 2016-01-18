/*
 * h235chan.h
 *
 * H.235 Secure RTP channel class.
 *
 * h323plus library
 *
 * Copyright (c) 2011 Spranto Australia Pty Ltd.
 *
 * The contents of this file are subject to the Mozilla Public License
 * Version 1.1 (the "License"); you may not use this file except in
 * compliance with the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Alternatively, the contents of this file may be used under the terms
 * of the General Public License (the  "GNU License"), in which case the
 * provisions of GNU License are applicable instead of those
 * above. If you wish to allow use of your version of this file only
 * under the terms of the GNU License and not to allow others to use
 * your version of this file under the MPL, indicate your decision by
 * deleting the provisions above and replace them with the notice and
 * other provisions required by the GNU License. If you do not delete
 * the provisions above, a recipient may use your version of this file
 * under either the MPL or the GNU License."
 *
 * Software distributed under the License is distributed on an "AS IS"
 * basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See
 * the License for the specific language governing rights and limitations
 * under the License.
 *
 *
 * The Initial Developer of the Original Code is ISVO (Asia) Pte. Ltd.
 *
 *
 * Contributor(s): ______________________________________.
 *
 * $Id: h235chan.h,v 1.2 2011/10/01 03:14:18 shorne Exp $
 *
 */



#ifdef H323_H235

#include <channels.h>
#include "h235/h235caps.h"

/**This class is a derived Class for encpsulating the IETF Real Time Protocol 
   interface. It's only aim is to expose the Created UDP Data channel derive a
   new class for binding to the OpenSSL TLS system.
 */

class RTP_Session;
class H235Session;
class H323SecureRTPChannel  : public H323_RTPChannel
{
  PCLASSINFO(H323SecureRTPChannel, H323_RTPChannel);

  public:
  /**@name Construction/Deconstructor */
  //@{
    /**Create a new channel.
     */
    H323SecureRTPChannel(
      H323Connection & connection,                      ///< Connection to endpoint for channel
      const H323SecureRealTimeCapability & capability,  ///< Secure Capability channel is using
      Directions direction,                             ///< Direction of channel
      RTP_Session & rtp                                 ///< RTP session for channel    
    );

    /**Destroy Class.
     */
    ~H323SecureRTPChannel();         ///< Destroy the channel
  //@}

  /**@name Overrides from H323_RTPChannel */
  //@{
    /**This is called to clean up any threads on connection termination.
     */
     virtual void CleanUpOnTermination();
  //@}

  /**@name Overrides from class H323Channel */
  //@{
    /**Fill out the OpenLogicalChannel PDU for the particular channel type.
     */
    virtual PBoolean OnSendingPDU(
      H245_OpenLogicalChannel & openPDU  /// Open PDU to send. 
    ) const;

    /**This is called when request to create a channel is received from a
       remote machine and is about to be acknowledged.
     */
    virtual void OnSendOpenAck(
      const H245_OpenLogicalChannel & open,   /// Open PDU
      H245_OpenLogicalChannelAck & ack        /// Acknowledgement PDU
    ) const;

    /**This is called after a request to create a channel occurs from the
       local machine via the H245LogicalChannelDict::Open() function, and
       the request has been acknowledged by the remote endpoint.

       The default makes sure the parameters are compatible and passes on
       the PDU to the rtp session.
     */
    virtual PBoolean OnReceivedPDU(
      const H245_OpenLogicalChannel & pdu,    /// Open PDU
      unsigned & errorCode                    /// Error code on failure
    );

    /**This is called after a request to create a channel occurs from the
       local machine via the H245LogicalChannelDict::Open() function, and
       the request has been acknowledged by the remote endpoint.

       The default makes sure the parameters are compatible and passes on
       the PDU to the rtp session.
     */
    virtual PBoolean OnReceivedAckPDU(
      const H245_OpenLogicalChannelAck & pdu /// Acknowledgement PDU
    );
  //@}

  /**@name Operations */
  //@{
    /**Fill out the OpenLogicalChannel PDU for the particular channel type.
     */
    virtual PBoolean OnSendingPDU(
      H245_H2250LogicalChannelParameters & param  /// Open PDU to send.
      ) const;

    /**This is called when request to create a channel is received from a
       remote machine and is about to be acknowledged.
     */
    virtual void OnSendOpenAck(
      H245_H2250LogicalChannelAckParameters & param /// Acknowledgement PDU
    ) const;

    /**This is called after a request to create a channel occurs from the
       local machine via the H245LogicalChannelDict::Open() function, and
       the request has been acknowledged by the remote endpoint.

       The default behaviour sets the remote ports to send UDP packets to.
     */
    virtual PBoolean OnReceivedPDU(
      const H245_H2250LogicalChannelParameters & param, /// Acknowledgement PDU
      unsigned & errorCode                              /// Error on failure
    );

    /**This is called after a request to create a channel occurs from the
       local machine via the H245LogicalChannelDict::Open() function, and
       the request has been acknowledged by the remote endpoint.

       The default behaviour sets the remote ports to send UDP packets to.
     */
    virtual PBoolean OnReceivedAckPDU(
      const H245_H2250LogicalChannelAckParameters & param /// Acknowledgement PDU
    );

  //@}

  /**@name Utilities */
  //@{
    /** Read a DataFrame */
    virtual PBoolean ReadFrame(
        DWORD & rtpTimestamp,     /// TimeStamp
        RTP_DataFrame & frame     /// RTP data frame
        );

    /** Write a DataFrame */
    virtual PBoolean WriteFrame(
        RTP_DataFrame & frame     /// RTP data frame
        );
  //@}

protected:
    H235Session   *  m_encryption;

};


#endif