//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: GetState_Response_Dcps.h
//  Source: lifecycle_msgs\srv\dds_opensplice\GetState_Response_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.7.180404OSS
//  
//******************************************************************
#ifndef _GETSTATE_RESPONSE_DCPS_H_
#define _GETSTATE_RESPONSE_DCPS_H_

#include "sacpp_mapping.h"
#include "GetState_Response_.h"
#include "dds_dcps.h"
#include "lifecycle_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace lifecycle_msgs
{
   namespace srv
   {
      namespace dds_
      {

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs GetState_Response_TypeSupportInterface;

         typedef GetState_Response_TypeSupportInterface * GetState_Response_TypeSupportInterface_ptr;
         typedef DDS_DCPSInterface_var < GetState_Response_TypeSupportInterface> GetState_Response_TypeSupportInterface_var;
         typedef DDS_DCPSInterface_out < GetState_Response_TypeSupportInterface> GetState_Response_TypeSupportInterface_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs GetState_Response_DataWriter;

         typedef GetState_Response_DataWriter * GetState_Response_DataWriter_ptr;
         typedef DDS_DCPSInterface_var < GetState_Response_DataWriter> GetState_Response_DataWriter_var;
         typedef DDS_DCPSInterface_out < GetState_Response_DataWriter> GetState_Response_DataWriter_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs GetState_Response_DataReader;

         typedef GetState_Response_DataReader * GetState_Response_DataReader_ptr;
         typedef DDS_DCPSInterface_var < GetState_Response_DataReader> GetState_Response_DataReader_var;
         typedef DDS_DCPSInterface_out < GetState_Response_DataReader> GetState_Response_DataReader_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs GetState_Response_DataReaderView;

         typedef GetState_Response_DataReaderView * GetState_Response_DataReaderView_ptr;
         typedef DDS_DCPSInterface_var < GetState_Response_DataReaderView> GetState_Response_DataReaderView_var;
         typedef DDS_DCPSInterface_out < GetState_Response_DataReaderView> GetState_Response_DataReaderView_out;

         struct GetState_Response_Seq_uniq_ {};
         typedef DDS_DCPSUVLSeq < GetState_Response_, struct GetState_Response_Seq_uniq_> GetState_Response_Seq;
         typedef DDS_DCPSSequence_var < GetState_Response_Seq> GetState_Response_Seq_var;
         typedef DDS_DCPSSequence_out < GetState_Response_Seq> GetState_Response_Seq_out;
         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs GetState_Response_TypeSupportInterface
         :
            virtual public DDS::TypeSupport
         { 
         public:
            typedef GetState_Response_TypeSupportInterface_ptr _ptr_type;
            typedef GetState_Response_TypeSupportInterface_var _var_type;

            static GetState_Response_TypeSupportInterface_ptr _duplicate (GetState_Response_TypeSupportInterface_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static GetState_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
            static GetState_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static GetState_Response_TypeSupportInterface_ptr _nil () { return 0; }
            static const char * _local_id;
            GetState_Response_TypeSupportInterface_ptr _this () { return this; }


         protected:
            GetState_Response_TypeSupportInterface () {};
            ~GetState_Response_TypeSupportInterface () {};
         private:
            GetState_Response_TypeSupportInterface (const GetState_Response_TypeSupportInterface &);
            GetState_Response_TypeSupportInterface & operator = (const GetState_Response_TypeSupportInterface &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs GetState_Response_DataWriter
         :
            virtual public DDS::DataWriter
         { 
         public:
            typedef GetState_Response_DataWriter_ptr _ptr_type;
            typedef GetState_Response_DataWriter_var _var_type;

            static GetState_Response_DataWriter_ptr _duplicate (GetState_Response_DataWriter_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static GetState_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
            static GetState_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static GetState_Response_DataWriter_ptr _nil () { return 0; }
            static const char * _local_id;
            GetState_Response_DataWriter_ptr _this () { return this; }

            virtual DDS::LongLong register_instance (const GetState_Response_& instance_data) = 0;
            virtual DDS::LongLong register_instance_w_timestamp (const GetState_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long unregister_instance (const GetState_Response_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long unregister_instance_w_timestamp (const GetState_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long write (const GetState_Response_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long write_w_timestamp (const GetState_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long dispose (const GetState_Response_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long dispose_w_timestamp (const GetState_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long writedispose (const GetState_Response_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long writedispose_w_timestamp (const GetState_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long get_key_value (GetState_Response_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const GetState_Response_& instance_data) = 0;

         protected:
            GetState_Response_DataWriter () {};
            ~GetState_Response_DataWriter () {};
         private:
            GetState_Response_DataWriter (const GetState_Response_DataWriter &);
            GetState_Response_DataWriter & operator = (const GetState_Response_DataWriter &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs GetState_Response_DataReader
         :
            virtual public DDS::DataReader
         { 
         public:
            typedef GetState_Response_DataReader_ptr _ptr_type;
            typedef GetState_Response_DataReader_var _var_type;

            static GetState_Response_DataReader_ptr _duplicate (GetState_Response_DataReader_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static GetState_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
            static GetState_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static GetState_Response_DataReader_ptr _nil () { return 0; }
            static const char * _local_id;
            GetState_Response_DataReader_ptr _this () { return this; }

            virtual DDS::Long read (GetState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (GetState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (GetState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (GetState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (GetState_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (GetState_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (GetState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (GetState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (GetState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (GetState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (GetState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (GetState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (GetState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (GetState_Response_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const GetState_Response_& instance) = 0;

         protected:
            GetState_Response_DataReader () {};
            ~GetState_Response_DataReader () {};
         private:
            GetState_Response_DataReader (const GetState_Response_DataReader &);
            GetState_Response_DataReader & operator = (const GetState_Response_DataReader &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs GetState_Response_DataReaderView
         :
            virtual public DDS::DataReaderView
         { 
         public:
            typedef GetState_Response_DataReaderView_ptr _ptr_type;
            typedef GetState_Response_DataReaderView_var _var_type;

            static GetState_Response_DataReaderView_ptr _duplicate (GetState_Response_DataReaderView_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static GetState_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
            static GetState_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static GetState_Response_DataReaderView_ptr _nil () { return 0; }
            static const char * _local_id;
            GetState_Response_DataReaderView_ptr _this () { return this; }

            virtual DDS::Long read (GetState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (GetState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (GetState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (GetState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (GetState_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (GetState_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (GetState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (GetState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (GetState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (GetState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (GetState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (GetState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (GetState_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (GetState_Response_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const GetState_Response_& instance) = 0;

         protected:
            GetState_Response_DataReaderView () {};
            ~GetState_Response_DataReaderView () {};
         private:
            GetState_Response_DataReaderView (const GetState_Response_DataReaderView &);
            GetState_Response_DataReaderView & operator = (const GetState_Response_DataReaderView &);
         };

      }
   }
}




#endif