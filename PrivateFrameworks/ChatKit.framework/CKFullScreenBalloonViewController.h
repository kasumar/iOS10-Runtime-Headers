/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKFullScreenBalloonViewController : UIViewController <CKAdaptivePresentedControllerProtocol, CKMessageAcknowledgmentPickerBarDelegate, UIGestureRecognizerDelegate> {
    CKMessagePartChatItem * _chatItem;
    <CKFullScreenBalloonViewControllerDelegate> * _delegate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _gradientFrame;
    bool  _isGroupConversation;
    CKMessageAcknowledgmentPickerBarViewController * _pickerBar;
    bool  _showActionMenu;
    UIGestureRecognizer * _tapRecognizer;
    UIView * _tintView;
}

@property (nonatomic, readonly) CKMessagePartChatItem *chatItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <CKFullScreenBalloonViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } gradientFrame;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isGroupConversation;
@property (nonatomic, readonly) CKMessageAcknowledgmentPickerBarViewController *pickerBar;
@property (nonatomic, readonly) bool showActionMenu;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIGestureRecognizer *tapRecognizer;
@property (nonatomic, readonly) UIView *tintView;

- (void).cxx_destruct;
- (void)_performClosingAnimationsWithSendAnimation:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)addTapRecognizerWithTarget:(id)arg1 action:(SEL)arg2;
- (id)chatItem;
- (bool)constrainToPresentingVCBounds;
- (void)dealloc;
- (id)delegate;
- (void)dismissTapGestureRecognized:(id)arg1;
- (bool)forceWindowedPresentation;
- (bool)gestureRecognizer:(id)arg1 shouldReceivePress:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })gradientFrame;
- (id)initWithChatItem:(id)arg1 gradientReferenceView:(id)arg2 isGroupConversation:(bool)arg3 showActionMenu:(bool)arg4 delegate:(id)arg5;
- (bool)isGroupConversation;
- (void)loadView;
- (void)messageAcknowledgmentPickerViewController:(id)arg1 didPickAcknowledgment:(long long)arg2;
- (void)performCancelAnimationWithCompletion:(id /* block */)arg1;
- (void)performClosingAnimationsWithSendAnimation:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)performInitialAnimations;
- (void)performSendAndCloseAnimationWithCompletion:(id /* block */)arg1;
- (id)pickerBar;
- (bool)preserveModalPresentationStyle;
- (void)removeTapRecogonizer;
- (void)setTapRecognizer:(id)arg1;
- (bool)shouldAutorotate;
- (bool)showActionMenu;
- (id)tapRecognizer;
- (id)tintView;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (bool)wantsWindowedPresentation;

@end
