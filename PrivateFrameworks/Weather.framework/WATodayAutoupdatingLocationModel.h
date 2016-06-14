/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WATodayAutoupdatingLocationModel : WATodayModel <CLLocationManagerDelegate, SynchronizedDefaultsDelegate> {
    id /* block */  _WeatherLocationManagerGenerator;
    unsigned long long  _citySource;
    bool  _hasLocationChangedSinceLastUpdate;
    bool  _isLocationTrackingEnabled;
    NSMutableSet * _locationCompletionHandlers;
    WeatherLocationManager * _locationManager;
    bool  _locationServicesActive;
    WeatherPreferences * _preferences;
}

@property (nonatomic, copy) id /* block */ WeatherLocationManagerGenerator;
@property (nonatomic) unsigned long long citySource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasLocationChangedSinceLastUpdate;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLocationTrackingEnabled;
@property (nonatomic, retain) NSMutableSet *locationCompletionHandlers;
@property (nonatomic, retain) WeatherLocationManager *locationManager;
@property (nonatomic) bool locationServicesActive;
@property (nonatomic, retain) WeatherPreferences *preferences;
@property (readonly) Class superclass;

+ (id)_loadSavedFirstCityFromPreferences:(id)arg1;
+ (id)_loadSavedLastForecastModelFromPreferences:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)WeatherLocationManagerGenerator;
- (void)_clearLocalWeatherUpdateState:(bool)arg1;
- (void)_executeForecastRetrievalForLocation:(id)arg1 completion:(id /* block */)arg2;
- (void)_executeLocationUpdateForFirstWeatherCityWithCompletion:(id /* block */)arg1;
- (void)_executeLocationUpdateForLocalWeatherCityWithCompletion:(id /* block */)arg1;
- (void)_executeLocationUpdateWithCompletion:(id /* block */)arg1;
- (void)_fetchWFLocationFromCLLocation:(id)arg1;
- (void)_kickstartLocationManager;
- (void)_persistState;
- (bool)_reloadForecastData:(bool)arg1;
- (void)_teardownLocationManager;
- (void)_weatherPreferencesWereSynchronized:(id)arg1;
- (unsigned long long)citySource;
- (void)dealloc;
- (id)forecastModel;
- (bool)hasLocationChangedSinceLastUpdate;
- (id)init;
- (id)initWithPreferences:(id)arg1 effectiveBundleIdentifier:(id)arg2;
- (bool)isLocationTrackingEnabled;
- (id)location;
- (id)locationCompletionHandlers;
- (id)locationManager;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (bool)locationServicesActive;
- (id)preferences;
- (void)setCitySource:(unsigned long long)arg1;
- (void)setCitySource:(unsigned long long)arg1 fireNotification:(bool)arg2;
- (void)setHasLocationChangedSinceLastUpdate:(bool)arg1;
- (void)setIsLocationTrackingEnabled:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationCompletionHandlers:(id)arg1;
- (void)setLocationManager:(id)arg1;
- (void)setLocationServicesActive:(bool)arg1;
- (void)setPreferences:(id)arg1;
- (void)setWeatherLocationManagerGenerator:(id /* block */)arg1;
- (void)ubiquitousDefaultsDidChange:(id)arg1;

@end
