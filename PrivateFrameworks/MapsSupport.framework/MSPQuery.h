/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPQuery : NSObject <MSPQuerySourceObserver> {
    id /* block */  _changeHandler;
    NSObject<OS_dispatch_queue> * _changeHandlerQueue;
    NSArray * _contents;
    MSPQuerySource * _source;
    NSArray * _unmappedContents;
    NSMapTable * _unmappedContentsMap;
}

@property (nonatomic, readonly, copy) id /* block */ changeHandler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *changeHandlerQueue;
@property (readonly) NSArray *contents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *unmappedContents;

- (void).cxx_destruct;
- (void)_didChangeSourceWithContents:(id)arg1 unmappedContents:(id)arg2 map:(id)arg3 forContext:(id)arg4;
- (id)_initWithSource:(id)arg1;
- (id /* block */)changeHandler;
- (id)changeHandlerQueue;
- (id)contents;
- (void)setChangeHandler:(id /* block */)arg1 queue:(id)arg2;
- (id)unmappedContents;
- (id)unmappedObjectForContentsObject:(id)arg1;

@end
