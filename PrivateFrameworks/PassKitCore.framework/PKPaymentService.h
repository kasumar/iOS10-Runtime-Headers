/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentService : NSObject <PKPaymentServiceExportedInterface, PKXPCServiceDelegate> {
    <PKPaymentServiceDelegate> * _delegate;
    PKXPCService * _remoteService;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSString *defaultPaymentPassUniqueIdentifier;
@property (nonatomic) <PKPaymentServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKFieldProperties *paymentDeviceFieldProperties;
@property (nonatomic, retain) PKPaymentWebServiceContext *sharedPaymentWebServiceContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_defaultPaymentPassUniqueIdentifier:(id /* block */)arg1;
- (id)_existingRemoteObjectProxy;
- (void)_messagesAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_paymentDeviceFieldPropertiesWithCompletion:(id /* block */)arg1;
- (id)_remoteObjectProxy;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;
- (void)_sharedPaymentWebServiceContextWithCompletion:(id /* block */)arg1;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)_transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)consistencyCheck;
- (id)defaultPaymentApplicationForPassUniqueIdentifier:(id)arg1;
- (id)defaultPaymentPassUniqueIdentifier;
- (id)delegate;
- (void)deleteAllTransactionsForPaymentPassWithUniqueIdentifier:(id)arg1;
- (void)deleteMessageWithIdentifier:(id)arg1;
- (void)deleteMessagesForPaymentPassWithUniqueIdentifier:(id)arg1;
- (void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(id)arg1;
- (void)downloadAllPaymentPasses;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)initializeSecureElementIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)insertOrUpdatePaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 completion:(id /* block */)arg4;
- (void)insertOrUpdateValueAddedServiceTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentTransaction:(id)arg3 completion:(id /* block */)arg4;
- (id)messagesAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1;
- (void)messagesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)passWithUniqueIdentifier:(id)arg1 didReceiveValueAddedServiceTransaction:(id)arg2;
- (void)passbookUIServiceDidLaunch;
- (void)paymentDeviceDidEnterFieldWithProperties:(id)arg1;
- (void)paymentDeviceDidExitField;
- (id)paymentDeviceFieldProperties;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)remoteService:(id)arg1 didEstablishConnection:(id)arg2;
- (void)remoteService:(id)arg1 didInterruptConnection:(id)arg2;
- (void)scheduleAutomaticPresentationAvailableNotificationForPassWithUniqueIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)scheduleSetupReminders;
- (void)setDefaultPaymentApplication:(id)arg1 forPassUniqueIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)setDefaultPaymentPassUniqueIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSharedPaymentWebServiceContext:(id)arg1;
- (id)sharedPaymentWebServiceContext;
- (void)simulatePaymentPush;
- (void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forDPANIdentifier:(id)arg3;
- (void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forDPANIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (id)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 limit:(long long)arg4 completion:(id /* block */)arg5;
- (void)valueAddedServiceTransactionsForPassWithUniqueIdentifier:(id)arg1 limit:(long long)arg2 completion:(id /* block */)arg3;
- (void)valueAddedServiceTransactionsForPaymentTransaction:(id)arg1 limit:(long long)arg2 completion:(id /* block */)arg3;

@end
