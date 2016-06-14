/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPreferencesSync.framework/NanoPreferencesSync
 */

@interface NPSDomainAccessorFilePresenter : NSObject <NSFilePresenter> {
    bool  _current;
    <NPSDomainAccessorFilePresenterDelegate> * _delegate;
    NSURL * _domainURL;
    NSOperationQueue * _presenterOperationQueue;
}

@property (getter=isCurrent, nonatomic) bool current;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <NPSDomainAccessorFilePresenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSURL *domainURL;
@property (readonly) unsigned long long hash;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (nonatomic, retain) NSOperationQueue *presenterOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)domainURL;
- (id)initWithDelegate:(id)arg1 domainURL:(id)arg2;
- (bool)isCurrent;
- (bool)presentedItemNeedsWatching;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (id)presenterOperationQueue;
- (void)relinquishPresentedItemToWriter:(id /* block */)arg1;
- (void)setCurrent:(bool)arg1;
- (void)setDomainURL:(id)arg1;
- (void)setPresenterOperationQueue:(id)arg1;
- (id)synchronizeForReadingOnly:(bool)arg1 handler:(id /* block */)arg2;

@end
