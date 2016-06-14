/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreText.framework/CoreText
 */

@interface FontAssetDownloadManager : NSObject {
    struct TCFRef<const __CFArray *> { 
        struct TAtomicPtr<const __CFArray *> { 
            /* Warning: Unrecognized filer type: '^' using 'void*' */ void*__a_; 
        } fRef; 
    }  fDescriptors;
    NSMutableDictionary * fDownloadOptions;
    struct TCFRef<const __CFSet *> { 
        struct TAtomicPtr<const __CFSet *> { 
            /* Warning: Unrecognized filer type: '^' using 'void*' */ void*__a_; 
        } fRef; 
    }  fMandatoryAttributes;
    NSSet * fPreciousFontLanguages;
    id /* block */  fProgressCallbackBlock;
    NSMutableDictionary * fProgressParams;
}

+ (bool)activateFontsFromAssetURL:(id)arg1;
+ (id)availableFontAttributesArray;
+ (id)availableMobileAssets:(bool)arg1 error:(id*)arg2;
+ (unsigned long long)calculateDownloadSize:(id)arg1;
+ (id)displayNameForCurrentUser:(id)arg1;
+ (id)enabledKeyboardLanguages;
+ (id)extractMatchingAssetsForDescriptor:(struct __CTFontDescriptor { }*)arg1 from:(id)arg2 withFailInfo:(bool*)arg3 andFontFilePaths:(id)arg4;
+ (Class)getASAssetQueryClass;
+ (bool)shouldIgnoreFontAsset:(id)arg1;
+ (bool)shouldRetryWithServer;
+ (bool)shouldTryServer;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)assetStalled:(id)arg1;
- (bool)callProgressCallback:(unsigned int)arg1;
- (void)dealloc;
- (id)doFinalMatching;
- (bool)downloadAllowed;
- (void)downloadFontAssets;
- (bool)executeDownloadingFontAssets:(id)arg1 forDescriptors:(id)arg2 andFontFilePaths:(id)arg3;
- (id)getUnmatchedDescriptors;
- (id)initWithDescriptors:(struct __CFArray { }*)arg1 andMandatoryAttributes:(struct __CFSet { }*)arg2 withBlock:(id /* block */)arg3;
- (id)mobileAssetsForUnmatched:(id)arg1 andFontFilePaths:(id)arg2;
- (id)preciousFontLanguages;
- (void)setDownloadOptionsForMobileAsset;
- (void)setGarbageCollectionBehaviorForAsset:(id)arg1;
- (void)setProgressParam:(id)arg1 forKey:(id)arg2;

@end
