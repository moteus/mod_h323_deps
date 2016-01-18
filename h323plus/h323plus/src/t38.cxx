//
// t38.cxx
//
// Code automatically generated by asnparse.
//

#ifdef P_USE_PRAGMA
#pragma implementation "t38.h"
#endif

#include <ptlib.h>
#include "t38.h"

#define new PNEW


#if ! H323_DISABLE_T38


#ifndef PASN_NOPRINTON
const static PASN_Names Names_T38_Type_of_msg[]={
      {"t30_indicator",0}
     ,{"data",1}
};
#endif
//
// Type-of-msg
//

T38_Type_of_msg::T38_Type_of_msg(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Choice(tag, tagClass, 2, FALSE
#ifndef PASN_NOPRINTON
    ,(const PASN_Names *)Names_T38_Type_of_msg,2
#endif
)
{
}


#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
T38_Type_of_msg::operator T38_Type_of_msg_t30_indicator &() const
#else
T38_Type_of_msg::operator T38_Type_of_msg_t30_indicator &()
{
#ifndef PASN_LEANANDMEAN
  PAssert(PIsDescendant(PAssertNULL(choice), T38_Type_of_msg_t30_indicator), PInvalidCast);
#endif
  return *(T38_Type_of_msg_t30_indicator *)choice;
}


T38_Type_of_msg::operator const T38_Type_of_msg_t30_indicator &() const
#endif
{
#ifndef PASN_LEANANDMEAN
  PAssert(PIsDescendant(PAssertNULL(choice), T38_Type_of_msg_t30_indicator), PInvalidCast);
#endif
  return *(T38_Type_of_msg_t30_indicator *)choice;
}


#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
T38_Type_of_msg::operator T38_Type_of_msg_data &() const
#else
T38_Type_of_msg::operator T38_Type_of_msg_data &()
{
#ifndef PASN_LEANANDMEAN
  PAssert(PIsDescendant(PAssertNULL(choice), T38_Type_of_msg_data), PInvalidCast);
#endif
  return *(T38_Type_of_msg_data *)choice;
}


T38_Type_of_msg::operator const T38_Type_of_msg_data &() const
#endif
{
#ifndef PASN_LEANANDMEAN
  PAssert(PIsDescendant(PAssertNULL(choice), T38_Type_of_msg_data), PInvalidCast);
#endif
  return *(T38_Type_of_msg_data *)choice;
}


PBoolean T38_Type_of_msg::CreateObject()
{
  switch (tag) {
    case e_t30_indicator :
      choice = new T38_Type_of_msg_t30_indicator();
      return TRUE;
    case e_data :
      choice = new T38_Type_of_msg_data();
      return TRUE;
  }

  choice = NULL;
  return FALSE;
}


PObject * T38_Type_of_msg::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(T38_Type_of_msg::Class()), PInvalidCast);
#endif
  return new T38_Type_of_msg(*this);
}


//
// Data-Field
//

T38_Data_Field::T38_Data_Field(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Array(tag, tagClass)
{
}


PASN_Object * T38_Data_Field::CreateObject() const
{
  return new T38_Data_Field_subtype;
}


T38_Data_Field_subtype & T38_Data_Field::operator[](PINDEX i) const
{
  return (T38_Data_Field_subtype &)array[i];
}


PObject * T38_Data_Field::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(T38_Data_Field::Class()), PInvalidCast);
#endif
  return new T38_Data_Field(*this);
}


//
// PreCorrigendum-Data-Field
//

T38_PreCorrigendum_Data_Field::T38_PreCorrigendum_Data_Field(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Array(tag, tagClass)
{
}


PASN_Object * T38_PreCorrigendum_Data_Field::CreateObject() const
{
  return new T38_PreCorrigendum_Data_Field_subtype;
}


T38_PreCorrigendum_Data_Field_subtype & T38_PreCorrigendum_Data_Field::operator[](PINDEX i) const
{
  return (T38_PreCorrigendum_Data_Field_subtype &)array[i];
}


PObject * T38_PreCorrigendum_Data_Field::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(T38_PreCorrigendum_Data_Field::Class()), PInvalidCast);
#endif
  return new T38_PreCorrigendum_Data_Field(*this);
}


