/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDQueryRanker : NSObject {
    _CDQueryRankerConfiguration * _configuration;
    _DKDataProtectionStateMonitor * _dataProtectionMonitor;
    _CDQueryRankerParameters * _parameters;
    <_DKKnowledgeQuerying><_DKKnowledgeDeleting> * _store;
}

@property (retain) _CDQueryRankerParameters *parameters;
@property (retain) <_DKKnowledgeQuerying><_DKKnowledgeDeleting> *store;
@property (readonly) bool userHasAuthenticated;

+ (id)rankerWithParameters:(id)arg1;
+ (id)rankerWithParameters:(id)arg1 store:(id)arg2;

- (void).cxx_destruct;
- (id)_fetchQueryEvents;
- (id)_rankForQueryEvents:(id)arg1;
- (void)deleteAllData;
- (id)initWithParameters:(id)arg1 store:(id)arg2;
- (id)parameters;
- (id)rank;
- (void)setParameters:(id)arg1;
- (void)setStore:(id)arg1;
- (void)setupConfiguration;
- (void)setupDataProtectionChangeHandler;
- (id)store;
- (bool)userHasAuthenticated;
- (void)versionCheckAndUpgradeIfNecessaryAndPossible;

@end
