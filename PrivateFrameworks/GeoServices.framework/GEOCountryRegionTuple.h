/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCountryRegionTuple : PBCodable <NSCopying> {
    NSString * _countryCode;
    NSString * _region;
}

@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, readonly) bool hasCountryCode;
@property (nonatomic, readonly) bool hasRegion;
@property (nonatomic, retain) NSString *region;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCountryCode;
- (bool)hasRegion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)region;
- (void)setCountryCode:(id)arg1;
- (void)setRegion:(id)arg1;
- (void)writeTo:(id)arg1;

@end
