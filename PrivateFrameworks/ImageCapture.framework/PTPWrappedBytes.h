/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPWrappedBytes : NSObject {
    bool  _allocatedBytes;
    char * _bytes;
    unsigned long long  _capacity;
    unsigned long long  _excessDataLength;
    int  _fd;
    int  _lastNotifiedProgress;
    unsigned long long  _offset;
    double  _progressNotificationTime;
    int (* _progressNotifier;
    void * _progressNotifierContext;
    bool  _useByteBuffer;
}

+ (id)wrappedBytesWithBytes:(void*)arg1 capacity64:(unsigned long long)arg2;
+ (id)wrappedBytesWithCapacity64:(unsigned long long)arg1;

- (unsigned long long)appendBytes:(const void*)arg1 length64:(unsigned long long)arg2;
- (unsigned long long)appendData:(id)arg1;
- (const void*)bytes;
- (unsigned long long)capacity64;
- (void)dealloc;
- (id)description;
- (unsigned long long)excessDataLength;
- (id)init;
- (id)initWithBytes:(void*)arg1 capacity64:(unsigned long long)arg2;
- (id)initWithCapacity64:(unsigned long long)arg1;
- (id)initWithFileDescriptor:(int)arg1 capacity64:(unsigned long long)arg2;
- (unsigned long long)length64;
- (void*)mutableBytes;
- (unsigned long long)offset;
- (double)percentFull;
- (unsigned long long)rewindBytesToPosition64:(unsigned long long)arg1;
- (unsigned long long)setCapacity64:(unsigned long long)arg1;
- (void)setLength64:(unsigned long long)arg1;
- (void)setProgressNotifierCallback:(int (*)arg1 context:(void*)arg2;
- (bool)wasInitWithFD;

@end
