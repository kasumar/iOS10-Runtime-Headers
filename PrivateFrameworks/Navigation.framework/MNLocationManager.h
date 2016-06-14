/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNLocationManager : NSObject <GEOResourceManifestTileGroupObserver, MNLocationProviderDelegate> {
    bool  _enabled;
    bool  _hasCustomDesiredAccuracy;
    CLHeading * _heading;
    bool  _isLastLocationStale;
    MNLocation * _lastGoodLocation;
    MNLocation * _lastLocation;
    NSLock * _lastLocationLock;
    bool  _lastLocationPushed;
    double  _lastLocationReportTime;
    double  _lastLocationUpdateTime;
    id /* block */  _locationCorrector;
    NSError * _locationError;
    NSHashTable * _locationListeners;
    NSHashTable * _locationObservers;
    <MNLocationProvider> * _locationProvider;
    <MNLocationRecorder> * _locationRecorder;
    GEOLocationShifter * _locationShifter;
    double  _locationUpdateStartTime;
    bool  _logStartStopLocationUpdates;
    NSLock * _observersLock;
    bool  _trackingHeading;
    bool  _trackingLocation;
    bool  _useCourseForHeading;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double desiredAccuracy;
@property (nonatomic) double distanceFilter;
@property (nonatomic, retain) NSBundle *effectiveBundle;
@property (nonatomic, copy) NSString *effectiveBundleIdentifier;
@property (nonatomic, readonly) double expectedGpsUpdateInterval;
@property (nonatomic, readonly) bool hasLocation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CLHeading *heading;
@property (nonatomic) int headingOrientation;
@property (nonatomic, readonly) bool isLastLocationStale;
@property (nonatomic, readonly) MNLocation *lastLocation;
@property (nonatomic, copy) id /* block */ locationCorrector;
@property (nonatomic, readonly) NSError *locationError;
@property (nonatomic, retain) <MNLocationProvider> *locationProvider;
@property (nonatomic, retain) <MNLocationRecorder> *locationRecorder;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeScale;

+ (id)sharedLocationManager;

- (void).cxx_destruct;
- (void)_locationProvider:(id)arg1 didUpdateLocation:(id)arg2;
- (void)_reportLocationFailureWithError:(id)arg1;
- (void)_reportLocationReset;
- (void)_reportLocationStatus:(SEL)arg1;
- (void)_reportLocationSuccess;
- (void)_setTrackingLocation:(bool)arg1;
- (void)_startLocationUpdateWithObserver:(id)arg1 desiredAccuracy:(double)arg2;
- (void)_syncLocationProviderWithTracking;
- (void)_useCoreLocationProvider;
- (long long)activityType;
- (void)dealloc;
- (double)desiredAccuracy;
- (double)distanceFilter;
- (id)effectiveBundle;
- (id)effectiveBundleIdentifier;
- (double)expectedGpsUpdateInterval;
- (bool)hasLocation;
- (id)heading;
- (int)headingOrientation;
- (id)init;
- (bool)isLastLocationStale;
- (bool)isLocationServicesApproved;
- (bool)isLocationServicesAuthorizationNeeded;
- (bool)isLocationServicesAvailable;
- (bool)isLocationServicesDenied;
- (bool)isLocationServicesPossiblyAvailable;
- (bool)isLocationServicesPossiblyAvailable:(id*)arg1;
- (bool)isLocationServicesRestricted;
- (id)lastGoodLocation;
- (id)lastLocation;
- (int)lastLocationSource;
- (void)listenForLocationUpdates:(id)arg1;
- (id /* block */)locationCorrector;
- (id)locationError;
- (id)locationProvider;
- (void)locationProvider:(id)arg1 didReceiveError:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationProvider:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationProviderDidChangeAuthorizationStatus:(id)arg1;
- (void)locationProviderDidPauseLocationUpdates:(id)arg1;
- (void)locationProviderDidResumeLocationUpdates:(id)arg1;
- (bool)locationProviderShouldPauseLocationUpdates:(id)arg1;
- (id)locationRecorder;
- (void)pushLocation:(id)arg1;
- (void)reset;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)setActivityType:(long long)arg1;
- (void)setDesiredAccuracy:(double)arg1;
- (void)setDistanceFilter:(double)arg1;
- (void)setEffectiveBundle:(id)arg1;
- (void)setEffectiveBundleIdentifier:(id)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)setLastLocation:(id)arg1;
- (void)setLocationCorrector:(id /* block */)arg1;
- (void)setLocationProvider:(id)arg1;
- (void)setLocationRecorder:(id)arg1;
- (void)startLocationUpdateWithObserver:(id)arg1;
- (void)stopListeningForLocationUpdates:(id)arg1;
- (void)stopLocationUpdateWithObserver:(id)arg1;
- (double)timeScale;

@end
