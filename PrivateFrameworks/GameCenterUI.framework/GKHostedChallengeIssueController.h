/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKHostedChallengeIssueController : UIViewController <GKExtensionParentViewControllerProtocol> {
    GKChallenge * _challenge;
    id /* block */  _completionHandler;
    NSString * _defaultMessage;
    id /* block */  _dismissCompletionHandler;
    bool  _forcePicker;
    NSArray * _players;
    id /* block */  _receivedRemoteHandler;
    GKChallengeIssueHostViewController * _remoteViewController;
}

@property (nonatomic, retain) GKChallenge *challenge;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *defaultMessage;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissCompletionHandler;
@property (nonatomic) bool forcePicker;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *players;
@property (nonatomic, copy) id /* block */ receivedRemoteHandler;
@property (nonatomic, retain) GKChallengeIssueHostViewController *remoteViewController;
@property (readonly) Class superclass;

+ (bool)_preventsAppearanceProxyCustomization;
+ (id)hostedIssueControllerWithChallenge:(id)arg1 players:(id)arg2 defaultMessage:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)presentHostedIssueControllerWithChallenge:(id)arg1 players:(id)arg2 defaultMessage:(id)arg3;
+ (id)presentationQueue;

- (void)_setupChildViewController;
- (void)_setupRemoteViewController;
- (bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (id)challenge;
- (id /* block */)completionHandler;
- (void)dealloc;
- (id)defaultMessage;
- (id /* block */)dismissCompletionHandler;
- (void)doneWithPlayers:(id)arg1 message:(id)arg2;
- (void)extensionDidFinishWithError:(id)arg1;
- (bool)forcePicker;
- (id)initWithChallenge:(id)arg1 players:(id)arg2 defaultMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)players;
- (id /* block */)receivedRemoteHandler;
- (id)remoteViewController;
- (void)setChallenge:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDefaultMessage:(id)arg1;
- (void)setDismissCompletionHandler:(id /* block */)arg1;
- (void)setForcePicker:(bool)arg1;
- (void)setPlayers:(id)arg1;
- (void)setReceivedRemoteHandler:(id /* block */)arg1;
- (void)setRemoteViewController:(id)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldAutomaticallyForwardRotationMethods;

@end
