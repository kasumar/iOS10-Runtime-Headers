/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRTransactionPacket : NSObject <NSCopying, NSSecureCoding> {
    NSMutableData * _data;
    NSString * _identifier;
    NSString * _key;
    unsigned long long  _totalLength;
    unsigned long long  _writeLength;
    unsigned long long  _writePosition;
}

@property (nonatomic, readonly) unsigned long long actualLength;
@property (getter=isComplete, nonatomic, readonly) bool complete;
@property (nonatomic, readonly, retain) NSData *data;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly, retain) NSString *key;
@property (nonatomic, readonly) _MRTransactionPacketProtobuf *protobuf;
@property (getter=isReadComplete, nonatomic, readonly) bool readComplete;
@property (nonatomic, readonly) unsigned long long totalLength;
@property (getter=isWriteComplete, nonatomic, readonly) bool writeComplete;
@property (nonatomic) unsigned long long writeLength;
@property (nonatomic, readonly) unsigned long long writePosition;

+ (bool)supportsSecureCoding;

- (unsigned long long)actualLength;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 forKey:(id)arg2;
- (id)initWithProtobuf:(id)arg1;
- (bool)isComplete;
- (bool)isReadComplete;
- (bool)isWriteComplete;
- (id)key;
- (void)merge:(id)arg1;
- (id)protobuf;
- (void)setWriteLength:(unsigned long long)arg1;
- (unsigned long long)totalLength;
- (unsigned long long)writeLength;
- (unsigned long long)writePosition;

@end
