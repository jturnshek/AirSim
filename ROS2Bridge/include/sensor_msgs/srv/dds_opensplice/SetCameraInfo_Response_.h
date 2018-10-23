//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: SetCameraInfo_Response_.h
//  Source: sensor_msgs\srv\dds_opensplice\SetCameraInfo_Response_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.7.180404OSS
//  
//******************************************************************
#ifndef _SETCAMERAINFO_RESPONSE__H_
#define _SETCAMERAINFO_RESPONSE__H_

#include "sacpp_mapping.h"
#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace sensor_msgs
{
   namespace srv
   {
      namespace dds_
      {
         struct SetCameraInfo_Response_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs SetCameraInfo_Response_
         {
               DDS::Boolean success_;
               DDS::String_mgr status_message_;
         };

         typedef DDS_DCPSStruct_var < SetCameraInfo_Response_> SetCameraInfo_Response__var;
         typedef DDS_DCPSStruct_out < SetCameraInfo_Response_> SetCameraInfo_Response__out;
      }
   }
}




#endif