/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
 */

@interface ICQUpgradeFlowManager : NSObject <ICQPageDelegate, PSCloudStorageOffersManagerDelegate, UINavigationControllerDelegate> {
    ICQUpgradeOfferViewController * _busyOfferViewController;
    NSURLSession * _buyProductSession;
    <ICQUpgradeFlowManagerDelegate> * _delegate;
    ICQOffer * _offer;
    PSCloudStorageOffersManager * _storageOffersManager;
    ICQUpgradeNavigationController * _upgradeNavigationController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ICQUpgradeFlowManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ICQOffer *offer;
@property (nonatomic, retain) PSCloudStorageOffersManager *storageOffersManager;
@property (readonly) Class superclass;
@property (nonatomic, retain) ICQUpgradeNavigationController *upgradeNavigationController;

+ (bool)shouldShowForOffer:(id)arg1;

- (void).cxx_destruct;
- (void)_adoptRemoteUI;
- (void)_adoptRemoteUIWithPurchaseToken:(id)arg1 buyParameters:(id)arg2 requestHeaders:(id)arg3;
- (id)_buyProductQueryDictionary;
- (id)_buyProductQueryFragment;
- (id)_buyProductQueryItems;
- (id)_buyProductQueryKeySet;
- (id)_buyProductRequestWithAccount:(id)arg1 token:(id)arg2;
- (void)_buyProductShouldUseToken:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)_buyProductURL;
- (void)_clearBusyOfferViewController;
- (void)_performPurchase;
- (void)_performPurchaseUsingSettingsUI;
- (void)_performPurchaseUsingTouchID;
- (void)_presentUpgradeComplete;
- (void)_setBusyOfferViewController:(id)arg1;
- (id)_storageContextHeaderDictionary;
- (id)_storageContextJSONString;
- (void)beginFlowWithPresentingViewController:(id)arg1;
- (void)cancelFlow;
- (id)delegate;
- (id)init;
- (id)initWithOffer:(id)arg1;
- (void)manager:(id)arg1 loadDidFailWithError:(id)arg2;
- (void)manager:(id)arg1 willPresentViewController:(id)arg2;
- (void)managerDidCancel:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (id)offer;
- (void)sender:(id)arg1 action:(long long)arg2 parameters:(id)arg3;
- (double)senderGetTopMargin:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStorageOffersManager:(id)arg1;
- (void)setUpgradeNavigationController:(id)arg1;
- (id)storageOffersManager;
- (id)upgradeNavigationController;

@end
