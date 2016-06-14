/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFaceTileImageRequest : NSObject {
    NSString * _cacheKey;
    bool  _canceled;
    PHFace * _face;
    int  _imageManagerRequestID;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastDeliveredSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedActualFaceRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedFaceCropRect;
    struct CGSize { 
        double width; 
        double height; 
    }  _pixelTargetSize;
    int  _requestID;
    bool  _round;
}

@property (nonatomic, readonly) NSString *cacheKey;
@property (getter=isCanceled) bool canceled;
@property (nonatomic, readonly) PHFace *face;
@property int imageManagerRequestID;
@property (nonatomic) struct CGSize { double x1; double x2; } lastDeliveredSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedActualFaceRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedFaceCropRect;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pixelTargetSize;
@property (nonatomic, readonly) int requestID;
@property (nonatomic, readonly) bool round;

- (void).cxx_destruct;
- (id)cacheKey;
- (void)cancel;
- (id)face;
- (int)imageManagerRequestID;
- (id)initWithFace:(id)arg1 cacheKey:(id)arg2 pixelTargetSize:(struct CGSize { double x1; double x2; })arg3 round:(bool)arg4;
- (bool)isCanceled;
- (struct CGSize { double x1; double x2; })lastDeliveredSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedActualFaceRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedFaceCropRect;
- (struct CGSize { double x1; double x2; })pixelTargetSize;
- (int)requestID;
- (bool)round;
- (void)setCanceled:(bool)arg1;
- (void)setImageManagerRequestID:(int)arg1;
- (void)setLastDeliveredSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNormalizedActualFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNormalizedFaceCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
