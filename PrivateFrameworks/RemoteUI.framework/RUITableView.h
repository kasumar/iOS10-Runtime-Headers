/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUITableView : RUIElement <RUITableViewRowDelegate, RUITableViewSectionDelegate, RUITopLevelPageElement, RUIWebViewDelegate, UITableViewDataSource, UITableViewDelegate> {
    UIDatePicker * _datePicker;
    RUITableViewRow * _defaultFirstResponderRow;
    NSIndexPath * _embeddedPickerRowIndexPath;
    RUIFooterElement * _footer;
    float  _fullscreenCellHeight;
    RUIHeaderElement * _header;
    NSString * _headerTitle;
    float  _lastLayoutWidth;
    RUIObjectModel * _objectModel;
    RUIBarButtonItem * _oldLeftBarButtonItemForPicker;
    NSDate * _oldPickerDate;
    RUIBarButtonItem * _oldRightBarButtonItemForPicker;
    RUIPage * _page;
    RUIPhotoPicker * _photoPicker;
    _UIBackdropView * _pickerBackdrop;
    NSIndexPath * _pickerRowIndexPath;
    bool  _registeredForNotifications;
    NSMutableArray * _sections;
    UIPickerView * _selectPicker;
    bool  _showDatePicker;
    bool  _showSelectPicker;
    bool  _showingPickerNavBarButtons;
    RUISubHeaderElement * _subHeader;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) RUITableViewRow *defaultFirstResponderRow;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) RUIFooterElement *footer;
@property (nonatomic, retain) NSDictionary *footerViewAttributes;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) RUIHeaderElement *header;
@property (nonatomic, retain) NSString *headerTitle;
@property (nonatomic, readonly) RUIHeaderView *headerView;
@property (nonatomic, readonly) NSDictionary *headerViewAttributes;
@property (nonatomic) RUIObjectModel *objectModel;
@property (nonatomic) RUIPage *page;
@property (nonatomic, readonly) NSMutableArray *sections;
@property (nonatomic, retain) UIPickerView *selectPicker;
@property (getter=isShowingPicker, nonatomic, readonly) bool showingPicker;
@property (nonatomic, retain) RUISubHeaderElement *subHeader;
@property (readonly) Class superclass;

+ (void)_enableTestMode;

- (void).cxx_destruct;
- (bool)_becomeFirstResponderAtIndexPath:(id)arg1;
- (void)_clearPickers;
- (void)_datePickerRevert;
- (void)_enumerateRowsUsingBlock:(id /* block */)arg1;
- (void)_hideDatePickerNavBarButtonsIfNeeded;
- (void)_loadHeaderView;
- (id)_objectModelIndexPathForIndexPath:(id)arg1;
- (void)_registerForNotifications:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectPickerFrame;
- (void)_setBottomInset:(float)arg1;
- (void)_showDatePickerNavBarButtonsIfNeededForRow:(id)arg1;
- (struct CGSize { double x1; double x2; })_tableHeaderSizeForHeader:(id)arg1;
- (void)_textChanged:(id)arg1;
- (void)activateRowAtIndexPath:(id)arg1 animated:(bool)arg2;
- (void)automaticKeyboardDidHide:(id)arg1;
- (void)automaticKeyboardDidShow:(id)arg1;
- (void)datePickerCancel:(id)arg1;
- (void)datePickerDone:(id)arg1;
- (void)dealloc;
- (id)defaultFirstResponderRow;
- (id)footer;
- (id)footerViewAttributes;
- (id)header;
- (id)headerTitle;
- (id)headerView;
- (id)headerViewAttributes;
- (void)hidePickerViewAnimated:(bool)arg1;
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;
- (id)indexPathForRow:(id)arg1;
- (id)init;
- (bool)isShowingPicker;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)objectModel;
- (id)objectModelRowForIndexPath:(id)arg1;
- (id)page;
- (void)populatePostbackDictionary:(id)arg1;
- (void)reloadHeadersAndFootersForSection:(id)arg1;
- (void)row:(id)arg1 activatedElement:(id)arg2;
- (void)rowDidChange:(id)arg1 action:(int)arg2;
- (void)rowDidEndEditing:(id)arg1;
- (void)rowIsFirstResponder:(id)arg1;
- (id)rowWithIdentifier:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)section:(id)arg1 activatedElement:(id)arg2 completion:(id /* block */)arg3;
- (id)sections;
- (id)selectPicker;
- (void)setAttributes:(id)arg1;
- (void)setDefaultFirstResponderRow:(id)arg1;
- (void)setFooter:(id)arg1;
- (void)setFooterViewAttributes:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setHeaderViewAttributes:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageAlignment:(int)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setObjectModel:(id)arg1;
- (void)setPage:(id)arg1;
- (void)setSelectPicker:(id)arg1;
- (void)setSelectedRadioGroupRow:(id)arg1;
- (void)setSubHeader:(id)arg1;
- (void)showPickerViewForRow:(id)arg1 animated:(bool)arg2;
- (id)sourceURL;
- (id)sourceURLForRUITableViewRow;
- (id)sourceURLForRUITableViewSection;
- (id)subElementsWithName:(id)arg1;
- (id)subHeader;
- (Class)tableCellClassForTableViewRow:(id)arg1;
- (id)tableHeaderView;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 titleAlignmentForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 titleAlignmentForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)textFieldRow:(id)arg1 changeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldStartedEditing:(id)arg1;
- (id)titleLabel;
- (id)view;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayout;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (bool)webViewOM:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;

@end