#ifndef PASN_NOPRINTON
const static PASN_Names Names_T38_Type_of_msg_t30_indicator[]={
        {"no-signal",0}
       ,{"cng",1}
       ,{"ced",2}
       ,{"v21-preamble",3}
       ,{"v27-2400-training",4}
       ,{"v27-4800-training",5}
       ,{"v29-7200-training",6}
       ,{"v29-9600-training",7}
       ,{"v17-7200-short-training",8}
       ,{"v17-7200-long-training",9}
       ,{"v17-9600-short-training",10}
       ,{"v17-9600-long-training",11}
       ,{"v17-12000-short-training",12}
       ,{"v17-12000-long-training",13}
       ,{"v17-14400-short-training",14}
       ,{"v17-14400-long-training",15}
};
#endif
//
// Type-of-msg_t30-indicator
//

T38_Type_of_msg_t30_indicator::T38_Type_of_msg_t30_indicator(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Enumeration(tag, tagClass, 15, TRUE
#ifndef PASN_NOPRINTON
    ,(const PASN_Names *)Names_T38_Type_of_msg_t30_indicator,16
#endif
    )
{
}


T38_Type_of_msg_t30_indicator & T38_Type_of_msg_t30_indicator::operator=(unsigned v)
{
  SetValue(v);
  return *this;
}


PObject * T38_Type_of_msg_t30_indicator::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(T38_Type_of_msg_t30_indicator::Class()), PInvalidCast);
#endif
  return new T38_Type_of_msg_t30_indicator(*this);
}


#ifndef PASN_NOPRINTON
const static PASN_Names Names_T38_Type_of_msg_data[]={
        {"v21",0}
       ,{"v27-2400",1}
       ,{"v27-4800",2}
       ,{"v29-7200",3}
       ,{"v29-9600",4}
       ,{"v17-7200",5}
       ,{"v17-9600",6}
       ,{"v17-12000",7}
       ,{"v17-14400",8}
};
#endif
//
// Type-of-msg_data
//

T38_Type_of_msg_data::T38_Type_of_msg_data(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Enumeration(tag, tagClass, 8, TRUE
#ifndef PASN_NOPRINTON
    ,(const PASN_Names *)Names_T38_Type_of_msg_data,9
#endif
    )
{
}


T38_Type_of_msg_data & T38_Type_of_msg_data::operator=(unsigned v)
{
  SetValue(v);
  return *this;
}


PObject * T38_Type_of_msg_data::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(T38_Type_of_msg_data::Class()), PInvalidCast);
#endif
  return new T38_Type_of_msg_data(*this);
}



#ifndef PASN_NOPRINTON
const static PASN_Names Names_T38_UDPTLPacket_error_recovery[]={
      {"secondary_ifp_packets",0}
     ,{"fec_info",1}
};
#endif
//
// UDPTLPacket_error-recovery
//

