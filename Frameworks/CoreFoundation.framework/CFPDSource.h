/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPDSource : NSObject {
    const char * _actualPath;
    unsigned int  _byHost;
    CFPrefsDaemon * _cfprefsd;
    unsigned int  _checkedForNonPrefsPlist;
    unsigned int  _dirty;
    struct __CFString { } * _domain;
    short  _generationShmemIndex;
    unsigned int  _handlingRequest;
    unsigned int  _hasDrainedPendingChangesSinceLastReplyToOwner;
    NSObject<OS_dispatch_group> * _inProgressWriteGroup;
    unsigned int  _lastEgid;
    unsigned int  _lastEuid;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned int  _managed;
    unsigned int  _neverCache;
    struct __CFSet { } * _observingConnections;
    const char * _pathToTemporaryFileToWriteTo;
    NSObject<OS_xpc_object> * _pendingChangesQueue;
    unsigned long long  _pendingChangesSize;
    CFPDDataBuffer * _plist;
    unsigned int  _restrictedReadability;
    unsigned int  _unusedBits;
    struct __CFString { } * _userName;
    unsigned int  _waitingForDeviceUnlock;
    unsigned int  _watchingParentDirectory;
}

- (void)_writeToDisk:(bool)arg1;
- (id)acceptMessage:(id)arg1;
- (void)addOwner:(id)arg1;
- (void)asyncNotifyObserversOfChanges;
- (void)asyncWriteToDisk;
- (void)attachSizeWarningsToReply:(id)arg1 forByteCount:(unsigned long long)arg2;
- (void)beginHandlingRequest;
- (bool)byHost;
- (void)cacheActualAndTemporaryPathsWithEUID:(unsigned int)arg1 egid:(unsigned int)arg2;
- (void)cacheActualPath;
- (void)cacheActualPathCreatingIfNecessary:(bool)arg1 euid:(unsigned int)arg2 egid:(unsigned int)arg3;
- (void)clearCache;
- (struct __CFString { }*)cloudConfigurationPath;
- (struct __CFString { }*)container;
- (id)copyCachedObservationConnectionForMessage:(id)arg1;
- (id)copyPropertyList;
- (id)copyPropertyListWithoutDrainingPendingChanges;
- (void)dealloc;
- (struct __CFString { }*)debugDump;
- (id)description;
- (struct __CFString { }*)domain;
- (void)drainPendingChanges;
- (void)endHandlingRequest;
- (void)enqueueNewKey:(id)arg1 value:(id)arg2 size:(unsigned long long)arg3 encoding:(int)arg4;
- (bool)getUncanonicalizedPath:(char *)arg1;
- (void)handleAvoidCache;
- (void)handleDeviceUnlock;
- (void)handleEUIDorEGIDMismatch;
- (void)handleNeverCache;
- (void)handleNoPlistFound;
- (void)handleOpenForWritingFailureWithErrno:(int)arg1;
- (void)handleRootWrite;
- (void)handleSynchronous;
- (bool)hasEverHadMultipleOwners;
- (bool)hasObservers;
- (unsigned long long)hash;
- (id)initWithDomain:(struct __CFString { }*)arg1 userName:(struct __CFString { }*)arg2 byHost:(bool)arg3 managed:(bool)arg4 shmemIndex:(short)arg5 daemon:(id)arg6;
- (bool)isEqual:(id)arg1;
- (void)lockedAsync:(id /* block */)arg1;
- (void)lockedSync:(id /* block */)arg1;
- (bool)managed;
- (void)markNeedsToReloadFromDiskDueToFailedWrite;
- (int)owner;
- (void)removeOwner;
- (void)setDirty:(bool)arg1;
- (void)setObserved:(bool)arg1 bySenderOfMessage:(id)arg2;
- (void)setPlist:(id)arg1;
- (short)shmemIndex;
- (bool)shouldBePurgable;
- (void)stopNotifyingObserver:(long long)arg1;
- (void)syncWriteToDisk;
- (void)syncWriteToDiskAndFlushCache;
- (void)transitionToMultiOwner;
- (void)updateShmemEntry;
- (struct __CFString { }*)user;
- (bool)validateAccessToken:(int)arg1 accessType:(int)arg2;
- (int)validateMessage:(id)arg1 withNewKey:(id)arg2 newValue:(id)arg3 currentPlistData:(id)arg4 containerPath:(const char *)arg5 diagnosticMessage:(const char **)arg6;
- (int)validatePOSIXPermissionsForMessage:(id)arg1 accessType:(int)arg2 fullyValidated:(bool*)arg3;
- (bool)validateSandboxForRead:(id)arg1 containerPath:(const char *)arg2;
- (bool)validateSandboxForWrite:(id)arg1 containerPath:(const char *)arg2;
- (int)validateSandboxPermissionsForMessage:(id)arg1 containerPath:(const char *)arg2 accessType:(int)arg3;

@end
