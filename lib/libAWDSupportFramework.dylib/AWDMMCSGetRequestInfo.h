/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDMMCSGetRequestInfo : PBCodable <NSCopying> {
    bool  _allItemsFailed;
    bool  _allItemsSuccessful;
    NSMutableArray * _authHttpInfos;
    NSMutableArray * _cancelErrors;
    int  _cancelledErrorCode;
    NSString * _cancelledErrorDomain;
    NSString * _clientId;
    NSMutableArray * _completeHttpInfos;
    NSMutableArray * _containerHttpInfos;
    long long  _duration;
    NSMutableArray * _errors;
    struct { 
        unsigned int duration : 1; 
        unsigned int localBytes : 1; 
        unsigned int resumedBytes : 1; 
        unsigned int startTime : 1; 
        unsigned int timestamp : 1; 
        unsigned int cancelledErrorCode : 1; 
        unsigned int itemCount : 1; 
        unsigned int itemCountFailed : 1; 
        unsigned int itemCountSuccessful : 1; 
        unsigned int itemsNeedingChunks : 1; 
        unsigned int requestErrorCode : 1; 
        unsigned int allItemsFailed : 1; 
        unsigned int allItemsSuccessful : 1; 
    }  _has;
    int  _itemCount;
    unsigned int  _itemCountFailed;
    unsigned int  _itemCountSuccessful;
    int  _itemsNeedingChunks;
    long long  _localBytes;
    int  _requestErrorCode;
    NSString * _requestErrorDomain;
    long long  _resumedBytes;
    long long  _startTime;
    long long  _timestamp;
}

@property (nonatomic) bool allItemsFailed;
@property (nonatomic) bool allItemsSuccessful;
@property (nonatomic, retain) NSMutableArray *authHttpInfos;
@property (nonatomic, retain) NSMutableArray *cancelErrors;
@property (nonatomic) int cancelledErrorCode;
@property (nonatomic, retain) NSString *cancelledErrorDomain;
@property (nonatomic, retain) NSString *clientId;
@property (nonatomic, retain) NSMutableArray *completeHttpInfos;
@property (nonatomic, retain) NSMutableArray *containerHttpInfos;
@property (nonatomic) long long duration;
@property (nonatomic, retain) NSMutableArray *errors;
@property (nonatomic) bool hasAllItemsFailed;
@property (nonatomic) bool hasAllItemsSuccessful;
@property (nonatomic) bool hasCancelledErrorCode;
@property (nonatomic, readonly) bool hasCancelledErrorDomain;
@property (nonatomic, readonly) bool hasClientId;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasItemCount;
@property (nonatomic) bool hasItemCountFailed;
@property (nonatomic) bool hasItemCountSuccessful;
@property (nonatomic) bool hasItemsNeedingChunks;
@property (nonatomic) bool hasLocalBytes;
@property (nonatomic) bool hasRequestErrorCode;
@property (nonatomic, readonly) bool hasRequestErrorDomain;
@property (nonatomic) bool hasResumedBytes;
@property (nonatomic) bool hasStartTime;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int itemCount;
@property (nonatomic) unsigned int itemCountFailed;
@property (nonatomic) unsigned int itemCountSuccessful;
@property (nonatomic) int itemsNeedingChunks;
@property (nonatomic) long long localBytes;
@property (nonatomic) int requestErrorCode;
@property (nonatomic, retain) NSString *requestErrorDomain;
@property (nonatomic) long long resumedBytes;
@property (nonatomic) long long startTime;
@property (nonatomic) long long timestamp;

+ (Class)authHttpInfosType;
+ (Class)cancelErrorType;
+ (Class)completeHttpInfosType;
+ (Class)containerHttpInfosType;
+ (Class)errorType;

