/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMParagraphStyleMapper : CMMapper {
    WMParagraphStyle * mStyle;
    WDParagraphProperties * wdParaProperties;
    WDParagraph * wdParagraph;
}

- (id)bulletLabelAtLevel:(id)arg1 forIndex:(int)arg2 bulletFormat:(int)arg3 listState:(id)arg4;
- (bool)checkListId:(long long)arg1 level:(unsigned char)arg2;
- (void)dealloc;
- (void)destyleEmptyParagraph;
- (id)initWithWDParagraph:(id)arg1 parent:(id)arg2 isInTextFrame:(bool)arg3;
- (bool)isListItem;
- (id)labelStringWithGap:(id)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapBulletAt:(id)arg1 forLevel:(id)arg2 forIndex:(int)arg3 listState:(id)arg4;
- (void)mapListStyleAt:(id)arg1 state:(id)arg2;

@end
