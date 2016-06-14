/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIPreferencesController : NSObject {
    NSTimer * _synchronizePreferencesTimer;
    bool  dontSynchronizePreferences;
    bool  isInternalInstall;
}

@property (nonatomic) bool dontSynchronizePreferences;
@property (nonatomic) bool isInternalInstall;

+ (id)sharedPreferencesController;

- (int)MCValueForManagedKey:(int)arg1;
- (bool)boolForKey:(int)arg1;
- (void)clearSynchronizePreferencesTimer;
- (void)dealloc;
- (id)defaultForKey:(int)arg1;
- (struct { id x1; bool x2; bool x3; unsigned long long x4; int x5; }*)domainForType:(int)arg1;
- (struct { id x1; bool x2; bool x3; unsigned long long x4; int x5; }*)domains;
- (bool)dontSynchronizePreferences;
- (id)init;
- (bool)isInternalInstall;
- (bool)isKeyLockedDown:(int)arg1;
- (void)managedKeyboardSettingDidChange:(id)arg1;
- (struct { id x1; int x2; id x3; int x4; }*)preferences;
- (void)preferencesChangedCallback:(id)arg1;
- (void)releaseDontSynchronizePreferences;
- (void)setAutocorrectionEnabled:(bool)arg1;
- (void)setCheckSpellingEnabled:(bool)arg1;
- (void)setDontSynchronizePreferences:(bool)arg1;
- (void)setIsInternalInstall:(bool)arg1;
- (void)setPredictionEnabled:(bool)arg1;
- (void)setValue:(id)arg1 forKey:(int)arg2;
- (void)setValue:(id)arg1 forManagedKey:(int)arg2;
- (void)synchronizePreferences;
- (void)touchSynchronizePreferencesTimer;
- (id)valueForKey:(int)arg1;
- (id)valueForManagedKey:(int)arg1;

@end
