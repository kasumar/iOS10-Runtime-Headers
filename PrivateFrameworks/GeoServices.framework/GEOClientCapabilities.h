/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOClientCapabilities : PBCodable <NSCopying> {
    NSString * _appMajorVersion;
    NSString * _appMinorVersion;
    bool  _clusteredTransitRoutesSupported;
    NSString * _deviceCountryCode;
    NSMutableArray * _displayLanguages;
    NSString * _displayRegion;
    GEOFormattedStringClientCapabilities * _formattedStringClientCapabilities;
    NSString * _hardwareModel;
    struct { 
        unsigned int maxFormatterSupported : 1; 
        unsigned int maxManeuverTypeSupported : 1; 
        unsigned int maxRouteIncidentSupported : 1; 
        unsigned int maxTrafficSpeedSupported : 1; 
        unsigned int transitMarketSupport : 1; 
        unsigned int clusteredTransitRoutesSupported : 1; 
        unsigned int internalInstall : 1; 
        unsigned int routeOptionsSupported : 1; 
    }  _has;
    bool  _internalInstall;
    int  _maxFormatterSupported;
    int  _maxManeuverTypeSupported;
    int  _maxRouteIncidentSupported;
    unsigned int  _maxTrafficSpeedSupported;
    bool  _routeOptionsSupported;
    int  _transitMarketSupport;
}

@property (nonatomic, retain) NSString *appMajorVersion;
@property (nonatomic, retain) NSString *appMinorVersion;
@property (nonatomic) bool clusteredTransitRoutesSupported;
@property (nonatomic, retain) NSString *deviceCountryCode;
@property (nonatomic, retain) NSMutableArray *displayLanguages;
@property (nonatomic, retain) NSString *displayRegion;
@property (nonatomic, retain) GEOFormattedStringClientCapabilities *formattedStringClientCapabilities;
@property (nonatomic, retain) NSString *hardwareModel;
@property (nonatomic, readonly) bool hasAppMajorVersion;
@property (nonatomic, readonly) bool hasAppMinorVersion;
@property (nonatomic) bool hasClusteredTransitRoutesSupported;
@property (nonatomic, readonly) bool hasDeviceCountryCode;
@property (nonatomic, readonly) bool hasDisplayRegion;
@property (nonatomic, readonly) bool hasFormattedStringClientCapabilities;
@property (nonatomic, readonly) bool hasHardwareModel;
@property (nonatomic) bool hasInternalInstall;
@property (nonatomic) bool hasMaxFormatterSupported;
@property (nonatomic) bool hasMaxManeuverTypeSupported;
@property (nonatomic) bool hasMaxRouteIncidentSupported;
@property (nonatomic) bool hasMaxTrafficSpeedSupported;
@property (nonatomic) bool hasRouteOptionsSupported;
@property (nonatomic) bool hasTransitMarketSupport;
@property (nonatomic) bool internalInstall;
@property (nonatomic) int maxFormatterSupported;
@property (nonatomic) int maxManeuverTypeSupported;
@property (nonatomic) int maxRouteIncidentSupported;
@property (nonatomic) unsigned int maxTrafficSpeedSupported;
@property (nonatomic) bool routeOptionsSupported;
@property (nonatomic) int transitMarketSupport;

+ (Class)displayLanguagesType;

- (int)StringAsMaxManeuverTypeSupported:(id)arg1;
- (int)StringAsTransitMarketSupport:(id)arg1;
- (void)addDisplayLanguages:(id)arg1;
- (id)appMajorVersion;
- (id)appMinorVersion;
- (void)clearDisplayLanguages;
- (bool)clusteredTransitRoutesSupported;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceCountryCode;
- (id)dictionaryRepresentation;
- (id)displayLanguages;
- (id)displayLanguagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)displayLanguagesCount;
- (id)displayRegion;
- (id)formattedStringClientCapabilities;
- (id)hardwareModel;
- (bool)hasAppMajorVersion;
- (bool)hasAppMinorVersion;
- (bool)hasClusteredTransitRoutesSupported;
- (bool)hasDeviceCountryCode;
- (bool)hasDisplayRegion;
- (bool)hasFormattedStringClientCapabilities;
- (bool)hasHardwareModel;
- (bool)hasInternalInstall;
- (bool)hasMaxFormatterSupported;
- (bool)hasMaxManeuverTypeSupported;
- (bool)hasMaxRouteIncidentSupported;
- (bool)hasMaxTrafficSpeedSupported;
- (bool)hasRouteOptionsSupported;
- (bool)hasTransitMarketSupport;
- (unsigned long long)hash;
- (bool)internalInstall;
- (bool)isEqual:(id)arg1;
- (int)maxFormatterSupported;
- (int)maxManeuverTypeSupported;
- (id)maxManeuverTypeSupportedAsString:(int)arg1;
- (int)maxRouteIncidentSupported;
- (unsigned int)maxTrafficSpeedSupported;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (bool)routeOptionsSupported;
- (void)setAppMajorVersion:(id)arg1;
- (void)setAppMinorVersion:(id)arg1;
- (void)setClusteredTransitRoutesSupported:(bool)arg1;
- (void)setDeviceCountryCode:(id)arg1;
- (void)setDisplayLanguages:(id)arg1;
- (void)setDisplayRegion:(id)arg1;
- (void)setFormattedStringClientCapabilities:(id)arg1;
- (void)setHardwareModel:(id)arg1;
- (void)setHasClusteredTransitRoutesSupported:(bool)arg1;
- (void)setHasInternalInstall:(bool)arg1;
- (void)setHasMaxFormatterSupported:(bool)arg1;
- (void)setHasMaxManeuverTypeSupported:(bool)arg1;
- (void)setHasMaxRouteIncidentSupported:(bool)arg1;
- (void)setHasMaxTrafficSpeedSupported:(bool)arg1;
- (void)setHasRouteOptionsSupported:(bool)arg1;
- (void)setHasTransitMarketSupport:(bool)arg1;
- (void)setInternalInstall:(bool)arg1;
- (void)setMaxFormatterSupported:(int)arg1;
- (void)setMaxManeuverTypeSupported:(int)arg1;
- (void)setMaxRouteIncidentSupported:(int)arg1;
- (void)setMaxTrafficSpeedSupported:(unsigned int)arg1;
- (void)setRouteOptionsSupported:(bool)arg1;
- (void)setTransitMarketSupport:(int)arg1;
- (int)transitMarketSupport;
- (id)transitMarketSupportAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
