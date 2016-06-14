/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPQuerySort : PBCodable <NSCopying> {
    CKDPLocationCoordinate * _coordinate;
    CKDPRecordFieldIdentifier * _fieldName;
    struct { 
        unsigned int order : 1; 
    }  _has;
    int  _order;
}

@property (nonatomic, retain) CKDPLocationCoordinate *coordinate;
@property (nonatomic, retain) CKDPRecordFieldIdentifier *fieldName;
@property (nonatomic, readonly) bool hasCoordinate;
@property (nonatomic, readonly) bool hasFieldName;
@property (nonatomic) bool hasOrder;
@property (nonatomic) int order;

- (void).cxx_destruct;
- (int)StringAsOrder:(id)arg1;
- (id)coordinate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fieldName;
- (bool)hasCoordinate;
- (bool)hasFieldName;
- (bool)hasOrder;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)order;
- (id)orderAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCoordinate:(id)arg1;
- (void)setFieldName:(id)arg1;
- (void)setHasOrder:(bool)arg1;
- (void)setOrder:(int)arg1;
- (void)writeTo:(id)arg1;

@end
