/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODataSetURLOverride : PBCodable <NSCopying> {
    NSString * _addressCorrectionInitURL;
    NSString * _addressCorrectionUpdateURL;
    NSString * _announcementsURL;
    NSString * _batchReverseGeocoderURL;
    NSString * _businessPortalBaseURL;
    unsigned int  _dataSet;
    NSString * _directionsURL;
    NSString * _dispatcherURL;
    NSString * _etaURL;
    struct { 
        unsigned int dataSet : 1; 
    }  _has;
    NSString * _logMessageUsageURL;
    NSString * _problemCategoriesURL;
    NSString * _problemOptInURL;
    NSString * _problemStatusURL;
    NSString * _problemSubmissionURL;
    NSString * _simpleETAURL;
    NSString * _spatialLookupURL;
}

@property (nonatomic, retain) NSString *addressCorrectionInitURL;
@property (nonatomic, retain) NSString *addressCorrectionUpdateURL;
@property (nonatomic, retain) NSString *announcementsURL;
@property (nonatomic, retain) NSString *batchReverseGeocoderURL;
@property (nonatomic, retain) NSString *businessPortalBaseURL;
@property (nonatomic) unsigned int dataSet;
@property (nonatomic, retain) NSString *directionsURL;
@property (nonatomic, retain) NSString *dispatcherURL;
@property (nonatomic, retain) NSString *etaURL;
@property (nonatomic, readonly) bool hasAddressCorrectionInitURL;
@property (nonatomic, readonly) bool hasAddressCorrectionUpdateURL;
@property (nonatomic, readonly) bool hasAnnouncementsURL;
@property (nonatomic, readonly) bool hasBatchReverseGeocoderURL;
@property (nonatomic, readonly) bool hasBusinessPortalBaseURL;
@property (nonatomic) bool hasDataSet;
@property (nonatomic, readonly) bool hasDirectionsURL;
@property (nonatomic, readonly) bool hasDispatcherURL;
@property (nonatomic, readonly) bool hasEtaURL;
@property (nonatomic, readonly) bool hasLogMessageUsageURL;
@property (nonatomic, readonly) bool hasProblemCategoriesURL;
@property (nonatomic, readonly) bool hasProblemOptInURL;
@property (nonatomic, readonly) bool hasProblemStatusURL;
@property (nonatomic, readonly) bool hasProblemSubmissionURL;
@property (nonatomic, readonly) bool hasSimpleETAURL;
@property (nonatomic, readonly) bool hasSpatialLookupURL;
@property (nonatomic, retain) NSString *logMessageUsageURL;
@property (nonatomic, retain) NSString *problemCategoriesURL;
@property (nonatomic, retain) NSString *problemOptInURL;
@property (nonatomic, retain) NSString *problemStatusURL;
@property (nonatomic, retain) NSString *problemSubmissionURL;
@property (nonatomic, retain) NSString *simpleETAURL;
@property (nonatomic, retain) NSString *spatialLookupURL;

- (id)addressCorrectionInitURL;
- (id)addressCorrectionUpdateURL;
- (id)announcementsURL;
- (id)batchReverseGeocoderURL;
- (id)businessPortalBaseURL;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataSet;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsURL;
- (id)dispatcherURL;
- (id)etaURL;
- (bool)hasAddressCorrectionInitURL;
- (bool)hasAddressCorrectionUpdateURL;
- (bool)hasAnnouncementsURL;
- (bool)hasBatchReverseGeocoderURL;
- (bool)hasBusinessPortalBaseURL;
- (bool)hasDataSet;
- (bool)hasDirectionsURL;
- (bool)hasDispatcherURL;
- (bool)hasEtaURL;
- (bool)hasLogMessageUsageURL;
- (bool)hasProblemCategoriesURL;
- (bool)hasProblemOptInURL;
- (bool)hasProblemStatusURL;
- (bool)hasProblemSubmissionURL;
- (bool)hasSimpleETAURL;
- (bool)hasSpatialLookupURL;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)logMessageUsageURL;
- (void)mergeFrom:(id)arg1;
- (id)problemCategoriesURL;
- (id)problemOptInURL;
- (id)problemStatusURL;
- (id)problemSubmissionURL;
- (bool)readFrom:(id)arg1;
- (void)setAddressCorrectionInitURL:(id)arg1;
- (void)setAddressCorrectionUpdateURL:(id)arg1;
- (void)setAnnouncementsURL:(id)arg1;
- (void)setBatchReverseGeocoderURL:(id)arg1;
- (void)setBusinessPortalBaseURL:(id)arg1;
- (void)setDataSet:(unsigned int)arg1;
- (void)setDirectionsURL:(id)arg1;
- (void)setDispatcherURL:(id)arg1;
- (void)setEtaURL:(id)arg1;
- (void)setHasDataSet:(bool)arg1;
- (void)setLogMessageUsageURL:(id)arg1;
- (void)setProblemCategoriesURL:(id)arg1;
- (void)setProblemOptInURL:(id)arg1;
- (void)setProblemStatusURL:(id)arg1;
- (void)setProblemSubmissionURL:(id)arg1;
- (void)setSimpleETAURL:(id)arg1;
- (void)setSpatialLookupURL:(id)arg1;
- (id)simpleETAURL;
- (id)spatialLookupURL;
- (void)writeTo:(id)arg1;

@end
