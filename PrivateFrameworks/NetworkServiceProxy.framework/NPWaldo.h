/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPWaldo : NSObject <NSSecureCoding> {
    long long  _currentEdgeIndex;
    NSArray * _currentEdges;
    NSDictionary * _currentNetworkCharacteristics;
    NSData * _dayPass;
    bool  _daypassRefreshInProgress;
    NSArray * _daypassSoftExpiry;
    <NPWaldoDelegate> * _delegate;
    NSArray * _edges;
    bool  _enableLatencyDerivation;
    NSMutableDictionary * _interfaceTypeEdgeLists;
    bool  _isEphemeral;
    double  _latencyFactorA;
    double  _latencyFactorB;
    double  _latencyFactorX;
    bool  _needsInitialSave;
    NPTuscanyEdge * _nextEdge;
    NSDictionary * _nextProbeDates;
    long long  _pendingDayPassCount;
    double  _probeFrequency;
    long long  _retryPause;
    NSMutableDictionary * _signatureEdgeLists;
    unsigned int  _timestamp;
    double  _ttl;
    unsigned long long  _version;
}

@property (readonly) NPTuscanyEdge *currentEdge;
@property long long currentEdgeIndex;
@property (readonly) NSArray *currentEdgeList;
@property (readonly) NSArray *currentEdges;
@property (retain) NSData *dayPass;
@property (readonly) long long dayPassFetchCount;
@property bool daypassRefreshInProgress;
@property (readonly) NSArray *daypassSoftExpiry;
@property <NPWaldoDelegate> *delegate;
@property (readonly) unsigned long long edgeCount;
@property (readonly) NSArray *edges;
@property bool enableLatencyDerivation;
@property (retain) NSMutableDictionary *interfaceTypeEdgeLists;
@property bool isEphemeral;
@property double latencyFactorA;
@property double latencyFactorB;
@property double latencyFactorX;
@property bool needsInitialSave;
@property (readonly) NPTuscanyEdge *nextEdge;
@property (retain) NSDictionary *nextProbeDates;
@property (readonly) long long pendingDayPassCount;
@property (readonly) double probeFrequency;
@property (readonly) long long retryPause;
@property (retain) NSMutableDictionary *signatureEdgeLists;
@property (readonly) unsigned int timestamp;
@property (readonly) double ttl;
@property (readonly) unsigned long long version;

+ (void)removeFromKeychain;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)cancelProbes;
- (id)currentEdge;
- (long long)currentEdgeIndex;
- (id)currentEdgeList;
- (id)currentEdges;
- (id)dayPass;
- (long long)dayPassFetchCount;
- (bool)daypassRefreshInProgress;
- (id)daypassSoftExpiry;
- (id)delegate;
- (id)description;
- (id)edgeAtIndex:(long long)arg1;
- (unsigned long long)edgeCount;
- (id)edges;
- (bool)enableLatencyDerivation;
- (void)encodeWithCoder:(id)arg1;
- (long long)getValidDayPassCount:(long long*)arg1;
- (id)initFromKeychain;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentEdgeOfWaldoInfo:(id)arg1;
- (id)initWithJSONData:(id)arg1 timestamp:(unsigned int)arg2;
- (id)interfaceTypeEdgeLists;
- (bool)isEphemeral;
- (double)latencyFactorA;
- (double)latencyFactorB;
- (double)latencyFactorX;
- (void)logEdgeList:(id)arg1 debug:(bool)arg2 toStdout:(bool)arg3;
- (void)logLatencyInfoToStdout:(bool)arg1;
- (bool)moveToNextEdge;
- (bool)moveToNextOnRamp;
- (bool)needsInitialSave;
- (id)nextEdge;
- (id)nextProbeDates;
- (long long)pendingDayPassCount;
- (double)probeFrequency;
- (void)refreshDayPassesWithCompletionHandler:(id /* block */)arg1;
- (void)reprocessWithCompletionHandler:(id /* block */)arg1;
- (void)reprocessWithNewRTTFromConnection:(id)arg1;
- (void)retainValidDayPassesFromWaldInfo:(id)arg1;
- (long long)retryPause;
- (void)saveToKeychain;
- (bool)selectBestEdge;
- (void)setCurrentEdgeIndex:(long long)arg1;
- (void)setCurrentNetworkCharacteristics:(id)arg1;
- (void)setDayPass:(id)arg1;
- (void)setDaypassRefreshInProgress:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEdgeListForCurrentNetworkSignature:(id)arg1;
- (void)setEnableLatencyDerivation:(bool)arg1;
- (void)setInterfaceTypeEdgeLists:(id)arg1;
- (void)setIsEphemeral:(bool)arg1;
- (void)setLatencyFactorA:(double)arg1;
- (void)setLatencyFactorB:(double)arg1;
- (void)setLatencyFactorX:(double)arg1;
- (void)setNeedsInitialSave:(bool)arg1;
- (void)setNextProbeDates:(id)arg1;
- (void)setSignatureEdgeLists:(id)arg1;
- (bool)shouldPerformDayPassRefresh;
- (id)signatureEdgeLists;
- (void)startProbingEdges:(id)arg1 atIndex:(unsigned long long)arg2 withResults:(id)arg3 completionHandler:(id /* block */)arg4;
- (unsigned int)timestamp;
- (double)ttl;
- (unsigned long long)version;

@end
