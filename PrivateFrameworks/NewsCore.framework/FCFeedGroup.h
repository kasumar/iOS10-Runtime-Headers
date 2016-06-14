/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedGroup : NSObject <FCFeedElement, FCFeedGroupOutlining> {
    FCFeedDescriptor * _L2FeedDescriptor;
    NSDate * _creationDate;
    NSArray * _elements;
    long long  _groupType;
    NSArray * _headlines;
    NSString * _identifier;
    unsigned long long  _mergeID;
    NSString * _name;
    unsigned long long  _options;
    NSString * _sourceIdentifier;
    <FCFeedTheming> * _theme;
}

@property (nonatomic, readonly, copy) FCFeedDescriptor *L2FeedDescriptor;
@property (nonatomic, readonly, copy) NSString *backingTagID;
@property (nonatomic, readonly) bool canBeExtended;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *elements;
@property (nonatomic, readonly) long long feedElementType;
@property (nonatomic, readonly) long long groupType;
@property (nonatomic, readonly) bool hasStrictHeadlineOrder;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *headlines;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) unsigned long long mergeID;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly, copy) NSString *sourceIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) <FCFeedTheming> *theme;

+ (id)groupFromPBGroup:(id)arg1;
+ (id)pbGroupFromGroup:(id)arg1 sharedStringIndex:(id)arg2;

- (void).cxx_destruct;
- (id)L2FeedDescriptor;
- (id)backingTagID;
- (bool)canBeExtended;
- (id)copyWithElements:(id)arg1;
- (id)copyWithMergeID:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)description;
- (id)elements;
- (long long)feedElementType;
- (long long)groupType;
- (bool)hasStrictHeadlineOrder;
- (id)headlines;
- (id)identifier;
- (id)initWithGroupType:(long long)arg1 sourceIdentifier:(id)arg2 name:(id)arg3 theme:(id)arg4 L2FeedDescriptor:(id)arg5 elements:(id)arg6 options:(unsigned long long)arg7;
- (id)initWithIdentifier:(id)arg1 groupType:(long long)arg2 sourceIdentifier:(id)arg3 creationDate:(id)arg4 name:(id)arg5 theme:(id)arg6 L2FeedDescriptor:(id)arg7 elements:(id)arg8 options:(unsigned long long)arg9 mergeID:(unsigned long long)arg10;
- (bool)isGap;
- (unsigned long long)mergeID;
- (id)name;
- (unsigned long long)options;
- (id)sourceIdentifier;
- (id)theme;

@end
