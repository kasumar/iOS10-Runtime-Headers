/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchCategory : NSObject <NSSecureCoding> {
    GEOPDAutocompleteEntry * _autocompleteEntry;
    GEOPDBrowseCategory * _browseCategory;
    NSArray * _subcategories;
}

@property (getter=_autocompleteEntry, nonatomic, readonly) GEOPDAutocompleteEntry *autocompleteEntry;
@property (nonatomic, readonly) NSString *displayString;
@property (nonatomic, readonly) NSURL *mapsURL;
@property (nonatomic, readonly) NSString *popularTokenString;
@property (nonatomic, readonly) NSString *shortDisplayString;
@property (nonatomic, readonly) GEOFeatureStyleAttributes *styleAttributes;
@property (nonatomic, readonly) NSArray *subcategories;
@property (getter=_suggestionEntryMetadata, nonatomic, readonly) NSData *suggestionEntryMetadata;

+ (id)categoryForURL:(id)arg1;
+ (void)sendFeedbackForVisibleCategories:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)_autocompleteEntry;
- (id)_browseCategory;
- (id)_suggestionEntryMetadata;
- (void)dealloc;
- (id)displayString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAutocompleteEntry:(id)arg1;
- (id)initWithBrowseCategory:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStorage:(id)arg1;
- (id)mapsURL;
- (id)popularTokenString;
- (void)sendFeedback;
- (id)shortDisplayString;
- (id)styleAttributes;
- (id)subcategories;

@end
