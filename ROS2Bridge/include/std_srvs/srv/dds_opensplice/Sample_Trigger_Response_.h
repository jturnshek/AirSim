//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Sample_Trigger_Response_.h
//  Source: std_srvs\srv\dds_opensplice\Sample_Trigger_Response_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.7.180404OSS
//  
//******************************************************************
#ifndef _SAMPLE_TRIGGER_RESPONSE__H_
#define _SAMPLE_TRIGGER_RESPONSE__H_

#include "sacpp_mapping.h"
#include "Trigger_Response_.h"
#include "std_srvs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace std_srvs
{
   namespace srv
   {
      namespace dds_
      {
         struct Sample_Trigger_Response_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs Sample_Trigger_Response_
         {
               DDS::ULongLong client_guid_0_;
               DDS::ULongLong client_guid_1_;
               DDS::LongLong sequence_number_;
               Trigger_Response_ response_;
         };

         typedef DDS_DCPSStruct_var < Sample_Trigger_Response_> Sample_Trigger_Response__var;
         typedef DDS_DCPSStruct_out < Sample_Trigger_Response_> Sample_Trigger_Response__out;
      }
   }
}




#endif