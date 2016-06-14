/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKController : NSObject {
    AKActionController * _actionController;
    bool  _annotationEditingEnabled;
    AKAttributeController * _attributeController;
    unsigned long long  _creationCascadingMultiplier;
    unsigned long long  _currentPageIndex;
    <AKControllerDelegateProtocol> * _delegate;
    AKFormFeatureDetectorController * _formDetectionController;
    AKIntelligentSketchController * _intelligentSketchController;
    bool  _isTestingInstance;
    AKPageController * _lastCreationCascadingPageController;
    long long  _lastPasteboardChangeCount;
    AKMainEventHandler * _mainEventHandler;
    AKModelController * _modelController;
    NSMutableArray * _pageControllers;
    NSMapTable * _pageModelControllersToPageControllers;
    unsigned long long  _pasteCascadingMultiplier;
    AKPeripheralAvailabilityManager_iOS * _peripheralAvailabilityManager;
    bool  _showingMenu;
    AKSignatureModelController * _signatureModelController;
    AKTextEditorController * _textEditorController;
    AKToolController * _toolController;
    UIView * _toolbarView;
    AKToolbarViewController * _toolbarViewController;
    AKUndoController * _undoController;
    bool  overlayShouldPixelate;
}

@property (retain) AKActionController *actionController;
@property (nonatomic) bool annotationEditingEnabled;
@property (retain) AKAttributeController *attributeController;
@property unsigned long long creationCascadingMultiplier;
@property unsigned long long currentPageIndex;
@property <AKControllerDelegateProtocol> *delegate;
@property (retain) AKFormFeatureDetectorController *formDetectionController;
@property (retain) AKIntelligentSketchController *intelligentSketchController;
@property bool isTestingInstance;
@property AKPageController *lastCreationCascadingPageController;
@property long long lastPasteboardChangeCount;
@property (retain) AKMainEventHandler *mainEventHandler;
@property (retain) AKModelController *modelController;
@property (nonatomic) bool overlayShouldPixelate;
@property (retain) NSMutableArray *pageControllers;
@property (retain) NSMapTable *pageModelControllersToPageControllers;
@property unsigned long long pasteCascadingMultiplier;
@property (retain) AKPeripheralAvailabilityManager_iOS *peripheralAvailabilityManager;
@property (getter=isShowingMenu) bool showingMenu;
@property (retain) AKSignatureModelController *signatureModelController;
@property (retain) AKTextEditorController *textEditorController;
@property (retain) AKToolController *toolController;
@property (retain) UIView *toolbarView;
@property (retain) AKToolbarViewController *toolbarViewController;
@property (retain) AKUndoController *undoController;

