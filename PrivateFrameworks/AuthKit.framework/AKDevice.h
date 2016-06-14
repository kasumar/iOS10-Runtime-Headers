/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKDevice : NSObject <NSCopying, NSSecureCoding> {
    NSString * _MLBSerialNumber;
    NSString * _ROMAddress;
    NSString * _color;
    NSString * _enclosureColor;
    bool  _isMonitoringUnlockEvents;
    unsigned long long  _linkType;
    NSLocale * _locale;
    NSString * _modelNumber;
    NSLock * _monitoringLock;
    NSString * _serverFriendlyDescription;
    NSString * _uniqueDeviceIdentifier;
}

@property (copy) NSString *MLBSerialNumber;
@property (copy) NSString *ROMAddress;
@property (copy) NSString *color;
@property (copy) NSString *enclosureColor;
@property bool hasBeenUnlockedSinceLastCheckIn;
@property (readonly) NSString *integratedCircuitCardIdentifier;
@property (readonly) NSString *internationalMobileEquipmentIdentity;
@property (readonly) bool isAppleIDLoginEnabled;
@property (readonly) bool isInternalBuild;
@property (readonly) bool isMultiUserMode;
@property (readonly) bool isProtectedWithPasscode;
@property (readonly) bool isUnlocked;
@property (setter=setLinkType:) unsigned long long linkType;
@property (copy) NSLocale *locale;
@property (readonly) NSString *mobileEquipmentIdentifier;
@property (copy) NSString *modelNumber;
@property (readonly) NSString *phoneNumber;
@property (readonly) NSString *serialNumber;
@property (readonly) NSData *serializedData;
@property (copy) NSString *serverFriendlyDescription;
@property (copy) NSString *uniqueDeviceIdentifier;
@property (readonly) NSString *userChosenName;

+ (id)_buildNumber;
+ (id)_generateServerFriendlyDescription;
+ (id)_generateServerFriendlyDescriptionForPairedDevice:(id)arg1;
+ (id)_hardwareModel;
+ (id)_lookUpCurrentColor;
+ (id)_lookUpCurrentEnclosureColor;
+ (id)_lookUpCurrentUniqueDeviceID;
+ (id)_lookupMLBSerialNumber;
+ (id)_lookupModelNumber;
+ (id)_lookupROMAddress;
+ (id)_osName;
+ (id)_osVersion;
+ (id)activeIDSPeerDevice;
+ (id)currentDevice;
+ (id)deviceSpecificLocalizedStringWithKey:(id)arg1;
+ (id)deviceWithSerializedData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)MLBSerialNumber;
- (id)ROMAddress;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)enclosureColor;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasBeenUnlockedSinceLastCheckIn;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)integratedCircuitCardIdentifier;
- (id)internationalMobileEquipmentIdentity;
- (bool)isAppleIDLoginEnabled;
- (bool)isInternalBuild;
- (bool)isMultiUserMode;
- (bool)isProtectedWithPasscode;
- (bool)isUnlocked;
- (unsigned long long)linkType;
- (id)locale;
- (id)mobileEquipmentIdentifier;
- (id)modelNumber;
- (id)phoneNumber;
- (id)serialNumber;
- (id)serializedData;
- (id)serverFriendlyDescription;
- (void)setColor:(id)arg1;
- (void)setEnclosureColor:(id)arg1;
- (void)setHasBeenUnlockedSinceLastCheckIn:(bool)arg1;
- (void)setLinkType:(unsigned long long)arg1;
- (void)setLocale:(id)arg1;
- (void)setMLBSerialNumber:(id)arg1;
- (void)setModelNumber:(id)arg1;
- (void)setROMAddress:(id)arg1;
- (void)setServerFriendlyDescription:(id)arg1;
- (void)setUniqueDeviceIdentifier:(id)arg1;
- (id)uniqueDeviceIdentifier;
- (id)userChosenName;

@end
