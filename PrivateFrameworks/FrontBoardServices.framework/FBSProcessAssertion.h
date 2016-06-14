/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSProcessAssertion : NSObject <BSDescriptionProviding> {
    unsigned long long  _activationCount;
    BKSProcessAssertion * _assertion;
    bool  _invalidated;
    NSString * _name;
    FBSProcessExecutionPolicy * _policy;
    <FBSProcess> * _process;
}

@property (getter=isActivated, nonatomic, readonly) bool activated;
@property (nonatomic, readonly) unsigned long long activationCount;
@property (nonatomic, readonly, retain) BKSProcessAssertion *assertion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, retain) FBSProcessExecutionPolicy *policy;
@property (nonatomic, readonly) <FBSProcess> *process;
@property (readonly) Class superclass;

- (void)_invalidateAssertion:(id)arg1;
- (void)activate;
- (unsigned long long)activationCount;
- (id)assertion;
- (void)deactivate;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithName:(id)arg1 process:(id)arg2 policy:(id)arg3;
- (void)invalidate;
- (bool)isActivated;
- (bool)isInvalidated;
- (id)name;
- (id)policy;
- (id)process;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
