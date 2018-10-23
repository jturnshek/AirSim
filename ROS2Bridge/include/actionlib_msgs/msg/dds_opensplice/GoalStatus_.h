//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: GoalStatus_.h
//  Source: actionlib_msgs\msg\dds_opensplice\GoalStatus_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.7.180404OSS
//  
//******************************************************************
#ifndef _GOALSTATUS__H_
#define _GOALSTATUS__H_

#include "sacpp_mapping.h"
#include "GoalID_.h"
#include "actionlib_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace actionlib_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct GoalStatus_;
         const DDS::Octet GoalStatus__PENDING = (DDS::Octet) 0;
         const DDS::Octet GoalStatus__ACTIVE = (DDS::Octet) 1;
         const DDS::Octet GoalStatus__PREEMPTED = (DDS::Octet) 2;
         const DDS::Octet GoalStatus__SUCCEEDED = (DDS::Octet) 3;
         const DDS::Octet GoalStatus__ABORTED = (DDS::Octet) 4;
         const DDS::Octet GoalStatus__REJECTED = (DDS::Octet) 5;
         const DDS::Octet GoalStatus__PREEMPTING = (DDS::Octet) 6;
         const DDS::Octet GoalStatus__RECALLING = (DDS::Octet) 7;
         const DDS::Octet GoalStatus__RECALLED = (DDS::Octet) 8;
         const DDS::Octet GoalStatus__LOST = (DDS::Octet) 9;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_actionlib_msgs GoalStatus_
         {
               GoalID_ goal_id_;
               DDS::Octet status_;
               DDS::String_mgr text_;
         };

         typedef DDS_DCPSStruct_var < GoalStatus_> GoalStatus__var;
         typedef DDS_DCPSStruct_out < GoalStatus_> GoalStatus__out;
      }
   }
}




#endif