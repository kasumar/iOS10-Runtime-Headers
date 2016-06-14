/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKCalendarItemTitleInlineEditItem : EKCalendarItemEditItem <EKCalendarItemInlineEditItem, EKEditItemViewControllerDelegate, UITextFieldDelegate> {
    bool  _drawsOwnRowSeparators;
    UITableViewCell * _titleCell;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool drawsOwnRowSeparators;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITextField *titleTextField;

- (void).cxx_destruct;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (id)_makeCell:(unsigned long long)arg1;
- (void)_setDrawsOwnRowSeparatorsForCell:(id)arg1;
- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (bool)drawsOwnRowSeparators;
- (id)init;
- (bool)isInline;
- (bool)isSaveable;
- (unsigned long long)numberOfSubitems;
- (void)reset;
- (bool)saveAndDismissWithForce:(bool)arg1;
- (id)searchStringForEventAutocomplete;
- (void)setDrawsOwnRowSeparators:(bool)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldClear:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)titleTextField;
- (bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1;

@end
