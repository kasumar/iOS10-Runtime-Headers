/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPlaintextResponseBodyParser : NSObject <CKDResponseBodyParser> {
    id /* block */  _logParsedObjectBlock;
    id /* block */  _objectParsedBlock;
    NSMutableData * _parserData;
    NSError * _parserError;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ logParsedObjectBlock;
@property (nonatomic, copy) id /* block */ objectParsedBlock;
@property (nonatomic, retain) NSMutableData *parserData;
@property (nonatomic, retain) NSError *parserError;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)finishWithCompletion:(id /* block */)arg1;
- (id /* block */)logParsedObjectBlock;
- (id /* block */)objectParsedBlock;
- (id)parserData;
- (id)parserError;
- (void)processData:(id)arg1;
- (void)setLogParsedObjectBlock:(id /* block */)arg1;
- (void)setObjectParsedBlock:(id /* block */)arg1;
- (void)setParserData:(id)arg1;
- (void)setParserError:(id)arg1;

@end
