/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface _EKNotificationMonitor : NSObject {
    NSMutableSet * _alertedNotificationsThatFailedToMarkAlerted;
    NSArray * _eventNotificationReferences;
    EKEventStore * _eventStore;
    id /* block */  _eventStoreGetter;
    bool  _initialCheck;
    unsigned long long  _lastEventCount;
    unsigned long long  _lastReminderCount;
    bool  _loadRecentlyRepliedNotifications;
    NSDate * _nextFireTime;
    long long  _notificationTypes;
    bool  _pendingChanges;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _registerForDarwinNotifications;
    NSArray * _reminderNotificationReferences;
    bool  _running;
    bool  _shouldInstallPersistentTimer;
    NSTimer * _syncTimer;
    PCPersistentTimer * _timer;
    NSObject<OS_dispatch_queue> * _timerQueue;
    bool  _useSyncIdleTimer;
}

@property (nonatomic, readonly) unsigned long long eventNotificationCount;
@property (nonatomic, readonly) NSArray *eventNotificationReferences;
@property (nonatomic, readonly) unsigned long long notificationCount;
@property (nonatomic, readonly) NSArray *notificationReferences;
@property (nonatomic, readonly) NSArray *reminderNotificationReferences;

+ (id)requestedDarwinNotifications;

- (void).cxx_destruct;
- (void)_alertPrefChanged;
- (unsigned long long)_checkForEventNotifications:(id)arg1;
- (unsigned long long)_checkForReminderNotifications:(id)arg1;
- (void)_databaseChanged;
- (id)_eventStore;
- (void)_killSyncTimer;
- (void)_notificationCountChangedExternally;
- (void)_notifyForUnalertedNotifications:(id)arg1;
- (void)_resetSyncTimer;
- (void)_resetTimer;
- (void)_syncDidEnd;
- (void)_syncDidStart;
- (void)_syncTimerFired:(id)arg1;
- (void)_timerFired;
- (void)adjust;
- (void)attemptReload;
- (void)attemptReloadSynchronously:(bool)arg1;
- (void)dealloc;
- (unsigned long long)eventNotificationCount;
- (id)eventNotificationReferences;
- (void)handleDarwinNotification:(id)arg1;
- (id)init;
- (id)initByHandlingOnlyEvents:(bool)arg1 eventStore:(id)arg2;
- (id)initByHandlingTypes:(long long)arg1 bulletinBoardWithEventStoreGetter:(id /* block */)arg2;
- (void)killTimer;
- (unsigned long long)notificationCount;
- (id)notificationReferences;
- (id)reminderNotificationReferences;
- (void)start;
- (void)stop;
- (bool)wantsEvents;
- (bool)wantsReminders;

@end
