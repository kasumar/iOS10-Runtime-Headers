/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@interface TTSSpeechChannel : NSObject {
    TTSSpeechVoice * _voice;
}

@property (nonatomic, retain) TTSSpeechVoice *voice;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVoice:(id)arg1;
- (void)setVoice:(id)arg1;
- (id)voice;

@end
