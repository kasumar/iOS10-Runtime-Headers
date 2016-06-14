/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDBatchPopularNearbySearchResult : PBCodable <NSCopying> {
    NSMutableArray * _popularNearbyResults;
}

@property (nonatomic, retain) NSMutableArray *popularNearbyResults;

+ (Class)popularNearbyResultType;

- (void)addPopularNearbyResult:(id)arg1;
- (void)clearPopularNearbyResults;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)popularNearbyResultAtIndex:(unsigned long long)arg1;
- (id)popularNearbyResults;
- (unsigned long long)popularNearbyResultsCount;
- (bool)readFrom:(id)arg1;
- (void)setPopularNearbyResults:(id)arg1;
- (void)writeTo:(id)arg1;

@end
