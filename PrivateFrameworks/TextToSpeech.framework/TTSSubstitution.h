/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@interface TTSSubstitution : NSObject <NSCopying, NSSecureCoding> {
    bool  _active;
    bool  _appliesToAllApps;
    NSSet * _bundleIdentifiers;
    bool  _ignoreCase;
    bool  _isReplacementTextAllPunctuation;
    bool  _isReplacementTextSurroundedByPunctuation;
    NSSet * _languages;
    NSString * _originalString;
    NSString * _phonemes;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _replacementRange;
    NSString * _replacementString;
    NSUUID * _uuid;
    NSSet * _voiceIds;
}

@property (nonatomic) bool active;
@property (nonatomic) bool appliesToAllApps;
@property (nonatomic, copy) NSSet *bundleIdentifiers;
@property (nonatomic) bool ignoreCase;
@property (nonatomic, readonly) bool isReplacementTextAllPunctuation;
@property (nonatomic, readonly) bool isReplacementTextSurroundedByPunctuation;
@property (nonatomic, copy) NSSet *languages;
@property (nonatomic, copy) NSString *originalString;
@property (nonatomic, copy) NSString *phonemes;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } replacementRange;
@property (nonatomic, copy) NSString *replacementString;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, copy) NSSet *voiceIds;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)active;
- (bool)appliesToAllApps;
- (id)bundleIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (bool)ignoreCase;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isReplacementTextAllPunctuation;
- (bool)isReplacementTextSurroundedByPunctuation;
- (id)languages;
- (id)originalString;
- (id)phonemes;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })replacementRange;
- (id)replacementString;
- (void)setActive:(bool)arg1;
- (void)setAppliesToAllApps:(bool)arg1;
- (void)setBundleIdentifiers:(id)arg1;
- (void)setIgnoreCase:(bool)arg1;
- (void)setLanguages:(id)arg1;
- (void)setOriginalString:(id)arg1;
- (void)setPhonemes:(id)arg1;
- (void)setReplacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setReplacementString:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setVoiceIds:(id)arg1;
- (id)uuid;
- (id)voiceIds;

@end
