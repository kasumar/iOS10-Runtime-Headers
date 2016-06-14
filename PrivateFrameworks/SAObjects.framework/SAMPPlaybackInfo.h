/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPPlaybackInfo : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SACalendar *lastPlayedDate;
@property (nonatomic) long long playbackPositionMillis;
@property (nonatomic) long long plays;
@property (nonatomic) bool rememberPlaybackPosition;
@property (readonly) Class superclass;

+ (id)playbackInfo;
+ (id)playbackInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)lastPlayedDate;
- (long long)playbackPositionMillis;
- (long long)plays;
- (bool)rememberPlaybackPosition;
- (void)setLastPlayedDate:(id)arg1;
- (void)setPlaybackPositionMillis:(long long)arg1;
- (void)setPlays:(long long)arg1;
- (void)setRememberPlaybackPosition:(bool)arg1;

@end
