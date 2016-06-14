/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBrowserDragControllerTarget : NSObject {
    unsigned long long  _associatedLayoutIntent;
    struct CGSize { 
        double width; 
        double height; 
    }  _initialSize;
    double  _rotation;
    double  _scale;
    struct CGPoint { 
        double x; 
        double y; 
    }  _screenCoordiante;
}

@property (nonatomic) unsigned long long associatedLayoutIntent;
@property (nonatomic) struct CGSize { double x1; double x2; } initialSize;
@property (nonatomic) double rotation;
@property (nonatomic) double scale;
@property (nonatomic) struct CGPoint { double x1; double x2; } screenCoordiante;

+ (id)targetWithScreenCoordiante:(struct CGPoint { double x1; double x2; })arg1 initialSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 rotation:(double)arg4 associatedLayoutIntent:(unsigned long long)arg5;

- (unsigned long long)associatedLayoutIntent;
- (id)description;
- (struct CGSize { double x1; double x2; })initialSize;
- (double)rotation;
- (double)scale;
- (struct CGPoint { double x1; double x2; })screenCoordiante;
- (void)setAssociatedLayoutIntent:(unsigned long long)arg1;
- (void)setInitialSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRotation:(double)arg1;
- (void)setScale:(double)arg1;
- (void)setScreenCoordiante:(struct CGPoint { double x1; double x2; })arg1;

@end
