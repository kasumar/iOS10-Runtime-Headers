/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentAuthorizationStateMachine : NSObject <PKContinuityPaymentCoordinatorDelegate> {
    <PKAggregateDictionaryProtocol> * _aggregateDictionary;
    bool  _awaitingClientCallbackReply;
    NSMutableArray * _callbackQueue;
    PKContinuityPaymentCoordinator * _continuityPaymentCoordinator;
    PKContinuityPaymentService * _continuityPaymentService;
    <PKPaymentAuthorizationStateMachineDelegate> * _delegate;
    bool  _hasReceivedRemoteDeviceUpdate;
    bool  _hostApplicationResignedActive;
    PKPaymentAuthorizationDataModel * _model;
    PKPaymentService * _paymentService;
    PKPaymentWebService * _paymentWebService;
    unsigned long long  _state;
    double  _updatePaymentDeviceTimeout;
}

@property (nonatomic, retain) <PKAggregateDictionaryProtocol> *aggregateDictionary;
@property (nonatomic) bool awaitingClientCallbackReply;
@property (nonatomic, retain) NSMutableArray *callbackQueue;
@property (nonatomic, retain) PKContinuityPaymentCoordinator *continuityPaymentCoordinator;
@property (nonatomic, retain) PKContinuityPaymentService *continuityPaymentService;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentAuthorizationStateMachineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasReceivedRemoteDeviceUpdate;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hostApplicationResignedActive;
@property (nonatomic, retain) PKPaymentAuthorizationDataModel *model;
@property (nonatomic, retain) PKPaymentService *paymentService;
@property (nonatomic, retain) PKPaymentWebService *paymentWebService;
@property (setter=_setState:, nonatomic) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic) double updatePaymentDeviceTimeout;
@property (nonatomic, readonly) bool useSecureElement;

- (void).cxx_destruct;
- (void)_advanceToNextState;
- (void)_applyBillingInformationToPayment:(id)arg1;
- (void)_applyShippingInformationToPayment:(id)arg1;
- (void)_applyShippingMethodToPayment:(id)arg1;
- (id)_createNewRemotePaymentRequest;
- (id)_dequeuePendingCallbackParam;
- (void)_deviceUpdateDidTimeout;
- (void)_dispatchNextCallbackParam;
- (void)_enqueueCallbackOfKind:(long long)arg1 withObject:(id)arg2;
- (void)_enqueueDidAuthorizePaymentWithPayment:(id)arg1;
- (void)_enqueueDidAuthorizePaymentWithRemotePayment:(id)arg1;
- (void)_enqueueDidAuthorizePaymentWithToken:(id)arg1;
- (void)_enqueueDidRequestMerchantSession;
- (void)_enqueueDidSelectPaymentPass:(id)arg1;
- (void)_enqueueDidSelectRemotePaymentInstrument:(id)arg1;
- (void)_enqueueDidSelectShippingContact:(id)arg1;
- (void)_enqueueInitialCallbacks;
- (void)_handleStateMachineWillStartNotification:(id)arg1;
- (id)_notificationObject;
- (void)_performAuthorizationWithParam:(id)arg1;
- (void)_performCancelRemotePaymentRequest;
- (void)_performDidAuthorizeCallbackWithParam:(id)arg1;
- (void)_performNonceRequestWithParam:(id)arg1;
- (void)_performRewrapRequestWithParam:(id)arg1;
- (void)_performSendClientUpdateWithShippingMethods:(id)arg1 paymentSummaryItems:(id)arg2 paymentApplication:(id)arg3 status:(long long)arg4;
- (void)_performSendPaymentStatus:(long long)arg1;
- (void)_performSendRemotePaymentRequest;
- (void)_performUpdatePaymentDevices;
- (void)_postStateMachineWillStartNotification;
- (void)_registerForNotifications;
- (void)_sendDidTransitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 withParam:(id)arg3;
- (void)_setState:(unsigned long long)arg1;
- (void)_setState:(unsigned long long)arg1 param:(id)arg2;
- (void)_simulatePayment;
- (void)_start;
- (void)_startPayment;
- (void)_startRemoteDeviceUpdate;
- (id)_transactionWithPaymentToken:(id)arg1;
- (void)_unregisterForNotifications;
- (id)aggregateDictionary;
- (bool)awaitingClientCallbackReply;
- (id)callbackQueue;
- (id)continuityPaymentCoordinator;
- (void)continuityPaymentCoordinator:(id)arg1 didReceivePayment:(id)arg2;
- (void)continuityPaymentCoordinator:(id)arg1 didReceiveUpdatedPaymentDevices:(id)arg2;
- (void)continuityPaymentCoordinatorDidReceiveCancellation:(id)arg1;
- (void)continuityPaymentCoordinatorDidTimeoutUpdatePaymentDevices:(id)arg1;
- (id)continuityPaymentService;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)didAuthenticateWithCredential:(id)arg1;
- (void)didBecomeActive:(bool)arg1;
- (void)didCancel;
- (void)didEncounterError:(id)arg1;
- (void)didEncounterFatalError:(id)arg1;
- (void)didReceiveMerchantSessionCompleteWithSession:(id)arg1 error:(id)arg2;
- (void)didReceivePaymentAuthorizationStatus:(long long)arg1;
- (void)didReceivePaymentMethodCompleteWithSummaryItems:(id)arg1;
- (void)didReceiveShippingContactCompleteWithStatus:(long long)arg1 shippingMethods:(id)arg2 paymentSummaryItems:(id)arg3;
- (void)didReceiveShippingMethodCompleteWithStatus:(long long)arg1 paymentSummaryItems:(id)arg2;
- (void)didRequestMerchantSession;
- (void)didResignActive:(bool)arg1;
- (void)didResolveError;
- (void)didSelectPaymentPass:(id)arg1;
- (void)didSelectRemotePaymentInstrument:(id)arg1;
- (void)didSelectShippingContact:(id)arg1;
- (void)didSelectShippingMethod:(id)arg1;
- (bool)hasReceivedRemoteDeviceUpdate;
- (bool)hostApplicationResignedActive;
- (id)init;
- (id)model;
- (id)paymentService;
- (id)paymentWebService;
- (void)prepare;
- (void)setAggregateDictionary:(id)arg1;
- (void)setAwaitingClientCallbackReply:(bool)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setContinuityPaymentCoordinator:(id)arg1;
- (void)setContinuityPaymentService:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasReceivedRemoteDeviceUpdate:(bool)arg1;
- (void)setHostApplicationResignedActive:(bool)arg1;
- (void)setModel:(id)arg1;
- (void)setPaymentService:(id)arg1;
- (void)setPaymentWebService:(id)arg1;
- (void)setUpdatePaymentDeviceTimeout:(double)arg1;
- (void)start;
- (unsigned long long)state;
- (double)updatePaymentDeviceTimeout;
- (bool)useSecureElement;

@end
