/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface __NSOperationQueueInternal : NSObject {
    int  __actualMaxNumOps;
    NSObject<OS_dispatch_queue> * __dispatch_queue;
    NSOperation * __firstOperation;
    NSOperation * __firstPriOperation;
    NSOperation * __lastOperation;
    NSOperation * __lastPriOperation;
    unsigned char  __mainQ;
    long long  __maxNumOps;
    BOOL  __nameBuffer;
    int  __numExecOps;
    unsigned char  __overcommit;
    NSOperation * __pendingFirstOperation;
    NSOperation * __pendingLastOperation;
    NSObject<OS_dispatch_queue> * __pending_barrier;
    BOOL  __propertyQOS;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  __queueLock;
    unsigned char  __suspended;
    unsigned int  __unused2;
}

- (void)dealloc;
- (id)init;

@end
