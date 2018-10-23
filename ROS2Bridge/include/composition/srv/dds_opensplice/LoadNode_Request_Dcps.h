//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: LoadNode_Request_Dcps.h
//  Source: composition\srv\dds_opensplice\LoadNode_Request_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.7.180404OSS
//  
//******************************************************************
#ifndef _LOADNODE_REQUEST_DCPS_H_
#define _LOADNODE_REQUEST_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "LoadNode_Request_.h"
#include "composition/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace composition
{
   namespace srv
   {
      namespace dds_
      {

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition LoadNode_Request_TypeSupportInterface;

         typedef LoadNode_Request_TypeSupportInterface * LoadNode_Request_TypeSupportInterface_ptr;
         typedef DDS_DCPSInterface_var < LoadNode_Request_TypeSupportInterface> LoadNode_Request_TypeSupportInterface_var;
         typedef DDS_DCPSInterface_out < LoadNode_Request_TypeSupportInterface> LoadNode_Request_TypeSupportInterface_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition LoadNode_Request_DataWriter;

         typedef LoadNode_Request_DataWriter * LoadNode_Request_DataWriter_ptr;
         typedef DDS_DCPSInterface_var < LoadNode_Request_DataWriter> LoadNode_Request_DataWriter_var;
         typedef DDS_DCPSInterface_out < LoadNode_Request_DataWriter> LoadNode_Request_DataWriter_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition LoadNode_Request_DataReader;

         typedef LoadNode_Request_DataReader * LoadNode_Request_DataReader_ptr;
         typedef DDS_DCPSInterface_var < LoadNode_Request_DataReader> LoadNode_Request_DataReader_var;
         typedef DDS_DCPSInterface_out < LoadNode_Request_DataReader> LoadNode_Request_DataReader_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition LoadNode_Request_DataReaderView;

         typedef LoadNode_Request_DataReaderView * LoadNode_Request_DataReaderView_ptr;
         typedef DDS_DCPSInterface_var < LoadNode_Request_DataReaderView> LoadNode_Request_DataReaderView_var;
         typedef DDS_DCPSInterface_out < LoadNode_Request_DataReaderView> LoadNode_Request_DataReaderView_out;

         struct LoadNode_Request_Seq_uniq_ {};
         typedef DDS_DCPSUVLSeq < LoadNode_Request_, struct LoadNode_Request_Seq_uniq_> LoadNode_Request_Seq;
         typedef DDS_DCPSSequence_var < LoadNode_Request_Seq> LoadNode_Request_Seq_var;
         typedef DDS_DCPSSequence_out < LoadNode_Request_Seq> LoadNode_Request_Seq_out;
         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition LoadNode_Request_TypeSupportInterface
         :
            virtual public DDS::TypeSupport
         { 
         public:
            typedef LoadNode_Request_TypeSupportInterface_ptr _ptr_type;
            typedef LoadNode_Request_TypeSupportInterface_var _var_type;

            static LoadNode_Request_TypeSupportInterface_ptr _duplicate (LoadNode_Request_TypeSupportInterface_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static LoadNode_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
            static LoadNode_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static LoadNode_Request_TypeSupportInterface_ptr _nil () { return 0; }
            static const char * _local_id;
            LoadNode_Request_TypeSupportInterface_ptr _this () { return this; }


         protected:
            LoadNode_Request_TypeSupportInterface () {};
            ~LoadNode_Request_TypeSupportInterface () {};
         private:
            LoadNode_Request_TypeSupportInterface (const LoadNode_Request_TypeSupportInterface &);
            LoadNode_Request_TypeSupportInterface & operator = (const LoadNode_Request_TypeSupportInterface &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition LoadNode_Request_DataWriter
         :
            virtual public DDS::DataWriter
         { 
         public:
            typedef LoadNode_Request_DataWriter_ptr _ptr_type;
            typedef LoadNode_Request_DataWriter_var _var_type;

            static LoadNode_Request_DataWriter_ptr _duplicate (LoadNode_Request_DataWriter_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static LoadNode_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
            static LoadNode_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static LoadNode_Request_DataWriter_ptr _nil () { return 0; }
            static const char * _local_id;
            LoadNode_Request_DataWriter_ptr _this () { return this; }

            virtual DDS::LongLong register_instance (const LoadNode_Request_& instance_data) = 0;
            virtual DDS::LongLong register_instance_w_timestamp (const LoadNode_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long unregister_instance (const LoadNode_Request_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long unregister_instance_w_timestamp (const LoadNode_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long write (const LoadNode_Request_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long write_w_timestamp (const LoadNode_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long dispose (const LoadNode_Request_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long dispose_w_timestamp (const LoadNode_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long writedispose (const LoadNode_Request_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long writedispose_w_timestamp (const LoadNode_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long get_key_value (LoadNode_Request_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const LoadNode_Request_& instance_data) = 0;

         protected:
            LoadNode_Request_DataWriter () {};
            ~LoadNode_Request_DataWriter () {};
         private:
            LoadNode_Request_DataWriter (const LoadNode_Request_DataWriter &);
            LoadNode_Request_DataWriter & operator = (const LoadNode_Request_DataWriter &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition LoadNode_Request_DataReader
         :
            virtual public DDS::DataReader
         { 
         public:
            typedef LoadNode_Request_DataReader_ptr _ptr_type;
            typedef LoadNode_Request_DataReader_var _var_type;

            static LoadNode_Request_DataReader_ptr _duplicate (LoadNode_Request_DataReader_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static LoadNode_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
            static LoadNode_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static LoadNode_Request_DataReader_ptr _nil () { return 0; }
            static const char * _local_id;
            LoadNode_Request_DataReader_ptr _this () { return this; }

            virtual DDS::Long read (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (LoadNode_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (LoadNode_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (LoadNode_Request_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const LoadNode_Request_& instance) = 0;

         protected:
            LoadNode_Request_DataReader () {};
            ~LoadNode_Request_DataReader () {};
         private:
            LoadNode_Request_DataReader (const LoadNode_Request_DataReader &);
            LoadNode_Request_DataReader & operator = (const LoadNode_Request_DataReader &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition LoadNode_Request_DataReaderView
         :
            virtual public DDS::DataReaderView
         { 
         public:
            typedef LoadNode_Request_DataReaderView_ptr _ptr_type;
            typedef LoadNode_Request_DataReaderView_var _var_type;

            static LoadNode_Request_DataReaderView_ptr _duplicate (LoadNode_Request_DataReaderView_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static LoadNode_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
            static LoadNode_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static LoadNode_Request_DataReaderView_ptr _nil () { return 0; }
            static const char * _local_id;
            LoadNode_Request_DataReaderView_ptr _this () { return this; }

            virtual DDS::Long read (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (LoadNode_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (LoadNode_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (LoadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (LoadNode_Request_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const LoadNode_Request_& instance) = 0;

         protected:
            LoadNode_Request_DataReaderView () {};
            ~LoadNode_Request_DataReaderView () {};
         private:
            LoadNode_Request_DataReaderView (const LoadNode_Request_DataReaderView &);
            LoadNode_Request_DataReaderView & operator = (const LoadNode_Request_DataReaderView &);
         };

      }
   }
}




#endif