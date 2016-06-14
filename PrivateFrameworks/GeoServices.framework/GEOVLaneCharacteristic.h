/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVLaneCharacteristic : PBCodable <NSCopying> {
    struct { 
        unsigned int roadLaneCount : 1; 
    }  _has;
    NSMutableArray * _laneDirections;
    NSMutableArray * _laneDividers;
    NSMutableArray * _laneTypes;
    unsigned int  _roadLaneCount;
}

@property (nonatomic) bool hasRoadLaneCount;
@property (nonatomic, retain) NSMutableArray *laneDirections;
@property (nonatomic, retain) NSMutableArray *laneDividers;
@property (nonatomic, retain) NSMutableArray *laneTypes;
@property (nonatomic) unsigned int roadLaneCount;

- (void)addLaneDirection:(id)arg1;
- (void)addLaneDivider:(id)arg1;
- (void)addLaneType:(id)arg1;
- (void)clearLaneDirections;
- (void)clearLaneDividers;
- (void)clearLaneTypes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRoadLaneCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)laneDirectionAtIndex:(unsigned long long)arg1;
- (id)laneDirections;
- (unsigned long long)laneDirectionsCount;
- (id)laneDividerAtIndex:(unsigned long long)arg1;
- (id)laneDividers;
- (unsigned long long)laneDividersCount;
- (id)laneTypeAtIndex:(unsigned long long)arg1;
- (id)laneTypes;
- (unsigned long long)laneTypesCount;
- (bool)readFrom:(id)arg1;
- (unsigned int)roadLaneCount;
- (void)setHasRoadLaneCount:(bool)arg1;
- (void)setLaneDirections:(id)arg1;
- (void)setLaneDividers:(id)arg1;
- (void)setLaneTypes:(id)arg1;
- (void)setRoadLaneCount:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
