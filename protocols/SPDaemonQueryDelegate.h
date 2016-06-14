/* Generated by RuntimeBrowser.
 */

@protocol SPDaemonQueryDelegate <NSObject>

@required

- (void)searchDaemonQuery:(SPDaemonQueryToken *)arg1 addedResultSections:(NSArray *)arg2;
- (void)searchDaemonQuery:(SPDaemonQueryToken *)arg1 addedResults:(struct NSObject { Class x1; }*)arg2;
- (void)searchDaemonQuery:(SPDaemonQueryToken *)arg1 encounteredError:(NSError *)arg2;
- (void)searchDaemonQueryCompleted:(SPDaemonQueryToken *)arg1;
- (void)searchDaemonQueryReset:(SPDaemonQueryToken *)arg1;
- (void)searchDaemonRankingLog:(NSString *)arg1;
- (void)searchDaemonSuggestionsArray:(NSArray *)arg1;

@optional

- (void)searchDaemonQuery:(SPDaemonQueryToken *)arg1 gotResultSet:(SPResultSet *)arg2 replace:(bool)arg3 complete:(bool)arg4 finished:(bool)arg5;

@end
