/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlPresentationContext : NSObject {
    unsigned long long  _colorStyle;
    HMHome * _home;
    HFItem<NSCopying> * _item;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceRect;
    UIViewController * _sourceViewController;
}

@property (nonatomic) unsigned long long colorStyle;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) HFItem<NSCopying> *item;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property (nonatomic) UIViewController *sourceViewController;

- (void).cxx_destruct;
- (unsigned long long)colorStyle;
- (id)home;
- (id)item;
- (void)setColorStyle:(unsigned long long)arg1;
- (void)setHome:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSourceViewController:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRect;
- (id)sourceViewController;

@end
