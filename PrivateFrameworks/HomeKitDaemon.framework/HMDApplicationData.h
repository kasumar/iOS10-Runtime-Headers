/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDApplicationData : NSObject <HMFDumpState, NSSecureCoding> {
    NSMutableDictionary * _appDataDictionary;
}

@property (nonatomic, retain) NSMutableDictionary *appDataDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appDataDictionary;
- (id)applicationDataForIdentifier:(id)arg1;
- (id)dictionary;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEmpty;
- (void)removeApplicationDataForIdentifier:(id)arg1;
- (void)setAppDataDictionary:(id)arg1;
- (void)setApplicationData:(id)arg1 forIdentifier:(id)arg2;

@end
