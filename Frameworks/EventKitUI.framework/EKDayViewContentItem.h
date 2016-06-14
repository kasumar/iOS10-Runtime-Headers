/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKDayViewContentItem : NSObject <CUIKSingleDayTimelineViewItem> {
    double  _bottomPinningProximity;
    EKCalendarDate * _endDate;
    unsigned long long  _eventIndex;
    EKCalendarDate * _startDate;
    double  _topPinningProximity;
    double  _travelTime;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _unPinnedViewFrame;
    EKDayOccurrenceView * _view;
}

@property (nonatomic) double bottomPinningProximity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *end;
@property (nonatomic, copy) EKCalendarDate *endDate;
@property (nonatomic, readonly) double enoughHeightForOneLine;
@property (nonatomic, readonly) EKEvent *event;
@property (nonatomic, readonly) unsigned long long eventIndex;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hideTravelTime;
@property (nonatomic, readonly) NSDate *start;
@property (nonatomic, copy) EKCalendarDate *startDate;
@property (nonatomic, readonly, copy) EKCalendarDate *startDateIncludingTravelTime;
@property (nonatomic, readonly) NSDate *startWithTravelTime;
@property (readonly) Class superclass;
@property (nonatomic) double topPinningProximity;
@property (nonatomic) double travelTime;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } unPinnedViewFrame;
@property (nonatomic, retain) EKDayOccurrenceView *view;
@property (nonatomic, readonly) double viewMaxNaturalTextHeight;
@property (readonly) bool visibleHeightLocked;

+ (double)barToBarHorizontalDistanceIncludingBarWidth;

- (void).cxx_destruct;
- (double)bottomPinningProximity;
- (id)description;
- (id)end;
- (id)endDate;
- (double)enoughHeightForOneLine;
- (id)event;
- (unsigned long long)eventIndex;
- (bool)hideTravelTime;
- (id)initWithEventIndex:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPinned;
- (void)setBottomPinningProximity:(double)arg1;
- (void)setEndDate:(id)arg1;
- (void)setStagedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStartDate:(id)arg1;
- (void)setTopPinningProximity:(double)arg1;
- (void)setTravelTime:(double)arg1;
- (void)setTravelTimeHeight:(double)arg1;
- (void)setUnPinnedViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setView:(id)arg1;
- (void)setVisibleHeight:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })stagedFrame;
- (id)start;
- (id)startDate;
- (id)startDateIncludingTravelTime;
- (id)startWithTravelTime;
- (double)topPinningProximity;
- (double)travelTime;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unPinnedViewFrame;
- (id)view;
- (double)viewMaxNaturalTextHeight;
- (bool)visibleHeightLocked;

@end
