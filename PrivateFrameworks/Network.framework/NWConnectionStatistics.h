/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWConnectionStatistics : NSObject {
    PBCodable * _awdReport;
    NSString * _clientIdentifier;
    struct netcore_stats_tcp_report { 
        bool delegated; 
        int report_reason; 
        struct netcore_stats_tcp_statistics_report { 
            unsigned int time_to_dns_resolved_msecs; 
            unsigned int time_to_dns_start_msecs; 
            unsigned int dns_resolved_time_msecs; 
            bool dns_answers_cached; 
            int interface_type; 
            unsigned int time_to_connection_start_msecs; 
            unsigned int time_to_connection_establishment_msecs; 
            unsigned int connection_establishment_time_msecs; 
            unsigned int flow_duration_msecs; 
            int connected_interface_type; 
            bool connected; 
            unsigned int traffic_class; 
            bool cellular_fallback; 
            bool cellular_rrc_connected; 
            bool kernel_reported_stalls; 
            bool kernel_reporting_connection_stalled; 
            bool kernel_reporting_read_stalled; 
            bool kernel_reporting_write_stalled; 
            unsigned long long bytes_in; 
            unsigned long long bytes_out; 
            unsigned long long bytes_duplicate; 
            unsigned long long bytes_ooo; 
            unsigned long long bytes_retransmitted; 
            unsigned long long packets_in; 
            unsigned long long packets_out; 
            unsigned long long packets_duplicate; 
            unsigned long long packets_ooo; 
            unsigned long long packets_retransmitted; 
            unsigned int current_rtt_msecs; 
            unsigned int smoothed_rtt_msecs; 
            unsigned int best_rtt_msecs; 
            unsigned int rtt_variance; 
            unsigned int syn_retransmission_count; 
            bool tcp_fast_open; 
            unsigned int better_route_event_count; 
            unsigned int connection_reuse_count; 
            unsigned int app_reporting_data_stall_count; 
            unsigned int app_data_stall_timer_msecs; 
        } statistics_report; 
        struct netcore_stats_tcp_cell_fallback_report { 
            bool fellback; 
            int deny_reason; 
            unsigned int fallback_timer_msecs; 
            unsigned int network_event_count; 
            struct netcore_stats_network_event { 
                int network_event_type; 
                unsigned int time_to_network_event_msecs; 
            } network_events[20]; 
            unsigned int data_usage_snapshots_at_network_events_count; 
            struct netcore_stats_data_usage_snapshot { 
                unsigned long long bytes_in; 
                unsigned long long bytes_out; 
            } data_usage_snapshots_at_network_events[20]; 
        } fallback_report; 
        unsigned int ip_address_attempt_count; 
        struct netcore_stats_tcp_statistics_report { 
            unsigned int time_to_dns_resolved_msecs; 
            unsigned int time_to_dns_start_msecs; 
            unsigned int dns_resolved_time_msecs; 
            bool dns_answers_cached; 
            int interface_type; 
            unsigned int time_to_connection_start_msecs; 
            unsigned int time_to_connection_establishment_msecs; 
            unsigned int connection_establishment_time_msecs; 
            unsigned int flow_duration_msecs; 
            int connected_interface_type; 
            bool connected; 
            unsigned int traffic_class; 
            bool cellular_fallback; 
            bool cellular_rrc_connected; 
            bool kernel_reported_stalls; 
            bool kernel_reporting_connection_stalled; 
            bool kernel_reporting_read_stalled; 
            bool kernel_reporting_write_stalled; 
            unsigned long long bytes_in; 
            unsigned long long bytes_out; 
            unsigned long long bytes_duplicate; 
            unsigned long long bytes_ooo; 
            unsigned long long bytes_retransmitted; 
            unsigned long long packets_in; 
            unsigned long long packets_out; 
            unsigned long long packets_duplicate; 
            unsigned long long packets_ooo; 
            unsigned long long packets_retransmitted; 
            unsigned int current_rtt_msecs; 
            unsigned int smoothed_rtt_msecs; 
            unsigned int best_rtt_msecs; 
            unsigned int rtt_variance; 
            unsigned int syn_retransmission_count; 
            bool tcp_fast_open; 
            unsigned int better_route_event_count; 
            unsigned int connection_reuse_count; 
            unsigned int app_reporting_data_stall_count; 
            unsigned int app_data_stall_timer_msecs; 
        } connection_attempts[10]; 
    }  _report;
    NSString * _sourceIdentifier;
}

