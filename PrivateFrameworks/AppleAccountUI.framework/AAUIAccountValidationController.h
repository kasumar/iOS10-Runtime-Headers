/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIAccountValidationController : NSObject <AAUIRemoteUIRepairFlowDelegate> {
    ACAccount * _account;
    AAUIAccountRepairRemoteUI * _accountRepairRemoteUI;
    <AAUIAccountValidationControllerDelegate> * _delegate;
    AAUIRemoteUIRepairFlow * _flow;
    bool  _inHSAVerification;
    bool  _isPresentedModally;
    ACUIViewController * _presentingViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUIAccountValidationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)attemptHSALoginWithCompletion:(id /* block */)arg1;
- (id)delegate;
- (id)initWithAccount:(id)arg1 presentingViewController:(id)arg2 modal:(bool)arg3;
- (void)repairFlowWillHideViewController:(id)arg1;
- (void)repairFlowWillShowViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startHSAVerificationFlow;

@end
