/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBFeedItem : PBCodable <FCFeedPersonalizingArticle, NSCopying> {
    NSString * _articleID;
    NSString * _clusterID;
    unsigned long long  _contentType;
    unsigned long long  _feedHalfLifeMilliseconds;
    NSString * _feedID;
    double  _globalScore;
    struct { 
        unsigned int contentType : 1; 
        unsigned int feedHalfLifeMilliseconds : 1; 
        unsigned int globalScore : 1; 
        unsigned int minimumNewsVersion : 1; 
        unsigned int order : 1; 
        unsigned int publishDateMilliseconds : 1; 
        unsigned int hasCoverArt : 1; 
        unsigned int hasThumbnail : 1; 
        unsigned int isExplicitContent : 1; 
        unsigned int isFromBlockedStorefront : 1; 
        unsigned int isPaid : 1; 
    }  _has;
    bool  _hasCoverArt;
    bool  _hasThumbnail;
    bool  _isExplicitContent;
    bool  _isFromBlockedStorefront;
    bool  _isPaid;
    long long  _minimumNewsVersion;
    unsigned long long  _order;
    unsigned long long  _publishDateMilliseconds;
    NSString * _sourceChannelID;
    NSMutableArray * _topicIDs;
}

@property (nonatomic, readonly) unsigned long long articleContentType;
@property (nonatomic, readonly, copy) NSString *articleID;
@property (nonatomic, retain) NSString *articleID;
@property (nonatomic, retain) NSString *clusterID;
@property (nonatomic) unsigned long long contentType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long feedHalfLifeMilliseconds;
@property (nonatomic, retain) NSString *feedID;
@property (nonatomic) double globalScore;
@property (nonatomic, readonly) double globalUserFeedback;
@property (nonatomic, readonly) unsigned long long halfLife;
@property (nonatomic, readonly) bool hasArticleID;
@property (nonatomic, readonly) bool hasClusterID;
@property (nonatomic) bool hasContentType;
@property (nonatomic) bool hasCoverArt;
@property (nonatomic) bool hasFeedHalfLifeMilliseconds;
@property (nonatomic, readonly) bool hasFeedID;
@property (nonatomic) bool hasGlobalScore;
@property (nonatomic, readonly) bool hasGlobalUserFeedback;
@property (nonatomic) bool hasHasCoverArt;
@property (nonatomic) bool hasHasThumbnail;
@property (nonatomic) bool hasIsExplicitContent;
@property (nonatomic) bool hasIsFromBlockedStorefront;
@property (nonatomic) bool hasIsPaid;
@property (nonatomic) bool hasMinimumNewsVersion;
@property (nonatomic) bool hasOrder;
@property (nonatomic) bool hasPublishDateMilliseconds;
@property (nonatomic, readonly) bool hasSourceChannelID;
@property (nonatomic) bool hasThumbnail;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isExplicitContent;
@property (nonatomic) bool isFromBlockedStorefront;
@property (nonatomic, readonly) bool isPaid;
@property (nonatomic) bool isPaid;
@property (nonatomic) long long minimumNewsVersion;
@property (nonatomic) unsigned long long order;
@property (nonatomic, readonly, copy) NSDate *publishDate;
@property (nonatomic) unsigned long long publishDateMilliseconds;
@property (nonatomic, readonly, copy) NSString *publisherID;
@property (nonatomic, retain) NSString *sourceChannelID;
@property (nonatomic, readonly, copy) NSString *sourceFeedID;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *topicIDs;
@property (nonatomic, retain) NSMutableArray *topicIDs;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

+ (Class)topicIDsType;

- (void)addTopicIDs:(id)arg1;
- (id)articleID;
- (void)clearTopicIDs;
- (id)clusterID;
- (unsigned long long)contentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)feedHalfLifeMilliseconds;
- (id)feedID;
- (double)globalScore;
- (bool)hasArticleID;
- (bool)hasClusterID;
- (bool)hasContentType;
- (bool)hasCoverArt;
- (bool)hasFeedHalfLifeMilliseconds;
- (bool)hasFeedID;
- (bool)hasGlobalScore;
- (bool)hasHasCoverArt;
- (bool)hasHasThumbnail;
- (bool)hasIsExplicitContent;
- (bool)hasIsFromBlockedStorefront;
- (bool)hasIsPaid;
- (bool)hasMinimumNewsVersion;
- (bool)hasOrder;
- (bool)hasPublishDateMilliseconds;
- (bool)hasSourceChannelID;
- (bool)hasThumbnail;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isExplicitContent;
- (bool)isFromBlockedStorefront;
- (bool)isPaid;
- (void)mergeFrom:(id)arg1;
- (long long)minimumNewsVersion;
- (unsigned long long)order;
- (unsigned long long)publishDateMilliseconds;
- (bool)readFrom:(id)arg1;
- (void)setArticleID:(id)arg1;
- (void)setClusterID:(id)arg1;
- (void)setContentType:(unsigned long long)arg1;
- (void)setFeedHalfLifeMilliseconds:(unsigned long long)arg1;
- (void)setFeedID:(id)arg1;
- (void)setGlobalScore:(double)arg1;
- (void)setHasContentType:(bool)arg1;
- (void)setHasCoverArt:(bool)arg1;
- (void)setHasFeedHalfLifeMilliseconds:(bool)arg1;
- (void)setHasGlobalScore:(bool)arg1;
- (void)setHasHasCoverArt:(bool)arg1;
- (void)setHasHasThumbnail:(bool)arg1;
- (void)setHasIsExplicitContent:(bool)arg1;
- (void)setHasIsFromBlockedStorefront:(bool)arg1;
- (void)setHasIsPaid:(bool)arg1;
- (void)setHasMinimumNewsVersion:(bool)arg1;
- (void)setHasOrder:(bool)arg1;
- (void)setHasPublishDateMilliseconds:(bool)arg1;
- (void)setHasThumbnail:(bool)arg1;
- (void)setIsExplicitContent:(bool)arg1;
- (void)setIsFromBlockedStorefront:(bool)arg1;
- (void)setIsPaid:(bool)arg1;
- (void)setMinimumNewsVersion:(long long)arg1;
- (void)setOrder:(unsigned long long)arg1;
- (void)setPublishDateMilliseconds:(unsigned long long)arg1;
- (void)setSourceChannelID:(id)arg1;
- (void)setTopicIDs:(id)arg1;
- (id)sourceChannelID;
- (id)topicIDs;
- (id)topicIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicIDsCount;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)cloudKitKeys;
+ (id)feedItemWithCKFeedItemAndArticleRecord:(id)arg1 storefrontID:(id)arg2;

- (unsigned long long)articleContentType;
- (long long)compareOrder:(id)arg1;
- (long long)compareOrderDescending:(id)arg1;
- (id)description;
- (void)enumerateFeaturesWithBlock:(id /* block */)arg1;
- (double)globalScoreAtDate:(id)arg1;
- (double)globalUserFeedback;
- (unsigned long long)halfLife;
- (bool)hasFeature:(id)arg1;
- (bool)hasGlobalUserFeedback;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)mustShow;
- (id)publishDate;
- (id)publisherID;
- (id)sourceFeedID;

@end
