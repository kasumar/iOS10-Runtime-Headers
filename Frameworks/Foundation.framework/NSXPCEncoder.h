/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSXPCEncoder : NSXPCCoder {
    bool  _askForReplacement;
    NSXPCConnection * _connection;
    <NSXPCEncoderDelegate> * _delegate;
    void ** _encoder;
    unsigned long long  _genericIndex;
    NSObject<OS_xpc_object> * _oolObjects;
    struct __CFDictionary { } * _replacedByDelegateObjects;
    struct __CFDictionary { } * _replacedObjects;
}

@property NSXPCConnection *_connection;
@property <NSXPCEncoderDelegate> *delegate;

+ (id)_dataWithXPCObject:(id)arg1;

- (void)_checkObject:(id)arg1;
- (id)_connection;
- (void)_encodeArrayOfObjects:(id)arg1 forKey:(id)arg2;
- (void)_encodeCString:(const char *)arg1 forKey:(id)arg2;
- (void)_encodeObject:(id)arg1;
- (void)_insertIntoXPCObject:(id)arg1;
- (id)_newRootXPCObject;
- (id)_replaceObject:(id)arg1;
- (bool)allowsKeyedCoding;
- (id)connection;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (void)encodeBool:(bool)arg1 forKey:(id)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)encodeDataObject:(id)arg1;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (void)encodeInvocation:(id)arg1;
- (void)encodeObject:(id)arg1;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void*)arg2;
- (void)encodeXPCObject:(id)arg1 forKey:(id)arg2;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)set_connection:(id)arg1;

@end
