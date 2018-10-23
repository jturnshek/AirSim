//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Sample_GetPlan_Request_.h
//  Source: nav_msgs\srv\dds_opensplice\Sample_GetPlan_Request_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.7.180404OSS
//  
//******************************************************************
#ifndef _SAMPLE_GETPLAN_REQUEST__H_
#define _SAMPLE_GETPLAN_REQUEST__H_

#include "sacpp_mapping.h"
#include "GetPlan_Request_.h"
#include "nav_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace nav_msgs
{
   namespace srv
   {
      namespace dds_
      {
         struct Sample_GetPlan_Request_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Sample_GetPlan_Request_
         {
               DDS::ULongLong client_guid_0_;
               DDS::ULongLong client_guid_1_;
               DDS::LongLong sequence_number_;
               GetPlan_Request_ request_;
         };

         typedef DDS_DCPSStruct_var < Sample_GetPlan_Request_> Sample_GetPlan_Request__var;
         typedef DDS_DCPSStruct_out < Sample_GetPlan_Request_> Sample_GetPlan_Request__out;
      }
   }
}




#endif