T38_UDPTLPacket_error_recovery::T38_UDPTLPacket_error_recovery(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Choice(tag, tagClass, 2, FALSE
#ifndef PASN_NOPRINTON
    ,(const PASN_Names *)Names_T38_UDPTLPacket_error_recovery,2
#endif
)
{
}


#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
T38_UDPTLPacket_error_recovery::operator T38_UDPTLPacket_error_recovery_secondary_ifp_packets &() const
#else
T38_UDPTLPacket_error_recovery::operator T38_UDPTLPacket_error_recovery_secondary_ifp_packets &()
{
#ifndef PASN_LEANANDMEAN
  PAssert(PIsDescendant(PAssertNULL(choice), T38_UDPTLPacket_error_recovery_secondary_ifp_packets), PInvalidCast);
#endif
  return *(T38_UDPTLPacket_error_recovery_secondary_ifp_packets *)choice;
}


T38_UDPTLPacket_error_recovery::operator const T38_UDPTLPacket_error_recovery_secondary_ifp_packets &() const
#endif
{
#ifndef PASN_LEANANDMEAN
  PAssert(PIsDescendant(PAssertNULL(choice), T38_UDPTLPacket_error_recovery_secondary_ifp_packets), PInvalidCast);
#endif
  return *(T38_UDPTLPacket_error_recovery_secondary_ifp_packets *)choice;
}


#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
T38_UDPTLPacket_error_recovery::operator T38_UDPTLPacket_error_recovery_fec_info &() const
#else
T38_UDPTLPacket_error_recovery::operator T38_UDPTLPacket_error_recovery_fec_info &()
{
#ifndef PASN_LEANANDMEAN
  PAssert(PIsDescendant(PAssertNULL(choice), T38_UDPTLPacket_error_recovery_fec_info), PInvalidCast);
#endif
  return *(T38_UDPTLPacket_error_recovery_fec_info *)choice;
}


T38_UDPTLPacket_error_recovery::operator const T38_UDPTLPacket_error_recovery_fec_info &() const
#endif
{
#ifndef PASN_LEANANDMEAN
  PAssert(PIsDescendant(PAssertNULL(choice), T38_UDPTLPacket_error_recovery_fec_info), PInvalidCast);
#endif
  return *(T38_UDPTLPacket_error_recovery_fec_info *)choice;
}


PBoolean T38_UDPTLPacket_error_recovery::CreateObject()
{
  switch (tag) {
    case e_secondary_ifp_packets :
      choice = new T38_UDPTLPacket_error_recovery_secondary_ifp_packets();
      return TRUE;
    case e_fec_info :
      choice = new T38_UDPTLPacket_error_recovery_fec_info();
      return TRUE;
  }

  choice = NULL;
  return FALSE;
}


PObject * T38_UDPTLPacket_error_recovery::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(T38_UDPTLPacket_error_recovery::Class()), PInvalidCast);
#endif
  return new T38_UDPTLPacket_error_recovery(*this);
}


#ifndef PASN_NOPRINTON
const static PASN_Names Names_T38_Data_Field_subtype_field_type[]={
        {"hdlc-data",0}
       ,{"hdlc-sig-end",1}
       ,{"hdlc-fcs-OK",2}
       ,{"hdlc-fcs-BAD",3}
       ,{"hdlc-fcs-OK-sig-end",4}
       ,{"hdlc-fcs-BAD-sig-end",5}
       ,{"t4-non-ecm-data",6}
       ,{"t4-non-ecm-sig-end",7}
};
#endif
//
// Data-Field_subtype_field-type
//

T38_Data_Field_subtype_field_type::T38_Data_Field_subtype_field_type(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Enumeration(tag, tagClass, 7, TRUE
#ifndef PASN_NOPRINTON
    ,(const PASN_Names *)Names_T38_Data_Field_subtype_field_type,8
#endif
    )
{
}


T38_Data_Field_subtype_field_type & T38_Data_Field_subtype_field_type::operator=(unsigned v)
{
  SetValue(v);
  return *this;
}


PObject * T38_Data_Field_subtype_field_type::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(T38_Data_Field_subtype_field_type::Class()), PInvalidCast);
#endif
  return new T38_Data_Field_subtype_field_type(*this);
}


#ifndef PASN_NOPRINTON
const static PASN_Names Names_T38_PreCorrigendum_Data_Field_subtype_field_type[]={
        {"hdlc-data",0}
       ,{"hdlc-sig-end",1}
       ,{"hdlc-fcs-OK",2}
       ,{"hdlc-fcs-BAD",3}
       ,{"hdlc-fcs-OK-sig-end",4}
       ,{"hdlc-fcs-BAD-sig-end",5}
       ,{"t4-non-ecm-data",6}
       ,{"t4-non-ecm-sig-end",7}
};
#endif
//
// PreCorrigendum-Data-Field_subtype_field-type
//

