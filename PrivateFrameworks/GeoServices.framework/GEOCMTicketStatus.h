/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCMTicketStatus : PBCodable <NSCopying> {
    NSString * _ticketId;
}

@property (nonatomic, readonly) bool hasTicketId;
@property (nonatomic, retain) NSString *ticketId;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTicketId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTicketId:(id)arg1;
- (id)ticketId;
- (void)writeTo:(id)arg1;

@end
