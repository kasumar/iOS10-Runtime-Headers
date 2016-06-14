/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPServer : NSObject <NSXPCListenerDelegate, _DPDaemonProtocol> {
    _DPStorage * _db;
    NSXPCListener * _listener;
}

@property (nonatomic, readonly) _DPStorage *db;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSXPCListener *listener;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)db;
- (id)init;
- (id)initWithDatabaseDirectoryPath:(id)arg1 enablePeriodicTasks:(bool)arg2;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)recordNumbers:(id)arg1 forKey:(id)arg2 withReply:(id /* block */)arg3;
- (void)recordStrings:(id)arg1 forKey:(id)arg2 withReply:(id /* block */)arg3;
- (void)recordValues:(id)arg1 forKey:(id)arg2 usingSelector:(SEL)arg3;
- (void)recordWords:(id)arg1 forKey:(id)arg2 withReply:(id /* block */)arg3;
- (void)start;

@end
