/* Generated by RuntimeBrowser.
 */

@protocol WBSParsecSearchSession <NSObject>

@required

- (WBSParsecSearchClient *)client;
- (WBSCompletionQuery *)currentQuery;
- (<WBSParsecSearchSessionDelegate> *)delegate;
- (<WBSParsecFeedbackDispatcher> *)feedbackDispatcher;
- (void)fetchCardDetailsForResult:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 8: WBSParsecSearchResult *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WBSParsecSearchResult *, NSError *, void*
- (id)initWithClient:(WBSParsecSearchClient *)arg1;
- (bool)isValid;
- (void)setCurrentQuery:(WBSCompletionQuery *)arg1;
- (void)setDelegate:(id <WBSParsecSearchSessionDelegate>)arg1;
- (void)setUIScale:(double)arg1;
- (double)uiScale;

@end
