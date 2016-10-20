#ifndef _MINIEAP_PACKET_PLUGIN_RJV3_H
#define _MINIEAP_PACKET_PLUGIN_RJV3_H

#include "packet_plugin.h"

#define DEFAULT_HEARTBEAT_INTERVAL  60
#define DEFAULT_SERVICE_NAME        "internet"
#define DEFAULT_VER_STR             "RJ-SU For Linux V1.0"
#define DEFAULT_EAP_BCAST_ADDR      BROADCAST_STANDARD
#define DEFAULT_DHCP_TYPE           DHCP_AFTER_AUTH

PACKET_PLUGIN* packet_plugin_rjv3_new();
#endif