T38_PreCorrigendum_Data_Field_subtype_field_type::T38_PreCorrigendum_Data_Field_subtype_field_type(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Enumeration(tag, tagClass, 7, FALSE
#ifndef PASN_NOPRINTON
    ,(const PASN_Names *)Names_T38_PreCorrigendum_Data_Field_subtype_field_type,8
#endif
    )
{
}


T38_PreCorrigendum_Data_Field_subtype_field_type & T38_PreCorrigendum_Data_Field_subtype_field_type::operator=(unsigned v)
{
  SetValue(v);
  return *this;
}


PObject * T38_PreCorrigendum_Data_Field_subtype_field_type::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(T38_PreCorrigendum_Data_Field_subtype_field_type::Class()), PInvalidCast);
#endif
  return new T38_PreCorrigendum_Data_Field_subtype_field_type(*this);
}


//
// UDPTLPacket_error-recovery_secondary-ifp-packets
//

T38_UDPTLPacket_error_recovery_secondary_ifp_packets::T38_UDPTLPacket_error_recovery_secondary_ifp_packets(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Array(tag, tagClass)
{
}


PASN_Object * T38_UDPTLPacket_error_recovery_secondary_ifp_packets::CreateObject() const
{
  return new T38_UDPTLPacket_error_recovery_secondary_ifp_packets_subtype;
}


T38_UDPTLPacket_error_recovery_secondary_ifp_packets_subtype & T38_UDPTLPacket_error_recovery_secondary_ifp_packets::operator[](PINDEX i) const
{
  return (T38_UDPTLPacket_error_recovery_secondary_ifp_packets_subtype &)array[i];
}


PObject * T38_UDPTLPacket_error_recovery_secondary_ifp_packets::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(T38_UDPTLPacket_error_recovery_secondary_ifp_packets::Class()), PInvalidCast);
#endif
  return new T38_UDPTLPacket_error_recovery_secondary_ifp_packets(*this);
}


//
// ArrayOf_PASN_OctetString
//

T38_ArrayOf_PASN_OctetString::T38_ArrayOf_PASN_OctetString(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Array(tag, tagClass)
{
}


PASN_Object * T38_ArrayOf_PASN_OctetString::CreateObject() const
{
  return new PASN_OctetString;
}


PASN_OctetString & T38_ArrayOf_PASN_OctetString::operator[](PINDEX i) const
{
  return (PASN_OctetString &)array[i];
}


PObject * T38_ArrayOf_PASN_OctetString::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(T38_ArrayOf_PASN_OctetString::Class()), PInvalidCast);
#endif
  return new T38_ArrayOf_PASN_OctetString(*this);
}


//
// IFPPacket
//

