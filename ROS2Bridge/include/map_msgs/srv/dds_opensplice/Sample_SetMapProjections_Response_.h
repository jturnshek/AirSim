//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Sample_SetMapProjections_Response_.h
//  Source: map_msgs\srv\dds_opensplice\Sample_SetMapProjections_Response_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.7.180404OSS
//  
//******************************************************************
#ifndef _SAMPLE_SETMAPPROJECTIONS_RESPONSE__H_
#define _SAMPLE_SETMAPPROJECTIONS_RESPONSE__H_

#include "sacpp_mapping.h"
#include "SetMapProjections_Response_.h"
#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace map_msgs
{
   namespace srv
   {
      namespace dds_
      {
         struct Sample_SetMapProjections_Response_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_SetMapProjections_Response_
         {
               DDS::ULongLong client_guid_0_;
               DDS::ULongLong client_guid_1_;
               DDS::LongLong sequence_number_;
               SetMapProjections_Response_ response_;
         };

         typedef DDS_DCPSStruct_var < Sample_SetMapProjections_Response_> Sample_SetMapProjections_Response__var;
         typedef DDS_DCPSStruct_out < Sample_SetMapProjections_Response_> Sample_SetMapProjections_Response__out;
      }
   }
}




#endif