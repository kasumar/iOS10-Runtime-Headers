/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBNotificationSettingsScreenView : PBCodable <NSCopying> {
    struct { 
        unsigned int notificationSettingsScreenViewPresentationReason : 1; 
    }  _has;
    int  _notificationSettingsScreenViewPresentationReason;
}

@property (nonatomic) bool hasNotificationSettingsScreenViewPresentationReason;
@property (nonatomic) int notificationSettingsScreenViewPresentationReason;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNotificationSettingsScreenViewPresentationReason;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)notificationSettingsScreenViewPresentationReason;
- (bool)readFrom:(id)arg1;
- (void)setHasNotificationSettingsScreenViewPresentationReason:(bool)arg1;
- (void)setNotificationSettingsScreenViewPresentationReason:(int)arg1;
- (void)writeTo:(id)arg1;

@end
