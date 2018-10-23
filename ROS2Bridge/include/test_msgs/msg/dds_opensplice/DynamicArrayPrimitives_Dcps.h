//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: DynamicArrayPrimitives_Dcps.h
//  Source: test_msgs\msg\dds_opensplice\DynamicArrayPrimitives_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.7.180404OSS
//  
//******************************************************************
#ifndef _DYNAMICARRAYPRIMITIVES_DCPS_H_
#define _DYNAMICARRAYPRIMITIVES_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "DynamicArrayPrimitives_.h"
#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace test_msgs
{
   namespace msg
   {
      namespace dds_
      {

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs DynamicArrayPrimitives_TypeSupportInterface;

         typedef DynamicArrayPrimitives_TypeSupportInterface * DynamicArrayPrimitives_TypeSupportInterface_ptr;
         typedef DDS_DCPSInterface_var < DynamicArrayPrimitives_TypeSupportInterface> DynamicArrayPrimitives_TypeSupportInterface_var;
         typedef DDS_DCPSInterface_out < DynamicArrayPrimitives_TypeSupportInterface> DynamicArrayPrimitives_TypeSupportInterface_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs DynamicArrayPrimitives_DataWriter;

         typedef DynamicArrayPrimitives_DataWriter * DynamicArrayPrimitives_DataWriter_ptr;
         typedef DDS_DCPSInterface_var < DynamicArrayPrimitives_DataWriter> DynamicArrayPrimitives_DataWriter_var;
         typedef DDS_DCPSInterface_out < DynamicArrayPrimitives_DataWriter> DynamicArrayPrimitives_DataWriter_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs DynamicArrayPrimitives_DataReader;

         typedef DynamicArrayPrimitives_DataReader * DynamicArrayPrimitives_DataReader_ptr;
         typedef DDS_DCPSInterface_var < DynamicArrayPrimitives_DataReader> DynamicArrayPrimitives_DataReader_var;
         typedef DDS_DCPSInterface_out < DynamicArrayPrimitives_DataReader> DynamicArrayPrimitives_DataReader_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs DynamicArrayPrimitives_DataReaderView;

         typedef DynamicArrayPrimitives_DataReaderView * DynamicArrayPrimitives_DataReaderView_ptr;
         typedef DDS_DCPSInterface_var < DynamicArrayPrimitives_DataReaderView> DynamicArrayPrimitives_DataReaderView_var;
         typedef DDS_DCPSInterface_out < DynamicArrayPrimitives_DataReaderView> DynamicArrayPrimitives_DataReaderView_out;

         struct DynamicArrayPrimitives_Seq_uniq_ {};
         typedef DDS_DCPSUVLSeq < DynamicArrayPrimitives_, struct DynamicArrayPrimitives_Seq_uniq_> DynamicArrayPrimitives_Seq;
         typedef DDS_DCPSSequence_var < DynamicArrayPrimitives_Seq> DynamicArrayPrimitives_Seq_var;
         typedef DDS_DCPSSequence_out < DynamicArrayPrimitives_Seq> DynamicArrayPrimitives_Seq_out;
         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs DynamicArrayPrimitives_TypeSupportInterface
         :
            virtual public DDS::TypeSupport
         { 
         public:
            typedef DynamicArrayPrimitives_TypeSupportInterface_ptr _ptr_type;
            typedef DynamicArrayPrimitives_TypeSupportInterface_var _var_type;

            static DynamicArrayPrimitives_TypeSupportInterface_ptr _duplicate (DynamicArrayPrimitives_TypeSupportInterface_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static DynamicArrayPrimitives_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
            static DynamicArrayPrimitives_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static DynamicArrayPrimitives_TypeSupportInterface_ptr _nil () { return 0; }
            static const char * _local_id;
            DynamicArrayPrimitives_TypeSupportInterface_ptr _this () { return this; }


         protected:
            DynamicArrayPrimitives_TypeSupportInterface () {};
            ~DynamicArrayPrimitives_TypeSupportInterface () {};
         private:
            DynamicArrayPrimitives_TypeSupportInterface (const DynamicArrayPrimitives_TypeSupportInterface &);
            DynamicArrayPrimitives_TypeSupportInterface & operator = (const DynamicArrayPrimitives_TypeSupportInterface &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs DynamicArrayPrimitives_DataWriter
         :
            virtual public DDS::DataWriter
         { 
         public:
            typedef DynamicArrayPrimitives_DataWriter_ptr _ptr_type;
            typedef DynamicArrayPrimitives_DataWriter_var _var_type;

            static DynamicArrayPrimitives_DataWriter_ptr _duplicate (DynamicArrayPrimitives_DataWriter_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static DynamicArrayPrimitives_DataWriter_ptr _narrow (DDS::Object_ptr obj);
            static DynamicArrayPrimitives_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static DynamicArrayPrimitives_DataWriter_ptr _nil () { return 0; }
            static const char * _local_id;
            DynamicArrayPrimitives_DataWriter_ptr _this () { return this; }

            virtual DDS::LongLong register_instance (const DynamicArrayPrimitives_& instance_data) = 0;
            virtual DDS::LongLong register_instance_w_timestamp (const DynamicArrayPrimitives_& instance_data, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long unregister_instance (const DynamicArrayPrimitives_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long unregister_instance_w_timestamp (const DynamicArrayPrimitives_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long write (const DynamicArrayPrimitives_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long write_w_timestamp (const DynamicArrayPrimitives_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long dispose (const DynamicArrayPrimitives_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long dispose_w_timestamp (const DynamicArrayPrimitives_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long writedispose (const DynamicArrayPrimitives_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long writedispose_w_timestamp (const DynamicArrayPrimitives_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long get_key_value (DynamicArrayPrimitives_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const DynamicArrayPrimitives_& instance_data) = 0;

         protected:
            DynamicArrayPrimitives_DataWriter () {};
            ~DynamicArrayPrimitives_DataWriter () {};
         private:
            DynamicArrayPrimitives_DataWriter (const DynamicArrayPrimitives_DataWriter &);
            DynamicArrayPrimitives_DataWriter & operator = (const DynamicArrayPrimitives_DataWriter &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs DynamicArrayPrimitives_DataReader
         :
            virtual public DDS::DataReader
         { 
         public:
            typedef DynamicArrayPrimitives_DataReader_ptr _ptr_type;
            typedef DynamicArrayPrimitives_DataReader_var _var_type;

            static DynamicArrayPrimitives_DataReader_ptr _duplicate (DynamicArrayPrimitives_DataReader_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static DynamicArrayPrimitives_DataReader_ptr _narrow (DDS::Object_ptr obj);
            static DynamicArrayPrimitives_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static DynamicArrayPrimitives_DataReader_ptr _nil () { return 0; }
            static const char * _local_id;
            DynamicArrayPrimitives_DataReader_ptr _this () { return this; }

            virtual DDS::Long read (DynamicArrayPrimitives_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (DynamicArrayPrimitives_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (DynamicArrayPrimitives_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (DynamicArrayPrimitives_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (DynamicArrayPrimitives_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (DynamicArrayPrimitives_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (DynamicArrayPrimitives_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (DynamicArrayPrimitives_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (DynamicArrayPrimitives_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (DynamicArrayPrimitives_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (DynamicArrayPrimitives_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (DynamicArrayPrimitives_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (DynamicArrayPrimitives_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (DynamicArrayPrimitives_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const DynamicArrayPrimitives_& instance) = 0;

         protected:
            DynamicArrayPrimitives_DataReader () {};
            ~DynamicArrayPrimitives_DataReader () {};
         private:
            DynamicArrayPrimitives_DataReader (const DynamicArrayPrimitives_DataReader &);
            DynamicArrayPrimitives_DataReader & operator = (const DynamicArrayPrimitives_DataReader &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs DynamicArrayPrimitives_DataReaderView
         :
            virtual public DDS::DataReaderView
         { 
         public:
            typedef DynamicArrayPrimitives_DataReaderView_ptr _ptr_type;
            typedef DynamicArrayPrimitives_DataReaderView_var _var_type;

            static DynamicArrayPrimitives_DataReaderView_ptr _duplicate (DynamicArrayPrimitives_DataReaderView_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static DynamicArrayPrimitives_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
            static DynamicArrayPrimitives_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static DynamicArrayPrimitives_DataReaderView_ptr _nil () { return 0; }
            static const char * _local_id;
            DynamicArrayPrimitives_DataReaderView_ptr _this () { return this; }

            virtual DDS::Long read (DynamicArrayPrimitives_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (DynamicArrayPrimitives_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (DynamicArrayPrimitives_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (DynamicArrayPrimitives_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (DynamicArrayPrimitives_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (DynamicArrayPrimitives_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (DynamicArrayPrimitives_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (DynamicArrayPrimitives_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (DynamicArrayPrimitives_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (DynamicArrayPrimitives_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (DynamicArrayPrimitives_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (DynamicArrayPrimitives_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (DynamicArrayPrimitives_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (DynamicArrayPrimitives_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const DynamicArrayPrimitives_& instance) = 0;

         protected:
            DynamicArrayPrimitives_DataReaderView () {};
            ~DynamicArrayPrimitives_DataReaderView () {};
         private:
            DynamicArrayPrimitives_DataReaderView (const DynamicArrayPrimitives_DataReaderView &);
            DynamicArrayPrimitives_DataReaderView & operator = (const DynamicArrayPrimitives_DataReaderView &);
         };

      }
   }
}




#endif