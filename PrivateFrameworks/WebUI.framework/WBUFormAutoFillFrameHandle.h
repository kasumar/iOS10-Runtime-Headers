/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUFormAutoFillFrameHandle : NSObject <NSCopying, NSSecureCoding, WBUFormAutoFillFrameHandle> {
    NSURL * _URL;
    NSArray * _certificateChain;
    _WKFrameHandle * _frameHandle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) _WKFrameHandle *frameHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *webui_URL;
@property (nonatomic, readonly) NSArray *webui_certificateChain;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)frameHandle;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrameHandle:(id)arg1 URL:(id)arg2 certificateChain:(id)arg3;
- (id)initWithWebProcessPlugInFrame:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)webui_URL;
- (id)webui_certificateChain;

@end
