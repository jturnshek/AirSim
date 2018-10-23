//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: SetCameraInfo_Request_Dcps.h
//  Source: sensor_msgs\srv\dds_opensplice\SetCameraInfo_Request_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.7.180404OSS
//  
//******************************************************************
#ifndef _SETCAMERAINFO_REQUEST_DCPS_H_
#define _SETCAMERAINFO_REQUEST_DCPS_H_

#include "sacpp_mapping.h"
#include "SetCameraInfo_Request_.h"
#include "dds_dcps.h"
#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace sensor_msgs
{
   namespace srv
   {
      namespace dds_
      {

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs SetCameraInfo_Request_TypeSupportInterface;

         typedef SetCameraInfo_Request_TypeSupportInterface * SetCameraInfo_Request_TypeSupportInterface_ptr;
         typedef DDS_DCPSInterface_var < SetCameraInfo_Request_TypeSupportInterface> SetCameraInfo_Request_TypeSupportInterface_var;
         typedef DDS_DCPSInterface_out < SetCameraInfo_Request_TypeSupportInterface> SetCameraInfo_Request_TypeSupportInterface_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs SetCameraInfo_Request_DataWriter;

         typedef SetCameraInfo_Request_DataWriter * SetCameraInfo_Request_DataWriter_ptr;
         typedef DDS_DCPSInterface_var < SetCameraInfo_Request_DataWriter> SetCameraInfo_Request_DataWriter_var;
         typedef DDS_DCPSInterface_out < SetCameraInfo_Request_DataWriter> SetCameraInfo_Request_DataWriter_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs SetCameraInfo_Request_DataReader;

         typedef SetCameraInfo_Request_DataReader * SetCameraInfo_Request_DataReader_ptr;
         typedef DDS_DCPSInterface_var < SetCameraInfo_Request_DataReader> SetCameraInfo_Request_DataReader_var;
         typedef DDS_DCPSInterface_out < SetCameraInfo_Request_DataReader> SetCameraInfo_Request_DataReader_out;


         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs SetCameraInfo_Request_DataReaderView;

         typedef SetCameraInfo_Request_DataReaderView * SetCameraInfo_Request_DataReaderView_ptr;
         typedef DDS_DCPSInterface_var < SetCameraInfo_Request_DataReaderView> SetCameraInfo_Request_DataReaderView_var;
         typedef DDS_DCPSInterface_out < SetCameraInfo_Request_DataReaderView> SetCameraInfo_Request_DataReaderView_out;

         struct SetCameraInfo_Request_Seq_uniq_ {};
         typedef DDS_DCPSUVLSeq < SetCameraInfo_Request_, struct SetCameraInfo_Request_Seq_uniq_> SetCameraInfo_Request_Seq;
         typedef DDS_DCPSSequence_var < SetCameraInfo_Request_Seq> SetCameraInfo_Request_Seq_var;
         typedef DDS_DCPSSequence_out < SetCameraInfo_Request_Seq> SetCameraInfo_Request_Seq_out;
         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs SetCameraInfo_Request_TypeSupportInterface
         :
            virtual public DDS::TypeSupport
         { 
         public:
            typedef SetCameraInfo_Request_TypeSupportInterface_ptr _ptr_type;
            typedef SetCameraInfo_Request_TypeSupportInterface_var _var_type;

            static SetCameraInfo_Request_TypeSupportInterface_ptr _duplicate (SetCameraInfo_Request_TypeSupportInterface_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static SetCameraInfo_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
            static SetCameraInfo_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static SetCameraInfo_Request_TypeSupportInterface_ptr _nil () { return 0; }
            static const char * _local_id;
            SetCameraInfo_Request_TypeSupportInterface_ptr _this () { return this; }


         protected:
            SetCameraInfo_Request_TypeSupportInterface () {};
            ~SetCameraInfo_Request_TypeSupportInterface () {};
         private:
            SetCameraInfo_Request_TypeSupportInterface (const SetCameraInfo_Request_TypeSupportInterface &);
            SetCameraInfo_Request_TypeSupportInterface & operator = (const SetCameraInfo_Request_TypeSupportInterface &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs SetCameraInfo_Request_DataWriter
         :
            virtual public DDS::DataWriter
         { 
         public:
            typedef SetCameraInfo_Request_DataWriter_ptr _ptr_type;
            typedef SetCameraInfo_Request_DataWriter_var _var_type;

            static SetCameraInfo_Request_DataWriter_ptr _duplicate (SetCameraInfo_Request_DataWriter_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static SetCameraInfo_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
            static SetCameraInfo_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static SetCameraInfo_Request_DataWriter_ptr _nil () { return 0; }
            static const char * _local_id;
            SetCameraInfo_Request_DataWriter_ptr _this () { return this; }

            virtual DDS::LongLong register_instance (const SetCameraInfo_Request_& instance_data) = 0;
            virtual DDS::LongLong register_instance_w_timestamp (const SetCameraInfo_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long unregister_instance (const SetCameraInfo_Request_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long unregister_instance_w_timestamp (const SetCameraInfo_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long write (const SetCameraInfo_Request_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long write_w_timestamp (const SetCameraInfo_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long dispose (const SetCameraInfo_Request_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long dispose_w_timestamp (const SetCameraInfo_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long writedispose (const SetCameraInfo_Request_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long writedispose_w_timestamp (const SetCameraInfo_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long get_key_value (SetCameraInfo_Request_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const SetCameraInfo_Request_& instance_data) = 0;

         protected:
            SetCameraInfo_Request_DataWriter () {};
            ~SetCameraInfo_Request_DataWriter () {};
         private:
            SetCameraInfo_Request_DataWriter (const SetCameraInfo_Request_DataWriter &);
            SetCameraInfo_Request_DataWriter & operator = (const SetCameraInfo_Request_DataWriter &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs SetCameraInfo_Request_DataReader
         :
            virtual public DDS::DataReader
         { 
         public:
            typedef SetCameraInfo_Request_DataReader_ptr _ptr_type;
            typedef SetCameraInfo_Request_DataReader_var _var_type;

            static SetCameraInfo_Request_DataReader_ptr _duplicate (SetCameraInfo_Request_DataReader_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static SetCameraInfo_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
            static SetCameraInfo_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static SetCameraInfo_Request_DataReader_ptr _nil () { return 0; }
            static const char * _local_id;
            SetCameraInfo_Request_DataReader_ptr _this () { return this; }

            virtual DDS::Long read (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (SetCameraInfo_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (SetCameraInfo_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (SetCameraInfo_Request_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const SetCameraInfo_Request_& instance) = 0;

         protected:
            SetCameraInfo_Request_DataReader () {};
            ~SetCameraInfo_Request_DataReader () {};
         private:
            SetCameraInfo_Request_DataReader (const SetCameraInfo_Request_DataReader &);
            SetCameraInfo_Request_DataReader & operator = (const SetCameraInfo_Request_DataReader &);
         };

         class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs SetCameraInfo_Request_DataReaderView
         :
            virtual public DDS::DataReaderView
         { 
         public:
            typedef SetCameraInfo_Request_DataReaderView_ptr _ptr_type;
            typedef SetCameraInfo_Request_DataReaderView_var _var_type;

            static SetCameraInfo_Request_DataReaderView_ptr _duplicate (SetCameraInfo_Request_DataReaderView_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static SetCameraInfo_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
            static SetCameraInfo_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static SetCameraInfo_Request_DataReaderView_ptr _nil () { return 0; }
            static const char * _local_id;
            SetCameraInfo_Request_DataReaderView_ptr _this () { return this; }

            virtual DDS::Long read (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (SetCameraInfo_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (SetCameraInfo_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (SetCameraInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (SetCameraInfo_Request_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const SetCameraInfo_Request_& instance) = 0;

         protected:
            SetCameraInfo_Request_DataReaderView () {};
            ~SetCameraInfo_Request_DataReaderView () {};
         private:
            SetCameraInfo_Request_DataReaderView (const SetCameraInfo_Request_DataReaderView &);
            SetCameraInfo_Request_DataReaderView & operator = (const SetCameraInfo_Request_DataReaderView &);
         };

      }
   }
}




#endif