@property (nonatomic, readonly) unsigned int awdMetricID;
@property (nonatomic, retain) PBCodable *awdReport;
@property (nonatomic, readonly) unsigned long long bytesDuplicate;
@property (nonatomic, readonly) unsigned long long bytesIn;
@property (nonatomic, readonly) unsigned long long bytesOOO;
@property (nonatomic, readonly) unsigned long long bytesOut;
@property (nonatomic, readonly) unsigned long long bytesRetransmitted;
@property (nonatomic, readonly) bool cellularFallback;
@property (nonatomic, readonly) bool cellularRrcConnected;
@property (nonatomic, retain) NSString *clientIdentifier;
@property (nonatomic, readonly) bool connected;
@property (nonatomic, readonly) int connectedInterfaceType;
@property (nonatomic, readonly) unsigned int connectionEstablishmentTimeMsecs;
@property (nonatomic, readonly) bool dnsAnswersCached;
@property (nonatomic, readonly) unsigned int dnsResolvedTimeMsecs;
@property (nonatomic, readonly) unsigned int flowDurationMsecs;
@property (nonatomic, readonly) int interfaceType;
@property (nonatomic, readonly) bool kernelReportedStalls;
@property (nonatomic, readonly) bool kernelReportingConnectionStalled;
@property (nonatomic, readonly) bool kernelReportingReadStalled;
@property (nonatomic, readonly) bool kernelReportingWriteStalled;
@property (nonatomic, readonly) unsigned long long packetsDuplicate;
@property (nonatomic, readonly) unsigned long long packetsIn;
@property (nonatomic, readonly) unsigned long long packetsOOO;
@property (nonatomic, readonly) unsigned long long packetsOut;
@property (nonatomic, readonly) unsigned long long packetsRetransmitted;
@property (nonatomic) struct netcore_stats_tcp_report { bool x1; int x2; struct netcore_stats_tcp_statistics_report { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; bool x_3_1_4; int x_3_1_5; unsigned int x_3_1_6; unsigned int x_3_1_7; unsigned int x_3_1_8; unsigned int x_3_1_9; int x_3_1_10; bool x_3_1_11; unsigned int x_3_1_12; bool x_3_1_13; bool x_3_1_14; bool x_3_1_15; bool x_3_1_16; bool x_3_1_17; bool x_3_1_18; unsigned long long x_3_1_19; unsigned long long x_3_1_20; unsigned long long x_3_1_21; unsigned long long x_3_1_22; unsigned long long x_3_1_23; unsigned long long x_3_1_24; unsigned long long x_3_1_25; unsigned long long x_3_1_26; unsigned long long x_3_1_27; unsigned long long x_3_1_28; unsigned int x_3_1_29; unsigned int x_3_1_30; unsigned int x_3_1_31; unsigned int x_3_1_32; unsigned int x_3_1_33; bool x_3_1_34; unsigned int x_3_1_35; unsigned int x_3_1_36; unsigned int x_3_1_37; unsigned int x_3_1_38; } x3; struct netcore_stats_tcp_cell_fallback_report { bool x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; struct netcore_stats_network_event { int x_5_2_1; unsigned int x_5_2_2; } x_4_1_5[20]; unsigned int x_4_1_6; struct netcore_stats_data_usage_snapshot { unsigned long long x_7_2_1; unsigned long long x_7_2_2; } x_4_1_7[20]; } x4; unsigned int x5; struct netcore_stats_tcp_statistics_report { unsigned int x_6_1_1; unsigned int x_6_1_2; unsigned int x_6_1_3; bool x_6_1_4; int x_6_1_5; unsigned int x_6_1_6; unsigned int x_6_1_7; unsigned int x_6_1_8; unsigned int x_6_1_9; int x_6_1_10; bool x_6_1_11; unsigned int x_6_1_12; bool x_6_1_13; bool x_6_1_14; bool x_6_1_15; bool x_6_1_16; bool x_6_1_17; bool x_6_1_18; unsigned long long x_6_1_19; unsigned long long x_6_1_20; unsigned long long x_6_1_21; unsigned long long x_6_1_22; unsigned long long x_6_1_23; unsigned long long x_6_1_24; unsigned long long x_6_1_25; unsigned long long x_6_1_26; unsigned long long x_6_1_27; unsigned long long x_6_1_28; unsigned int x_6_1_29; unsigned int x_6_1_30; unsigned int x_6_1_31; unsigned int x_6_1_32; unsigned int x_6_1_33; bool x_6_1_34; unsigned int x_6_1_35; unsigned int x_6_1_36; unsigned int x_6_1_37; unsigned int x_6_1_38; } x6[10]; } report;
@property (nonatomic, retain) NSString *sourceIdentifier;
@property (nonatomic, readonly) unsigned int tcpAppDataStallTimerMsecs;
@property (nonatomic, readonly) unsigned int tcpAppReportingDataStallCount;
@property (nonatomic, readonly) unsigned int tcpBetterRouteEventCount;
@property (nonatomic, readonly) unsigned int tcpConnectionReuseCount;
@property (nonatomic, readonly) bool tcpFastOpen;
@property (nonatomic, readonly) unsigned int tcpRTTBestMsecs;
@property (nonatomic, readonly) unsigned int tcpRTTCurrentMsecs;
@property (nonatomic, readonly) unsigned int tcpRTTSmoothedMsecs;
@property (nonatomic, readonly) unsigned int tcpRTTVariance;
@property (nonatomic, readonly) unsigned int tcpSynRetransmissionCount;
@property (nonatomic, readonly) unsigned int timeToConnectionEstablishmentMsecs;
@property (nonatomic, readonly) unsigned int timeToConnectionStartMsecs;
@property (nonatomic, readonly) unsigned int timeToDnsResolvedMsecs;
@property (nonatomic, readonly) unsigned int timeToDnsStartMsecs;
@property (nonatomic, readonly) unsigned int trafficClass;

