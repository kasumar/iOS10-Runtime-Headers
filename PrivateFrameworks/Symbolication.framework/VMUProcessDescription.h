/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUProcessDescription : NSObject <VMULibraryLoadDelegate> {
    NSDictionary * _binaryImageHints;
    bool  _binaryImagePostProcessingComplete;
    NSMutableArray * _binaryImages;
    NSDictionary * _buildVersionDictionary;
    int  _cpuType;
    NSDate * _date;
    unsigned long long  _executableLoadAddress;
    NSString * _executablePath;
    bool  _executablePathNeedsCorrection;
    NSString * _hardwareModel;
    bool  _is64Bit;
    _VMULibraryLoadObserver * _loadUnloadObserver;
    NSDictionary * _lsApplicationInformation;
    struct mapped_memory_t { } * _mappedMemory;
    NSDictionary * _osVersionDictionary;
    NSString * _parentExecutablePath;
    NSString * _parentProcessName;
    int  _pid;
    int  _ppid;
    struct timeval { 
        long long tv_sec; 
        int tv_usec; 
    }  _proc_starttime;
    NSString * _processName;
    bool  _processNameNeedsCorrection;
    NSArray * _sortedBinaryImages;
    unsigned int  _task;
    NSArray * _unreadableBinaryImagePaths;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)parseBinaryImagesDescription:(id)arg1;

- (id)_binaryImagesDescriptionForRanges:(id)arg1;
- (id)_buildInfoDescription;
- (id)_buildVersionDictionary;
- (id)_bundleLock;
- (id)_cpuTypeDescription;
- (void)_libraryLoaded:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_osVersionDictionary;
- (id)_rangesOfBinaryImages:(id)arg1 forBacktraces:(id)arg2;
- (id)_sanitizeVersion:(id)arg1;
- (id)_systemVersionDescription;
- (id)binaryImageDictionaryForAddress:(unsigned long long)arg1;
- (id)binaryImages;
- (id)binaryImagesDescription;
- (id)binaryImagesDescriptionForBacktraces:(id)arg1;
- (id)bundleIdentifier;
- (void)clearCrashReporterInfo;
- (int)cpuType;
- (id)date;
- (id)dateAndVersionDescription;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)executablePath;
- (id)initWithPid:(int)arg1 orTask:(unsigned int)arg2;
- (id)initWithPid:(int)arg1 orTask:(unsigned int)arg2 getBinariesList:(bool)arg3;
- (bool)isAppleApplication;
- (id)parentProcessName;
- (int)pid;
- (id)processDescriptionHeader;
- (id)processIdentifier;
- (id)processName;
- (id)processVersion;
- (id)processVersionDictionary;
- (void)setCrashReporterInfo;
- (unsigned int)task;

@end
