/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKIntelligentSketchController : NSObject <AKSmoothPathViewDelegate> {
    NSMutableArray * _candidateAKTags;
    NSMutableDictionary * _candidateAKTagsToCHElementMap;
    AKAnnotation * _candidateAnnotation;
    CHDrawing * _candidateDrawing;
    AKCandidatePickerView_iOS * _candidatePickerView;
    AKController * _controller;
    bool  _ignoreAnnotationAndSelectionKVO;
    AKSmoothPathView * _intelligentSketchOverlayView;
    bool  _isShowingOverlay;
    CHDrawing * _lastDrawing;
    AKPageModelController * _modelControllerToObserveForAnnotationsAndSelections;
    id /* block */  _performRecognitionBlock;
    bool  _preferDoodle;
    bool  _pressureSensitiveDoodleMode;
    bool  _selectNewlyCreatedAnnotations;
    bool  _shapeDetectionEnabled;
    CHRecognizer * _shapeRecognizer;
    double  _veryHighConfidenceLevel;
}

@property (retain) NSMutableArray *candidateAKTags;
@property (retain) NSMutableDictionary *candidateAKTagsToCHElementMap;
@property AKAnnotation *candidateAnnotation;
@property (retain) CHDrawing *candidateDrawing;
@property (nonatomic, retain) AKCandidatePickerView_iOS *candidatePickerView;
@property AKController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool ignoreAnnotationAndSelectionKVO;
@property (nonatomic, retain) AKSmoothPathView *intelligentSketchOverlayView;
@property bool isShowingOverlay;
@property (retain) CHDrawing *lastDrawing;
@property (nonatomic, retain) AKPageModelController *modelControllerToObserveForAnnotationsAndSelections;
@property (nonatomic, copy) id /* block */ performRecognitionBlock;
@property (nonatomic) bool preferDoodle;
@property bool pressureSensitiveDoodleMode;
@property (nonatomic) bool selectNewlyCreatedAnnotations;
@property (getter=shapeDetectionEnabled, nonatomic) bool shapeDetectionEnabled;
@property (nonatomic, retain) CHRecognizer *shapeRecognizer;
@property (readonly) Class superclass;
@property double veryHighConfidenceLevel;

- (void).cxx_destruct;
- (void)_addAnnotationImmediatelyFor:(struct CGPath { }*)arg1 withDrawingCenter:(struct CGPoint { double x1; double x2; })arg2 drawingBoundsInView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 pathIsPrestroked:(bool)arg4 isSingelDot:(bool)arg5 fromInputView:(id)arg6;
- (void)_clearPreviousCandidateAnnotation;
- (id)_convertDrawingBoundsInInputView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 outBoundsInPageModel:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (id)_createAnnotationWithRecognizerResult:(id)arg1 forDrawingBoundsInInputView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 shouldGoToPageController:(id*)arg3;
- (id)_createDoodleShapeResultFromCGPath:(struct CGPath { }*)arg1 withDrawingCenter:(struct CGPoint { double x1; double x2; })arg2 pathIsPrestroked:(bool)arg3;
- (id)_createFlippedCHDrawingFromCHDrawing:(id)arg1 withDrawingCenter:(struct CGPoint { double x1; double x2; })arg2;
- (bool)_drawingIsValidForRecognition:(id)arg1 withPath:(struct CGPath { }*)arg2;
- (void)_executeRecognition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForOurOverlayInHostingView:(id)arg1;
- (void)_inputView:(id)arg1 didCollectPath:(struct CGPath { }*)arg2 isPrestroked:(bool)arg3;
- (bool)_isResultVeryHighConfidence:(id)arg1;
- (void)_logAllResults:(id)arg1;
- (void)_performRecognitionForDrawing:(id)arg1 withPath:(struct CGPath { }*)arg2 boundsInInputView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 center:(struct CGPoint { double x1; double x2; })arg4 isPrestroked:(bool)arg5;
- (void)_pickCandidateResult:(id)arg1;
- (void)_presentCandidatePickerBarWithCandidates:(id)arg1 ofDrawing:(id)arg2;
- (void)_scheduleDelayedRecognitionForDrawing:(id)arg1 withPath:(struct CGPath { }*)arg2 boundsInView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 center:(struct CGPoint { double x1; double x2; })arg4 isPrestroked:(bool)arg5;
- (bool)_shouldSelectCandidate:(id)arg1;
- (void)_showCandidatePickerWithTypes:(id)arg1 forDrawingInInputView:(id)arg2 shouldSurfaceDoodle:(bool)arg3;
- (void)_teardownCandidatePicker;
- (void)_teardownCandidatePickerBar;
- (long long)_toolTagForCHRecognitionResult:(id)arg1;
- (id)candidateAKTags;
- (id)candidateAKTagsToCHElementMap;
- (id)candidateAnnotation;
- (id)candidateDrawing;
- (id)candidatePickerView;
- (id)controller;
- (void)dealloc;
- (void)dismissCandidatePicker;
- (void)enclosingScrollViewNotification:(id)arg1;
- (void)handleDragAction:(id)arg1;
- (void)handleForwardedEvent:(id)arg1;
- (void)handleTapAction:(id)arg1;
- (bool)ignoreAnnotationAndSelectionKVO;
- (id)initWithController:(id)arg1;
- (void)inputView:(id)arg1 didCollectPath:(struct CGPath { }*)arg2;
- (void)inputView:(id)arg1 didCollectPrestrokedPath:(struct CGPath { }*)arg2;
- (void)inputViewWillStartDrawing:(id)arg1;
- (id)intelligentSketchOverlayView;
- (bool)isShowingCandidatePicker;
- (bool)isShowingOverlay;
- (id)lastDrawing;
- (void)logLastDrawingToDisk;
- (id)modelControllerToObserveForAnnotationsAndSelections;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id /* block */)performRecognitionBlock;
- (bool)preferDoodle;
- (bool)pressureSensitiveDoodleMode;
- (void)removeOverlay;
- (bool)selectNewlyCreatedAnnotations;
- (void)setCandidateAKTags:(id)arg1;
- (void)setCandidateAKTagsToCHElementMap:(id)arg1;
- (void)setCandidateAnnotation:(id)arg1;
- (void)setCandidateDrawing:(id)arg1;
- (void)setCandidatePickerView:(id)arg1;
- (void)setController:(id)arg1;
- (void)setIgnoreAnnotationAndSelectionKVO:(bool)arg1;
- (void)setIntelligentSketchOverlayView:(id)arg1;
- (void)setIsShowingOverlay:(bool)arg1;
- (void)setLastDrawing:(id)arg1;
- (void)setModelControllerToObserveForAnnotationsAndSelections:(id)arg1;
- (void)setPerformRecognitionBlock:(id /* block */)arg1;
- (void)setPreferDoodle:(bool)arg1;
- (void)setPressureSensitiveDoodleMode:(bool)arg1;
- (void)setSelectNewlyCreatedAnnotations:(bool)arg1;
- (void)setShapeDetectionEnabled:(bool)arg1;
- (void)setShapeRecognizer:(id)arg1;
- (void)setVeryHighConfidenceLevel:(double)arg1;
- (bool)shapeDetectionEnabled;
- (id)shapeRecognizer;
- (void)showOverlay;
- (void)updateOverlayBoundsAndBackingScale:(id)arg1;
- (void)updateStrokeAttributes;
- (double)veryHighConfidenceLevel;

@end
