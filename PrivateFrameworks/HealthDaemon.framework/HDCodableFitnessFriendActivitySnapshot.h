/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableFitnessFriendActivitySnapshot : PBCodable <HDDecoding, NSCopying> {
    double  _activeHours;
    double  _activeHoursGoal;
    double  _briskMinutes;
    double  _briskMinutesGoal;
    double  _date;
    double  _energyBurned;
    double  _energyBurnedGoal;
    NSData * _friendUUID;
    struct { 
        unsigned int activeHours : 1; 
        unsigned int activeHoursGoal : 1; 
        unsigned int briskMinutes : 1; 
        unsigned int briskMinutesGoal : 1; 
        unsigned int date : 1; 
        unsigned int energyBurned : 1; 
        unsigned int energyBurnedGoal : 1; 
        unsigned int pushCount : 1; 
        unsigned int snapshotIndex : 1; 
        unsigned int stepCount : 1; 
        unsigned int timeZoneOffsetFromUTCForNoon : 1; 
        unsigned int uploadedDate : 1; 
        unsigned int walkingAndRunningDistance : 1; 
        unsigned int wheelchairUse : 1; 
    }  _has;
    double  _pushCount;
    HDCodableSample * _sample;
    long long  _snapshotIndex;
    NSData * _sourceUUID;
    double  _stepCount;
    long long  _timeZoneOffsetFromUTCForNoon;
    double  _uploadedDate;
    double  _walkingAndRunningDistance;
    long long  _wheelchairUse;
}

@property (nonatomic) double activeHours;
@property (nonatomic) double activeHoursGoal;
@property (nonatomic) double briskMinutes;
@property (nonatomic) double briskMinutesGoal;
@property (nonatomic) double date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double energyBurned;
@property (nonatomic) double energyBurnedGoal;
@property (nonatomic, retain) NSData *friendUUID;
@property (nonatomic) bool hasActiveHours;
@property (nonatomic) bool hasActiveHoursGoal;
@property (nonatomic) bool hasBriskMinutes;
@property (nonatomic) bool hasBriskMinutesGoal;
@property (nonatomic) bool hasDate;
@property (nonatomic) bool hasEnergyBurned;
@property (nonatomic) bool hasEnergyBurnedGoal;
@property (nonatomic, readonly) bool hasFriendUUID;
@property (nonatomic) bool hasPushCount;
@property (nonatomic, readonly) bool hasSample;
@property (nonatomic) bool hasSnapshotIndex;
@property (nonatomic, readonly) bool hasSourceUUID;
@property (nonatomic) bool hasStepCount;
@property (nonatomic) bool hasTimeZoneOffsetFromUTCForNoon;
@property (nonatomic) bool hasUploadedDate;
@property (nonatomic) bool hasWalkingAndRunningDistance;
@property (nonatomic) bool hasWheelchairUse;
@property (readonly) unsigned long long hash;
@property (nonatomic) double pushCount;
@property (nonatomic, retain) HDCodableSample *sample;
@property (nonatomic) long long snapshotIndex;
@property (nonatomic, retain) NSData *sourceUUID;
@property (nonatomic) double stepCount;
@property (readonly) Class superclass;
@property (nonatomic) long long timeZoneOffsetFromUTCForNoon;
@property (nonatomic) double uploadedDate;
@property (nonatomic) double walkingAndRunningDistance;
@property (nonatomic) long long wheelchairUse;

- (void).cxx_destruct;
- (double)activeHours;
- (double)activeHoursGoal;
- (bool)applyToObject:(id)arg1;
- (double)briskMinutes;
- (double)briskMinutesGoal;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)date;
- (id)description;
- (id)dictionaryRepresentation;
- (double)energyBurned;
- (double)energyBurnedGoal;
- (id)friendUUID;
- (bool)hasActiveHours;
- (bool)hasActiveHoursGoal;
- (bool)hasBriskMinutes;
- (bool)hasBriskMinutesGoal;
- (bool)hasDate;
- (bool)hasEnergyBurned;
- (bool)hasEnergyBurnedGoal;
- (bool)hasFriendUUID;
- (bool)hasPushCount;
- (bool)hasSample;
- (bool)hasSnapshotIndex;
- (bool)hasSourceUUID;
- (bool)hasStepCount;
- (bool)hasTimeZoneOffsetFromUTCForNoon;
- (bool)hasUploadedDate;
- (bool)hasWalkingAndRunningDistance;
- (bool)hasWheelchairUse;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)pushCount;
- (bool)readFrom:(id)arg1;
- (id)sample;
- (void)setActiveHours:(double)arg1;
- (void)setActiveHoursGoal:(double)arg1;
- (void)setBriskMinutes:(double)arg1;
- (void)setBriskMinutesGoal:(double)arg1;
- (void)setDate:(double)arg1;
- (void)setEnergyBurned:(double)arg1;
- (void)setEnergyBurnedGoal:(double)arg1;
- (void)setFriendUUID:(id)arg1;
- (void)setHasActiveHours:(bool)arg1;
- (void)setHasActiveHoursGoal:(bool)arg1;
- (void)setHasBriskMinutes:(bool)arg1;
- (void)setHasBriskMinutesGoal:(bool)arg1;
- (void)setHasDate:(bool)arg1;
- (void)setHasEnergyBurned:(bool)arg1;
- (void)setHasEnergyBurnedGoal:(bool)arg1;
- (void)setHasPushCount:(bool)arg1;
- (void)setHasSnapshotIndex:(bool)arg1;
- (void)setHasStepCount:(bool)arg1;
- (void)setHasTimeZoneOffsetFromUTCForNoon:(bool)arg1;
- (void)setHasUploadedDate:(bool)arg1;
- (void)setHasWalkingAndRunningDistance:(bool)arg1;
- (void)setHasWheelchairUse:(bool)arg1;
- (void)setPushCount:(double)arg1;
- (void)setSample:(id)arg1;
- (void)setSnapshotIndex:(long long)arg1;
- (void)setSourceUUID:(id)arg1;
- (void)setStepCount:(double)arg1;
- (void)setTimeZoneOffsetFromUTCForNoon:(long long)arg1;
- (void)setUploadedDate:(double)arg1;
- (void)setWalkingAndRunningDistance:(double)arg1;
- (void)setWheelchairUse:(long long)arg1;
- (long long)snapshotIndex;
- (id)sourceUUID;
- (double)stepCount;
- (long long)timeZoneOffsetFromUTCForNoon;
- (double)uploadedDate;
- (double)walkingAndRunningDistance;
- (long long)wheelchairUse;
- (void)writeTo:(id)arg1;

@end
