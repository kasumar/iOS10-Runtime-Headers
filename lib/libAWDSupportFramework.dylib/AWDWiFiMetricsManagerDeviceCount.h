/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerDeviceCount : PBCodable <NSCopying> {
    unsigned int  _deviceCount;
    unsigned int  _deviceIdentifierMap;
    struct { 
        unsigned int timeSinceBoot : 1; 
        unsigned int timestamp : 1; 
        unsigned int deviceCount : 1; 
        unsigned int deviceIdentifierMap : 1; 
    }  _has;
    double  _timeSinceBoot;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int deviceCount;
@property (nonatomic) unsigned int deviceIdentifierMap;
@property (nonatomic) bool hasDeviceCount;
@property (nonatomic) bool hasDeviceIdentifierMap;
@property (nonatomic) bool hasTimeSinceBoot;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) double timeSinceBoot;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)deviceCount;
- (unsigned int)deviceIdentifierMap;
- (id)dictionaryRepresentation;
- (bool)hasDeviceCount;
- (bool)hasDeviceIdentifierMap;
- (bool)hasTimeSinceBoot;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeviceCount:(unsigned int)arg1;
- (void)setDeviceIdentifierMap:(unsigned int)arg1;
- (void)setHasDeviceCount:(bool)arg1;
- (void)setHasDeviceIdentifierMap:(bool)arg1;
- (void)setHasTimeSinceBoot:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimeSinceBoot:(double)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (double)timeSinceBoot;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
