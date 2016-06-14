/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFetchGroup : NSObject {
    id /* block */  _completion;
    NSObject<OS_dispatch_queue> * _completionQueue;
    id  _context;
    bool  _isUserFacing;
    NSSet * _keys;
    long long  _networkPriority;
    long long  _qualityOfService;
    NSDate * _requestDate;
    bool  _shouldFilter;
}

@property (nonatomic, readonly, copy) id /* block */ completion;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic, readonly) id context;
@property (nonatomic, readonly) bool isUserFacing;
@property (nonatomic, readonly, copy) NSSet *keys;
@property (nonatomic, readonly) long long networkPriority;
@property (nonatomic, readonly) long long qualityOfService;
@property (nonatomic, retain) NSDate *requestDate;
@property (nonatomic, readonly) bool shouldFilter;

- (void).cxx_destruct;
- (long long)comparePriority:(id)arg1;
- (id /* block */)completion;
- (id)completionQueue;
- (id)context;
- (void)fireCompletion;
- (id)initWithKeys:(id)arg1 context:(id)arg2 shouldFilter:(bool)arg3 qualityOfService:(long long)arg4 networkPriority:(long long)arg5 completionQueue:(id)arg6 completion:(id /* block */)arg7;
- (bool)isUserFacing;
- (id)keys;
- (long long)networkPriority;
- (long long)qualityOfService;
- (id)requestDate;
- (void)setRequestDate:(id)arg1;
- (bool)shouldFilter;

@end
