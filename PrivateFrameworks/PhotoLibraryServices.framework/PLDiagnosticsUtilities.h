/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDiagnosticsUtilities : NSObject

+ (void)collectCollectionsStatWithLibraryContext:(id)arg1 completionBlock:(id /* block */)arg2;
+ (void)collectMomentsStatWithLibraryContext:(id)arg1 completionBlock:(id /* block */)arg2;
+ (void)collectYearsStatWithLibraryContext:(id)arg1 completionBlock:(id /* block */)arg2;
+ (id)createOrEmptyMemoriesRelatedSnapshotOutputFolder;
+ (bool)isMemoriesAndRelatedDiagnosticFolderEmpty;
+ (bool)isMiroDiagnosticFolderEmpty;
+ (id)memoriesAndRelatedDiagnosticsOutputURL;
+ (id)miroDiagnosticsOutputURL;

@end
