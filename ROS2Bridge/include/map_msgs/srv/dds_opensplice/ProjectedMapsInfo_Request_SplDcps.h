#ifndef PROJECTEDMAPSINFO_REQUEST_SPLTYPES_H
#define PROJECTEDMAPSINFO_REQUEST_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_ProjectedMapsInfo_Request_.h"
#include "map_msgs/msg/dds_opensplice/ProjectedMapInfo_SplDcps.h"

#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __ProjectedMapsInfo_Request__map_msgs__load (c_base base);

extern c_metaObject __ProjectedMapsInfo_Request__map_msgs_srv__load (c_base base);

extern c_metaObject __ProjectedMapsInfo_Request__map_msgs_srv_dds___load (c_base base);

extern const char *map_msgs_srv_dds__ProjectedMapsInfo_Request__metaDescriptor[];
extern const int map_msgs_srv_dds__ProjectedMapsInfo_Request__metaDescriptorArrLength;
extern const int map_msgs_srv_dds__ProjectedMapsInfo_Request__metaDescriptorLength;
extern c_metaObject __map_msgs_srv_dds__ProjectedMapsInfo_Request___load (c_base base);
struct _map_msgs_srv_dds__ProjectedMapsInfo_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs v_copyin_result __map_msgs_srv_dds__ProjectedMapsInfo_Request___copyIn(c_base base, const struct map_msgs::srv::dds_::ProjectedMapsInfo_Request_ *from, struct _map_msgs_srv_dds__ProjectedMapsInfo_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs void __map_msgs_srv_dds__ProjectedMapsInfo_Request___copyOut(const void *_from, void *_to);
struct _map_msgs_srv_dds__ProjectedMapsInfo_Request_ {
    c_sequence projected_maps_info_;
};

#undef OS_API
#endif