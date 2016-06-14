/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAResultCallback : AceObject <SAAceSerializable>

@property (nonatomic) long long code;
@property (nonatomic, copy) NSArray *commandReferences;
@property (nonatomic, copy) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)resultCallback;
+ (id)resultCallbackWithDictionary:(id)arg1 context:(id)arg2;

- (long long)code;
- (id)commandReferences;
- (id)commands;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setCode:(long long)arg1;
- (void)setCommandReferences:(id)arg1;
- (void)setCommands:(id)arg1;

@end
