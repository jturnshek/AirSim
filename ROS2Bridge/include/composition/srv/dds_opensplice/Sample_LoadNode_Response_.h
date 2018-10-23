//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Sample_LoadNode_Response_.h
//  Source: composition\srv\dds_opensplice\Sample_LoadNode_Response_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.7.180404OSS
//  
//******************************************************************
#ifndef _SAMPLE_LOADNODE_RESPONSE__H_
#define _SAMPLE_LOADNODE_RESPONSE__H_

#include "sacpp_mapping.h"
#include "LoadNode_Response_.h"
#include "composition/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace composition
{
   namespace srv
   {
      namespace dds_
      {
         struct Sample_LoadNode_Response_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition Sample_LoadNode_Response_
         {
               DDS::ULongLong client_guid_0_;
               DDS::ULongLong client_guid_1_;
               DDS::LongLong sequence_number_;
               LoadNode_Response_ response_;
         };

         typedef DDS_DCPSStruct_var < Sample_LoadNode_Response_> Sample_LoadNode_Response__var;
         typedef Sample_LoadNode_Response_&Sample_LoadNode_Response__out;
      }
   }
}




#endif