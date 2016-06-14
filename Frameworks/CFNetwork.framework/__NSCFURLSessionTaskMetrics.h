/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFURLSessionTaskMetrics : NSURLSessionTaskMetrics {
    unsigned long long  _redirectCount;
    NSDateInterval * _taskInterval;
    NSArray * _transactionMetrics;
}

- (id)_initWithTask:(id)arg1;
- (void)dealloc;
- (id)init;
- (unsigned long long)redirectCount;
- (void)setRedirectCount:(unsigned long long)arg1;
- (void)setTaskInterval:(id)arg1;
- (void)setTransactionMetrics:(id)arg1;
- (id)taskInterval;
- (id)transactionMetrics;

@end
