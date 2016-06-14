/* Generated by RuntimeBrowser.
 */

@protocol NCCustomContentContainingLookView <NCLookView>

@required

- (UIScrollView *)_scrollView;
- (struct CGSize { double x1; double x2; })contentSizeExcludingActions;
- (unsigned long long)customContentLocation;
- (struct CGSize { double x1; double x2; })customContentSize;
- (bool)hidesNotificationContent;
- (void)setCustomContentLocation:(unsigned long long)arg1;
- (void)setCustomContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHidesNotificationContent:(bool)arg1;

@end
