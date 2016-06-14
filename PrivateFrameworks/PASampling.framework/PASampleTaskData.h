/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PASampleTaskData : NSObject <PASerializable> {
    NSSet * _donatingUniqueIds;
    PASampleTaskDataPrivateData * _privateData;
    NSMutableDictionary * _sampleThreadsDict;
    PASampleTimeInsensitiveTaskData * _timeInsensitiveTaskData;
}

@property (readonly) bool allowsIdleExit;
@property (readonly) NSString *bundleName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSSet *donatingUniqueIds;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *imageInfos;
@property (readonly) bool isBoosted;
@property (readonly) bool isDarwinBG;
@property (readonly) bool isDarwinExtBG;
@property (readonly) bool isDirty;
@property (readonly) bool isForeground;
@property (readonly) bool isFrozen;
@property (readonly) bool isImpDonor;
@property (readonly) bool isLiveImpDonor;
@property (readonly) bool isNonVisible;
@property (readonly) bool isPidSuspended;
@property (readonly) bool isSuppressed;
@property (readonly) bool isTaskResourceFlagged;
@property (readonly) bool isTerminatedSnapshot;
@property (readonly) bool isThirdParty;
@property (readonly) bool isTimerThrottled;
@property (readonly) bool isUnresponsive;
@property (readonly) bool isVisible;
@property (readonly) unsigned int latency_qos;
@property (readonly) unsigned long long mainBinaryOffset;
@property (readonly) NSString *mainBinaryPath;
@property (readonly) NSUUID *mainBinaryUuid;
@property (readonly) double mostRecentTimeSamplingOnlyMainThread;
@property (copy) NSString *name;
@property (readonly) int numberOfCopyOnWritePageFaults;
@property (readonly) int numberOfPageFaults;
@property (readonly) int numberOfPageIns;
@property (readonly) int pid;
@property (readonly) int ppid;
@property (readonly) int rpid;
@property (readonly) NSDictionary *sampleThreads;
@property (readonly) unsigned long long ss_flags;
@property (readonly) Class superclass;
@property (readonly) int suspendCount;
@property (readonly) long long taskSizeInBytes;
@property (readonly) double timeOfLastResponse;
@property (readonly) unsigned int uid;
@property (readonly) unsigned long long uniquePid;
@property (readonly) bool usesSuddenTermination;
@property (readonly) bool wqAndDirtyAreStatic;
@property (readonly) bool wqExceededConstrainedThreadLimit;
@property (readonly) bool wqExceededTotalThreadLimit;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (void).cxx_destruct;
- (bool)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (bool)allowsIdleExit;
- (struct _CSArchitecture { int x1; int x2; })architecture;
- (id)architectureString;
- (id)bundleName;
- (id)debugDescription;
- (id)donatingUniqueIds;
- (id)imageInfos;
- (id)initWithKCDataStackshotDeltaTask:(const struct task_delta_snapshot_v2 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; }*)arg1 andTimeInsensitiveTaskData:(id)arg2;
- (id)initWithKCDataStackshotTask:(const struct task_snapshot_v2 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; int x15; BOOL x16[32]; }*)arg1 andTimeInsensitiveTaskData:(id)arg2;
- (id)initWithStackshotTask:(id)arg1 andTimeInsensitiveTaskData:(id)arg2;
- (id)initWithTimeInsensitiveTaskData:(id)arg1;
- (bool)isBoosted;
- (bool)isDarwinBG;
- (bool)isDarwinExtBG;
- (bool)isDirty;
- (bool)isForeground;
- (bool)isFrozen;
- (bool)isImpDonor;
- (bool)isLiveImpDonor;
- (bool)isNonVisible;
- (bool)isPidSuspended;
- (bool)isSameAsTask:(id)arg1;
- (bool)isSuppressed;
- (bool)isTaskResourceFlagged;
- (bool)isTerminatedSnapshot;
- (bool)isThirdParty;
- (bool)isTimerThrottled;
- (bool)isUnresponsive;
- (bool)isVisible;
- (unsigned int)latency_qos;
- (unsigned long long)mainBinaryOffset;
- (id)mainBinaryPath;
- (id)mainBinaryUuid;
- (double)mostRecentTimeSamplingOnlyMainThread;
- (id)mutableSampleThreads;
- (id)name;
- (int)numberOfCopyOnWritePageFaults;
- (int)numberOfPageFaults;
- (int)numberOfPageIns;
- (int)pid;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (int)ppid;
- (int)rpid;
- (id)sampleThreadForTid:(unsigned long long)arg1;
- (id)sampleThreads;
- (void)setDonatingUniqueIds:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSampleThreads:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (unsigned long long)ss_flags;
- (int)suspendCount;
- (long long)taskSizeInBytes;
- (id)timeInsensitiveTaskData;
- (double)timeOfLastResponse;
- (unsigned int)uid;
- (unsigned long long)uniquePid;
- (bool)usesSuddenTermination;
- (bool)wqAndDirtyAreStatic;
- (bool)wqExceededConstrainedThreadLimit;
- (bool)wqExceededTotalThreadLimit;

@end
