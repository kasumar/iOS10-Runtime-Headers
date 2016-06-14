/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTDeviceSupport : NSObject {
    bool  _accountModificationRestricted;
    bool  _blockPost;
    int  _carrierBundleSupported;
    bool  _commCenterDead;
    bool  _faceTimeBlocked;
    int  _iMessageAllowedToken;
    bool  _iMessageBlocked;
    bool  _mmsConfigured;
    NSString * _number;
    long long  _performanceClass;
    bool  _shouldUseSIMState;
    bool  _simBecameNotReady;
    bool  _simInserted;
    bool  _supportsApplePay;
    bool  _supportsBackCamera;
    bool  _supportsCellularData;
    bool  _supportsFT;
    bool  _supportsFTA;
    bool  _supportsFrontCamera;
    bool  _supportsHandoff;
    bool  _supportsMMS;
    bool  _supportsNonWiFiFaceTime;
    bool  _supportsRegistrationControl;
    bool  _supportsSMS;
    bool  _supportsTethering;
    bool  _supportsWLAN;
    bool  _supportsWiFi;
    bool  _supportsiMessage;
}

@property (nonatomic, readonly) NSDictionary *CTNetworkInformation;
@property (nonatomic, readonly) bool SIMInserted;
@property (nonatomic, readonly) bool accountModificationRestricted;
@property (nonatomic, readonly) bool callingAvailable;
@property (nonatomic, readonly) bool callingBlocked;
@property (nonatomic, readonly) bool callingSupported;
@property (nonatomic, readonly) bool commCenterDead;
@property (nonatomic, readonly) bool conferencingAllowed;
@property (nonatomic, readonly) bool conferencingBlocked;
@property (nonatomic, readonly) bool conferencingEnabled;
@property (nonatomic, readonly) NSString *deviceColor;
@property (nonatomic, readonly) NSString *deviceIDPrefix;
@property (nonatomic, readonly) NSString *deviceInformationString;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) long long deviceType;
@property (nonatomic, readonly) NSString *deviceTypeIDPrefix;
@property (nonatomic, readonly) NSString *enclosureColor;
@property (nonatomic, readonly) bool faceTimeAvailable;
@property (nonatomic, readonly) bool faceTimeBlocked;
@property (nonatomic, readonly) bool faceTimeSupported;
@property (nonatomic, readonly) bool iMessageAvailable;
@property (nonatomic, readonly) bool iMessageBlocked;
@property (nonatomic, readonly) bool iMessageSupported;
@property (nonatomic, readonly) bool identityServicesSupported;
@property (nonatomic, readonly) bool isC2KEquipment;
@property (nonatomic, readonly) bool isInMultiUserMode;
@property (nonatomic, readonly) bool isTelephonyDevice;
@property (nonatomic, readonly) bool madridAvailable;
@property (nonatomic, readonly) bool madridBlocked;
@property (nonatomic, readonly) bool madridSupported;
@property (nonatomic, readonly) bool mmsConfigured;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) bool nonWifiCallingAvailable;
@property (nonatomic, readonly) bool nonWifiFaceTimeAvailable;
@property (nonatomic, readonly) long long performanceClass;
@property (nonatomic, readonly) NSString *productBuildVersion;
@property (nonatomic, readonly) NSString *productName;
@property (nonatomic, readonly) NSString *productVersion;
@property (nonatomic, readonly) bool registrationSupported;
@property (nonatomic, readonly) bool supportsAppleIDIdentification;
@property (nonatomic, readonly) bool supportsApplePay;
@property (nonatomic, readonly) bool supportsBackFacingCamera;
@property (nonatomic, readonly) bool supportsCellularData;
@property (nonatomic, readonly) bool supportsFrontFacingCamera;
@property (nonatomic, readonly) bool supportsHandoff;
@property (nonatomic, readonly) bool supportsMMS;
@property (nonatomic, readonly) bool supportsNonWiFiCalling;
@property (nonatomic, readonly) bool supportsNonWiFiFaceTime;
@property (nonatomic, readonly) bool supportsRegistrationControl;
@property (nonatomic, readonly) bool supportsSMS;
@property (nonatomic, readonly) bool supportsSMSIdentification;
@property (nonatomic, readonly) bool supportsSimultaneousVoiceAndDataRightNow;
@property (nonatomic, readonly) bool supportsTethering;
@property (nonatomic, readonly) bool supportsWLAN;
@property (nonatomic, readonly) bool supportsWiFi;
@property (nonatomic, readonly) NSString *telephoneNumber;
@property (nonatomic, readonly) NSDictionary *telephonyCapabilities;
@property (nonatomic, readonly) NSString *userAgentString;
@property (nonatomic, readonly) bool wantsBreakBeforeMake;