T38_IFPPacket::T38_IFPPacket(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Sequence(tag, tagClass, 1, FALSE, 0)
{
}


#ifndef PASN_NOPRINTON
void T38_IFPPacket::PrintOn(ostream & strm) const
{
  int indent = strm.precision() + 2;
  strm << "{\n";
  strm << setw(indent+14) << "type_of_msg = " << setprecision(indent) << m_type_of_msg << '\n';
  if (HasOptionalField(e_data_field))
    strm << setw(indent+13) << "data_field = " << setprecision(indent) << m_data_field << '\n';
  strm << setw(indent-1) << setprecision(indent-2) << "}";
}
#endif


PObject::Comparison T38_IFPPacket::Compare(const PObject & obj) const
{
#ifndef PASN_LEANANDMEAN
  PAssert(PIsDescendant(&obj, T38_IFPPacket), PInvalidCast);
#endif
  const T38_IFPPacket & other = (const T38_IFPPacket &)obj;

  Comparison result;

  if ((result = m_type_of_msg.Compare(other.m_type_of_msg)) != EqualTo)
    return result;
  if ((result = m_data_field.Compare(other.m_data_field)) != EqualTo)
    return result;

  return PASN_Sequence::Compare(other);
}


PINDEX T38_IFPPacket::GetDataLength() const
{
  PINDEX length = 0;
  length += m_type_of_msg.GetObjectLength();
  if (HasOptionalField(e_data_field))
    length += m_data_field.GetObjectLength();
  return length;
}


PBoolean T38_IFPPacket::Decode(PASN_Stream & strm)
{
  if (!PreambleDecode(strm))
    return FALSE;

  if (!m_type_of_msg.Decode(strm))
    return FALSE;
  if (HasOptionalField(e_data_field) && !m_data_field.Decode(strm))
    return FALSE;

  return UnknownExtensionsDecode(strm);
}


void T38_IFPPacket::Encode(PASN_Stream & strm) const
{
  PreambleEncode(strm);

  m_type_of_msg.Encode(strm);
  if (HasOptionalField(e_data_field))
    m_data_field.Encode(strm);

  UnknownExtensionsEncode(strm);
}


PObject * T38_IFPPacket::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(T38_IFPPacket::Class()), PInvalidCast);
#endif
  return new T38_IFPPacket(*this);
}


//
// PreCorrigendum-IFPPacket
//

T38_PreCorrigendum_IFPPacket::T38_PreCorrigendum_IFPPacket(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Sequence(tag, tagClass, 1, FALSE, 0)
{
}


#ifndef PASN_NOPRINTON
void T38_PreCorrigendum_IFPPacket::PrintOn(ostream & strm) const
{
  int indent = strm.precision() + 2;
  strm << "{\n";
  strm << setw(indent+14) << "type_of_msg = " << setprecision(indent) << m_type_of_msg << '\n';
  if (HasOptionalField(e_data_field))
    strm << setw(indent+13) << "data_field = " << setprecision(indent) << m_data_field << '\n';
  strm << setw(indent-1) << setprecision(indent-2) << "}";
}
#endif


PObject::Comparison T38_PreCorrigendum_IFPPacket::Compare(const PObject & obj) const
{
#ifndef PASN_LEANANDMEAN
  PAssert(PIsDescendant(&obj, T38_PreCorrigendum_IFPPacket), PInvalidCast);
#endif
  const T38_PreCorrigendum_IFPPacket & other = (const T38_PreCorrigendum_IFPPacket &)obj;

  Comparison result;

  if ((result = m_type_of_msg.Compare(other.m_type_of_msg)) != EqualTo)
    return result;
  if ((result = m_data_field.Compare(other.m_data_field)) != EqualTo)
    return result;

  return PASN_Sequence::Compare(other);
}


PINDEX T38_PreCorrigendum_IFPPacket::GetDataLength() const
{
  PINDEX length = 0;
  length += m_type_of_msg.GetObjectLength();
  if (HasOptionalField(e_data_field))
    length += m_data_field.GetObjectLength();
  return length;
}


PBoolean T38_PreCorrigendum_IFPPacket::Decode(PASN_Stream & strm)
{
  if (!PreambleDecode(strm))
    return FALSE;

  if (!m_type_of_msg.Decode(strm))
    return FALSE;
  if (HasOptionalField(e_data_field) && !m_data_field.Decode(strm))
    return FALSE;

  return UnknownExtensionsDecode(strm);
}


void T38_PreCorrigendum_IFPPacket::Encode(PASN_Stream & strm) const
{
  PreambleEncode(strm);

  m_type_of_msg.Encode(strm);
  if (HasOptionalField(e_data_field))
    m_data_field.Encode(strm);

  UnknownExtensionsEncode(strm);
}


PObject * T38_PreCorrigendum_IFPPacket::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(T38_PreCorrigendum_IFPPacket::Class()), PInvalidCast);
#endif
  return new T38_PreCorrigendum_IFPPacket(*this);
}


//
// Data-Field_subtype
//

