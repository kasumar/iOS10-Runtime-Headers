/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NSPControlConnection : NSObject {
    unsigned long long  _flowIdentifier;
}

@property (readonly) unsigned long long flowIdentifier;

- (void)fetchConnectionInfoWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)flowIdentifier;
- (id)initFromStream:(id)arg1;

@end