+ (id)sharedInstance;

- (id)CTNetworkInformation;
- (bool)SIMInserted;
- (void)_carrierChanged;
- (void)_commCenterAlive;
- (void)_handlePhoneNumberRegistrationStateChanged:(id)arg1;
- (void)_handleTechnologyChange:(id)arg1;
- (void)_lockdownStateChanged:(id)arg1;
- (void)_operatorChanged;
- (void)_registerForCapabilityNotifications;
- (void)_registerForCarrierNotifications;
- (void)_registerForCommCenterReadyNotifications;
- (void)_registerForCoreTelephonyNotifications;
- (void)_registerForInternalCoreTelephonyNotifications;
- (void)_registerForLockdownNotifications;
- (void)_registerForManagedConfigurationNotifications;
- (void)_simStatusChanged:(id)arg1;
- (void)_unregisterForCarrierNotifications;
- (void)_unregisterForCommCenterReadyNotifications;
- (void)_unregisterForCoreTelephonyNotifications;
- (void)_unregisterForManagedConfigurationNotifications;
- (void)_updateCapabilities;
- (void)_updateManagedConfigurationSettings;
- (void)_watchNotifyTokens;
- (bool)accountModificationRestricted;
- (bool)callingAvailable;
- (bool)callingBlocked;
- (bool)callingSupported;
- (void)carrierSettingsChanged:(id)arg1;
- (bool)commCenterDead;
- (bool)conferencingAllowed;
- (bool)conferencingBlocked;
- (bool)conferencingEnabled;
- (void)dealloc;
- (id)deviceColor;
- (id)deviceIDPrefix;
- (id)deviceInformationString;
- (id)deviceName;
- (long long)deviceType;
- (id)deviceTypeIDPrefix;
- (id)enclosureColor;
- (bool)faceTimeAvailable;
- (bool)faceTimeBlocked;
- (bool)faceTimeSupported;
- (bool)iMessageAvailable;
- (bool)iMessageBlocked;
- (bool)iMessageSupported;
- (bool)identityServicesSupported;
- (id)init;
- (bool)isC2KEquipment;
- (bool)isInMultiUserMode;
- (bool)isTelephonyDevice;
- (bool)madridAvailable;
- (bool)madridBlocked;
- (bool)madridSupported;
- (bool)mmsConfigured;
- (id)model;
- (bool)nonWifiAvailableForBundleId:(id)arg1;
- (bool)nonWifiCallingAvailable;
- (bool)nonWifiFaceTimeAvailable;
- (long long)performanceClass;
- (id)productBuildVersion;
- (id)productName;
- (id)productVersion;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (bool)registrationSupported;
- (bool)supportsAppleIDIdentification;
- (bool)supportsApplePay;
- (bool)supportsBackFacingCamera;
- (bool)supportsCellularData;
- (bool)supportsFrontFacingCamera;
- (bool)supportsHandoff;
- (bool)supportsMMS;
- (bool)supportsNonWiFiCalling;
- (bool)supportsNonWiFiFaceTime;
- (bool)supportsRegistrationControl;
- (bool)supportsSMS;
- (bool)supportsSMSIdentification;
- (bool)supportsSimultaneousVoiceAndDataRightNow;
- (bool)supportsTethering;
- (bool)supportsWLAN;
- (bool)supportsWiFi;
- (id)telephoneNumber;
- (id)telephonyCapabilities;
- (id)userAgentString;
- (bool)wantsBreakBeforeMake;
- (bool)wifiAllowedForBundleId:(id)arg1;

@end
