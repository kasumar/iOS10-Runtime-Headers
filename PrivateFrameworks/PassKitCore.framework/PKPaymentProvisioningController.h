/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentProvisioningController : NSObject <PKPaymentWebServiceDelegate> {
    NSMutableArray * _associatedCredentials;
    NSTimer * _descriptionTimer;
    PKPaymentEligibilityResponse * _eligibilityResponse;
    NSString * _localizedProgressDescription;
    NSString * _productIdentifier;
    PKPaymentPass * _provisionedPass;
    bool  _provisioningUserInterfaceIsVisible;
    bool  _proxyTargetDeviceWebServiceInUse;
    PKPaymentRequirementsResponse * _requirementsResponse;
    long long  _state;
    NSMutableSet * _tasks;
    PKPaymentWebService * _webService;
}

@property (nonatomic, readonly, copy) NSArray *associatedCredentials;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKPaymentEligibilityResponse *eligibilityResponse;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *localizedProgressDescription;
@property (nonatomic, readonly, copy) NSString *productIdentifier;
@property (nonatomic, readonly) PKPaymentPass *provisionedPass;
@property (nonatomic, readonly) PKPaymentRequirementsResponse *requirementsResponse;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PKPaymentWebService *webService;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (void).cxx_destruct;
- (long long)_defaultResetState;
- (id)_displayableErrorOverrideForUnderlyingError:(id)arg1;
- (void)_handleProvisioningError:(id)arg1 forRequest:(id)arg2;
- (void)_passAlreadyProvisioned;
- (void)_queryEligibilityForCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)_queryRequirementsForCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)_registerWhileRetrievingRemoteCredentials:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_requestEligibility:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_requestProvisioning:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_requestRequirements:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_setLocalizedProgressDescription:(id)arg1;
- (void)_setState:(long long)arg1 notify:(bool)arg2;
- (void)_updateLocalizedProgressAndInvalidateTimer;
- (void)_validatePreconditionsWhileRetrievingRemoteCredentials:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)acceptTerms;
- (void)associateCredential:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)associateCredentials:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)associatedCredentials;
- (void)dealloc;
- (id)displayableErrorForError:(id)arg1;
- (id)displayableErrorForProvisioningError:(id)arg1;
- (id)eligibilityResponse;
- (id)initWithWebService:(id)arg1;
- (id)localizedProgressDescription;
- (void)noteProvisioningUserInterfaceDidAppear;
- (void)noteProvisioningUserInterfaceDidDisappear;
- (void)paymentWebService:(id)arg1 didCompleteTSMConnectionForTaskID:(unsigned long long)arg2;
- (void)paymentWebService:(id)arg1 didQueueTSMConnectionForTaskID:(unsigned long long)arg2;
- (id)productIdentifier;
- (id)provisionedPass;
- (bool)provisioningUserInterfaceIsVisible;
- (void)requestEligibility:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)requestProvisioning:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)requestRequirements:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)requirementsResponse;
- (void)reset;
- (void)resolveAmbiguousRequirementsWithProductIdentifier:(id)arg1;
- (void)resolveRequirementsUsingProduct:(id)arg1;
- (void)retrieveRemoteCredentials:(id /* block */)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)validatePreconditionsAndRegister:(id /* block */)arg1;
- (void)validatePreconditionsRegisterAndAssociateRemoteCredentials:(id /* block */)arg1;
- (id)webService;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (id)alertForDisplayableError:(id)arg1;
- (id)alertForDisplayableError:(id)arg1 earlyExitHandler:(id /* block */)arg2;

@end
