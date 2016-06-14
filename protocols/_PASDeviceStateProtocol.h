/* Generated by RuntimeBrowser.
 */

@protocol _PASDeviceStateProtocol <NSObject>

@required

+ (void)blockUntilFirstUnlock;
+ (NSString *)currentOsBuild;
+ (bool)isClassCLocked;
+ (bool)isConstrainedDevice;
+ (bool)isDeviceFormattedForProtection;
+ (bool)isUnlocked;
+ (int)lockState;
+ (id)registerForLockStateChangeNotifications:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
+ (void)runBlockWhenDeviceIsClassCUnlocked:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
+ (void)unregisterForLockStateChangeNotifications:(id)arg1;

@end
