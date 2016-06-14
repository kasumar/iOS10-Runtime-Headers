/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreLibraryPersonalizationCollectionDataSource : NSObject <MPModelLazySectionedCollectionDataSource> {
    struct shared_ptr<mlcore::EntityCache> { 
        struct EntityCache {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _itemEntityCache;
    MPMediaLibraryView * _libraryView;
    NSMapTable * _relativeModelClassToMappingResponse;
    struct shared_ptr<mlcore::EntityCache> { 
        struct EntityCache {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _sectionEntityCache;
    NSMutableDictionary * _sectionToLibraryAddedOverride;
    MPModelRequest * _unpersonalizedRequest;
    MPSectionedCollection * _unpersonalizedResults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MPMediaLibraryView *libraryView;
@property (nonatomic, copy) NSMapTable *relativeModelClassToMappingResponse;
@property (nonatomic, copy) NSMutableDictionary *sectionToLibraryAddedOverride;
@property (readonly) Class superclass;
@property (nonatomic, copy) MPModelRequest *unpersonalizedRequest;
@property (nonatomic, retain) MPSectionedCollection *unpersonalizedResults;

+ (id)_identifiersByCombiningPersonalizedIdentifiers:(id)arg1 unpersonalizedIdentifiers:(id)arg2;
+ (id)_libraryObjectWithEntityCache:(struct shared_ptr<mlcore::EntityCache> { struct EntityCache {} *x1; struct __shared_weak_count {} *x2; })arg1 relativeModelClass:(Class)arg2 identifierSet:(id)arg3 propertySet:(id)arg4;
+ (id)_personalizationPropertiesForModelClass:(Class)arg1;
+ (id)_personalizationPropertiesForProperties:(id)arg1 modelObject:(id)arg2 relativeModelObject:(id)arg3;
+ (id)_personalizedObjectWithUnpersonalizedObject:(id)arg1 libraryObject:(id)arg2 personalizationProperties:(id)arg3 overrideLibraryAddedStatus:(long long)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<mlcore::EntityCache> { struct EntityCache {} *x1; struct __shared_weak_count {} *x2; })_newEntityCache;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)libraryView;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)relativeModelClassToMappingResponse;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (id)sectionToLibraryAddedOverride;
- (void)setLibraryView:(id)arg1;
- (void)setRelativeModelClassToMappingResponse:(id)arg1;
- (void)setSectionToLibraryAddedOverride:(id)arg1;
- (void)setUnpersonalizedRequest:(id)arg1;
- (void)setUnpersonalizedResults:(id)arg1;
- (id)unpersonalizedRequest;
- (id)unpersonalizedResults;

@end