T38_Data_Field_subtype::T38_Data_Field_subtype(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Sequence(tag, tagClass, 1, FALSE, 0)
{
  m_field_data.SetConstraints(PASN_Object::FixedConstraint, 1, 65535);
}


#ifndef PASN_NOPRINTON
void T38_Data_Field_subtype::PrintOn(ostream & strm) const
{
  int indent = strm.precision() + 2;
  strm << "{\n";
  strm << setw(indent+13) << "field_type = " << setprecision(indent) << m_field_type << '\n';
  if (HasOptionalField(e_field_data))
    strm << setw(indent+13) << "field_data = " << setprecision(indent) << m_field_data << '\n';
  strm << setw(indent-1) << setprecision(indent-2) << "}";
}
#endif


PObject::Comparison T38_Data_Field_subtype::Compare(const PObject & obj) const
{
#ifndef PASN_LEANANDMEAN
  PAssert(PIsDescendant(&obj, T38_Data_Field_subtype), PInvalidCast);
#endif
  const T38_Data_Field_subtype & other = (const T38_Data_Field_subtype &)obj;

  Comparison result;

  if ((result = m_field_type.Compare(other.m_field_type)) != EqualTo)
    return result;
  if ((result = m_field_data.Compare(other.m_field_data)) != EqualTo)
    return result;

  return PASN_Sequence::Compare(other);
}


PINDEX T38_Data_Field_subtype::GetDataLength() const
{
  PINDEX length = 0;
  length += m_field_type.GetObjectLength();
  if (HasOptionalField(e_field_data))
    length += m_field_data.GetObjectLength();
  return length;
}


PBoolean T38_Data_Field_subtype::Decode(PASN_Stream & strm)
{
  if (!PreambleDecode(strm))
    return FALSE;

  if (!m_field_type.Decode(strm))
    return FALSE;
  if (HasOptionalField(e_field_data) && !m_field_data.Decode(strm))
    return FALSE;

  return UnknownExtensionsDecode(strm);
}


void T38_Data_Field_subtype::Encode(PASN_Stream & strm) const
{
  PreambleEncode(strm);

  m_field_type.Encode(strm);
  if (HasOptionalField(e_field_data))
    m_field_data.Encode(strm);

  UnknownExtensionsEncode(strm);
}


PObject * T38_Data_Field_subtype::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(T38_Data_Field_subtype::Class()), PInvalidCast);
#endif
  return new T38_Data_Field_subtype(*this);
}


//
// PreCorrigendum-Data-Field_subtype
//

T38_PreCorrigendum_Data_Field_subtype::T38_PreCorrigendum_Data_Field_subtype(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Sequence(tag, tagClass, 1, FALSE, 0)
{
  m_field_data.SetConstraints(PASN_Object::FixedConstraint, 1, 65535);
}


#ifndef PASN_NOPRINTON
void T38_PreCorrigendum_Data_Field_subtype::PrintOn(ostream & strm) const
{
  int indent = strm.precision() + 2;
  strm << "{\n";
  strm << setw(indent+13) << "field_type = " << setprecision(indent) << m_field_type << '\n';
  if (HasOptionalField(e_field_data))
    strm << setw(indent+13) << "field_data = " << setprecision(indent) << m_field_data << '\n';
  strm << setw(indent-1) << setprecision(indent-2) << "}";
}
#endif


PObject::Comparison T38_PreCorrigendum_Data_Field_subtype::Compare(const PObject & obj) const
{
#ifndef PASN_LEANANDMEAN
  PAssert(PIsDescendant(&obj, T38_PreCorrigendum_Data_Field_subtype), PInvalidCast);
#endif
  const T38_PreCorrigendum_Data_Field_subtype & other = (const T38_PreCorrigendum_Data_Field_subtype &)obj;

  Comparison result;

  if ((result = m_field_type.Compare(other.m_field_type)) != EqualTo)
    return result;
  if ((result = m_field_data.Compare(other.m_field_data)) != EqualTo)
    return result;

  return PASN_Sequence::Compare(other);
}


PINDEX T38_PreCorrigendum_Data_Field_subtype::GetDataLength() const
{
  PINDEX length = 0;
  length += m_field_type.GetObjectLength();
  if (HasOptionalField(e_field_data))
    length += m_field_data.GetObjectLength();
  return length;
}


PBoolean T38_PreCorrigendum_Data_Field_subtype::Decode(PASN_Stream & strm)
{
  if (!PreambleDecode(strm))
    return FALSE;

  if (!m_field_type.Decode(strm))
    return FALSE;
  if (HasOptionalField(e_field_data) && !m_field_data.Decode(strm))
    return FALSE;

  return UnknownExtensionsDecode(strm);
}


void T38_PreCorrigendum_Data_Field_subtype::Encode(PASN_Stream & strm) const
{
  PreambleEncode(strm);

  m_field_type.Encode(strm);
  if (HasOptionalField(e_field_data))
    m_field_data.Encode(strm);

  UnknownExtensionsEncode(strm);
}


PObject * T38_PreCorrigendum_Data_Field_subtype::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(T38_PreCorrigendum_Data_Field_subtype::Class()), PInvalidCast);
#endif
  return new T38_PreCorrigendum_Data_Field_subtype(*this);
}


