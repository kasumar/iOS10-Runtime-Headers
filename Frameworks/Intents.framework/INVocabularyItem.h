/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INVocabularyItem : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * __siriID;
    NSString * _string;
}

@property (setter=_setSiriID:, nonatomic, copy) NSUUID *_siriID;
@property (nonatomic, readonly) NSString *string;

+ (bool)isValidVocabularyString:(id)arg1;
+ (bool)supportsSecureCoding;
+ (unsigned long long)validateVocabularyString:(id)arg1;

- (void).cxx_destruct;
- (id)_dictionaryForSaving;
- (id)_initWithUncheckedString:(id)arg1;
- (id)_initWithVocabularyItem:(id)arg1;
- (bool)_isSimilarEnoughToNotSync:(id)arg1;
- (void)_setSiriID:(id)arg1;
- (void)_setString:(id)arg1;
- (id)_siriID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)string;

@end
