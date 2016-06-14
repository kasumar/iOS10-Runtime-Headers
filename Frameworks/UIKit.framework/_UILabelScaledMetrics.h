/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UILabelScaledMetrics : NSObject {
    double  _actualScaleFactor;
    double  _baselineOffset;
    NSAttributedString * _scaledAttributedText;
    double  _scaledBaselineOffset;
    double  _scaledLineHeight;
    struct CGSize { 
        double width; 
        double height; 
    }  _scaledSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
}

@property (nonatomic) double actualScaleFactor;
@property (nonatomic) double baselineOffset;
@property (nonatomic, retain) NSAttributedString *scaledAttributedText;
@property (nonatomic) double scaledBaselineOffset;
@property (nonatomic) double scaledLineHeight;
@property (nonatomic) struct CGSize { double x1; double x2; } scaledSize;
@property (nonatomic) struct CGSize { double x1; double x2; } targetSize;

- (void).cxx_destruct;
- (double)actualScaleFactor;
- (double)baselineOffset;
- (id)scaledAttributedText;
- (double)scaledBaselineOffset;
- (double)scaledLineHeight;
- (struct CGSize { double x1; double x2; })scaledSize;
- (void)setActualScaleFactor:(double)arg1;
- (void)setBaselineOffset:(double)arg1;
- (void)setScaledAttributedText:(id)arg1;
- (void)setScaledBaselineOffset:(double)arg1;
- (void)setScaledLineHeight:(double)arg1;
- (void)setScaledSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })targetSize;

@end
