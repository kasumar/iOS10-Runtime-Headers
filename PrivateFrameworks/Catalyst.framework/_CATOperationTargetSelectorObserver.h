/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface _CATOperationTargetSelectorObserver : NSObject <CATOperationObserver> {
    unsigned long long  _events;
    SEL  _selector;
    id  _target;
    id  _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long events;
@property (readonly) unsigned long long hash;
@property (nonatomic) SEL selector;
@property (readonly) Class superclass;
@property (nonatomic, retain) id target;
@property (nonatomic, retain) id userInfo;

- (void).cxx_destruct;
- (unsigned long long)events;
- (id)init;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 events:(unsigned long long)arg3 userInfo:(id)arg4;
- (void)invokeActionWithOperation:(id)arg1;
- (void)operationDidFinish:(id)arg1;
- (void)operationDidProgress:(id)arg1;
- (void)operationDidStart:(id)arg1;
- (SEL)selector;
- (void)setEvents:(unsigned long long)arg1;
- (void)setSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)target;
- (id)userInfo;

@end
