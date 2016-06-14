/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSingleTagFeedGroupEmitter : NSObject <FCFeedGroupEmitting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool emitsSingletonGroups;
@property (nonatomic, readonly, copy) NSString *groupEmitterIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isRequiredByFollowingEmitters;
@property (nonatomic, readonly) bool requiresForYouCatchUpOperation;
@property (readonly) Class superclass;

- (bool)canMergeGroupsUnconditionally;
- (Class)classForGroupEmittingOperation;
- (id)groupEmitterIdentifier;
- (id)operationToEmitGroupInContext:(id)arg1 withCursor:(id)arg2 toCursor:(id)arg3;
- (bool)wantsToEmitGroupInContext:(id)arg1 withCursor:(id)arg2 toCursor:(id)arg3;

@end
