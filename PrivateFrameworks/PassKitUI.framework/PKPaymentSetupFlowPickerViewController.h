/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupFlowPickerViewController : PKPaymentSetupTableViewController {
    PKTableHeaderView * _headerView;
    NSMutableArray * _pickerItems;
    PKPaymentWebService * _webService;
}

@property (nonatomic, readonly) PKTableHeaderView *headerView;
@property (nonatomic, readonly) NSArray *pickerItems;
@property (nonatomic, readonly) PKPaymentWebService *webService;

- (void).cxx_destruct;
- (void)_setNavigationBarEnabled:(bool)arg1;
- (void)addPickerItem:(id)arg1;
- (id)headerView;
- (void)hideActivitySpinner;
- (id)initWithWebService:(id)arg1 context:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)pickerItems;
- (void)showActivitySpinner;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id)webService;

@end
