//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Sample_SetMap_Response_.h
//  Source: nav_msgs\srv\dds_opensplice\Sample_SetMap_Response_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.7.180404OSS
//  
//******************************************************************
#ifndef _SAMPLE_SETMAP_RESPONSE__H_
#define _SAMPLE_SETMAP_RESPONSE__H_

#include "sacpp_mapping.h"
#include "SetMap_Response_.h"
#include "nav_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace nav_msgs
{
   namespace srv
   {
      namespace dds_
      {
         struct Sample_SetMap_Response_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Sample_SetMap_Response_
         {
               DDS::ULongLong client_guid_0_;
               DDS::ULongLong client_guid_1_;
               DDS::LongLong sequence_number_;
               SetMap_Response_ response_;
         };

         typedef DDS_DCPSStruct_var < Sample_SetMap_Response_> Sample_SetMap_Response__var;
         typedef Sample_SetMap_Response_&Sample_SetMap_Response__out;
      }
   }
}




#endif