//
// UDPTLPacket_primary-ifp-packet
//

T38_UDPTLPacket_primary_ifp_packet::T38_UDPTLPacket_primary_ifp_packet(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_OctetString(tag, tagClass)
{
}


PObject * T38_UDPTLPacket_primary_ifp_packet::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(T38_UDPTLPacket_primary_ifp_packet::Class()), PInvalidCast);
#endif
  return new T38_UDPTLPacket_primary_ifp_packet(*this);
}


//
// UDPTLPacket_error-recovery_fec-info
//

T38_UDPTLPacket_error_recovery_fec_info::T38_UDPTLPacket_error_recovery_fec_info(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Sequence(tag, tagClass, 0, FALSE, 0)
{
}


#ifndef PASN_NOPRINTON
void T38_UDPTLPacket_error_recovery_fec_info::PrintOn(ostream & strm) const
{
  int indent = strm.precision() + 2;
  strm << "{\n";
  strm << setw(indent+15) << "fec_npackets = " << setprecision(indent) << m_fec_npackets << '\n';
  strm << setw(indent+11) << "fec_data = " << setprecision(indent) << m_fec_data << '\n';
  strm << setw(indent-1) << setprecision(indent-2) << "}";
}
#endif


PObject::Comparison T38_UDPTLPacket_error_recovery_fec_info::Compare(const PObject & obj) const
{
#ifndef PASN_LEANANDMEAN
  PAssert(PIsDescendant(&obj, T38_UDPTLPacket_error_recovery_fec_info), PInvalidCast);
#endif
  const T38_UDPTLPacket_error_recovery_fec_info & other = (const T38_UDPTLPacket_error_recovery_fec_info &)obj;

  Comparison result;

  if ((result = m_fec_npackets.Compare(other.m_fec_npackets)) != EqualTo)
    return result;
  if ((result = m_fec_data.Compare(other.m_fec_data)) != EqualTo)
    return result;

  return PASN_Sequence::Compare(other);
}


PINDEX T38_UDPTLPacket_error_recovery_fec_info::GetDataLength() const
{
  PINDEX length = 0;
  length += m_fec_npackets.GetObjectLength();
  length += m_fec_data.GetObjectLength();
  return length;
}


PBoolean T38_UDPTLPacket_error_recovery_fec_info::Decode(PASN_Stream & strm)
{
  if (!PreambleDecode(strm))
    return FALSE;

  if (!m_fec_npackets.Decode(strm))
    return FALSE;
  if (!m_fec_data.Decode(strm))
    return FALSE;

  return UnknownExtensionsDecode(strm);
}


void T38_UDPTLPacket_error_recovery_fec_info::Encode(PASN_Stream & strm) const
{
  PreambleEncode(strm);

  m_fec_npackets.Encode(strm);
  m_fec_data.Encode(strm);

  UnknownExtensionsEncode(strm);
}


PObject * T38_UDPTLPacket_error_recovery_fec_info::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(T38_UDPTLPacket_error_recovery_fec_info::Class()), PInvalidCast);
#endif
  return new T38_UDPTLPacket_error_recovery_fec_info(*this);
}


