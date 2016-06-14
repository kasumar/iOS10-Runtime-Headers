/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLPixelBufferFactory : NSObject {
    CVMLPixelBufferConverter * _converter;
    NSURL * _fileURL;
}

@property (readonly) NSURL *fileURL;
@property (readonly) unsigned long long height;
@property (readonly) unsigned long long width;

- (void).cxx_destruct;
- (bool)enumerateTilesOfSize:(unsigned long long)arg1 overlapFraction:(float)arg2 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 handler:(id /* block */)arg4 error:(id*)arg5;
- (id)fileURL;
- (unsigned long long)height;
- (id)init;
- (id)initWithCGImage:(struct CGImage { }*)arg1 orientation:(long long)arg2;
- (id)initWithCIImage:(id)arg1 orientation:(long long)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 orientation:(long long)arg2;
- (id)initWithURL:(id)arg1;
- (id)newBufferBestFitInWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 error:(id*)arg4;
- (id)newCroppedBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 error:(id*)arg5;
- (unsigned long long)width;

@end
