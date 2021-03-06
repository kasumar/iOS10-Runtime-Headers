/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDClientMetadata : PBCodable <NSCopying> {
    GEOAdditionalEnabledMarkets * _additionalEnabledMarkets;
    unsigned int  _dayOfWeek;
    NSString * _debugApiKey;
    NSString * _deviceCountryCode;
    NSString * _deviceDisplayLanguage;
    GEOLocation * _deviceExtendedLocation;
    NSMutableArray * _deviceHistoricalLocations;
    NSString * _deviceKeyboardLanguage;
    GEOLatLng * _deviceLocation;
    NSString * _deviceSpokenLanguage;
    struct { 
        unsigned int dayOfWeek : 1; 
        unsigned int hourOfDay : 1; 
        unsigned int requiredVersion : 1; 
        unsigned int resultListAttributionSupport : 1; 
        unsigned int timeSinceMapEnteredForeground : 1; 
    }  _has;
    unsigned int  _hourOfDay;
    int  _requiredVersion;
    int  _resultListAttributionSupport;
    unsigned int  _timeSinceMapEnteredForeground;
}

@property (nonatomic, retain) GEOAdditionalEnabledMarkets *additionalEnabledMarkets;
@property (nonatomic) unsigned int dayOfWeek;
@property (nonatomic, retain) NSString *debugApiKey;
@property (nonatomic, retain) NSString *deviceCountryCode;
@property (nonatomic, retain) NSString *deviceDisplayLanguage;
@property (nonatomic, retain) GEOLocation *deviceExtendedLocation;
@property (nonatomic, retain) NSMutableArray *deviceHistoricalLocations;
@property (nonatomic, retain) NSString *deviceKeyboardLanguage;
@property (nonatomic, retain) GEOLatLng *deviceLocation;
@property (nonatomic, retain) NSString *deviceSpokenLanguage;
@property (nonatomic, readonly) bool hasAdditionalEnabledMarkets;
@property (nonatomic) bool hasDayOfWeek;
@property (nonatomic, readonly) bool hasDebugApiKey;
@property (nonatomic, readonly) bool hasDeviceCountryCode;
@property (nonatomic, readonly) bool hasDeviceDisplayLanguage;
@property (nonatomic, readonly) bool hasDeviceExtendedLocation;
@property (nonatomic, readonly) bool hasDeviceKeyboardLanguage;
@property (nonatomic, readonly) bool hasDeviceLocation;
@property (nonatomic, readonly) bool hasDeviceSpokenLanguage;
@property (nonatomic) bool hasHourOfDay;
@property (nonatomic) bool hasRequiredVersion;
@property (nonatomic) bool hasResultListAttributionSupport;
@property (nonatomic) bool hasTimeSinceMapEnteredForeground;
@property (nonatomic) unsigned int hourOfDay;
@property (nonatomic) int requiredVersion;
@property (nonatomic) int resultListAttributionSupport;
@property (nonatomic) unsigned int timeSinceMapEnteredForeground;

+ (Class)deviceHistoricalLocationType;

- (int)StringAsRequiredVersion:(id)arg1;
- (int)StringAsResultListAttributionSupport:(id)arg1;
- (void)addDeviceHistoricalLocation:(id)arg1;
- (id)additionalEnabledMarkets;
- (void)clearDeviceHistoricalLocations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dayOfWeek;
- (void)dealloc;
- (id)debugApiKey;
- (id)description;
- (id)deviceCountryCode;
- (id)deviceDisplayLanguage;
- (id)deviceExtendedLocation;
- (id)deviceHistoricalLocationAtIndex:(unsigned long long)arg1;
- (id)deviceHistoricalLocations;
- (unsigned long long)deviceHistoricalLocationsCount;
- (id)deviceKeyboardLanguage;
- (id)deviceLocation;
- (id)deviceSpokenLanguage;
- (id)dictionaryRepresentation;
- (bool)hasAdditionalEnabledMarkets;
- (bool)hasDayOfWeek;
- (bool)hasDebugApiKey;
- (bool)hasDeviceCountryCode;
- (bool)hasDeviceDisplayLanguage;
- (bool)hasDeviceExtendedLocation;
- (bool)hasDeviceKeyboardLanguage;
- (bool)hasDeviceLocation;
- (bool)hasDeviceSpokenLanguage;
- (bool)hasHourOfDay;
- (bool)hasRequiredVersion;
- (bool)hasResultListAttributionSupport;
- (bool)hasTimeSinceMapEnteredForeground;
- (unsigned long long)hash;
- (unsigned int)hourOfDay;
- (id)initWithTraits:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)requiredVersion;
- (id)requiredVersionAsString:(int)arg1;
- (int)resultListAttributionSupport;
- (id)resultListAttributionSupportAsString:(int)arg1;
- (void)setAdditionalEnabledMarkets:(id)arg1;
- (void)setDayOfWeek:(unsigned int)arg1;
- (void)setDebugApiKey:(id)arg1;
- (void)setDeviceCountryCode:(id)arg1;
- (void)setDeviceDisplayLanguage:(id)arg1;
- (void)setDeviceExtendedLocation:(id)arg1;
- (void)setDeviceHistoricalLocations:(id)arg1;
- (void)setDeviceKeyboardLanguage:(id)arg1;
- (void)setDeviceLocation:(id)arg1;
- (void)setDeviceSpokenLanguage:(id)arg1;
- (void)setHasDayOfWeek:(bool)arg1;
- (void)setHasHourOfDay:(bool)arg1;
- (void)setHasRequiredVersion:(bool)arg1;
- (void)setHasResultListAttributionSupport:(bool)arg1;
- (void)setHasTimeSinceMapEnteredForeground:(bool)arg1;
- (void)setHourOfDay:(unsigned int)arg1;
- (void)setRequiredVersion:(int)arg1;
- (void)setResultListAttributionSupport:(int)arg1;
- (void)setTimeSinceMapEnteredForeground:(unsigned int)arg1;
- (unsigned int)timeSinceMapEnteredForeground;
- (void)writeTo:(id)arg1;

@end
