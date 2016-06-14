/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableDataStore : TSPContainedObject {
    unsigned int  mCellCount;
    bool  mCellCountValid;
    TSPLazyReference * mColumnHeaderStorageReference;
    struct TSTTableRBTreeNode_s { unsigned short x1; unsigned short x2; struct TSTTableRBTreeNode_s {} *x3; struct TSTTableRBTreeNode_s {} *x4; struct TSTTableRBTreeNode_s {} *x5; BOOL x6; } * mColumnTileIndex;
    TSPLazyReference * mCommentStorageTableReference;
    TSPLazyReference * mConditionalStyleSetTableReference;
    TSPLazyReference * mFormatTableReference;
    TSPLazyReference * mFormulaErrorTableReference;
    TSPLazyReference * mFormulaTableReference;
    TSPLazyReference * mImportWarningSetTableReference;
    TSTMergeRegionMap * mMergedCellRanges;
    TSTTableDataList * mMultipleChoiceListFormatTableList;
    unsigned short  mNextColumnStripID;
    unsigned short  mNextRowStripID;
    TSKCustomFormatList * mPasteboardCustomFormatList;
    NSMutableDictionary * mPasteboardCustomFormatMap;
    TSPLazyReference * mRichTextPayloadTableReference;
    TSTTableHeaderStorage * mRowHeaderStorage;
    struct TSTTableRBTreeNode_s { unsigned short x1; unsigned short x2; struct TSTTableRBTreeNode_s {} *x3; struct TSTTableRBTreeNode_s {} *x4; struct TSTTableRBTreeNode_s {} *x5; BOOL x6; } * mRowTileIndex;
    unsigned char  mStorageVersion;
    TSPLazyReference * mStringTableReference;
    TSTTableDataList * mStyleTableList;
    TSTTileIDKeyDict * mTileStorage;
}

@property (nonatomic, readonly) TSTTableDataList *commentStorageDataList;
@property (nonatomic, readonly) TSTTableDataList *conditionalStyleSetDataList;
@property (nonatomic, readonly) TSTTableDataList *formatDataList;
@property (nonatomic, readonly) TSTTableDataList *formulaDataList;
@property (nonatomic, readonly) TSTTableDataList *formulaErrorDataList;
@property (nonatomic, readonly) bool hasPasteboardCustomFormats;
@property (nonatomic, readonly) TSTTableDataList *importWarningSetDataList;
@property (nonatomic, readonly) TSTTableDataList *multipleChoiceListFormatDataList;
@property (nonatomic, readonly) TSTTableDataList *richTextPayloadDataList;
@property (nonatomic, readonly) TSTTableDataList *stringDataList;
@property (nonatomic, readonly) TSTTableDataList *styleDataList;

- (id)addPasteboardCustomFormat:(id)arg1 toDocument:(id)arg2 updatingPasteboardFormat:(bool)arg3;
- (void)clearPasteboardCustomFormatMap;
- (id)commentStorageDataList;
- (id)conditionalStyleSetDataList;
- (void)copyPasteboardCustomFormatsFromDataStore:(id)arg1;
- (void)dealloc;
- (void)debugDump;
- (void)enumerateCellStoragesInRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 withBlock:(id /* block */)arg2;
- (void)enumerateColumnHeaderInfosWithBlock:(id /* block */)arg1;
- (void)enumerateRowHeaderInfosWithBlock:(id /* block */)arg1;
- (void)enumerateTilesAtNode:(struct TSTTableRBTreeNode_s { unsigned short x1; unsigned short x2; struct TSTTableRBTreeNode_s {} *x3; struct TSTTableRBTreeNode_s {} *x4; struct TSTTableRBTreeNode_s {} *x5; BOOL x6; }*)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateTilesConcurrentlyUsingBlock:(id /* block */)arg1 andWaitForAsyncBlocks:(bool)arg2;
- (void)enumerateTilesInRowRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;
- (id)formatDataList;
- (id)formulaDataList;
- (id)formulaErrorDataList;
- (void)gatherReorganizeValuesForColumn:(unsigned char)arg1 rowRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 outValues:(struct TSTCellReorganizeValue { unsigned int x1 : 8; unsigned int x2 : 8; union { double x_3_1_1; bool x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; struct TSTCellReorganizePopupInfo { unsigned int x_5_2_1; long long x_5_2_2; } x_3_1_5; } x3; }*)arg3;
- (bool)hasFormulaAtCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (bool)hasPasteboardCustomFormats;
- (id)importWarningSetDataList;
- (id)indicesForValueCellsInRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)initWithArchive:(const struct DataStore { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct HeaderStorage {} *x5; struct Reference {} *x6; struct TileStorage {} *x7; struct Reference {} *x8; struct Reference {} *x9; struct Reference {} *x10; struct Reference {} *x11; struct Reference {} *x12; struct Reference {} *x13; struct Reference {} *x14; struct Reference {} *x15; unsigned int x16; unsigned int x17; struct TableRBTree {} *x18; struct TableRBTree {} *x19; struct Reference {} *x20; struct Reference {} *x21; struct Reference {} *x22; struct Reference {} *x23; unsigned int x24; }*)arg1 unarchiver:(id)arg2 owner:(id)arg3;
- (id)initWithOwner:(id)arg1;
- (void)makePasteboardCustomFormatList;
- (id)multipleChoiceListFormatDataList;
- (bool)needToUpgradeCellStorage;
- (id)p_pasteboardCustomFormatList;
- (id)p_pasteboardCustomFormatMap;
- (void)p_updateTileStorageToCurrentVersion;
- (void)remapPasteboardCustomFormatKeys:(id)arg1;
- (void)reorganizeValueForStorage:(struct TSTCellStorage { struct { unsigned char x_1_1_1; unsigned int x_1_1_2 : 8; unsigned int x_1_1_3 : 16; unsigned int x_1_1_4 : 16; unsigned int x_1_1_5 : 16; unsigned int x_1_1_6 : 16; unsigned int x_1_1_7 : 16; } x1; unsigned char x2[0]; }*)arg1 outValue:(struct TSTCellReorganizeValue { unsigned int x1 : 8; unsigned int x2 : 8; union { double x_3_1_1; bool x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; struct TSTCellReorganizePopupInfo { unsigned int x_5_2_1; long long x_5_2_2; } x_3_1_5; } x3; }*)arg2;
- (id)richTextPayloadDataList;
- (void)saveToArchive:(struct DataStore { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct HeaderStorage {} *x5; struct Reference {} *x6; struct TileStorage {} *x7; struct Reference {} *x8; struct Reference {} *x9; struct Reference {} *x10; struct Reference {} *x11; struct Reference {} *x12; struct Reference {} *x13; struct Reference {} *x14; struct Reference {} *x15; unsigned int x16; unsigned int x17; struct TableRBTree {} *x18; struct TableRBTree {} *x19; struct Reference {} *x20; struct Reference {} *x21; struct Reference {} *x22; struct Reference {} *x23; unsigned int x24; }*)arg1 archiver:(id)arg2 isInTheDocument:(bool)arg3;
- (void)setStorageParentToInfo:(id)arg1;
- (id)stringDataList;
- (id)styleDataList;
- (void)upgradeDataStoreCellStorage;
- (void)upgradeStyleDataLists;
- (void)validate;

@end
