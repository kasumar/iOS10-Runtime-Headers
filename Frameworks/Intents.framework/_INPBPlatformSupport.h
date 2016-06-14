/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPlatformSupport : PBCodable <NSCopying> {
    struct { 
        unsigned int supportedPlatform : 1; 
    }  _has;
    NSString * _minimumOsVersion;
    int  _supportedPlatform;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasMinimumOsVersion;
@property (nonatomic) bool hasSupportedPlatform;
@property (nonatomic, retain) NSString *minimumOsVersion;
@property (nonatomic) int supportedPlatform;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMinimumOsVersion;
- (bool)hasSupportedPlatform;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)minimumOsVersion;
- (bool)readFrom:(id)arg1;
- (void)setHasSupportedPlatform:(bool)arg1;
- (void)setMinimumOsVersion:(id)arg1;
- (void)setSupportedPlatform:(int)arg1;
- (int)supportedPlatform;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
