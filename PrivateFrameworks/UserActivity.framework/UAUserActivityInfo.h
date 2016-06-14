/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

@interface UAUserActivityInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _activityType;
    NSString * _bundleIdentifier;
    NSString * _contentUserAction;
    bool  _dirty;
    NSString * _dynamicActivityType;
    bool  _eligibleForHandoff;
    bool  _eligibleForPublicIndexing;
    bool  _eligibleForReminders;
    bool  _eligibleForSearch;
    bool  _eligibleToAdvertise;
    bool  _eligibleToAlwaysAdvertise;
    NSError * _encodedUserInfoError;
    NSDictionary * _encodingOptions;
    NSError * _error;
    NSDate * _expirationDate;
    NSSet * _keywords;
    NSDictionary * _options;
    bool  _payloadAvailable;
    bool  _payloadRequested;
    NSMutableDictionary * _payloads;
    UAPeerDevice * _peerDevice;
    NSSet * _requiredUserInfoKeys;
    NSString * _teamIdentifier;
    NSString * _title;
    unsigned long long  _type;
    NSUUID * _uuid;
    NSURL * _webpageURL;
    NSDate * _when;
}

@property (copy) NSString *activityType;
@property (copy) NSString *bundleIdentifier;
@property (copy) NSString *contentUserAction;
@property (getter=isDirty, readonly) bool dirty;
@property (copy) NSString *dynamicActivityType;
@property bool eligibleForHandoff;
@property bool eligibleForPublicIndexing;
@property bool eligibleForReminders;
@property bool eligibleForSearch;
@property (readonly) bool eligibleToAdvertise;
@property (readonly) bool eligibleToAlwaysAdvertise;
@property (copy) NSError *encodedUserInfoError;
@property (copy) NSDictionary *encodingOptions;
@property (copy) NSError *error;
@property (copy) NSDate *expirationDate;
@property (copy) NSSet *keywords;
@property (copy) NSDictionary *options;
@property (getter=isPayloadAvailable) bool payloadAvailable;
@property (getter=isPayloadRequested) bool payloadRequested;
@property (copy) NSDictionary *payloads;
@property (retain) UAPeerDevice *peerDevice;
@property (copy) NSSet *requiredUserInfoKeys;
@property (copy) NSString *teamIdentifier;
@property (copy) NSString *title;
@property unsigned long long type;
@property (copy) NSUUID *uuid;
@property (copy) NSURL *webpageURL;
@property (copy) NSDate *when;

+ (id)encodedInfoToOldEncodedInfo:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_createUserActivityStrings:(id)arg1 secondaryString:(id)arg2 optionalData:(id)arg3;
- (id)activityType;
- (id)archiveUserActivityInfo;
- (id)bundleIdentifier;
- (void)clearPayload;
- (id)contentUserAction;
- (id)copyUserActivityInfoWithUUID:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dynamicActivityType;
- (bool)eligibleForHandoff;
- (bool)eligibleForPublicIndexing;
- (bool)eligibleForReminders;
- (bool)eligibleForSearch;
- (bool)eligibleToAdvertise;
- (bool)eligibleToAlwaysAdvertise;
- (void)encodeWithCoder:(id)arg1;
- (id)encodedUserInfoError;
- (id)encodingOptions;
- (id)error;
- (id)expirationDate;
- (id)initWithArchivedUserActivityInfo:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 type:(unsigned long long)arg2 options:(id)arg3;
- (id)initWithUserActivityInfo:(id)arg1;
- (bool)isDirty;
- (bool)isPayloadAvailable;
- (bool)isPayloadRequested;
- (id)keywords;
- (id)logString;
- (id)optionalUserActivityData;
- (id)options;
- (id)payloadForIdentifier:(id)arg1;
- (id)payloadIdentifiers;
- (id)payloads;
- (id)peerDevice;
- (bool)requestPayloadWithCompletionHandler:(id /* block */)arg1;
- (bool)requestPayloadWithCompletionHandlerEvenIfClean:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)requiredUserInfoKeys;
- (id)secondaryUserActivityString;
- (void)setActivityType:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setContentUserAction:(id)arg1;
- (void)setDynamicActivityType:(id)arg1;
- (void)setEligibleForHandoff:(bool)arg1;
- (void)setEligibleForPublicIndexing:(bool)arg1;
- (void)setEligibleForReminders:(bool)arg1;
- (void)setEligibleForSearch:(bool)arg1;
- (void)setEncodedUserInfoError:(id)arg1;
- (void)setEncodingOptions:(id)arg1;
- (void)setError:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setKeywords:(id)arg1;
- (void)setOptions:(id)arg1;
- (bool)setPayload:(id)arg1 identifier:(id)arg2;
- (void)setPayloadAvailable:(bool)arg1;
- (void)setPayloadRequested:(bool)arg1;
- (void)setPayloads:(id)arg1;
- (void)setPeerDevice:(id)arg1;
- (void)setRequiredUserInfoKeys:(id)arg1;
- (void)setTeamIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUuid:(id)arg1;
- (void)setWebpageURL:(id)arg1;
- (void)setWhen:(id)arg1;
- (id)statusString;
- (id)teamIdentifier;
- (id)title;
- (unsigned long long)type;
- (id)userActivityString;
- (id)uuid;
- (bool)wasResumedOnAnotherDeviceWithCompletionHandler:(id /* block */)arg1;
- (id)webpageURL;
- (id)when;

@end
