/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCachingFetchRequest : NSFetchRequest {
    NSHashTable * _cachingCoordinators;
    bool  _hasCachedInfo;
    id  _identifier;
    NSDictionary * _substitutionVariables;
}

@property (nonatomic, readonly) id _identifier;
@property (nonatomic, copy) NSDictionary *substitutionVariables;

+ (id)_generateIdentifier;

- (id)_copyForDirtyContext;
- (bool)_hasRegisteredCachingCoordinator:(id)arg1;
- (id)_identifier;
- (bool)_isCachingFetchRequest__;
- (void)_registerCachingCoordinator:(id)arg1;
- (void)_sanityCheckVariables:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (void)setSubstitutionVariables:(id)arg1;
- (id)substitutionVariables;

@end
