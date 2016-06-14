/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
 */

@interface PDFPage : NSObject <NSCopying> {
    PDFPagePrivate * _private;
}

@property (nonatomic, readonly) NSArray *annotations;
@property (nonatomic, readonly) NSAttributedString *attributedString;
@property (nonatomic, readonly) NSData *dataRepresentation;
@property (nonatomic) bool displaysAnnotations;
@property (nonatomic, readonly) PDFDocument *document;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) unsigned long long numberOfCharacters;
@property (nonatomic, readonly) struct CGPDFPage { }*pageRef;
@property (nonatomic) long long rotation;
@property (nonatomic, readonly) NSString *string;

+ (id)fontWithPDFFont:(struct CGPDFFont { }*)arg1 size:(float)arg2;
+ (bool)isNativeRotationDrawingEnabledForThisThread;
+ (void)setNativeRotationDrawingEnabledForThisThread:(bool)arg1;

- (void).cxx_destruct;
- (void)_addBox:(int)arg1 toDictionary:(struct __CFDictionary { }*)arg2 offset:(struct CGPoint { double x1; double x2; })arg3;
- (void)_commonInit;
- (void)_drawThumbnailWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2 withRotation:(bool)arg3 withAntialiasing:(bool)arg4 isThumbnail:(bool)arg5;
- (struct CGImage { }*)_newCGImageWithBox:(long long)arg1 bitmapSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 offset:(struct CGPoint { double x1; double x2; })arg4 fillBackground:(bool)arg5 withRotation:(bool)arg6 withAntialiasing:(bool)arg7;
- (void)addAnnotation:(id)arg1;
- (void)addScannedAnnotation:(id)arg1;
- (id)annotationAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)annotations;
- (id)attributedString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForBox:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })characterBoundsAtIndex:(long long)arg1;
- (long long)characterIndexAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)columnAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)columnAtPointIfAvailable:(struct CGPoint { double x1; double x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createAttributedStringCP;
- (id)dataRepresentation;
- (void)dealloc;
- (bool)displaysAnnotations;
- (id)document;
- (void)drawAnnotationsWithBox:(long long)arg1;
- (void)drawAnnotationsWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2;
- (void)drawWithBox:(long long)arg1;
- (void)drawWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2;
- (void)drawWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2 isThumbnail:(bool)arg3;
- (void)drawWithBox:(long long)arg1 toContext:(struct CGContext { }*)arg2;
- (bool)enqueuedForDataDetection;
- (bool)enqueuedForLayout;
- (void)fetchPageLayoutOnThread:(id)arg1;
- (struct __CFDictionary { }*)gcCreateBoxDictionary;
- (void)getAnnotations;
- (void)getAnnotationsWithView:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })getDrawingTransformForBox:(long long)arg1;
- (bool)hasArtBox;
- (bool)hasBleedBox;
- (bool)hasCropBox;
- (bool)hasRunDataDetectors;
- (bool)hasTrimBox;
- (id)image;
- (id)imageOfSize:(struct CGSize { double x1; double x2; })arg1 forBox:(long long)arg2 withRotation:(bool)arg3 withAntialiasing:(bool)arg4;
- (id)init;
- (id)initWithImage:(id)arg1;
- (id)initWithPageRef:(struct CGPDFPage { }*)arg1;
- (bool)isBookmarked;
- (id)label;
- (void)lazilyLoadAnnotations;
- (void)lazilyLoadAnnotationsWithView:(id)arg1;
- (void)loadTextChars;
- (id)noFillthumbnailOfSize:(struct CGSize { double x1; double x2; })arg1 forBox:(long long)arg2;
- (void)noteUnsupportedFeature:(id)arg1;
- (unsigned long long)numberOfCharacters;
- (struct CGPDFLayout { }*)pageLayout;
- (struct CGPDFLayout { }*)pageLayoutIfAvail;
- (void)pageLayoutInvokation;
- (struct CGPDFPage { }*)pageRef;
- (void)purgeAll;
- (void)purgePageLayout;
- (void)removeAnnotation:(id)arg1;
- (void)resetAnnotations;
- (long long)rotation;
- (void)scanAddedAnnotations;
- (void)scanData:(id)arg1;
- (id)scannedAnnotationAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)scannedAnnotations;
- (id)selectionForAll;
- (id)selectionForCodeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)selectionForLineAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)selectionForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)selectionForRangeCommon:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 isCodeRange:(bool)arg2;
- (id)selectionForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)selectionForWordAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)selectionFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)selectionFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2 type:(int)arg3;
- (id)selectionFromPointToBottom:(struct CGPoint { double x1; double x2; })arg1 type:(int)arg2;
- (id)selectionFromTopToPoint:(struct CGPoint { double x1; double x2; })arg1 type:(int)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forBox:(long long)arg2;
- (void)setDisplaysAnnotations:(bool)arg1;
- (void)setDisplaysMarkupAnnotations:(bool)arg1;
- (void)setDocument:(id)arg1;
- (void)setEnqueuedForDataDetection:(bool)arg1;
- (void)setEnqueuedForLayout:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setIsBookmarked:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setPageLayout:(struct CGPDFLayout { }*)arg1;
- (bool)setPageRef:(struct CGPDFPage { }*)arg1;
- (void)setRotation:(long long)arg1;
- (void)setThreadFetchingLayout:(struct _opaque_pthread_t { long long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[8176]; }*)arg1;
- (void)setView:(id)arg1;
- (void)sortAnnotations:(id)arg1;
- (id)string;
- (id)thumbnailOfSize:(struct CGSize { double x1; double x2; })arg1 forBox:(long long)arg2;
- (void)transformContext:(struct CGContext { }*)arg1 forBox:(long long)arg2;
- (void)transformContextForBox:(long long)arg1;
- (id)unsupportedFeatures;
- (id)view;

@end
