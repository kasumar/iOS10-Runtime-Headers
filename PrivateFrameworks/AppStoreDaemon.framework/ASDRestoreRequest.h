/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDRestoreRequest : ASDRequest {
    id /* block */  _completionBlock;
    ASDRestoreRequestOptions * _options;
}

- (void).cxx_destruct;
- (void)_handleResponse:(id)arg1 error:(id)arg2;
- (id)initWithOptions:(id)arg1;
- (void)startWithCompletionBlock:(id /* block */)arg1;

@end
