/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitRouteMatcher : GEORouteMatcher {
    double  _distanceToClosestWalkingSegment;
    GEOMapAccess * _mapAccess;
    GEOMotionContext * _motionContext;
    NSArray * _routeMatchUpdaters;
    NSArray * _stationsOnRoute;
    NSArray * _stepRanges;
}

@property (nonatomic, readonly) double distanceToClosestWalkingSegment;

- (void)_considerCandidateMatch:(id)arg1;
- (void)_finishRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;
- (void)_insertUpdater:(id)arg1 into:(id)arg2;
- (double)_scoreModifierForStep:(id)arg1 previousStep:(id)arg2;
- (bool)_shouldConsiderCourseForLocation:(id)arg1;
- (void)_startRouteMatch;
- (bool)_stepsInSameRange:(id)arg1 nextStep:(id)arg2;
- (void)dealloc;
- (double)distanceToClosestWalkingSegment;
- (id)initWithRoute:(id)arg1 motionContext:(id)arg2;
- (bool)isStationCoordinateOnRoute:(struct { double x1; double x2; })arg1;
- (id)mapAccess;
- (id)motionContext;
- (id)route;

@end
