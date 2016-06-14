/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDRoutineLocationOfInterest : NSObject {
    double  _confidence;
    NSUUID * _identifier;
    double  _latitude;
    double  _longitude;
    long long  _type;
    double  _uncertainty;
    NSArray * _visits;
}

@property (nonatomic) double confidence;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) long long type;
@property (nonatomic) double uncertainty;
@property (nonatomic, retain) NSArray *visits;

- (void).cxx_destruct;
- (double)confidence;
- (id)identifier;
- (id)initWithCodable:(id)arg1;
- (id)initWithLocationOfInterest:(id)arg1;
- (double)latitude;
- (double)longitude;
- (void)setConfidence:(double)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setType:(long long)arg1;
- (void)setUncertainty:(double)arg1;
- (void)setVisits:(id)arg1;
- (long long)type;
- (double)uncertainty;
- (id)visits;

@end
