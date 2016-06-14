/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiRangingRttData : PBCodable <NSCopying> {
    unsigned int  _bitErrorRate;
    unsigned int  _coreId;
    unsigned int  _flags;
    struct { 
        unsigned int bitErrorRate : 1; 
        unsigned int coreId : 1; 
        unsigned int flags : 1; 
        unsigned int losPeakRatio : 1; 
        unsigned int rssi : 1; 
        unsigned int rtt : 1; 
        unsigned int snr : 1; 
    }  _has;
    unsigned int  _losPeakRatio;
    int  _rssi;
    unsigned int  _rtt;
    unsigned int  _snr;
}

@property (nonatomic) unsigned int bitErrorRate;
@property (nonatomic) unsigned int coreId;
@property (nonatomic) unsigned int flags;
@property (nonatomic) bool hasBitErrorRate;
@property (nonatomic) bool hasCoreId;
@property (nonatomic) bool hasFlags;
@property (nonatomic) bool hasLosPeakRatio;
@property (nonatomic) bool hasRssi;
@property (nonatomic) bool hasRtt;
@property (nonatomic) bool hasSnr;
@property (nonatomic) unsigned int losPeakRatio;
@property (nonatomic) int rssi;
@property (nonatomic) unsigned int rtt;
@property (nonatomic) unsigned int snr;

- (unsigned int)bitErrorRate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)coreId;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)flags;
- (bool)hasBitErrorRate;
- (bool)hasCoreId;
- (bool)hasFlags;
- (bool)hasLosPeakRatio;
- (bool)hasRssi;
- (bool)hasRtt;
- (bool)hasSnr;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)losPeakRatio;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)rssi;
- (unsigned int)rtt;
- (void)setBitErrorRate:(unsigned int)arg1;
- (void)setCoreId:(unsigned int)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setHasBitErrorRate:(bool)arg1;
- (void)setHasCoreId:(bool)arg1;
- (void)setHasFlags:(bool)arg1;
- (void)setHasLosPeakRatio:(bool)arg1;
- (void)setHasRssi:(bool)arg1;
- (void)setHasRtt:(bool)arg1;
- (void)setHasSnr:(bool)arg1;
- (void)setLosPeakRatio:(unsigned int)arg1;
- (void)setRssi:(int)arg1;
- (void)setRtt:(unsigned int)arg1;
- (void)setSnr:(unsigned int)arg1;
- (unsigned int)snr;
- (void)writeTo:(id)arg1;

@end
