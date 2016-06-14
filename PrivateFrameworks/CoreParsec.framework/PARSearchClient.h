/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARSearchClient : NSObject {
    PARSessionConfiguration * _config;
    bool  _configured;
    NSXPCConnection * _connection;
    PARPromise * _endpointPromise;
    long long  _opCounter;
    NSObject<OS_dispatch_queue> * _queue;
    <PARDaemonXPC> * _remoteObject;
}

@property (retain) PARSessionConfiguration *config;
@property (retain) NSXPCConnection *connection;
@property (retain) NSXPCListenerEndpoint *endpoint;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) <PARDaemonXPC> *remoteObject;

+ (id)daemonConnection;

- (void).cxx_destruct;
- (void)_invalidateConnection;
- (void)bag:(id /* block */)arg1;
- (id)config;
- (void)configure;
- (id)connection;
- (void)dealloc;
- (id)endpoint;
- (void)feedback:(id /* block */)arg1;
- (void)fileHandleAndAttributesForResource:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithConnection:(id)arg1 configuration:(id)arg2;
- (void)listSessions:(id /* block */)arg1;
- (void)listenToFlusher:(id /* block */)arg1;
- (id)queue;
- (id)remoteObject;
- (void)reportEvent:(id)arg1;
- (long long)request:(id)arg1 reply:(id /* block */)arg2;
- (void)setConfig:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRemoteObject:(id)arg1;

@end
