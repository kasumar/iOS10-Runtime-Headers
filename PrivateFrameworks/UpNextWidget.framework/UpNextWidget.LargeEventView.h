/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UpNextWidget.framework/UpNextWidget
 */

@interface UpNextWidget.LargeEventView : UIView {
    void bottomTravelAdvisoryBaselineDistance;
    void calendarColor;
    void dateInterval;
    void gutterizedEventView;
    void gutterizedViewTapped;
    void location;
    void mapImage;
    void mapView;
    void mapViewTapped;
    void persistentConstraints;
    void showExpandedMode;
    void title;
    void travelAdvisoryText;
    void travelAdvisoryView;
    void travelAdvisoryViewTapped;
}

@property (nonatomic, retain) UIColor *calendarColor;
@property (nonatomic, retain) NSDateInterval *dateInterval;
@property (nonatomic, readonly) UIView *forFirstBaselineLayout;
@property (nonatomic, copy) id /* block */ gutterizedViewTapped;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, retain) UIImage *mapImage;
@property (nonatomic, copy) id /* block */ mapViewTapped;
@property (nonatomic) bool showExpandedMode;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) NSAttributedString *travelAdvisoryText;
@property (nonatomic, copy) id /* block */ travelAdvisoryViewTapped;

+ (bool)requiresConstraintBasedLayout;

- (id /* block */).cxx_destruct;
- (id)calendarColor;
- (id)dateInterval;
- (id /* block */)gutterizedViewTapped;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)location;
- (id)mapImage;
- (id /* block */)mapViewTapped;
- (void)recognizerTriggeredForGutterizedViewWithGestureRecognizer:(id)arg1;
- (void)recognizerTriggeredForMapViewWithGestureRecognizer:(id)arg1;
- (void)recognizerTriggeredForTravelAdvisoryViewWithGestureRecognizer:(id)arg1;
- (void)setCalendarColor:(id)arg1;
- (void)setDateInterval:(id)arg1;
- (void)setGutterizedViewTapped:(id /* block */)arg1;
- (void)setLocation:(id)arg1;
- (void)setMapImage:(id)arg1;
- (void)setMapViewTapped:(id /* block */)arg1;
- (void)setShowExpandedMode:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTravelAdvisoryText:(id)arg1;
- (void)setTravelAdvisoryViewTapped:(id /* block */)arg1;
- (bool)showExpandedMode;
- (id)title;
- (id)travelAdvisoryText;
- (id /* block */)travelAdvisoryViewTapped;
- (void)updateConstraints;
- (id)viewForFirstBaselineLayout;

@end
