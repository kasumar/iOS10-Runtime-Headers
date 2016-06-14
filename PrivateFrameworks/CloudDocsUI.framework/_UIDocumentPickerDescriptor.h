/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

@interface _UIDocumentPickerDescriptor : NSObject {
    NSExtension * _extension;
    bool  _newlyAdded;
}

@property (nonatomic) bool enabled;
@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, readonly, retain) NSString *fileProviderDocumentGroup;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (getter=isNewlyAdded, nonatomic) bool newlyAdded;
@property (nonatomic, readonly, copy) NSString *nonUIIdentifier;
@property (nonatomic, readonly, copy) NSArray *supportedContentTypes;

+ (id)allPickers;
+ (id)allPickersForMode:(unsigned long long)arg1 documentTypes:(id)arg2;
+ (BOOL)cloudEnabledStatus;
+ (id)defaultPickerIdentifierForMode:(unsigned long long)arg1 documentTypes:(id)arg2;
+ (id)descriptorWithIdentifier:(id)arg1;
+ (id)enabledPickersForMode:(unsigned long long)arg1 documentTypes:(id)arg2;
+ (id)hostBundleID;
+ (bool)isInAddToiCloudDrive;
+ (id)manageablePickersForMode:(unsigned long long)arg1 documentTypes:(id)arg2;
+ (id)pickerOrder;
+ (void)setCloudEnabledStatus:(BOOL)arg1;
+ (void)setHostBundleID:(id)arg1;
+ (void)setOrderFromPickers:(id)arg1;
+ (void)setSourceIsManaged:(bool)arg1;
+ (bool)sourceIsManaged;

- (void).cxx_destruct;
- (id)_extensionValueOfClass:(Class)arg1 forKey:(id)arg2;
- (id)_ownBundle;
- (id)_parentApp;
- (long long)compare:(id)arg1;
- (id)description;
- (bool)enabled;
- (id)extension;
- (id)fileProviderDocumentGroup;
- (unsigned long long)hash;
- (id)identifier;
- (id)imageWithScale:(double)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isNewlyAdded;
- (id)localizedName;
- (id)nonUIBundle;
- (id)nonUIIdentifier;
- (bool)pickerEnabledForMode:(unsigned long long)arg1 documentTypes:(id)arg2 reason:(id*)arg3;
- (void)setEnabled:(bool)arg1;
- (void)setExtension:(id)arg1;
- (void)setNewlyAdded:(bool)arg1;
- (id)supportedContentTypes;
- (bool)supportsPickerMode:(unsigned long long)arg1;

@end