+ (void)adjustAnnotationBoundsToFitText:(id)arg1;
+ (id)akBundle;
+ (id)akBundleIdentifier;
+ (bool)canConnectToStylus;
+ (id)controllerWithDelegate:(id)arg1;
+ (bool)hasPressureCapableHardware;
+ (void)renderAnnotation:(id)arg1 inContext:(struct CGContext { }*)arg2;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_popoverAnchorFrameInModelForAnnotations:(id)arg1;
- (bool)_validateCutCopyDelete;
- (id)actionController;
- (bool)annotationEditingEnabled;
- (id)attributeController;
- (void)commitEditing;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentAlignedRectForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 onPageAtIndex:(unsigned long long)arg2;
- (void)copy:(id)arg1;
- (unsigned long long)creationCascadingMultiplier;
- (long long)currentExifOrientationForPageAtIndex:(unsigned long long)arg1;
- (double)currentModelBaseScaleFactorForPageAtIndex:(unsigned long long)arg1;
- (id)currentPageController;
- (unsigned long long)currentPageIndex;
- (void)cut:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)delete:(id)arg1;
- (id)doubleTapGestureRecognizer;
- (void)duplicate:(id)arg1;
- (void)editTextAnnotation:(id)arg1;
- (id)formDetectionController;
- (bool)handleEvent:(id)arg1;
- (void)hideSelectionMenu:(id)arg1;
- (id)initForTesting;
- (id)initWithDelegate:(id)arg1;
- (id)intelligentSketchController;
- (bool)isOverlayViewLoadedAtIndex:(unsigned long long)arg1;
- (bool)isShowingMenu;
- (bool)isTestingInstance;
- (id)lastCreationCascadingPageController;
- (long long)lastPasteboardChangeCount;
- (id)mainEventHandler;
- (id)modelController;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)overlayShouldPixelate;
- (id)overlayViewAtIndex:(unsigned long long)arg1;
- (id)pageControllerForAnnotation:(id)arg1;
- (id)pageControllerForPageModelController:(id)arg1;
- (id)pageControllers;
- (id)pageModelControllersToPageControllers;
- (id)panGestureRecognizer;
- (void)paste:(id)arg1;
- (unsigned long long)pasteCascadingMultiplier;
- (void)performActionForSender:(id)arg1;
- (id)peripheralAvailabilityManager;
- (void)prepareOverlayAtIndex:(unsigned long long)arg1;
- (id)pressGestureRecognizer;
- (void)redo:(id)arg1;
- (void)relinquishOverlayAtIndex:(unsigned long long)arg1;
- (void)reloadVisibleToolbarItemIdentifiers;
- (void)renderAnnotation:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)resetToDefaultToolMode;
- (id)rotationGestureRecognizer;
- (void)selectAll:(id)arg1;
- (void)setActionController:(id)arg1;
- (void)setAnnotationEditingEnabled:(bool)arg1;
- (void)setAttributeController:(id)arg1;
- (void)setCreationCascadingMultiplier:(unsigned long long)arg1;
- (void)setCurrentPageIndex:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFormDetectionController:(id)arg1;
- (void)setIntelligentSketchController:(id)arg1;
- (void)setIsTestingInstance:(bool)arg1;
- (void)setLastCreationCascadingPageController:(id)arg1;
- (void)setLastPasteboardChangeCount:(long long)arg1;
- (void)setMainEventHandler:(id)arg1;
- (void)setModelController:(id)arg1;
- (void)setOverlayShouldPixelate:(bool)arg1;
- (void)setPageControllers:(id)arg1;
- (void)setPageModelControllersToPageControllers:(id)arg1;
- (void)setPasteCascadingMultiplier:(unsigned long long)arg1;
- (void)setPeripheralAvailabilityManager:(id)arg1;
- (void)setShowingMenu:(bool)arg1;
- (void)setSignatureModelController:(id)arg1;
- (void)setTextEditorController:(id)arg1;
- (void)setToolController:(id)arg1;
- (void)setToolbarView:(id)arg1;
- (void)setToolbarViewController:(id)arg1;
- (void)setUndoController:(id)arg1;
- (bool)shouldDrawVariableStrokeDoodles;
- (void)showAttributeInspector:(id)arg1;
- (void)showSelectionMenu:(id)arg1;
- (id)signatureModelController;
- (id)tapGestureRecognizer;
- (void)teardown;
- (id)textEditorController;
- (id)toolController;
- (id)toolbarButtonItemOfType:(unsigned long long)arg1;
- (id)toolbarView;
- (id)toolbarViewController;
- (void)undo:(id)arg1;
- (id)undoController;
- (void)updateOverlayViewAtIndex:(unsigned long long)arg1;
- (bool)validateCopy:(id)arg1;
- (bool)validateCut:(id)arg1;
- (bool)validateDelete:(id)arg1;
- (bool)validateDuplicate:(id)arg1;
- (bool)validateEditTextAnnotation:(id)arg1;
- (bool)validatePaste:(id)arg1;
- (bool)validateRedo:(id)arg1;
- (bool)validateSelectAll:(id)arg1;
- (bool)validateSender:(id)arg1;
- (bool)validateShowAttributeInspector:(id)arg1;
- (bool)validateUndo:(id)arg1;
- (void)willHideMenu:(id)arg1;
- (void)willShowMenu:(id)arg1;

@end
