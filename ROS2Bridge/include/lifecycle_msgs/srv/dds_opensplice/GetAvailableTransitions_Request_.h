//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: GetAvailableTransitions_Request_.h
//  Source: lifecycle_msgs\srv\dds_opensplice\GetAvailableTransitions_Request_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.7.180404OSS
//  
//******************************************************************
#ifndef _GETAVAILABLETRANSITIONS_REQUEST__H_
#define _GETAVAILABLETRANSITIONS_REQUEST__H_

#include "sacpp_mapping.h"
#include "lifecycle_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace lifecycle_msgs
{
   namespace srv
   {
      namespace dds_
      {
         struct GetAvailableTransitions_Request_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs GetAvailableTransitions_Request_
         {
               DDS::String_mgr node_name_;
         };

         typedef DDS_DCPSStruct_var < GetAvailableTransitions_Request_> GetAvailableTransitions_Request__var;
         typedef DDS_DCPSStruct_out < GetAvailableTransitions_Request_> GetAvailableTransitions_Request__out;
      }
   }
}




#endif