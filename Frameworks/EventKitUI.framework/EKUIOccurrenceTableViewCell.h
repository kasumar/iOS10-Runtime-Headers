/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIOccurrenceTableViewCell : EKUITableViewCellWithPrimaryAndSecondaryFonts {
    UIImageView * _accessoryImageView;
    UIImageView * _angleStripeBackgroundView;
    EKUIOccurrenceTableViewCellLabel * _bottomTimeLabel;
    NSString * _bottomTimeString;
    NSDictionary * _bottomTimeStringDrawingAttributes;
    bool  _cancelled;
    ColorBarView * _colorBarView;
    NSLayoutConstraint * _contentBottom_to_secondaryTextBaseline_Constraint;
    NSLayoutConstraint * _contentTop_to_colorBarTop_Constraint;
    NSLayoutConstraint * _contentTop_to_primaryTextBaseline_Constraint;
    NSLayoutConstraint * _contentTop_to_travelTextBaseline_Constraint;
    EKUIOccurrenceTableViewCellLabel * _countdownLabel;
    NSLayoutConstraint * _countdownLabelBaseling_to_contentBottom_Constraint;
    NSLayoutConstraint * _countdownLabelRightMarginConstraint;
    NSString * _countdownLabelString;
    NSTimer * _countdownLabelUpdateTimer;
    bool  _declined;
    bool  _doesNotUseTemplate;
    NSArray * _ekUIOccurrenceTableViewCellConstraints;
    UIColor * _eventCalendarColor;
    EKCalendarDate * _eventEndDate;
    NSString * _eventLocation;
    EKCalendarDate * _eventStartDate;
    NSDate * _eventStartDateIncludingTravelTime;
    NSString * _eventTitle;
    NSLayoutConstraint * _horizontalDividerBarBottom_to_colorBarTop_Constraint;
    bool  _invitationTemplate;
    bool  _isAllDay;
    bool  _isBirthday;
    bool  _isFacebook;
    bool  _isFakeInvitation;
    bool  _isPast;
    bool  _isRecurring;
    bool  _isTemplateCell;
    bool  _needsReply;
    bool  _opaque;
    EKUIOccurrenceTableViewCellLabel * _primaryLabel;
    NSLayoutConstraint * _primaryTextBaseline_to_secondaryTextBaseline_Constraint;
    UIVisualEffect * _primaryVisualEffect;
    UIVisualEffectView * _primaryVisualEffectParentView;
    EKUIOccurrenceTableViewCellLabel * _secondaryLabel;
    NSDictionary * _secondaryStringDrawingAttributes;
    UIVisualEffect * _secondaryVisualEffect;
    UIVisualEffectView * _secondaryVisualEffectParentView;
    UIColor * _selectedBackGroundColor;
    bool  _tentative;
    NSLayoutConstraint * _timeTextLeftMarginConstraint;
    NSLayoutConstraint * _timeTextRightMarginConstraint;
    NSLayoutConstraint * _timeTextWidthConstraint;
    EKUIOccurrenceTableViewCellLabel * _topTimeLabel;
    NSString * _topTimeString;
    NSDictionary * _topTimeStringDrawingAttributes;
    NSString * _travelAddressString;
    NSDictionary * _travelAddressStringDrawingAttributes;
    EKUIOccurrenceTableViewCellLabel * _travelDepartureTimeLabel;
    NSString * _travelDepartureTimeString;
    NSDictionary * _travelDepartureTimeStringDrawingAttributes;
    NSLayoutConstraint * _travelTextBaseline_to_primaryTextBaseLine_Constraint;
    EKUIOccurrenceTableViewCellLabel * _travelTextLabel;
    NSString * _travelTextLabelString;
    NSDictionary * _travelTextLabelStringDrawingAttributes;
    double  _travelTime;
    ColorBarView * _travelTimeColorBarView;
    bool  _travelTimeTemplate;
}

@property (nonatomic) bool doesNotUseTemplate;
@property (nonatomic) bool isFakeInvitation;
@property (nonatomic) bool isTemplateCell;
@property (nonatomic, retain) UIVisualEffect *primaryVisualEffect;
@property (nonatomic, retain) UIVisualEffect *secondaryVisualEffect;

