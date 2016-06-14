/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNFoundationUserDefaults : NSObject <CNFoundationUserDefaults> {
    CNUserDefaults * _userDefaults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property unsigned long long nameOrder;
@property bool preferNickname;
@property unsigned long long shortNameFormat;
@property (getter=isShortNameFormatEnabled, nonatomic) bool shortNameFormatEnabled;
@property (readonly) Class superclass;
@property (retain) CNUserDefaults *userDefaults;

+ (unsigned long long)_convertNSNameOrderToCNNameOrder:(long long)arg1;
+ (id)sharedDefaults;

- (id)countryCode;
- (void)dealloc;
- (id)init;
- (bool)isShortNameFormatEnabled;
- (unsigned long long)nameOrder;
- (unsigned long long)newContactNameOrder;
- (bool)preferNickname;
- (void)setNameOrder:(unsigned long long)arg1;
- (void)setPreferNickname:(bool)arg1;
- (void)setShortNameFormat:(unsigned long long)arg1;
- (void)setShortNameFormatEnabled:(bool)arg1;
- (void)setUserDefaults:(id)arg1;
- (unsigned long long)shortNameFormat;
- (unsigned long long)sortOrder;
- (id)userDefaults;

@end
