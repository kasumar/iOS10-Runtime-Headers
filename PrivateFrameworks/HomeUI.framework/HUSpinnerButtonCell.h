/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUSpinnerButtonCell : HUButtonCell <HUCellProtocol> {
    bool  _showSpinner;
    UIActivityIndicatorView * _spinner;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic) bool showSpinner;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)createSpinner;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setShowSpinner:(bool)arg1;
- (void)setSpinner:(id)arg1;
- (bool)showSpinner;
- (id)spinner;

@end
