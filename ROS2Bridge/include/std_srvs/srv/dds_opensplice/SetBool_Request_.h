//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: SetBool_Request_.h
//  Source: std_srvs\srv\dds_opensplice\SetBool_Request_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.7.180404OSS
//  
//******************************************************************
#ifndef _SETBOOL_REQUEST__H_
#define _SETBOOL_REQUEST__H_

#include "sacpp_mapping.h"
#include "std_srvs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace std_srvs
{
   namespace srv
   {
      namespace dds_
      {
         struct SetBool_Request_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs SetBool_Request_
         {
               DDS::Boolean data_;
         };

         typedef DDS_DCPSStruct_var < SetBool_Request_> SetBool_Request__var;
         typedef SetBool_Request_&SetBool_Request__out;
      }
   }
}




#endif