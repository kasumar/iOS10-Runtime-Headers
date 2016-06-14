/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INRideStatus : NSObject <INCacheableContainer, NSCopying, NSSecureCoding> {
    INRideDriver * _driver;
    CLPlacemark * _dropOffLocation;
    NSDate * _estimatedDropOffDate;
    NSDate * _estimatedPickupDate;
    long long  _phase;
    CLPlacemark * _pickupLocation;
    NSString * _rideIdentifier;
    INRideOption * _rideOption;
    NSUserActivity * _userActivityForCancelingInApplication;
    INRideVehicle * _vehicle;
    NSArray * _waypoints;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) INRideDriver *driver;
@property (nonatomic, copy) CLPlacemark *dropOffLocation;
@property (nonatomic, copy) NSDate *estimatedDropOffDate;
@property (nonatomic, copy) NSDate *estimatedPickupDate;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long phase;
@property (nonatomic, copy) CLPlacemark *pickupLocation;
@property (nonatomic, copy) NSString *rideIdentifier;
@property (nonatomic, copy) INRideOption *rideOption;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUserActivity *userActivityForCancelingInApplication;
@property (nonatomic, copy) INRideVehicle *vehicle;
@property (nonatomic, copy) NSArray *waypoints;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cacheableObjects;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)driver;
- (id)dropOffLocation;
- (void)encodeWithCoder:(id)arg1;
- (id)estimatedDropOffDate;
- (id)estimatedPickupDate;
- (id)initWithCoder:(id)arg1;
- (long long)phase;
- (id)pickupLocation;
- (id)rideIdentifier;
- (id)rideOption;
- (void)setDriver:(id)arg1;
- (void)setDropOffLocation:(id)arg1;
- (void)setEstimatedDropOffDate:(id)arg1;
- (void)setEstimatedPickupDate:(id)arg1;
- (void)setPhase:(long long)arg1;
- (void)setPickupLocation:(id)arg1;
- (void)setRideIdentifier:(id)arg1;
- (void)setRideOption:(id)arg1;
- (void)setUserActivityForCancelingInApplication:(id)arg1;
- (void)setVehicle:(id)arg1;
- (void)setWaypoints:(id)arg1;
- (id)userActivityForCancelingInApplication;
- (id)vehicle;
- (id)waypoints;

@end
