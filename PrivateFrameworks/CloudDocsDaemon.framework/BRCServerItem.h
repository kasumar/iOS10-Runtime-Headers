/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCServerItem : NSObject <BRCItem> {
    BRCClientZone * _clientZone;
    BRCItemID * _itemID;
    BRCVersion * _latestVersion;
    bool  _needsInsert;
    NSString * _originalName;
    NSNumber * _ownerKey;
    long long  _rank;
    BRCServerZone * _serverZone;
    BRCAccountSession * _session;
    unsigned long long  _sharingOptions;
    BRCStatInfo * _st;
    NSString * _symlinkTarget;
    BRCServerZone * _zone;
}

@property (nonatomic, readonly) BRCClientZone *clientZone;
@property (nonatomic, readonly) bool isBRAlias;
@property (nonatomic, readonly) bool isDead;
@property (nonatomic, readonly) bool isDirectory;
@property (nonatomic, readonly) bool isDocument;
@property (nonatomic, readonly) bool isFSRoot;
@property (nonatomic, readonly) bool isFinderBookmark;
@property (nonatomic, readonly) bool isLive;
@property (nonatomic, readonly) bool isPackage;
@property (nonatomic, readonly) bool isSymLink;
@property (nonatomic, readonly) BRCItemID *itemID;
@property (nonatomic, readonly) BRCVersion *latestVersion;
@property (nonatomic, readonly) NSString *originalName;
@property (nonatomic, readonly) NSNumber *ownerKey;
@property (nonatomic, readonly) long long rank;
@property (nonatomic, readonly) BRCServerZone *serverZone;
@property (nonatomic, readonly) BRCAccountSession *session;
@property (nonatomic) unsigned long long sharingOptions;
@property (nonatomic, readonly) BRCStatInfo *st;
@property (nonatomic, readonly) NSString *symlinkTarget;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)_t_pcsChainState;
- (id)appLibraryForRootItem;
- (id)clientZone;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithContext:(id)arg1;
- (unsigned long long)diffAgainstServerItem:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromPQLResultSet:(id)arg1 serverZone:(id)arg2 error:(id*)arg3;
- (id)initFromPQLResultSet:(id)arg1 session:(id)arg2 error:(id*)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithServerItem:(id)arg1;
- (bool)isBRAlias;
- (bool)isDead;
- (bool)isDirectory;
- (bool)isDocument;
- (bool)isFSRoot;
- (bool)isFinderBookmark;
- (bool)isLive;
- (bool)isPackage;
- (bool)isSymLink;
- (id)itemID;
- (id)latestVersion;
- (id)newLocalItemWithServerZone:(id)arg1 dbRowID:(unsigned long long)arg2;
- (id)originalName;
- (id)ownerKey;
- (long long)rank;
- (id)serverZone;
- (id)session;
- (void)setSharingOptions:(unsigned long long)arg1;
- (unsigned long long)sharingOptions;
- (id)st;
- (id)symlinkTarget;
- (bool)validateLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;

@end
