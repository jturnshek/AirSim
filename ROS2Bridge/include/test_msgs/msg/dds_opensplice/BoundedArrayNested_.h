//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: BoundedArrayNested_.h
//  Source: test_msgs\msg\dds_opensplice\BoundedArrayNested_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.7.180404OSS
//  
//******************************************************************
#ifndef _BOUNDEDARRAYNESTED__H_
#define _BOUNDEDARRAYNESTED__H_

#include "sacpp_mapping.h"
#include "Primitives_.h"
#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace test_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct BoundedArrayNested_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs BoundedArrayNested_
         {
               struct _primitive_values__seq_uniq_ {};
               typedef DDS_DCPSBVLSeq < Primitives_, 4> _primitive_values__seq;
               typedef DDS_DCPSSequence_var < _primitive_values__seq> _primitive_values__seq_var;
               typedef DDS_DCPSSequence_out < _primitive_values__seq> _primitive_values__seq_out;
               _primitive_values__seq primitive_values_;
         };

         typedef DDS_DCPSStruct_var < BoundedArrayNested_> BoundedArrayNested__var;
         typedef DDS_DCPSStruct_out < BoundedArrayNested_> BoundedArrayNested__out;
      }
   }
}




#endif