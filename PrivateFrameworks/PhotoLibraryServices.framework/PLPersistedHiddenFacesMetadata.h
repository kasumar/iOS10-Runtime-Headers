/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPersistedHiddenFacesMetadata : NSObject {
    NSArray * _hiddenFaces;
    NSManagedObjectContext * _managedObjectContext;
    NSURL * _metadataURL;
}

@property (nonatomic, retain) NSArray *hiddenFaces;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) NSURL *metadataURL;

+ (id)_hiddenFacesInAsset:(id)arg1;
+ (bool)_isHiddenFaceMetadataExtension:(id)arg1;
+ (id)hiddenFacesToArchiveInManagedObjectContext:(id)arg1;
+ (bool)isHiddenFaceMetadataPath:(id)arg1;
+ (bool)isValidPath:(id)arg1;

- (void).cxx_destruct;
- (id)_bestDetectedFaceMatchFromFaces:(id)arg1 forFaceMetadata:(id)arg2 asset:(id)arg3;
- (void)_insertHiddenFacesFromMetadata:(id)arg1 inAsset:(id)arg2;
- (id)_metadataData;
- (id)_missingFacesFromFacesMetadata:(id)arg1 inAssetFaces:(id)arg2 asset:(id)arg3;
- (void)_readMetadata;
- (void)_saveMetadata;
- (id)hiddenFaces;
- (id)init;
- (id)initWithManagedObjectContext:(id)arg1;
- (id)initWithManagedObjectContext:(id)arg1 metadataURL:(id)arg2;
- (id)initWithPersistedDataAtURL:(id)arg1;
- (void)insertHiddenFacesFromDataInManagedObjectContext:(id)arg1;
- (id)managedObjectContext;
- (id)metadataURL;
- (void)removePersistedData;
- (void)setHiddenFaces:(id)arg1;
- (void)setManagedObjectContext:(id)arg1;
- (void)setMetadataURL:(id)arg1;
- (void)writePersistedData;

@end
