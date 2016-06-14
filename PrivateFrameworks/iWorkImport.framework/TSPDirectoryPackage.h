/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDirectoryPackage : TSPPackage

+ (id)componentFileURLForPackageURL:(id)arg1 packageLocator:(id)arg2;
+ (bool)isValidPackageAtURL:(id)arg1;
+ (id)objectArchiveURLForPackageURL:(id)arg1;
+ (unsigned long long)zipArchiveOptions;
+ (id)zipArchiveURLFromPackageURL:(id)arg1;

- (void)copyComponent:(id)arg1 toPackageURL:(id)arg2 packageLocator:(id)arg3 zipFileWriter:(id)arg4 encryptionKey:(id)arg5 completion:(id /* block */)arg6;
- (id)dataAtRelativePath:(id)arg1 allowDecryption:(bool)arg2 error:(id*)arg3;
- (unsigned long long)encodedLengthForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(bool)arg2;
- (bool)hasDataAtRelativePath:(id)arg1;
- (id)newDataStorageAtRelativePath:(id)arg1 decryptionInfo:(id)arg2;
- (id)newDocumentPropertiesWithURL:(id)arg1 zipProvider:(id /* block */)arg2 error:(id*)arg3;
- (id)newRawDataReadChannelAtRelativePath:(id)arg1;
- (id)newRawReadChannelForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(bool)arg2;
- (long long)packageType;
- (void)prepareForDocumentReplacementWithSuccess:(bool)arg1 forSafeSave:(bool)arg2 originalURL:(id)arg3;

@end
