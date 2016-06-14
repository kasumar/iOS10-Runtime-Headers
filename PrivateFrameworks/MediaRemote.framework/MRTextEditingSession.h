/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRTextEditingSession : NSObject <NSMutableCopying> {
    MRTextEditingAttributes * _attributes;
    bool  _editing;
    NSString * _text;
    unsigned long long  _uniqueIdentifier;
}

@property (nonatomic, readonly) MRTextEditingAttributes *attributes;
@property (getter=isEditing, nonatomic, readonly) bool editing;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) unsigned long long uniqueIdentifier;

- (id)_copyWithZone:(struct _NSZone { }*)arg1 usingConcreteClass:(Class)arg2;
- (id)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithText:(id)arg1 attributes:(id)arg2;
- (bool)isEditing;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)text;
- (unsigned long long)uniqueIdentifier;

@end
