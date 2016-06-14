/* Generated by RuntimeBrowser.
 */

@protocol WBSSiteMetadataProvider <NSObject>

@required

- (bool)canHandleRequest:(WBSSiteMetadataRequest *)arg1;
- (void)prepareResponseForRequest:(WBSSiteMetadataRequest *)arg1 allowDelayedResponse:(bool)arg2;
- (<WBSSiteMetadataProviderDelegate> *)providerDelegate;
- (WBSSiteMetadataResponse *)responseForRequest:(WBSSiteMetadataRequest *)arg1 willProvideUpdates:(bool*)arg2;
- (void)setProviderDelegate:(id <WBSSiteMetadataProviderDelegate>)arg1;

@optional

- (NSOperation *)operationForRequest:(WBSSiteMetadataRequest *)arg1 withProcessPool:(WKProcessPool *)arg2;
- (void)stopWatchingUpdatesForRequest:(WBSSiteMetadataRequest *)arg1;

@end
