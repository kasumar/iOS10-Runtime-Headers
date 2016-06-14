/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

@interface ETMessage : NSObject {
    NSMutableSet * _childrenDelayingWisp;
    UIColor * _color;
    bool  _delayWisp;
    <ETMessageDelegate> * _delegate;
    NSString * _identifier;
    unsigned long long  _messageVersion;
    bool  _missedDuringPlayback;
    bool  _mute;
    ETMessage * _parentMessage;
    bool  _renderingOffscreen;
    double  _sendTime;
    double  _startDelay;
    bool  _supportsPlaybackTimeOffset;
    double  _timeCreated;
    <ETMessageTimeSource> * _timeSource;
}

@property (getter=isAnimated, nonatomic, readonly) bool animated;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic) bool delayWisp;
@property (nonatomic) <ETMessageDelegate> *delegate;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) double messageDuration;
@property (nonatomic, readonly) unsigned short messageType;
@property (nonatomic, readonly) unsigned long long messageVersion;
@property (nonatomic) bool missedDuringPlayback;
@property (nonatomic) bool mute;
@property (nonatomic) ETMessage *parentMessage;
@property (getter=isRenderingOffscreen, nonatomic) bool renderingOffscreen;
@property (nonatomic) double sendTime;
@property (nonatomic, readonly) bool shouldLoopDuringPlayback;
@property (nonatomic) double startDelay;
@property (nonatomic) bool supportsPlaybackTimeOffset;
@property (nonatomic) double timeCreated;
@property (nonatomic) <ETMessageTimeSource> *timeSource;

+ (unsigned short)messageType;
+ (id)unarchive:(id)arg1;

- (void).cxx_destruct;
- (void)_startAudioPlayback;
- (void)_stopAudioPlayback;
- (id)archive;
- (id)archiveData;
- (void)childMessageDidCompleteWisp:(id)arg1;
- (void)childMessageDidDelayWisp:(id)arg1;
- (id)color;
- (bool)delayWisp;
- (id)delegate;
- (id)description;
- (void)displayInScene:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasWispingChildren;
- (id)identifier;
- (id)init;
- (id)initWithArchiveData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAnimated;
- (bool)isRenderingOffscreen;
- (double)messageDuration;
- (unsigned short)messageType;
- (id)messageTypeAsString;
- (unsigned long long)messageVersion;
- (bool)missedDuringPlayback;
- (bool)mute;
- (id)parentMessage;
- (void)preVisualizeInScene:(id)arg1;
- (bool)reachedSizeLimit;
- (struct CGPoint { double x1; double x2; })scenePointFromNormalizedPoint:(struct CGPoint { double x1; double x2; })arg1 inScene:(id)arg2;
- (double)sendTime;
- (bool)sendTimeIsValid;
- (void)setColor:(id)arg1;
- (void)setDelayWisp:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMissedDuringPlayback:(bool)arg1;
- (void)setMute:(bool)arg1;
- (void)setParentMessage:(id)arg1;
- (void)setRenderingOffscreen:(bool)arg1;
- (void)setSendTime:(double)arg1;
- (void)setStartDelay:(double)arg1;
- (void)setSupportsPlaybackTimeOffset:(bool)arg1;
- (void)setTimeCreated:(double)arg1;
- (void)setTimeSource:(id)arg1;
- (bool)shouldLoopDuringPlayback;
- (double)startDelay;
- (void)stopPlaying;
- (bool)supportsPlaybackTimeOffset;
- (double)timeCreated;
- (id)timeSource;
- (void)wispChildren;

@end
