/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _LSDiskUsage : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _usage;
}

@property (nonatomic, readonly) NSString *_bundleIdentifier;
@property (nonatomic, readonly) NSNumber *dynamicUsage;
@property (nonatomic, readonly) NSNumber *onDemandResourcesUsage;
@property (nonatomic, readonly) NSNumber *staticUsage;

+ (id)ODRUsageForBundleIdentifier:(id)arg1 error:(id*)arg2;
+ (id)dynamicUsageForBundleIdentifier:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (id)_bundleIdentifier;
- (bool)_fetchWithXPCConnection:(id)arg1 error:(id*)arg2;
- (id)_initWithBundleIdentifier:(id)arg1 alreadyKnownUsage:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)dynamicUsage;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)onDemandResourcesUsage;
- (id)staticUsage;

@end
