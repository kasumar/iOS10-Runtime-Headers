/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLItem : NSObject <NSSecureCoding, QLPreviewItemPrivateProtocol, QLPreviewItemURLProvider> {
    NSString * _MIMEType;
    UIDocumentInteractionController * _archiveController;
    UIColor * _backgroundColorOverride;
    bool  _canBeEdited;
    bool  _canBeShared;
    bool  _didCreateEditedFileURLFolder;
    <QLPreviewItemURLProviderDownloadTracker> * _downloadTracker;
    long long  _editedFileExtensionHandle;
    NSURL * _editedFileURL;
    long long  _fileExtensionHandle;
    NSString * _fileExtensionToken;
    NSNumber * _fileSize;
    NSString * _formattedFileSize;
    bool  _hasContentAwareRepresentativeIcon;
    bool  _isPromisedItem;
    PHLivePhoto * _livePhoto;
    AVAsset * _mediaAsset;
    NSNumber * _needsCoordination;
    <QLPreviewItem> * _originalPreviewItem;
    NSString * _password;
    NSString * _previewItemContentType;
    NSData * _previewItemData;
    NSItemProvider * _previewItemProvider;
    NSNumber * _previewItemProviderProgress;
    NSString * _previewItemTitle;
    NSURL * _previewItemURL;
    long long  _processIdentifier;
    NSString * _relativePath;
    UIImage * _representativeIcon;
    UIImage * _thumbnail;
    <QLPreviewItemURLProvider> * _urlProvider;
    bool  _useAVPlayerViewController;
    NSUUID * _uuid;
}

@property (retain) NSString *MIMEType;
@property (readonly) double autoPlaybackPosition;
@property (retain) UIColor *backgroundColorOverride;
@property bool canBeEdited;
@property bool canBeShared;
@property (readonly) NSString *contentType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSURL *editedFileURL;
@property (readonly) NSString *fileName;
@property (readonly) UIImage *genericIcon;
@property (nonatomic, readonly) bool hasContentAwareRepresentativeIcon;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPromisedItem;
@property (retain) NSNumber *needsCoordination;
@property (nonatomic, retain) <QLPreviewItem> *originalPreviewItem;
@property (retain) NSString *password;
@property (nonatomic, retain) NSString *previewItemContentType;
@property (retain) NSData *previewItemData;
@property (retain) NSItemProvider *previewItemProvider;
@property (nonatomic, retain) NSNumber *previewItemProviderProgress;
@property (nonatomic, retain) NSString *previewItemTitle;
@property (nonatomic, retain) NSURL *previewItemURL;
@property (readonly) NSURL *previewItemURLForDisplay;
@property (readonly) long long processIdentifier;
@property (readonly) UIImage *representativeIcon;
@property (readonly) Class superclass;
@property (nonatomic, retain) <QLPreviewItemURLProvider> *urlProvider;
@property bool useAVPlayerViewController;
@property (retain) NSUUID *uuid;
@property (readonly) bool wantsDefaultMediaPlayer;

+ (id)UTIForFileName:(id)arg1;
+ (id)_backgroundQueue;
+ (id)_mainQueue;
+ (bool)isUTIScriptableMediaType:(id)arg1;
+ (id)itemWithPreviewItem:(id)arg1;
+ (id)knownExtensions;
+ (id)knownMimeTypes;
+ (id)knownUTIs;
+ (id)privateUTIFromFileName:(id)arg1;
+ (id)removeSpacesFromString:(id)arg1;
+ (bool)shouldUseRemoteCollection:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)MIMEType;
- (id)UTI;
- (void)_commonInit;
- (id)_createEditedFileURLFolderIfNeeded;
- (void)_deleteEditedFileURLFolderIfNeeded;
- (bool)_needsCoordination;
- (id)backgroundColorOverride;
- (bool)canBeEdited;
- (bool)canBePreviewed;
- (bool)canBeShared;
- (void)consumeFileExtension;
- (id)contentType;
- (id)coordinatedReadInBackgroundThread:(id /* block */)arg1;
- (id)coordinatedReadInMainThread:(id /* block */)arg1;
- (id)coordinatedReadInQueue:(id)arg1 options:(unsigned long long)arg2 coordinatedBlock:(id /* block */)arg3;
- (void)dealloc;
- (long long)defaultWhitePointAdaptivityStyle;
- (id)description;
- (id)editedFileURL;
- (void)encodeWithCoder:(id)arg1;
- (void)extractItemIfNeeded;
- (id)fileName;
- (void)fileSizeWithCompletionHandler:(id /* block */)arg1;
- (id)genericIcon;
- (id)genericIconForTableView;
- (void)getURLWithDownloadTracker:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)hasContentAwareRepresentativeIcon;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPreviewItemProvider:(id)arg1 contentType:(id)arg2 previewTitle:(id)arg3 fileSize:(id)arg4;
- (id)initWithRelativePath:(id)arg1 archiveController:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 MIMEType:(id)arg2;
- (id)internalCopy;
- (bool)is3GPMovie;
- (bool)isAudioOnly;
- (bool)isEqual:(id)arg1;
- (bool)isPromisedItem;
- (void)issueFileExtension;
- (id)livePhoto;
- (void)livePhotoWithCompletionBlock:(id /* block */)arg1;
- (unsigned long long)maximumNumberOfCachedPreviews;
- (id)mediaAsset;
- (void)mediaAssetWithCompletionBlock:(id /* block */)arg1;
- (id)needsCoordination;
- (bool)needsDownload;
- (bool)needsURLFromProvider;
- (id)originalPreviewItem;
- (id)password;
- (id)previewItemContentType;
- (id)previewItemData;
- (id)previewItemProvider;
- (id)previewItemProviderProgress;
- (id)previewItemTitle;
- (unsigned long long)previewItemType;
- (id)previewItemURL;
- (Class)previewItemViewControllerClassWithStyle:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })previewSizeForItemViewControllerSize:(struct CGSize { double x1; double x2; })arg1;
- (long long)processIdentifier;
- (id)relativePath;
- (id)representativeIcon;
- (void)requestURLWithDownloadTracker:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setBackgroundColorOverride:(id)arg1;
- (void)setCanBeEdited:(bool)arg1;
- (void)setCanBeShared:(bool)arg1;
- (void)setEditedFileURL:(id)arg1;
- (void)setEditedFileURL:(id)arg1 withSandboxExtension:(id)arg2;
- (void)setIsPromisedItem:(bool)arg1;
- (void)setMIMEType:(id)arg1;
- (void)setNeedsCoordination:(id)arg1;
- (void)setOriginalPreviewItem:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPreviewItemContentType:(id)arg1;
- (void)setPreviewItemData:(id)arg1;
- (void)setPreviewItemProvider:(id)arg1;
- (void)setPreviewItemProviderProgress:(id)arg1;
- (void)setPreviewItemTitle:(id)arg1;
- (void)setPreviewItemURL:(id)arg1;
- (void)setUrlProvider:(id)arg1;
- (void)setUseAVPlayerViewController:(bool)arg1;
- (void)setUuid:(id)arg1;
- (void)shouldAutoDownloadInNetworkState:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)thumbnailWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 completionHandler:(id /* block */)arg3;
- (id)urlProvider;
- (bool)useAVPlayerViewController;
- (bool)useExtensionPreview;
- (bool)useRemoteViewController;
- (id)uuid;

@end
