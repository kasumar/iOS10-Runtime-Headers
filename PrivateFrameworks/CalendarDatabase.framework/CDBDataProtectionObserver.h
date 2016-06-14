/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
 */

@interface CDBDataProtectionObserver : NSObject {
    CalDeviceLockObserver * _deviceLockObserver;
    id /* block */  _stateChangedCallback;
}

@property (nonatomic, readonly) bool dataIsAccessible;
@property (nonatomic, retain) CalDeviceLockObserver *deviceLockObserver;
@property (nonatomic, copy) id /* block */ stateChangedCallback;

- (void).cxx_destruct;
- (void)_deviceLockStateChanged;
- (bool)dataIsAccessible;
- (id)deviceLockObserver;
- (id)init;
- (void)setDeviceLockObserver:(id)arg1;
- (void)setStateChangedCallback:(id /* block */)arg1;
- (id /* block */)stateChangedCallback;

@end
