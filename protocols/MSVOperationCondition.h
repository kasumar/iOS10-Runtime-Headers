/* Generated by RuntimeBrowser.
 */

@protocol MSVOperationCondition <NSObject>

@required

- (void)evaluateForOperation:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: MSVOperation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@optional

- (NSOperation *)dependencyForOperation:(MSVOperation *)arg1;
- (NSString *)mutualExclusionCategory;

@end
