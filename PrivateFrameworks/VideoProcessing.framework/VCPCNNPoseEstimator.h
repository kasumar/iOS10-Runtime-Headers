/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPCNNPoseEstimator : NSObject {
    struct CNNData { 
        float *data_; 
        struct CNNSize { 
            int size_[4]; 
        } size_; 
    }  _input;
    VCPCNNModel * _model;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)detectPoseForFace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inBuffer:(struct __CVBuffer { }*)arg2 yaw:(long long*)arg3;
- (id)init;

@end
