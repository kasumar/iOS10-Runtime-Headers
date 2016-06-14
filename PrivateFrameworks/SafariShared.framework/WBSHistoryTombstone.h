/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSHistoryTombstone : NSObject {
    double  _endTime;
    long long  _generation;
    double  _startTime;
    NSData * _urlHash;
    NSData * _urlSalt;
    NSString * _urlString;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) double endTime;
@property (nonatomic, readonly) long long generation;
@property (getter=isSecure, nonatomic, readonly) bool secure;
@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) NSData *urlHash;
@property (nonatomic, readonly) NSData *urlSalt;
@property (nonatomic, readonly) NSString *urlString;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (double)endTime;
- (long long)generation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSQLiteRow:(id)arg1 historyStore:(id)arg2;
- (id)initWithURLString:(id)arg1 urlHash:(id)arg2 urlSalt:(id)arg3 startTime:(double)arg4 endTime:(double)arg5 generation:(long long)arg6;
- (bool)isSecure;
- (bool)matchesVisitTime:(double)arg1 urlString:(id)arg2;
- (id)secureTombstoneWithSalt:(id)arg1;
- (double)startTime;
- (id)urlHash;
- (id)urlSalt;
- (id)urlString;

@end
