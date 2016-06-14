/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CECFakeInterface : CECInterface {
    NSMutableDictionary * _properties;
}

+ (id)defaultPlaybackDeviceProperties;
+ (id)defaultTVProperties;

- (void)dealloc;
- (void)fakePropertiesChanged:(id)arg1;
- (void)fakeTerminated;
- (id)initWithInterfaceListener:(id)arg1 properties:(id)arg2;
- (bool)isValid;
- (bool)pingTo:(unsigned char)arg1 acknowledged:(bool*)arg2 error:(id*)arg3;
- (id)properties;
- (bool)sendFrame:(struct CECFrame { unsigned char x1[16]; unsigned int x2 : 5; unsigned int x3 : 3; })arg1 withRetryCount:(unsigned char)arg2 error:(id*)arg3;

@end
