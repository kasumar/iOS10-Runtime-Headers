/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTClientServices.framework/FTClientServices
 */

@interface FTCServiceMonitor : NSObject {
    long long  _availability;
    int  _token;
    long long  _type;
}

@property (nonatomic, readonly) long long serviceType;

- (void)_postAvailability:(long long)arg1;
- (void)_updateAvailability;
- (void)dealloc;
- (void)handleActiveAccountsChanged:(id)arg1;
- (id)initWithServiceType:(long long)arg1;
- (long long)serviceAvailability;
- (long long)serviceType;
- (void)updateAvailability;

@end
