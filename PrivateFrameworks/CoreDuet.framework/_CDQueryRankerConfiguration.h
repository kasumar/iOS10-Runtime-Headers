/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDQueryRankerConfiguration : NSObject {
    NSUserDefaults * defaults;
    NSObject<OS_dispatch_queue> * queue;
}

@property (readonly) bool featureDisabled;
@property (readonly) long long minimumPrefixLengthToSuggest;
@property (readonly) unsigned long long model;
@property long long modelVersionNumber;
@property (readonly) bool suggestExpandedPrefix;
@property (readonly) bool suggestPrefixAlways;
@property (readonly) bool suggestPrefixOnPunchout;
@property (readonly) bool suggestPrefixWhenNoMatchFound;
@property (readonly) bool suggestPrefixWithoutEngagement;

- (void).cxx_destruct;
- (bool)featureDisabled;
- (id)init;
- (id)initWithDefaults:(id)arg1;
- (long long)minimumPrefixLengthToSuggest;
- (unsigned long long)model;
- (long long)modelVersionNumber;
- (void)registerHandlerForDeleteDataNotification:(id /* block */)arg1;
- (void)registerHandlerForFeatureDisabledNotification:(id /* block */)arg1;
- (void)registerHandlerForModelChangeNotification:(id /* block */)arg1;
- (void)setModelVersionNumber:(long long)arg1;
- (bool)suggestExpandedPrefix;
- (bool)suggestPrefixAlways;
- (bool)suggestPrefixOnPunchout;
- (bool)suggestPrefixWhenNoMatchFound;
- (bool)suggestPrefixWithoutEngagement;

@end