- (void)addAuthHttpInfos:(id)arg1;
- (void)addCancelError:(id)arg1;
- (void)addCompleteHttpInfos:(id)arg1;
- (void)addContainerHttpInfos:(id)arg1;
- (void)addError:(id)arg1;
- (bool)allItemsFailed;
- (bool)allItemsSuccessful;
- (id)authHttpInfos;
- (id)authHttpInfosAtIndex:(unsigned long long)arg1;
- (unsigned long long)authHttpInfosCount;
- (id)cancelErrorAtIndex:(unsigned long long)arg1;
- (id)cancelErrors;
- (unsigned long long)cancelErrorsCount;
- (int)cancelledErrorCode;
- (id)cancelledErrorDomain;
- (void)clearAuthHttpInfos;
- (void)clearCancelErrors;
- (void)clearCompleteHttpInfos;
- (void)clearContainerHttpInfos;
- (void)clearErrors;
- (id)clientId;
- (id)completeHttpInfos;
- (id)completeHttpInfosAtIndex:(unsigned long long)arg1;
- (unsigned long long)completeHttpInfosCount;
- (id)containerHttpInfos;
- (id)containerHttpInfosAtIndex:(unsigned long long)arg1;
- (unsigned long long)containerHttpInfosCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)duration;
- (id)errorAtIndex:(unsigned long long)arg1;
- (id)errors;
- (unsigned long long)errorsCount;
- (bool)hasAllItemsFailed;
- (bool)hasAllItemsSuccessful;
- (bool)hasCancelledErrorCode;
- (bool)hasCancelledErrorDomain;
- (bool)hasClientId;
- (bool)hasDuration;
- (bool)hasItemCount;
- (bool)hasItemCountFailed;
- (bool)hasItemCountSuccessful;
- (bool)hasItemsNeedingChunks;
- (bool)hasLocalBytes;
- (bool)hasRequestErrorCode;
- (bool)hasRequestErrorDomain;
- (bool)hasResumedBytes;
- (bool)hasStartTime;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)itemCount;
- (unsigned int)itemCountFailed;
- (unsigned int)itemCountSuccessful;
- (int)itemsNeedingChunks;
- (long long)localBytes;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)requestErrorCode;
- (id)requestErrorDomain;
- (long long)resumedBytes;
- (void)setAllItemsFailed:(bool)arg1;
- (void)setAllItemsSuccessful:(bool)arg1;
- (void)setAuthHttpInfos:(id)arg1;
- (void)setCancelErrors:(id)arg1;
- (void)setCancelledErrorCode:(int)arg1;
- (void)setCancelledErrorDomain:(id)arg1;
- (void)setClientId:(id)arg1;
- (void)setCompleteHttpInfos:(id)arg1;
- (void)setContainerHttpInfos:(id)arg1;
- (void)setDuration:(long long)arg1;
- (void)setErrors:(id)arg1;
- (void)setHasAllItemsFailed:(bool)arg1;
- (void)setHasAllItemsSuccessful:(bool)arg1;
- (void)setHasCancelledErrorCode:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasItemCount:(bool)arg1;
- (void)setHasItemCountFailed:(bool)arg1;
- (void)setHasItemCountSuccessful:(bool)arg1;
- (void)setHasItemsNeedingChunks:(bool)arg1;
- (void)setHasLocalBytes:(bool)arg1;
- (void)setHasRequestErrorCode:(bool)arg1;
- (void)setHasResumedBytes:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setItemCount:(int)arg1;
- (void)setItemCountFailed:(unsigned int)arg1;
- (void)setItemCountSuccessful:(unsigned int)arg1;
- (void)setItemsNeedingChunks:(int)arg1;
- (void)setLocalBytes:(long long)arg1;
- (void)setRequestErrorCode:(int)arg1;
- (void)setRequestErrorDomain:(id)arg1;
- (void)setResumedBytes:(long long)arg1;
- (void)setStartTime:(long long)arg1;
- (void)setTimestamp:(long long)arg1;
- (long long)startTime;
- (long long)timestamp;
- (void)writeTo:(id)arg1;

@end
