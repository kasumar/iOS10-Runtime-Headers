/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNChangeHistory : NSObject <NSSecureCoding> {
    bool  _changesTruncated;
    NSArray * _contactChanges;
    NSArray * _groupChanges;
    long long  _latestSequenceNumber;
}

@property (nonatomic) bool changesTruncated;
@property (nonatomic, retain) NSArray *contactChanges;
@property (nonatomic, retain) NSArray *groupChanges;
@property (nonatomic) long long latestSequenceNumber;

+ (bool)supportsSecureCoding;

- (bool)changesTruncated;
- (id)contactChanges;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupChanges;
- (id)initWithCoder:(id)arg1;
- (long long)latestSequenceNumber;
- (void)setChangesTruncated:(bool)arg1;
- (void)setContactChanges:(id)arg1;
- (void)setGroupChanges:(id)arg1;
- (void)setLatestSequenceNumber:(long long)arg1;

@end
