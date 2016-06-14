/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPackageWriter : NSObject <TSPPackageDataWriter> {
    NSURL * _URL;
    <TSPComponentWriteChannel> * _componentWriteChannel;
    NSURL * _documentTargetURL;
    SFUCryptoKey * _encryptionKey;
    NSError * _error;
    NSObject<OS_dispatch_queue> * _errorQueue;
    bool  _isOpened;
    TSPPackage * _originalDocumentPackage;
    TSPPackage * _originalSupportPackage;
    NSProgress * _progress;
    NSURL * _relativeURLForExternalData;
    long long  _updateType;
    TSPPackage * _writtenPackage;
    TSUZipFileWriter * _zipArchiveWriter;
}

@property (nonatomic, readonly) NSURL *URL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *documentTargetURL;
@property (nonatomic, readonly) SFUCryptoKey *encryptionKey;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TSPPackage *originalPackage;
@property (nonatomic, readonly) NSProgress *progress;
@property (nonatomic, readonly) NSURL *relativeURLForExternalData;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long updateType;
@property (nonatomic, readonly) TSUZipFileWriter *zipArchiveWriter;

+ (id)newPackageWriterWithPackageType:(long long)arg1 URL:(id)arg2 documentTargetURL:(id)arg3 relativeURLForExternalData:(id)arg4 packageIdentifier:(unsigned char)arg5 documentProperties:(id)arg6 fileFormatVersion:(unsigned long long)arg7 updateType:(long long)arg8 encryptionKey:(id)arg9 originalDocumentPackage:(id)arg10 originalSuppportPackage:(id)arg11 fileCoordinatorDelegate:(id)arg12 progress:(id)arg13 error:(id*)arg14;

- (void).cxx_destruct;
- (id)URL;
- (bool)addData:(id)arg1 infoMessage:(struct DataInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x8; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x9; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x10; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x11; bool x12; int x13; struct DataAttributes {} *x14; struct EncryptionInfo {} *x15; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x16; }*)arg2 saveOperationState:(id)arg3;
- (bool)closeAndReturnError:(id*)arg1;
- (void)closeCurrentChannel;
- (void)closeWithQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)copyComponent:(id)arg1 locator:(id)arg2 completion:(id /* block */)arg3;
- (id)copyData:(id)arg1 withReadChannel:(id)arg2 decryptionInfo:(id)arg3 size:(unsigned long long)arg4 preferredFilename:(id)arg5 error:(id*)arg6;
- (void)dealloc;
- (id)documentTargetURL;
- (unsigned long long)encodedLengthForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(bool)arg2 packageURL:(id)arg3;
- (id)encryptionKey;
- (id)filenameForData:(id)arg1 preferredFilename:(id)arg2;
- (id)init;
- (id)initWithURL:(id)arg1 documentTargetURL:(id)arg2 relativeURLForExternalData:(id)arg3 packageIdentifier:(unsigned char)arg4 documentProperties:(id)arg5 fileFormatVersion:(unsigned long long)arg6 updateType:(long long)arg7 encryptionKey:(id)arg8 originalDocumentPackage:(id)arg9 originalSuppportPackage:(id)arg10 fileCoordinatorDelegate:(id)arg11 progress:(id)arg12 error:(id*)arg13;
- (id)linkOrCopyData:(id)arg1 fromURL:(id)arg2 decryptionInfo:(id)arg3 preferredFilename:(id)arg4 error:(id*)arg5;
- (struct CGDataConsumer { }*)newCGDataConsumerAtRelativePath:(id)arg1;
- (id)newComponentWriteChannelWithPackageLocator:(id)arg1 storeOutsideObjectArchive:(bool)arg2;
- (id)newPackageWithPackageIdentifier:(unsigned char)arg1 documentProperties:(id)arg2 fileFormatVersion:(unsigned long long)arg3 decryptionKey:(id)arg4 fileCoordinatorDelegate:(id)arg5;
- (id)newRawComponentWriteChannelWithPackageLocator:(id)arg1 storeOutsideObjectArchive:(bool)arg2;
- (id)newRawDataWriteChannelForRelativePath:(id)arg1 originalSize:(unsigned long long)arg2 originalCRC:(unsigned int)arg3;
- (id)originalPackage;
- (id)progress;
- (id)relativeURLForExternalData;
- (void)setError:(id)arg1;
- (long long)updateType;
- (bool)writeData:(id)arg1 toRelativePath:(id)arg2 allowEncryption:(bool)arg3 error:(id*)arg4;
- (id)writtenPackageWithURL:(id)arg1;
- (id)zipArchiveWriter;

@end
