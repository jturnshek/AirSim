//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: WrenchStamped_.h
//  Source: geometry_msgs\msg\dds_opensplice\WrenchStamped_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.7.180404OSS
//  
//******************************************************************
#ifndef _WRENCHSTAMPED__H_
#define _WRENCHSTAMPED__H_

#include "sacpp_mapping.h"
#include "Wrench_.h"
#include "Header_.h"
#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace geometry_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct WrenchStamped_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs WrenchStamped_
         {
               ::std_msgs::msg::dds_::Header_ header_;
               Wrench_ wrench_;
         };

         typedef DDS_DCPSStruct_var < WrenchStamped_> WrenchStamped__var;
         typedef DDS_DCPSStruct_out < WrenchStamped_> WrenchStamped__out;
      }
   }
}




#endif