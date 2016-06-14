/* Generated by RuntimeBrowser.
 */

@protocol FCReadingHistoryItem <NSObject, NSCopying, NSMutableCopying>

@required

- (NSString *)articleID;
- (unsigned long long)articleLikingStatus;
- (bool)hasArticleBeenConsumed;
- (bool)hasArticleBeenMarkedOffensive;
- (bool)hasArticleBeenRead;
- (bool)hasArticleBeenSeen;
- (NSString *)identifier;
- (NSDate *)lastVisitedAt;

@end
