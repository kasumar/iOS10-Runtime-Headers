/* Generated by RuntimeBrowser.
 */

@protocol CKBrowserViewControllerProtocol <NSObject>

@required

- (IMBalloonPlugin *)balloonPlugin;
- (IMBalloonPluginDataSource *)balloonPluginDataSource;
- (long long)browserPresentationStyle;
- (NSString *)conversationID;
- (void)dismiss;
- (bool)inExpandedPresentation;
- (id)initWithBalloonPlugin:(IMBalloonPlugin *)arg1;
- (id)initWithBalloonPlugin:(IMBalloonPlugin *)arg1 dataSource:(IMBalloonPluginDataSource *)arg2;
- (bool)isiMessage;
- (UIViewController *)presentationViewController;
- (NSObject<CKBrowserViewControllerSendDelegate> *)sendDelegate;
- (void)setBalloonPluginDataSource:(IMBalloonPluginDataSource *)arg1;
- (void)setConversationID:(NSString *)arg1;
- (void)setIsiMessage:(bool)arg1;
- (void)setPresentationViewController:(UIViewController *)arg1;
- (void)setSendDelegate:(NSObject<CKBrowserViewControllerSendDelegate> *)arg1;
- (bool)shouldShowChatChrome;
- (bool)supportsQuickView;
- (bool)wantsDarkUI;
- (bool)wantsOpaqueUI;

@optional

+ (bool)isVisibleInBrowser;

- (void)_updateContentOverlayInsetsForSelfAndChildren;
- (NSNumber *)adamID;
- (unsigned long long)badgeValue;
- (void)beginSuppressingAppearanceMethods;
- (CKBrowserDragManager *)browserDragManager;
- (bool)canReplaceDataSource;
- (id)cancelTouchesInView;
- (long long)currentBrowserConsumer;
- (void)endSuppressingAppearanceMethods;
- (void)forceTearDownRemoteView;
- (void)insertBrowserViewIntoHierarchy;
- (bool)isLoaded;
- (void)loadRemoteView;
- (void)messageAddedWithDataSource:(IMBalloonPluginDataSource *)arg1;
- (void)removeBrowserViewFromHierarchy;
- (NSData *)requestSnapshotDataForPersistance;
- (void)saveSnapshotForBrowserViewController;
- (void)setAdamID:(NSNumber *)arg1;
- (void)setCurrentBrowserConsumer:(long long)arg1;
- (void)unloadRemoteView;
- (void)viewDidTransitionToCompactPresentation;
- (void)viewDidTransitionToExpandedPresentation;
- (void)viewWillTransitionToCompactPresentation;
- (void)viewWillTransitionToExpandedPresentation;

@end