- (void).cxx_destruct;
- (id)_createDataUsageSnapshotFromStruct:(const struct netcore_stats_data_usage_snapshot { unsigned long long x1; unsigned long long x2; }*)arg1;
- (id)_createFallbackReportFromStruct:(const struct netcore_stats_tcp_cell_fallback_report { bool x1; int x2; unsigned int x3; unsigned int x4; struct netcore_stats_network_event { int x_5_1_1; unsigned int x_5_1_2; } x5[20]; unsigned int x6; struct netcore_stats_data_usage_snapshot { unsigned long long x_7_1_1; unsigned long long x_7_1_2; } x7[20]; }*)arg1;
- (id)_createStatisticsReportFromStruct:(const struct netcore_stats_tcp_statistics_report { unsigned int x1; unsigned int x2; unsigned int x3; bool x4; int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; int x10; bool x11; unsigned int x12; bool x13; bool x14; bool x15; bool x16; bool x17; bool x18; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; bool x34; unsigned int x35; unsigned int x36; unsigned int x37; unsigned int x38; }*)arg1;
- (unsigned int)awdMetricID;
- (id)awdReport;
- (unsigned long long)bytesDuplicate;
- (unsigned long long)bytesIn;
- (unsigned long long)bytesOOO;
- (unsigned long long)bytesOut;
- (unsigned long long)bytesRetransmitted;
- (bool)cellularFallback;
- (bool)cellularRrcConnected;
- (id)clientIdentifier;
- (bool)connected;
- (int)connectedInterfaceType;
- (unsigned int)connectionEstablishmentTimeMsecs;
- (bool)dnsAnswersCached;
- (unsigned int)dnsResolvedTimeMsecs;
- (unsigned int)flowDurationMsecs;
- (id)initWithTCPReport:(struct netcore_stats_tcp_report { bool x1; int x2; struct netcore_stats_tcp_statistics_report { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; bool x_3_1_4; int x_3_1_5; unsigned int x_3_1_6; unsigned int x_3_1_7; unsigned int x_3_1_8; unsigned int x_3_1_9; int x_3_1_10; bool x_3_1_11; unsigned int x_3_1_12; bool x_3_1_13; bool x_3_1_14; bool x_3_1_15; bool x_3_1_16; bool x_3_1_17; bool x_3_1_18; unsigned long long x_3_1_19; unsigned long long x_3_1_20; unsigned long long x_3_1_21; unsigned long long x_3_1_22; unsigned long long x_3_1_23; unsigned long long x_3_1_24; unsigned long long x_3_1_25; unsigned long long x_3_1_26; unsigned long long x_3_1_27; unsigned long long x_3_1_28; unsigned int x_3_1_29; unsigned int x_3_1_30; unsigned int x_3_1_31; unsigned int x_3_1_32; unsigned int x_3_1_33; bool x_3_1_34; unsigned int x_3_1_35; unsigned int x_3_1_36; unsigned int x_3_1_37; unsigned int x_3_1_38; } x3; struct netcore_stats_tcp_cell_fallback_report { bool x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; struct netcore_stats_network_event { int x_5_2_1; unsigned int x_5_2_2; } x_4_1_5[20]; unsigned int x_4_1_6; struct netcore_stats_data_usage_snapshot { unsigned long long x_7_2_1; unsigned long long x_7_2_2; } x_4_1_7[20]; } x4; unsigned int x5; struct netcore_stats_tcp_statistics_report { unsigned int x_6_1_1; unsigned int x_6_1_2; unsigned int x_6_1_3; bool x_6_1_4; int x_6_1_5; unsigned int x_6_1_6; unsigned int x_6_1_7; unsigned int x_6_1_8; unsigned int x_6_1_9; int x_6_1_10; bool x_6_1_11; unsigned int x_6_1_12; bool x_6_1_13; bool x_6_1_14; bool x_6_1_15; bool x_6_1_16; bool x_6_1_17; bool x_6_1_18; unsigned long long x_6_1_19; unsigned long long x_6_1_20; unsigned long long x_6_1_21; unsigned long long x_6_1_22; unsigned long long x_6_1_23; unsigned long long x_6_1_24; unsigned long long x_6_1_25; unsigned long long x_6_1_26; unsigned long long x_6_1_27; unsigned long long x_6_1_28; unsigned int x_6_1_29; unsigned int x_6_1_30; unsigned int x_6_1_31; unsigned int x_6_1_32; unsigned int x_6_1_33; bool x_6_1_34; unsigned int x_6_1_35; unsigned int x_6_1_36; unsigned int x_6_1_37; unsigned int x_6_1_38; } x6[10]; }*)arg1 length:(unsigned long long)arg2 clientIdentifier:(id)arg3 sourceIdentifier:(id)arg4;
- (int)interfaceType;
- (bool)kernelReportedStalls;
- (bool)kernelReportingConnectionStalled;
- (bool)kernelReportingReadStalled;
- (bool)kernelReportingWriteStalled;
- (unsigned long long)packetsDuplicate;
- (unsigned long long)packetsIn;
- (unsigned long long)packetsOOO;
- (unsigned long long)packetsOut;
- (unsigned long long)packetsRetransmitted;
- (struct netcore_stats_tcp_report { bool x1; int x2; struct netcore_stats_tcp_statistics_report { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; bool x_3_1_4; int x_3_1_5; unsigned int x_3_1_6; unsigned int x_3_1_7; unsigned int x_3_1_8; unsigned int x_3_1_9; int x_3_1_10; bool x_3_1_11; unsigned int x_3_1_12; bool x_3_1_13; bool x_3_1_14; bool x_3_1_15; bool x_3_1_16; bool x_3_1_17; bool x_3_1_18; unsigned long long x_3_1_19; unsigned long long x_3_1_20; unsigned long long x_3_1_21; unsigned long long x_3_1_22; unsigned long long x_3_1_23; unsigned long long x_3_1_24; unsigned long long x_3_1_25; unsigned long long x_3_1_26; unsigned long long x_3_1_27; unsigned long long x_3_1_28; unsigned int x_3_1_29; unsigned int x_3_1_30; unsigned int x_3_1_31; unsigned int x_3_1_32; unsigned int x_3_1_33; bool x_3_1_34; unsigned int x_3_1_35; unsigned int x_3_1_36; unsigned int x_3_1_37; unsigned int x_3_1_38; } x3; struct netcore_stats_tcp_cell_fallback_report { bool x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; struct netcore_stats_network_event { int x_5_2_1; unsigned int x_5_2_2; } x_4_1_5[20]; unsigned int x_4_1_6; struct netcore_stats_data_usage_snapshot { unsigned long long x_7_2_1; unsigned long long x_7_2_2; } x_4_1_7[20]; } x4; unsigned int x5; struct netcore_stats_tcp_statistics_report { unsigned int x_6_1_1; unsigned int x_6_1_2; unsigned int x_6_1_3; bool x_6_1_4; int x_6_1_5; unsigned int x_6_1_6; unsigned int x_6_1_7; unsigned int x_6_1_8; unsigned int x_6_1_9; int x_6_1_10; bool x_6_1_11; unsigned int x_6_1_12; bool x_6_1_13; bool x_6_1_14; bool x_6_1_15; bool x_6_1_16; bool x_6_1_17; bool x_6_1_18; unsigned long long x_6_1_19; unsigned long long x_6_1_20; unsigned long long x_6_1_21; unsigned long long x_6_1_22; unsigned long long x_6_1_23; unsigned long long x_6_1_24; unsigned long long x_6_1_25; unsigned long long x_6_1_26; unsigned long long x_6_1_27; unsigned long long x_6_1_28; unsigned int x_6_1_29; unsigned int x_6_1_30; unsigned int x_6_1_31; unsigned int x_6_1_32; unsigned int x_6_1_33; bool x_6_1_34; unsigned int x_6_1_35; unsigned int x_6_1_36; unsigned int x_6_1_37; unsigned int x_6_1_38; } x6[10]; })report;
- (void)setAwdReport:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setReport:(struct netcore_stats_tcp_report { bool x1; int x2; struct netcore_stats_tcp_statistics_report { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; bool x_3_1_4; int x_3_1_5; unsigned int x_3_1_6; unsigned int x_3_1_7; unsigned int x_3_1_8; unsigned int x_3_1_9; int x_3_1_10; bool x_3_1_11; unsigned int x_3_1_12; bool x_3_1_13; bool x_3_1_14; bool x_3_1_15; bool x_3_1_16; bool x_3_1_17; bool x_3_1_18; unsigned long long x_3_1_19; unsigned long long x_3_1_20; unsigned long long x_3_1_21; unsigned long long x_3_1_22; unsigned long long x_3_1_23; unsigned long long x_3_1_24; unsigned long long x_3_1_25; unsigned long long x_3_1_26; unsigned long long x_3_1_27; unsigned long long x_3_1_28; unsigned int x_3_1_29; unsigned int x_3_1_30; unsigned int x_3_1_31; unsigned int x_3_1_32; unsigned int x_3_1_33; bool x_3_1_34; unsigned int x_3_1_35; unsigned int x_3_1_36; unsigned int x_3_1_37; unsigned int x_3_1_38; } x3; struct netcore_stats_tcp_cell_fallback_report { bool x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; struct netcore_stats_network_event { int x_5_2_1; unsigned int x_5_2_2; } x_4_1_5[20]; unsigned int x_4_1_6; struct netcore_stats_data_usage_snapshot { unsigned long long x_7_2_1; unsigned long long x_7_2_2; } x_4_1_7[20]; } x4; unsigned int x5; struct netcore_stats_tcp_statistics_report { unsigned int x_6_1_1; unsigned int x_6_1_2; unsigned int x_6_1_3; bool x_6_1_4; int x_6_1_5; unsigned int x_6_1_6; unsigned int x_6_1_7; unsigned int x_6_1_8; unsigned int x_6_1_9; int x_6_1_10; bool x_6_1_11; unsigned int x_6_1_12; bool x_6_1_13; bool x_6_1_14; bool x_6_1_15; bool x_6_1_16; bool x_6_1_17; bool x_6_1_18; unsigned long long x_6_1_19; unsigned long long x_6_1_20; unsigned long long x_6_1_21; unsigned long long x_6_1_22; unsigned long long x_6_1_23; unsigned long long x_6_1_24; unsigned long long x_6_1_25; unsigned long long x_6_1_26; unsigned long long x_6_1_27; unsigned long long x_6_1_28; unsigned int x_6_1_29; unsigned int x_6_1_30; unsigned int x_6_1_31; unsigned int x_6_1_32; unsigned int x_6_1_33; bool x_6_1_34; unsigned int x_6_1_35; unsigned int x_6_1_36; unsigned int x_6_1_37; unsigned int x_6_1_38; } x6[10]; })arg1;
- (void)setSourceIdentifier:(id)arg1;
- (id)sourceIdentifier;
- (unsigned int)tcpAppDataStallTimerMsecs;
- (unsigned int)tcpAppReportingDataStallCount;
- (unsigned int)tcpBetterRouteEventCount;
- (unsigned int)tcpConnectionReuseCount;
- (bool)tcpFastOpen;
- (unsigned int)tcpRTTBestMsecs;
- (unsigned int)tcpRTTCurrentMsecs;
- (unsigned int)tcpRTTSmoothedMsecs;
- (unsigned int)tcpRTTVariance;
- (unsigned int)tcpSynRetransmissionCount;
- (unsigned int)timeToConnectionEstablishmentMsecs;
- (unsigned int)timeToConnectionStartMsecs;
- (unsigned int)timeToDnsResolvedMsecs;
- (unsigned int)timeToDnsStartMsecs;
- (unsigned int)trafficClass;

@end
