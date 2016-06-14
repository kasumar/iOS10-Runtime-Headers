/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVOperationMutuallyExclusiveCondition : NSObject <MSVOperationCondition> {
    NSString * _category;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *mutualExclusionCategory;
@property (readonly) Class superclass;

+ (id)conditionWithCategory:(id)arg1;
+ (id)modalPresentationExclusivityCondition;

- (void).cxx_destruct;
- (void)evaluateForOperation:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithCategory:(id)arg1;
- (id)mutualExclusionCategory;

@end
