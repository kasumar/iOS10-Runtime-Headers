/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPPageInfo : NSObject <TSDContainerInfo> {
    TPBodyInfo * _bodyInfo;
    TSUWeakReference * _documentRootWeakReference;
    <TPPageLayoutInfoProvider> * _layoutInfoProvider;
    unsigned long long  _pageIndex;
}

@property (getter=isAnchoredToText, nonatomic, readonly) bool anchoredToText;
@property (getter=isAttachedToBodyText, nonatomic, readonly) bool attachedToBodyText;
@property (nonatomic, readonly, retain) TPBodyInfo *bodyInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TPDocumentRoot *documentRoot;
@property (getter=isFloatingAboveText, nonatomic, readonly) bool floatingAboveText;
@property (nonatomic, copy) TSDInfoGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (getter=isInlineWithText, nonatomic, readonly) bool inlineWithText;
@property (nonatomic, readonly) <TPPageLayoutInfoProvider> *layoutInfoProvider;
@property (nonatomic) bool matchesObjectPlaceholderGeometry;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (nonatomic, readonly) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic, readonly) unsigned long long pageIndex;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property (readonly) Class superclass;

- (id)bodyInfo;
- (id)childInfos;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)documentRoot;
- (id)geometry;
- (unsigned long long)hash;
- (id)infoForSelectionPath:(id)arg1;
- (id)initWithPageIndex:(unsigned long long)arg1 documentRoot:(id)arg2 layoutInfoProvider:(id)arg3;
- (bool)isAnchoredToText;
- (bool)isAttachedToBodyText;
- (bool)isEqual:(id)arg1;
- (bool)isFloatingAboveText;
- (bool)isInlineWithText;
- (bool)isSelectable;
- (bool)isThemeContent;
- (Class)layoutClass;
- (id)layoutInfoProvider;
- (id)owningAttachment;
- (id)owningAttachmentNoRecurse;
- (unsigned long long)pageIndex;
- (id)parentInfo;
- (Class)repClass;
- (void)setGeometry:(id)arg1;
- (void)setOwningAttachment:(id)arg1;
- (void)setParentInfo:(id)arg1;
- (void)setPrimitiveGeometry:(id)arg1;

@end
