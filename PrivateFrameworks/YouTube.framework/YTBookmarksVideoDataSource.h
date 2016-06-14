/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@interface YTBookmarksVideoDataSource : YTVideoDataSource {
    NSMutableArray * _bookmarkedShortIDs;
    YTSearchRequest * _bookmarksSearchRequest;
    bool  _lastReloadWasAccountsFavorites;
}

- (void)_nextBatch;
- (void)addVideo:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isLoading;
- (unsigned int)maxVideosToSave;
- (void)reloadData;
- (void)searchRequest:(id)arg1 foundBatchURL:(id)arg2;
- (void)searchRequest:(id)arg1 receivedVideos:(id)arg2 startIndex:(unsigned int)arg3 videosRemaining:(unsigned int)arg4;

@end
