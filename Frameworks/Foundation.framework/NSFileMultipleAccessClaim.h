/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileMultipleAccessClaim : NSFileAccessClaim {
    unsigned long long  _currentlyLinkResolvingURLIndex;
    long long  _readingLinkResolutionCount;
    NSMutableArray * _readingLocations;
    unsigned long long * _readingOptions;
    NSMutableArray * _readingURLs;
    bool * _readingURLsDidChange;
    NSFileAccessNode * _rootNode;
    NSMutableArray * _writingLocations;
    unsigned long long * _writingOptions;
    NSMutableArray * _writingURLs;
    bool * _writingURLsDidChange;
}

+ (bool)supportsSecureCoding;

- (id)allURLs;
- (bool)blocksClaim:(id)arg1;
- (void)dealloc;
- (void)devalueSelf;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(bool)arg2;
- (void)forwardUsingConnection:(id)arg1 crashHandler:(id /* block */)arg2;
- (void)granted;
- (id)initWithCoder:(id)arg1;
- (id)initWithPurposeID:(id)arg1 intents:(id)arg2 claimer:(id /* block */)arg3;
- (void)invokeClaimer;
- (bool)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (bool)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (void)resolveURLsThenMaybeContinueInvokingClaimer:(id /* block */)arg1;
- (bool)shouldBeRevokedPriorToInvokingAccessor;

@end
