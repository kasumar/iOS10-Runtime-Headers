/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewController : UIViewController <UIRefreshControlHosting, UITableViewDataSource, UITableViewDelegate, UITableViewFocusDelegateLegacy, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Deprecated, _UIKeyboardAutoRespondingScrollViewController> {
    _UIFilteredDataSource * _filteredDataSource;
    long long  _filteredDataType;
    UIAutoRespondingScrollViewControllerKeyboardSupport * _keyboardSupport;
    UITableViewDataSource * _staticDataSource;
    struct { 
        unsigned int clearsSelectionOnViewWillAppear : 1; 
        unsigned int insetsApplied : 1; 
        unsigned int adjustingInsets : 1; 
    }  _tableViewControllerFlags;
    long long  _tableViewStyle;
}

@property (nonatomic) bool clearsSelectionOnViewWillAppear;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIRefreshControl *refreshControl;
@property (getter=_scrollView, nonatomic, readonly, retain) UIScrollView<_UIKeyboardAutoRespondingScrollView> *scrollView;
@property (getter=_staticDataSource, setter=_setStaticDataSource:, nonatomic, retain) UITableViewDataSource *staticDataSource;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void).cxx_destruct;
- (void)_applyDefaultDataSourceToTable:(id)arg1;
- (id)_existingTableView;
- (long long)_filteredDataType;
- (void)_refreshFilteredDataSourceFilterTypeForScreen:(id)arg1;
- (long long)_resolvedDataSourceFilterTypeForScreen:(id)arg1;
- (id)_scrollView;
- (void)_setFilteredDataType:(long long)arg1;
- (void)_setStaticDataSource:(id)arg1;
- (bool)_shouldRespondToPreviewingMethods;
- (id)_staticDataSource;
- (bool)_viewControllerWasSelected;
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (bool)clearsSelectionOnViewWillAppear;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)previewViewControllerForLocation:(struct CGPoint { double x1; double x2; })arg1 inSourceView:(id)arg2;
- (id)previewViewControllerForRowAtIndexPath:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)refreshControl;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setClearsSelectionOnViewWillAppear:(bool)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setRefreshControl:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint { double x1; double x2; })arg2 inSourceView:(id)arg3;
- (void)willPresentPreviewViewController:(id)arg1 forPosition:(struct CGPoint { double x1; double x2; })arg2 inSourceView:(id)arg3;
- (void)willPresentPreviewViewController:(id)arg1 forRowAtIndexPath:(id)arg2;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (void)_cnui_beginRefreshingWithDuration:(double)arg1;
- (void)_cnui_updateAccountsRefreshControl;
- (void)refreshAccountsNow:(id)arg1;

@end
