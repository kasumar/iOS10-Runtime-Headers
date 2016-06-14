/* Generated by RuntimeBrowser.
 */

@protocol VKLabelNavFeature

@required

- (long long)intraRoadPriority;
- (bool)isAwayFromRoute;
- (bool)isGuidanceStepStart;
- (bool)isInGuidance;
- (bool)isOnRoute;
- (bool)isRamp;
- (bool)isStartOfRoadName;
- (NSString *)name;
- (void)prepareStyleVarsWithContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg1;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeOffset;
- (NSString *)shieldDisplayGroup;

@end
