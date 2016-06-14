/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInterfaceActionGroupViewController : UIViewController <UIInterfaceActionGroupDisplaying, UIInterfaceActionHandlerInvocationDelegate> {
    UIInterfaceActionGroup * _actionGroup;
    UIInterfaceActionGroupView * _actionGroupView;
    <UIInterfaceActionVisualStyleProviding> * _visualStyleProvider;
}

@property (nonatomic, readonly, copy) UIInterfaceActionGroup *actionGroup;
@property (nonatomic, readonly, copy) UIInterfaceActionGroupView *actionGroupView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIInterfaceActionVisualStyle *visualStyle;
@property (nonatomic) <UIInterfaceActionVisualStyleProviding> *visualStyleProvider;

+ (id)defaultVisualStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2;

- (void).cxx_destruct;
- (id)actionGroup;
- (id)actionGroupView;
- (id)initWithActionGroup:(id)arg1;
- (void)interfaceAction:(id)arg1 invokeActionHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)loadView;
- (void)reloadVisualStyle;
- (void)setVisualStyleProvider:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)visualStyle;
- (id)visualStyleProvider;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
