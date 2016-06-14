/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUTimelineModel : PXObservable <PUMutableTimelineModel, PXChangeObserver> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentOffset;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentRange;
    PUTimelineScrubberModel * _dateScrubberModel;
    PUTimelineScrubberModel * _libraryScrubberModel;
    struct { 
        bool dateScrubber; 
        bool libraryScrubber; 
        bool contentOffset; 
    }  _needsUpdateFlags;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } contentOffset;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentRange;
@property (nonatomic, readonly) PUTimelineScrubberModel *dateScrubberModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PUTimelineScrubberModel *libraryScrubberModel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_contentOffsetFromScrubberModel:(id)arg1;
- (void)_invalidateContent;
- (void)_invalidateDateScrubber;
- (void)_invalidateLibraryScrubber;
- (bool)_needsUpdate;
- (struct PUTimelineScrubberInsets { double x1; double x2; })_scrubberModelContentInsets;
- (double)_scrubberModelContentOffset;
- (double)_scrubberModelContentRange;
- (void)_setContentOffset:(struct CGPoint { double x1; double x2; })arg1 fromSource:(unsigned long long)arg2;
- (void)_setNeedsUpdate;
- (void)_updateContentOffsetIfNeeded;
- (void)_updateDateScrubberIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateLibraryScrubberIfNeeded;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (struct CGSize { double x1; double x2; })contentRange;
- (id)dateScrubberModel;
- (void)dealloc;
- (void)didPerformChanges;
- (id)init;
- (id)libraryScrubberModel;
- (id)mutableChangeObject;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)performChanges:(id /* block */)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentRange:(struct CGSize { double x1; double x2; })arg1;

@end
