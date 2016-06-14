/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECCachedConsumer : NSObject {
    unsigned long long  _category;
    unsigned long long  _consumerType;
    _DECPredictionStoreReader * _store;
}

- (void).cxx_destruct;
- (id)cachedPredictionsWithLimit:(unsigned long long)arg1 error:(id*)arg2;
- (id)initWithCategory:(unsigned long long)arg1 consumerType:(unsigned long long)arg2;
- (id)initWithCategory:(unsigned long long)arg1 consumerType:(unsigned long long)arg2 storeReader:(id)arg3;

@end
