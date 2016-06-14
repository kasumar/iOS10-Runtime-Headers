/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKPageController : NSObject <AKHighlightColorEditorControllerDelegate, AKNoteEditorControllerDelegate> {
    AKController * _controller;
    AKGeometryHelper * _geometryHelper;
    AKHighlightColorEditorController * _highlightColorEditorController;
    AKLayerPresentationManager * _layerPresentationManager;
    bool  _layerPresentationManagerWasSetup;
    NSMutableDictionary * _noteEditors;
    UIView * _overlayView;
    unsigned long long  _pageIndex;
    AKPageModelController * _pageModelController;
    bool  _shouldPixelate;
}

@property AKController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) <AKControllerDelegateProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AKGeometryHelper *geometryHelper;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AKHighlightColorEditorController *highlightColorEditorController;
@property (nonatomic, retain) AKLayerPresentationManager *layerPresentationManager;
@property bool layerPresentationManagerWasSetup;
@property (retain) NSMutableDictionary *noteEditors;
@property (nonatomic, retain) UIView *overlayView;
@property unsigned long long pageIndex;
@property (retain) AKPageModelController *pageModelController;
@property bool shouldPixelate;
@property (readonly) Class superclass;

+ (id)pageControllerWithController:(id)arg1 andPageModelController:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithController:(id)arg1 andPageModelController:(id)arg2;
- (id)_popoverPresentingViewController;
- (id)annotationsBeneathLoupe:(id)arg1;
- (id)controller;
- (struct CGPoint { double x1; double x2; })convertPointFromModelToOverlay:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertPointFromOverlayToModel:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectFromModelToOverlay:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectFromOverlayToModel:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)currentModelToScreenExifOrientation;
- (double)currentModelToScreenScaleFactor;
- (id)delegate;
- (unsigned long long)edgeForNoteEditor:(id)arg1;
- (void)editorController:(id)arg1 deleteAnnotation:(id)arg2;
- (void)editorController:(id)arg1 editNote:(id)arg2;
- (void)editorController:(id)arg1 editedAnnotation:(id)arg2 toText:(id)arg3;
- (bool)editorController:(id)arg1 isRightArrowEnabledForAnnotation:(id)arg2;
- (void)editorController:(id)arg1 setTheme:(id)arg2 forAnnotation:(id)arg3;
- (void)editorController:(id)arg1 showEditMenuForAnnotation:(id)arg2;
- (id)geometryHelper;
- (bool)handleEditAnnotation:(id)arg1;
- (id)highlightColorEditorController;
- (id)initForTesting;
- (id)layerPresentationManager;
- (bool)layerPresentationManagerWasSetup;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maxPageRect;
- (double)modelBaseScaleFactor;
- (id)newContentSnapshotPDFDataAtScale:(double)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forLoupeAnnotation:(id)arg3;
- (void)noteEditorDidBeginEditing:(id)arg1;
- (void)noteEditorDidFinishEditing:(id)arg1;
- (id)noteEditors;
- (void)openPopoverForHighlightAnnotation:(id)arg1;
- (void)openPopoverForNoteAnnotation:(id)arg1;
- (id)overlayView;
- (void)overlayWasAddedToSuperview;
- (unsigned long long)pageIndex;
- (id)pageModelController;
- (id)popoverPresentingViewControllerForNoteEditor:(id)arg1;
- (void)releaseRelinquishables;
- (bool)relinquishablesAreLoaded;
- (void)setController:(id)arg1;
- (void)setGeometryHelper:(id)arg1;
- (void)setHighlightColorEditorController:(id)arg1;
- (void)setLayerPresentationManager:(id)arg1;
- (void)setLayerPresentationManagerWasSetup:(bool)arg1;
- (void)setNoteEditors:(id)arg1;
- (void)setOverlayView:(id)arg1;
- (void)setPageIndex:(unsigned long long)arg1;
- (void)setPageModelController:(id)arg1;
- (void)setShouldPixelate:(bool)arg1;
- (void)setupRelinquishables;
- (bool)shouldPixelate;
- (id)stickyContainerForNoteEditor:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })stickyViewFrameForNoteEditor:(id)arg1;
- (void)teardown;
- (void)updateScaleFactor:(double)arg1 isLiveUpdate:(bool)arg2 forceUpdate:(bool)arg3;

@end
