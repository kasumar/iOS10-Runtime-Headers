/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAddressObject : NSObject <GEOAddressObjectProtocol> {
    <GEOAddressObjectProtocol> * _implementations;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasKnownAccuracy;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int knownAccuracy;
@property (readonly) Class superclass;

+ (unsigned char)_implementionType;
+ (id)addressObjectForPlaceData:(id)arg1;
+ (id)addressObjectWithPlaceDataAddressObject:(id)arg1 placeDataAddress:(id)arg2 placeDataInfo:(id)arg3 placeDataEntity:(id)arg4;
+ (bool)isMarkingMMStrings;
+ (bool)isUsingMM;
+ (bool)isUsingV1Behavior;
+ (id)libraryVersion;
+ (void)markMMStrings:(bool)arg1;
+ (void)useMM:(bool)arg1;
+ (void)useV1Behavior:(bool)arg1;

- (id)_implemention;
- (id)address;
- (id)cityDisplayNameWithFallback:(bool)arg1;
- (void)dealloc;
- (id)fullAddressWithMultiline:(bool)arg1;
- (bool)hasKnownAccuracy;
- (id)initWithPlaceDataAddressObject:(id)arg1 placeDataAddress:(id)arg2 placeDataInfo:(id)arg3 placeDataEntity:(id)arg4 language:(id)arg5 country:(id)arg6 phoneticLocale:(id)arg7;
- (int)knownAccuracy;
- (id)name;
- (id)parkingDisplayName;
- (id)phoneticAddress;
- (id)phoneticLocaleIdentifier;
- (id)phoneticName;
- (id)rawBytes;
- (id)shortAddress;
- (id)spokenAddress;
- (id)spokenAddressForLocale:(id)arg1;
- (id)spokenName;
- (id)spokenStructuredAddress;
- (id)titlesForMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)weatherDisplayName;

@end
