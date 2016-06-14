/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
 */

@interface UMMobileKeyBag : NSObject

+ (id)_mutablePersonaSpecBase;
+ (void)_setAttributes:(id)arg1 onUser:(id)arg2;
+ (void)_setPasscodeTypeOnUser:(id)arg1 withPasscodeData:(id)arg2;
+ (id)_userAttributesForUID:(unsigned int)arg1;
+ (id)currentUserSwitchContext;
+ (void)currentUserSwitchContextHasBeenUsed;
+ (id)deleteUser:(id)arg1;
+ (id)dictionaryRepresentationOfTask:(id)arg1;
+ (void)fetchAttributesForUser:(id)arg1;
+ (int)foregroundUID;
+ (bool)inSyncBubble;
+ (void)initialize;
+ (bool)isMultiUser;
+ (id)loadUser:(id)arg1 withPasscodeData:(id)arg2;
+ (unsigned long long)maxNumberOfUsers;
+ (double)passcodeBackOffIntervalForUser:(id)arg1;
+ (id)personaSpecForUser:(id)arg1;
+ (id)taskFromDictionaryRepresentation:(id)arg1;
+ (id)userFromAttributes:(id)arg1;
+ (unsigned long long)userType;
+ (id)userUIDs;
+ (bool)writeAttributesToDiskForUser:(id)arg1;

@end