+ (id)_allDayLocalizedString;
+ (id)_birthdayIcon;
+ (void)_clearCaches;
+ (id)_facebookIcon;
+ (id)_needsReplyAngledStripeBackground;
+ (id)_needsReplyDot;
+ (id)_nowLocalizedString;
+ (double)_rightImageSpacing;
+ (id)_tentativeAngledStripeBackground;
+ (id)allReuseIdentifiers;
+ (id)cancelledDeclinedColorBarColor;
+ (double)cellHeightForWidth:(double)arg1;
+ (void)initialize;
+ (id)invitationPrimaryTextColor;
+ (id)needsReplyBackgroundColor;
+ (double)needsReplyStripeBackgroundAlpha;
+ (id)needsReplyStripeColor;
+ (id)normalBackgroundColor;
+ (id)normalBottomTimeTextColor;
+ (id)normalPrimaryTextColor;
+ (id)normalSecondaryTextColor;
+ (id)normalTopTimeTextColor;
+ (id)prefixPrimaryTextColor;
+ (bool)requiresConstraintBasedLayout;
+ (id)reuseIdentifierForEvent:(id)arg1;
+ (id)reuseIdentifierForTemplate;
+ (id)reuseIdentifierForTemplateInvitation;
+ (id)reuseIdentifierForTemplateWithTravelTime;
+ (id)strikethroughPrimaryTextColor;
+ (id)strikethroughSecondaryTextColor;
+ (id)strikethroughTimeTextColor;
+ (id)tentativeBackgroundColor;
+ (double)tentativeStripeBackgroundAlpha;
+ (id)tentativeStripeColor;
+ (bool)vibrant;

- (void).cxx_destruct;
- (void)_countdownTimerFired:(id)arg1;
- (void)_countdownTimerKill;
- (void)_countdownTimerStart;
- (id)_createParentVisualEffectViewWithVisualEffect:(id)arg1;
- (void)_createViewsForReuseIdentifier:(id)arg1;
- (bool)_eventIsNow;
- (double)_leftMarginForTimeViewsFromTimeWidth:(double)arg1;
- (double)_rightMarginForTimeViewsFromTimeWidth:(double)arg1;
- (id)_selectedBackgroundViewWithColor:(id)arg1;
- (void)_setUpConstraints;
- (id)_sharedNumberFormatter;
- (id)_textForBottomTimeLabel;
- (id)_textForCountdownLabel;
- (id)_textForDepartureTimeLabel;
- (id)_textForTopTimeLabel;
- (void)_updateAccessoryImage;
- (void)_updateAngleBackgroundColor;
- (void)_updateBottomTimeLabel;
- (void)_updateColorBarColor;
- (void)_updateContentForSizeCategoryChange:(id)arg1;
- (void)_updateCountdownLabel;
- (void)_updatePrimaryTextLabel;
- (void)_updateSecondaryTextLabel;
- (void)_updateTopTimeLabel;
- (void)_updateTravelDepartureTimeLabel;
- (void)_updateTravelTimeLabel;
- (double)_verticalSpacingBottomToBaselineForBottomLabel;
- (double)_verticalSpacingTopToBaselineForBottomLabel;
- (double)_verticalSpacingTopToBaselineForTopLabel;
- (double)_widthForTimeViews;
- (id)accessoryImage;
- (void)contentCategorySizeChanged;
- (void)dealloc;
- (id)detailTextLabel;
- (bool)doesNotUseTemplate;
- (void)forceUpdateOfAllElements;
- (id)imageView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isAllDay;
- (bool)isBirthday;
- (bool)isCancelled;
- (bool)isDeclined;
- (bool)isFacebook;
- (bool)isFakeInvitation;
- (bool)isPast;
- (bool)isTemplateCell;
- (bool)isTentative;
- (bool)needsReply;
- (id)primaryVisualEffect;
- (id)reuseIdentifier;
- (id)secondaryVisualEffect;
- (void)setDoesNotUseTemplate:(bool)arg1;
- (void)setIsFakeInvitation:(bool)arg1;
- (void)setIsTemplateCell:(bool)arg1;
- (void)setPrimaryVisualEffect:(id)arg1;
- (void)setSecondaryVisualEffect:(id)arg1;
- (id)textLabel;
- (void)updateConstraints;
- (void)updateWithEvent:(id)arg1 calendar:(id)arg2 placedUnderDayWithStartDate:(id)arg3 opaque:(bool)arg4 drawsDimmedForPast:(bool)arg5;
- (void)updateWithEvent:(id)arg1 calendar:(id)arg2 placedUnderDayWithStartDate:(id)arg3 opaque:(bool)arg4 drawsDimmedForPast:(bool)arg5 includingTravelTime:(bool)arg6;
- (void)updateWithEvent:(id)arg1 calendar:(id)arg2 placedUnderDayWithStartDate:(id)arg3 opaque:(bool)arg4 drawsDimmedForPast:(bool)arg5 includingTravelTime:(bool)arg6 includingCountdown:(bool)arg7;

@end
