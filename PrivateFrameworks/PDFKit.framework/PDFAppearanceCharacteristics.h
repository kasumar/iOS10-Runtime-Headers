/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
 */

@interface PDFAppearanceCharacteristics : NSObject <NSCopying> {
    PDFAppearanceCharacteristicsPrivateVars * _private;
}

- (void).cxx_destruct;
- (void)addColor:(id)arg1 forKey:(struct __CFString { }*)arg2 toDictionaryRef:(struct __CFDictionary { }*)arg3;
- (id)backgroundColor;
- (id)borderColor;
- (id)caption;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct __CFDictionary { }*)createDictionaryRef;
- (id)downCaption;
- (long long)flavor;
- (struct CGPDFForm { }*)icon;
- (id)init;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { }*)arg1 forFlavor:(long long)arg2;
- (id)rolloverCaption;
- (int)rotation;
- (bool)scaleProportional;
- (void)setBackgroundColor:(id)arg1;
- (void)setCaption:(id)arg1;
- (void)setDownCaption:(id)arg1;
- (void)setFlavor:(long long)arg1;
- (void)setRolloverCaption:(id)arg1;
- (void)setRotation:(int)arg1;

@end
