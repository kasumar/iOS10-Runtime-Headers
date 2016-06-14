/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPayloadUnsupported : PBCodable <NSCopying> {
    NSMutableArray * _conflictingParameters;
    struct { 
        unsigned int reason : 1; 
    }  _has;
    int  _reason;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *conflictingParameters;
@property (nonatomic) bool hasReason;
@property (nonatomic) int reason;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)conflictingParametersType;
+ (id)options;

- (void).cxx_destruct;
- (void)addConflictingParameters:(id)arg1;
- (void)clearConflictingParameters;
- (id)conflictingParameters;
- (id)conflictingParametersAtIndex:(unsigned long long)arg1;
- (unsigned long long)conflictingParametersCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasReason;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (void)setConflictingParameters:(id)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setReason:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