//
// UDPTLPacket_error-recovery_secondary-ifp-packets_subtype
//

T38_UDPTLPacket_error_recovery_secondary_ifp_packets_subtype::T38_UDPTLPacket_error_recovery_secondary_ifp_packets_subtype(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_OctetString(tag, tagClass)
{
}


PObject * T38_UDPTLPacket_error_recovery_secondary_ifp_packets_subtype::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(T38_UDPTLPacket_error_recovery_secondary_ifp_packets_subtype::Class()), PInvalidCast);
#endif
  return new T38_UDPTLPacket_error_recovery_secondary_ifp_packets_subtype(*this);
}


//
// UDPTLPacket
//

T38_UDPTLPacket::T38_UDPTLPacket(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Sequence(tag, tagClass, 0, FALSE, 0)
{
  m_seq_number.SetConstraints(PASN_Object::FixedConstraint, 0, 65535);
}


#ifndef PASN_NOPRINTON
void T38_UDPTLPacket::PrintOn(ostream & strm) const
{
  int indent = strm.precision() + 2;
  strm << "{\n";
  strm << setw(indent+13) << "seq_number = " << setprecision(indent) << m_seq_number << '\n';
  strm << setw(indent+21) << "primary_ifp_packet = " << setprecision(indent) << m_primary_ifp_packet << '\n';
  strm << setw(indent+17) << "error_recovery = " << setprecision(indent) << m_error_recovery << '\n';
  strm << setw(indent-1) << setprecision(indent-2) << "}";
}
#endif


PObject::Comparison T38_UDPTLPacket::Compare(const PObject & obj) const
{
#ifndef PASN_LEANANDMEAN
  PAssert(PIsDescendant(&obj, T38_UDPTLPacket), PInvalidCast);
#endif
  const T38_UDPTLPacket & other = (const T38_UDPTLPacket &)obj;

  Comparison result;

  if ((result = m_seq_number.Compare(other.m_seq_number)) != EqualTo)
    return result;
  if ((result = m_primary_ifp_packet.Compare(other.m_primary_ifp_packet)) != EqualTo)
    return result;
  if ((result = m_error_recovery.Compare(other.m_error_recovery)) != EqualTo)
    return result;

  return PASN_Sequence::Compare(other);
}


PINDEX T38_UDPTLPacket::GetDataLength() const
{
  PINDEX length = 0;
  length += m_seq_number.GetObjectLength();
  length += m_primary_ifp_packet.GetObjectLength();
  length += m_error_recovery.GetObjectLength();
  return length;
}


PBoolean T38_UDPTLPacket::Decode(PASN_Stream & strm)
{
  if (!PreambleDecode(strm))
    return FALSE;

  if (!m_seq_number.Decode(strm))
    return FALSE;
  if (!m_primary_ifp_packet.Decode(strm))
    return FALSE;
  if (!m_error_recovery.Decode(strm))
    return FALSE;

  return UnknownExtensionsDecode(strm);
}


void T38_UDPTLPacket::Encode(PASN_Stream & strm) const
{
  PreambleEncode(strm);

  m_seq_number.Encode(strm);
  m_primary_ifp_packet.Encode(strm);
  m_error_recovery.Encode(strm);

  UnknownExtensionsEncode(strm);
}


PObject * T38_UDPTLPacket::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(T38_UDPTLPacket::Class()), PInvalidCast);
#endif
  return new T38_UDPTLPacket(*this);
}


#endif // if ! H323_DISABLE_T38


// End of t38.cxx
