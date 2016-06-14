/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVFileValidator : NSObject {
    struct AVFileValidatorPrivate { id x1; struct FigOpaqueMediaValidator {} *x2; struct FigMediaValidatorDataLocation { unsigned long long x_3_1_1; unsigned long long x_3_1_2; } x3; struct OpaqueCMByteStream {} *x4; bool x5; bool x6; id x7; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; void*x35; void*x36; void*x37; void*x38; long long x39; void*x40; struct  struct CGPoint { double x_1_1_1; double x_1_1_2;  {} x41; void*x42; void*x43; void*x44; void*x45; void*x46; short x47; void*x48; const void*x49; BOOL x50; void*x51; void*x52; unsigned char x53; void*x54; unsigned short x55; int x56; void*x57; void*x58; void*x59; struct  double x_2_1_1; double x_2_1_2;  {} x60; void*x61; void*x62; void*x63; void*x64; void*x65; } * _priv;
    NSString * _validationRules;
}

@property (retain) NSString *validationRules;

- (void)cancel;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (bool)isCompleted;
- (bool)isStreaming;
- (id)notificationForFileCheckResult:(id)arg1;
- (void)postNotificationForCallback:(id)arg1;
- (float)progress;
- (void)setValidationRules:(id)arg1;
- (id)url;
- (void)validate;
- (id)validateBlocking:(bool)arg1;
- (void)validateForCameraRoll;
- (bool)validateSyncWithError:(id*)arg1;
- (id)validationRules;

@end
