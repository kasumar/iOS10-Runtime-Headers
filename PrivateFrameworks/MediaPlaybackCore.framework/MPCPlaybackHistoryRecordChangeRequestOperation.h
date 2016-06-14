/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlaybackHistoryRecordChangeRequestOperation : MSVOperation {
    MSVOperationQueue * _operationQueue;
    MPCPlaybackHistoryRecordChangeRequest * _request;
    id /* block */  _responseHandler;
}

@property (nonatomic, copy) MPCPlaybackHistoryRecordChangeRequest *request;
@property (nonatomic, copy) id /* block */ responseHandler;

- (void).cxx_destruct;
- (void)_finishChangeRequestOperationWithError:(id)arg1;
- (void)execute;
- (id)request;
- (id /* block */)responseHandler;
- (void)setRequest:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;

@end
