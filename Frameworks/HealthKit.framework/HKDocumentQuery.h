/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKDocumentQuery : HKQuery {
    bool  _includeDocumentData;
    unsigned long long  _limit;
    id /* block */  _resultsHandler;
    NSArray * _sortDescriptors;
}

@property (readonly) bool includeDocumentData;
@property (readonly) unsigned long long limit;
@property (nonatomic, copy) id /* block */ resultsHandler;
@property (readonly, copy) NSArray *sortDescriptors;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (Class)_queryServerDataObjectClass;

- (void).cxx_destruct;
- (void)_queue_cleanupAfterDeactivation;
- (void)_queue_configureQueryServerDataObject:(id)arg1;
- (id /* block */)_queue_errorHandler;
- (void)_queue_validate;
- (void)deliverSample:(id)arg1 forQuery:(id)arg2;
- (bool)includeDocumentData;
- (id)initWithDocumentType:(id)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 sortDescriptors:(id)arg4 includeDocumentData:(bool)arg5 resultsHandler:(id /* block */)arg6;
- (unsigned long long)limit;
- (id /* block */)resultsHandler;
- (void)setResultsHandler:(id /* block */)arg1;
- (id)sortDescriptors;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (Class)hd_queryServerClass;

@end
