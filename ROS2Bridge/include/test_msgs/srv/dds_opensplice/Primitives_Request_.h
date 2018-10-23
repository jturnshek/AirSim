//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Primitives_Request_.h
//  Source: test_msgs\srv\dds_opensplice\Primitives_Request_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.7.180404OSS
//  
//******************************************************************
#ifndef _PRIMITIVES_REQUEST__H_
#define _PRIMITIVES_REQUEST__H_

#include "sacpp_mapping.h"
#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace test_msgs
{
   namespace srv
   {
      namespace dds_
      {
         struct Primitives_Request_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Primitives_Request_
         {
               DDS::Boolean bool_value_;
               DDS::Octet byte_value_;
               DDS::Char char_value_;
               DDS::Float float32_value_;
               DDS::Double float64_value_;
               DDS::Octet int8_value_;
               DDS::Octet uint8_value_;
               DDS::Short int16_value_;
               DDS::UShort uint16_value_;
               DDS::Long int32_value_;
               DDS::ULong uint32_value_;
               DDS::LongLong int64_value_;
               DDS::ULongLong uint64_value_;
               DDS::String_mgr string_value_;
         };

         typedef DDS_DCPSStruct_var < Primitives_Request_> Primitives_Request__var;
         typedef DDS_DCPSStruct_out < Primitives_Request_> Primitives_Request__out;
      }
   }
}




#endif