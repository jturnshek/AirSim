//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Sample_SetBool_Response_.h
//  Source: std_srvs\srv\dds_opensplice\Sample_SetBool_Response_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.7.180404OSS
//  
//******************************************************************
#ifndef _SAMPLE_SETBOOL_RESPONSE__H_
#define _SAMPLE_SETBOOL_RESPONSE__H_

#include "sacpp_mapping.h"
#include "SetBool_Response_.h"
#include "std_srvs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace std_srvs
{
   namespace srv
   {
      namespace dds_
      {
         struct Sample_SetBool_Response_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs Sample_SetBool_Response_
         {
               DDS::ULongLong client_guid_0_;
               DDS::ULongLong client_guid_1_;
               DDS::LongLong sequence_number_;
               SetBool_Response_ response_;
         };

         typedef DDS_DCPSStruct_var < Sample_SetBool_Response_> Sample_SetBool_Response__var;
         typedef DDS_DCPSStruct_out < Sample_SetBool_Response_> Sample_SetBool_Response__out;
      }
   }
}




#endif