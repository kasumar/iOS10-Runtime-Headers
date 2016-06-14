/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLAlbumChange : CPLContainerChange <NSCopying, NSSecureCoding> {
    bool  _albumSortAscending;
    unsigned long long  _albumSortType;
    unsigned long long  _albumType;
    NSString * _keyAssetIdentifier;
    NSString * _name;
    NSString * _parentIdentifier;
    long long  _position;
}

@property (nonatomic) bool albumSortAscending;
@property (nonatomic) unsigned long long albumSortType;
@property (nonatomic) unsigned long long albumType;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *parentIdentifier;
@property (nonatomic) long long position;

- (void).cxx_destruct;
- (bool)albumSortAscending;
- (unsigned long long)albumSortType;
- (unsigned long long)albumType;
- (id)identifiersForMapping;
- (id)name;
- (id)parentIdentifier;
- (long long)position;
- (id)propertiesDescription;
- (id)relatedIdentifier;
- (void)setAlbumSortAscending:(bool)arg1;
- (void)setAlbumSortType:(unsigned long long)arg1;
- (void)setAlbumType:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setParentIdentifier:(id)arg1;
- (void)setPosition:(long long)arg1;
- (void)setRelatedIdentifier:(id)arg1;
- (bool)supportsDeletion;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id*)arg2;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id*)arg2;

@end
