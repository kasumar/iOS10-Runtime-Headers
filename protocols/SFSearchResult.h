/* Generated by RuntimeBrowser.
 */

@protocol SFSearchResult

@required

- (SFActionItem *)action;
- (NSString *)applicationBundleIdentifier;
- (NSString *)auxiliaryBottomText;
- (unsigned long long)auxiliaryBottomTextColor;
- (NSString *)auxiliaryMiddleText;
- (NSString *)auxiliaryTopText;
- (NSString *)calendarIdentifier;
- (SFCard *)card;
- (NSString *)completedQuery;
- (NSString *)completion;
- (SFImage *)completionImage;
- (NSString *)contactIdentifier;
- (NSString *)correctedQuery;
- (SFCustom *)customProperties;
- (NSArray *)descriptions;
- (NSNumber *)engagementScore;
- (NSDictionary *)featureScaling;
- (NSString *)footnote;
- (SFImage *)icon;
- (NSString *)identifier;
- (SFCard *)inlineCard;
- (NSString *)intendedQuery;
- (bool)isCentered;
- (bool)isLocalApplicationResult;
- (bool)isQuickGlance;
- (bool)isSecondaryTitleDetached;
- (bool)isStreaming;
- (NSDictionary *)localFeatures;
- (NSData *)mapsData;
- (SFImage *)mapsMoreIcon;
- (NSString *)mapsMoreString;
- (NSURL *)mapsMoreURL;
- (NSString *)mapsResultType;
- (NSNumber *)maxAge;
- (NSString *)mediaType;
- (unsigned long long)minimumRankOfTopHitToSuppressResult;
- (SFMoreResults *)moreResults;
- (SFPunchout *)moreResultsPunchout;
- (NSString *)nearbyBusinessesString;
- (unsigned long long)origRank;
- (double)personalizationScore;
- (unsigned long long)placement;
- (bool)preventThumbnailImageScaling;
- (NSString *)publishDate;
- (SFPunchout *)punchout;
- (NSNumber *)queryIndependentScore;
- (double)rankingScore;
- (bool)renderHorizontallyWithOtherResultsInCategory;
- (NSString *)resultBundleId;
- (NSString *)resultTemplate;
- (NSString *)resultType;
- (NSString *)secondaryTitle;
- (SFImage *)secondaryTitleImage;
- (NSString *)sectionBundleIdentifier;
- (NSString *)sectionHeader;
- (NSString *)sectionHeaderMore;
- (NSURL *)sectionHeaderMoreURL;
- (double)serverScore;
- (void)setAction:(SFActionItem *)arg1;
- (void)setApplicationBundleIdentifier:(NSString *)arg1;
- (void)setAuxiliaryBottomText:(NSString *)arg1;
- (void)setAuxiliaryBottomTextColor:(unsigned long long)arg1;
- (void)setAuxiliaryMiddleText:(NSString *)arg1;
- (void)setAuxiliaryTopText:(NSString *)arg1;
- (void)setCalendarIdentifier:(NSString *)arg1;
- (void)setCard:(SFCard *)arg1;
- (void)setCompletedQuery:(NSString *)arg1;
- (void)setCompletion:(NSString *)arg1;
- (void)setCompletionImage:(SFImage *)arg1;
- (void)setContactIdentifier:(NSString *)arg1;
- (void)setCorrectedQuery:(NSString *)arg1;
- (void)setCustomProperties:(SFCustom *)arg1;
- (void)setDescriptions:(NSArray *)arg1;
- (void)setEngagementScore:(NSNumber *)arg1;
- (void)setFeatureScaling:(NSDictionary *)arg1;
- (void)setFootnote:(NSString *)arg1;
- (void)setIcon:(SFImage *)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setInlineCard:(SFCard *)arg1;
- (void)setIntendedQuery:(NSString *)arg1;
- (void)setIsCentered:(bool)arg1;
- (void)setIsLocalApplicationResult:(bool)arg1;
- (void)setIsQuickGlance:(bool)arg1;
- (void)setIsSecondaryTitleDetached:(bool)arg1;
- (void)setIsStreaming:(bool)arg1;
- (void)setLocalFeatures:(NSDictionary *)arg1;
- (void)setMapsData:(NSData *)arg1;
- (void)setMapsMoreIcon:(SFImage *)arg1;
- (void)setMapsMoreString:(NSString *)arg1;
- (void)setMapsMoreURL:(NSURL *)arg1;
- (void)setMapsResultType:(NSString *)arg1;
- (void)setMaxAge:(NSNumber *)arg1;
- (void)setMediaType:(NSString *)arg1;
- (void)setMinimumRankOfTopHitToSuppressResult:(unsigned long long)arg1;
- (void)setMoreResults:(SFMoreResults *)arg1;
- (void)setMoreResultsPunchout:(SFPunchout *)arg1;
- (void)setNearbyBusinessesString:(NSString *)arg1;
- (void)setOrigRank:(unsigned long long)arg1;
- (void)setPersonalizationScore:(double)arg1;
- (void)setPlacement:(unsigned long long)arg1;
- (void)setPreventThumbnailImageScaling:(bool)arg1;
- (void)setPublishDate:(NSString *)arg1;
- (void)setPunchout:(SFPunchout *)arg1;
- (void)setQueryIndependentScore:(NSNumber *)arg1;
- (void)setRankingScore:(double)arg1;
- (void)setRenderHorizontallyWithOtherResultsInCategory:(bool)arg1;
- (void)setResultBundleId:(NSString *)arg1;
- (void)setResultTemplate:(NSString *)arg1;
- (void)setResultType:(NSString *)arg1;
- (void)setSecondaryTitle:(NSString *)arg1;
- (void)setSecondaryTitleImage:(SFImage *)arg1;
- (void)setSectionBundleIdentifier:(NSString *)arg1;
- (void)setSectionHeader:(NSString *)arg1;
- (void)setSectionHeaderMore:(NSString *)arg1;
- (void)setSectionHeaderMoreURL:(NSURL *)arg1;
- (void)setServerScore:(double)arg1;
- (void)setSourceName:(NSString *)arg1;
- (void)setStoreIdentifier:(NSString *)arg1;
- (void)setThumbnail:(SFImage *)arg1;
- (void)setTitle:(SFText *)arg1;
- (void)setTitleNote:(NSString *)arg1;
- (void)setTitleNoteSize:(NSNumber *)arg1;
- (void)setTopHit:(unsigned long long)arg1;
- (void)setTopicDistribution:(NSDictionary *)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUrl:(NSURL *)arg1;
- (void)setUserActivityRequiredString:(NSString *)arg1;
- (NSString *)sourceName;
- (NSString *)storeIdentifier;
- (SFImage *)thumbnail;
- (SFText *)title;
- (NSString *)titleNote;
- (NSNumber *)titleNoteSize;
- (unsigned long long)topHit;
- (NSDictionary *)topicDistribution;
- (unsigned long long)type;
- (NSURL *)url;
- (NSString *)userActivityRequiredString;

@end
