/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDocumentResourceDataStorage : TSPFileDataStorage {
    TSPDocumentResourceInfo * _documentResourceInfo;
    TSPDocumentResourceManager * _manager;
}

@property (nonatomic, retain) TSPDocumentResourceInfo *documentResourceInfo;
@property (nonatomic, readonly) TSPDocumentResourceManager *manager;

- (void).cxx_destruct;
- (void)archiveInfoMessage:(struct DataInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x8; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x9; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x10; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x11; bool x12; int x13; struct DataAttributes {} *x14; struct EncryptionInfo {} *x15; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x16; }*)arg1 archiver:(id)arg2;
- (id)documentResourceInfo;
- (id)documentResourceLocator;
- (id)filenameForPreferredFilename:(id)arg1;
- (id)initWithManager:(id)arg1 documentResourceInfo:(id)arg2;
- (bool)isMissingData;
- (bool)isReadable;
- (id)manager;
- (void)setDocumentResourceInfo:(id)arg1;
- (id)storageForDataCopyFromOtherContext;

@end
