

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ChangeState_Request_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "ChangeState_Request_.h"

#include <new>

namespace lifecycle_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *ChangeState_Request_TYPENAME = "lifecycle_msgs::srv::dds_::ChangeState_Request_";

            DDS_TypeCode* ChangeState_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ChangeState_Request__g_tc_node_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member ChangeState_Request__g_tc_members[2]=
                {

                    {
                        (char *)"node_name_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"transition_",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode ChangeState_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"lifecycle_msgs::srv::dds_::ChangeState_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        ChangeState_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ChangeState_Request_*/

                if (is_initialized) {
                    return &ChangeState_Request__g_tc;
                }

                ChangeState_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&ChangeState_Request__g_tc_node_name__string;

                ChangeState_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)lifecycle_msgs::msg::dds_::Transition__get_typecode();

                is_initialized = RTI_TRUE;

                return &ChangeState_Request__g_tc;
            }

            RTIBool ChangeState_Request__initialize(
                ChangeState_Request_* sample) {
                return lifecycle_msgs::srv::dds_::ChangeState_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ChangeState_Request__initialize_ex(
                ChangeState_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return lifecycle_msgs::srv::dds_::ChangeState_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ChangeState_Request__initialize_w_params(
                ChangeState_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->node_name_= DDS_String_alloc ((0));
                    if (sample->node_name_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->node_name_!= NULL) { 
                        sample->node_name_[0] = '\0';
                    }
                }

                if (!lifecycle_msgs::msg::dds_::Transition__initialize_w_params(&sample->transition_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void ChangeState_Request__finalize(
                ChangeState_Request_* sample)
            {

                lifecycle_msgs::srv::dds_::ChangeState_Request__finalize_ex(sample,RTI_TRUE);
            }

            void ChangeState_Request__finalize_ex(
                ChangeState_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                lifecycle_msgs::srv::dds_::ChangeState_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void ChangeState_Request__finalize_w_params(
                ChangeState_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->node_name_ != NULL) {
                    DDS_String_free(sample->node_name_);
                    sample->node_name_=NULL;

                }
                lifecycle_msgs::msg::dds_::Transition__finalize_w_params(&sample->transition_,deallocParams);

            }

            void ChangeState_Request__finalize_optional_members(
                ChangeState_Request_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

                lifecycle_msgs::msg::dds_::Transition__finalize_optional_members(&sample->transition_, deallocParams->delete_pointers);
            }

            RTIBool ChangeState_Request__copy(
                ChangeState_Request_* dst,
                const ChangeState_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->node_name_, src->node_name_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!lifecycle_msgs::msg::dds_::Transition__copy(
                        &dst->transition_,(const lifecycle_msgs::msg::dds_::Transition_*)&src->transition_)) {
                        return RTI_FALSE;
                    } 

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'ChangeState_Request_' sequence class.
            */
            #define T ChangeState_Request_
            #define TSeq ChangeState_Request_Seq

            #define T_initialize_w_params lifecycle_msgs::srv::dds_::ChangeState_Request__initialize_w_params

            #define T_finalize_w_params   lifecycle_msgs::srv::dds_::ChangeState_Request__finalize_w_params
            #define T_copy       lifecycle_msgs::srv::dds_::ChangeState_Request__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace lifecycle_msgs  */
