/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITableViewUpdateSupport : NSObject {
    id  _context;
    id * animatedCells;
    id * animatedFooters;
    id * animatedHeaders;
    NSMutableArray * deletedSections;
    NSMutableArray * gaps;
    long long  globalReorderingRow;
    NSMutableArray * insertedSections;
    NSMutableIndexSet * movedRows;
    NSMutableIndexSet * movedSections;
    long long  newGlobalRow;
    long long  newGlobalRowCount;
    long long * newGlobalRowMap;
    UITableViewRowData * newRowData;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  newRowRange;
    long long  newSection;
    long long  newSectionCount;
    long long * newSectionMap;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  newTableViewVisibleBounds;
    long long  oldGlobalRow;
    long long  oldGlobalRowCount;
    long long * oldGlobalRowMap;
    UITableViewRowData * oldRowData;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  oldRowRange;
    long long  oldSection;
    long long  oldSectionCount;
    long long * oldSectionMap;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  oldTableViewVisibleBounds;
    NSMutableIndexSet * rows;
    UITableView * tableView;
    double  tableViewVisibleBoundsOffset;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  tableViewVisibleBoundsUnion;
    NSArray * updateItems;
    NSMutableArray * viewAnimations;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  visibleRows;
}

- (void).cxx_destruct;
- (void)_addBottomShadowViewViewForViewAnimation:(id)arg1 viewType:(int)arg2;
- (void)_computeAutomaticAnimationTypes;
- (void)_computeGaps;
- (void)_computeRowUpdates;
- (void)_computeSectionUpdates;
- (void)_computeVisibleBounds;
- (void)_faultInRealHeightsOfNeededCells;
- (id)_imageViewForView:(id)arg1;
- (bool)_isReloadSectionUpdate;
- (void)_setupAnimationForReorderingRow;
- (void)_setupAnimationForTableFooter;
- (void)_setupAnimationForTableHeader;
- (void)_setupAnimationStructures;
- (void)_setupAnimations;
- (void)_setupAnimationsForDeletedCells;
- (void)_setupAnimationsForDeletedHeadersAndFooters;
- (void)_setupAnimationsForExistingHeadersAndFooters;
- (void)_setupAnimationsForExistingOffscreenCells;
- (void)_setupAnimationsForExistingVisibleCells;
- (void)_setupAnimationsForInsertedHeadersAndFooters;
- (void)_setupAnimationsForNewlyInsertedCells;
- (void)_setupDeleteAnimationForFooterInSection:(long long)arg1 withTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forUpdateItem:(id)arg3;
- (void)_setupDeleteAnimationForHeaderInSection:(long long)arg1 withTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forUpdateItem:(id)arg3;
- (void)_setupInsertAnimationForFooterInSection:(long long)arg1 withTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forUpdateItem:(id)arg3;
- (void)_setupInsertAnimationForHeaderInSection:(long long)arg1 withTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forUpdateItem:(id)arg3;
- (double)_startOfRowAfterFooterInSection:(long long)arg1 withRowData:(id)arg2;
- (double)_startOfRowAfterHeaderInSection:(long long)arg1 withRowData:(id)arg2;
- (double)_startOfRowAfterRow:(long long)arg1 withRowData:(id)arg2;
- (void)_validateAnimatedCells;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_visibleRowRangePlusAdjoining;
- (void)dealloc;
- (id)initWithTableView:(id)arg1 updateItems:(id)arg2 oldRowData:(id)arg3 newRowData:(id)arg4 oldRowRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 newRowRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 context:(id)arg7;

@end
