//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: ColorRGBA_.h
//  Source: std_msgs\msg\dds_opensplice\ColorRGBA_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.7.180404OSS
//  
//******************************************************************
#ifndef _COLORRGBA__H_
#define _COLORRGBA__H_

#include "sacpp_mapping.h"
#include "std_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace std_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct ColorRGBA_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_msgs ColorRGBA_
         {
               DDS::Float r_;
               DDS::Float g_;
               DDS::Float b_;
               DDS::Float a_;
         };

         typedef DDS_DCPSStruct_var < ColorRGBA_> ColorRGBA__var;
         typedef ColorRGBA_&ColorRGBA__out;
      }
   }
}




#endif