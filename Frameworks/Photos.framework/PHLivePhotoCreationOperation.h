/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHLivePhotoCreationOperation : NSOperation {
    long long  _contentMode;
    NSArray * _resourceURLs;
    id /* block */  _resultHandler;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
}

@property (nonatomic, readonly) long long contentMode;
@property (nonatomic, readonly, copy) NSArray *resourceURLs;
@property (nonatomic, readonly, copy) id /* block */ resultHandler;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } targetSize;

- (void).cxx_destruct;
- (id)_createImageOnlyLivePhotoWithImageURL:(id)arg1;
- (long long)contentMode;
- (id)initWithResourceURLs:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 resultHandler:(id /* block */)arg4;
- (void)main;
- (id)resourceURLs;
- (id /* block */)resultHandler;
- (struct CGSize { double x1; double x2; })targetSize;

@end
