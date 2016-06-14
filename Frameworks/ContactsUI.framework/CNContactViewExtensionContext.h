/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactViewExtensionContext : NSExtensionContext <CNContactViewHostAsyncProtocol, CNContactViewHostProtocol, CNContactViewServiceProtocol> {
    bool  _asyncShouldPerformResponse;
    NSObject<OS_dispatch_semaphore> * _asyncShouldPerformSemaphore;
}

@property (nonatomic) bool asyncShouldPerformResponse;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *asyncShouldPerformSemaphore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)asyncShouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3;
- (void)asyncShouldPerformDefaultActionResponse:(bool)arg1;
- (bool)asyncShouldPerformResponse;
- (id)asyncShouldPerformSemaphore;
- (void)didChangeToEditMode:(bool)arg1;
- (void)didCompleteWithContact:(id)arg1;
- (void)didDeleteContact:(id)arg1;
- (void)editCancel;
- (id)host;
- (void)isPresentingFullscreen:(bool)arg1;
- (void)setAsyncShouldPerformResponse:(bool)arg1;
- (void)setAsyncShouldPerformSemaphore:(id)arg1;
- (void)setupWithOptions:(id)arg1 readyBlock:(id /* block */)arg2;
- (bool)shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3;
- (void)toggleEditing;
- (void)updateEditing:(bool)arg1 doneButtonEnabled:(bool)arg2 doneButtonText:(id)arg3;

@end
