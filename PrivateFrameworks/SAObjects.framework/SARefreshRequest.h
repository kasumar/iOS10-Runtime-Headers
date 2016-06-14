/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SARefreshRequest : SAStartRequest

@property (nonatomic, copy) NSData *nlResultState;
@property (nonatomic, copy) NSData *serializedIntent;

+ (id)refreshRequest;
+ (id)refreshRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)nlResultState;
- (id)serializedIntent;
- (void)setNlResultState:(id)arg1;
- (void)setSerializedIntent:(id)arg1;

@end
