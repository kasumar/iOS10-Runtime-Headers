/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBulletinProvider : NSObject <BBRemoteDataProvider, NSSecureCoding> {
    NSMutableDictionary * _bulletins;
    HMDHomeManager * _homeManager;
    BBDataProviderProxy * _proxy;
}

@property (nonatomic, retain) NSMutableDictionary *bulletins;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHomeManager *homeManager;
@property (nonatomic) BBDataProviderProxy *proxy;
@property (readonly) Class superclass;

+ (struct CGImage { }*)resizeImage:(struct CGImage { }*)arg1 width:(float)arg2 height:(float)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2;
- (id)bulletins;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (void)configure:(id)arg1;
- (void)configureHomeManager:(id)arg1;
- (void)cullBulletinsToCount:(unsigned long long)arg1;
- (id)defaultSectionInfo;
- (id)defaultSubsectionInfos;
- (id)displayNameForSubsectionID:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)homeManager;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)insertBulletinWithTitle:(id)arg1 imageURL:(id)arg2 message:(id)arg3 recordID:(id)arg4;
- (void)insertBulletinWithTitle:(id)arg1 imageURL:(id)arg2 message:(id)arg3 recordID:(id)arg4 bulletinContext:(struct NSDictionary { Class x1; }*)arg5 actionContext:(struct NSDictionary { Class x1; }*)arg6;
- (id)proxy;
- (void)reloadDefaultSectionInfo;
- (void)removeBulletin:(id)arg1;
- (void)removeBulletinWithRecordID:(id)arg1;
- (id)sectionDisplayName;
- (id)sectionIdentifier;
- (id)sectionParameters;
- (void)setBulletins:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setProxy:(id)arg1;
- (id)sortDescriptors;
- (id)sortedBulletinsByDate;
- (bool)syncsBulletinDismissal;
- (void)updateBulletin:(id)arg1;

@end
