/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCMyArticlesSearchOperation : FCOperation {
    bool  _cachedOnly;
    bool  _channelsOnly;
    FCCloudContext * _context;
    FCDateRange * _dateRange;
    FCFeedItemFeature * _feature;
    bool  _permitStaleSubscriptions;
    bool  _purchasedChannelsOnly;
    NSArray * _resultFeedItems;
    id /* block */  _searchCompletionHandler;
    bool  _unreadOnly;
}

@property (nonatomic) bool cachedOnly;
@property (nonatomic) bool channelsOnly;
@property (nonatomic, retain) FCCloudContext *context;
@property (nonatomic, copy) FCDateRange *dateRange;
@property (nonatomic, copy) FCFeedItemFeature *feature;
@property (nonatomic) bool permitStaleSubscriptions;
@property (nonatomic) bool purchasedChannelsOnly;
@property (nonatomic, retain) NSArray *resultFeedItems;
@property (nonatomic, copy) id /* block */ searchCompletionHandler;
@property (nonatomic) bool unreadOnly;

- (void).cxx_destruct;
- (void)_generateFeedRequestsForFeedRange:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)cachedOnly;
- (bool)channelsOnly;
- (id)context;
- (id)dateRange;
- (id)feature;
- (id)init;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (bool)permitStaleSubscriptions;
- (bool)purchasedChannelsOnly;
- (id)resultFeedItems;
- (id /* block */)searchCompletionHandler;
- (void)setCachedOnly:(bool)arg1;
- (void)setChannelsOnly:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setDateRange:(id)arg1;
- (void)setFeature:(id)arg1;
- (void)setPermitStaleSubscriptions:(bool)arg1;
- (void)setPurchasedChannelsOnly:(bool)arg1;
- (void)setResultFeedItems:(id)arg1;
- (void)setSearchCompletionHandler:(id /* block */)arg1;
- (void)setUnreadOnly:(bool)arg1;
- (bool)unreadOnly;
- (bool)validateOperation;

@end
