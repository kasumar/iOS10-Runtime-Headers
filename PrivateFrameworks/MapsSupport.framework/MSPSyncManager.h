/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPSyncManager : NSObject <SYServiceDelegate, SYSessionDelegate> {
    NSMutableArray * _bookmarks;
    NSMutableArray * _bookmarksForDisplay;
    NSMutableDictionary * _bookmarksMap;
    NSMutableArray * _history;
    NSMutableDictionary * _historyMap;
    NSMutableArray * _pendingSyncItems;
    NSMutableArray * _pins;
    NSMutableDictionary * _pinsMap;
    bool  _resetSyncRequested;
    NSObject<OS_dispatch_queue> * _saveQueue;
    SYService * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_bookmarkIsDisplayable:(id)arg1;

- (void).cxx_destruct;
- (void)_addBookmark:(id)arg1;
- (void)_addHistoryItem:(id)arg1;
- (void)_addPin:(id)arg1;
- (void)_applyAddItem:(id)arg1;
- (void)_applyDeleteItem:(id)arg1;
- (void)_applyUpdateItem:(id)arg1;
- (void)_findDisplayableBookmarks;
- (void)_notifyObservers;
- (void)_removeBookmark:(id)arg1;
- (void)_removeHistoryItem:(id)arg1;
- (void)_removePin:(id)arg1;
- (void)_resumeSyncService;
- (void)_setHasChangesAvailable;
- (void)_updateBookmark:(id)arg1;
- (void)_updateFromDisk;
- (void)_updateHistoryItem:(id)arg1;
- (void)_updatePin:(id)arg1;
- (id)_wrapBookmark:(id)arg1 changeType:(long long)arg2;
- (id)_wrapHistoryItem:(id)arg1 changeType:(long long)arg2;
- (id)_wrapPin:(id)arg1 changeType:(long long)arg2;
- (id)bookmarks;
- (void)completedPreparingSync;
- (void)completedSync;
- (id)displayableBookmarks;
- (id)history;
- (id)init;
- (void)notifyObservers;
- (id)pins;
- (id)readBookmarks;
- (id)readHistory;
- (id)readPins;
- (bool)service:(id)arg1 startSession:(id)arg2 error:(id*)arg3;
- (void)serviceDidPairDevice:(id)arg1;
- (void)setDroppedPin:(id)arg1;
- (void)setNeedsFullSync;
- (void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(id /* block */)arg3;
- (void)syncSession:(id)arg1 didEndWithError:(id)arg2;
- (long long)syncSession:(id)arg1 enqueueChanges:(id /* block */)arg2 error:(id*)arg3;
- (bool)syncSession:(id)arg1 resetDataStoreWithError:(id*)arg2;
- (void)updateHistoryItem:(id)arg1;
- (void)writeBookmarks:(id)arg1;
- (void)writeHistory:(id)arg1;
- (void)writePins:(id)arg1;

@end
