/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceInlineMapViewController : UIViewController {
    _MKPlaceInlineMapContentView * _contentView;
    MKMapItem * _mapItem;
    _MKPlaceViewController * _owner;
    MKMapItem * _updatingInlineMapItem;
}

@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic) _MKPlaceViewController *owner;
@property (nonatomic, readonly) UIImage *snapshot;

- (void).cxx_destruct;
- (void)_addAnnotationToSnapshot:(id)arg1 mapItem:(id)arg2;
- (void)_addLabelToSnaphot:(id)arg1 mapItem:(id)arg2;
- (void)_handleTapOnMap;
- (void)_launchMaps;
- (void)_updateInlineMapWithRefinedMapItem:(id)arg1;
- (void)_updateMap;
- (void)_updateSnapshotImage:(id)arg1 mapItem:(id)arg2;
- (void)loadView;
- (id)mapItem;
- (id)owner;
- (void)setMapItem:(id)arg1;
- (void)setOwner:(id)arg1;
- (id)snapshot;
- (void)updateInlineMapWithRefinedMapItem:(id)arg1;
- (void)viewDidLoad;

@end
