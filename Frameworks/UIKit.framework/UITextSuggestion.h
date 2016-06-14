/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextSuggestion : TIKeyboardCandidate <NSCopying> {
    bool  __shouldPersist;
    NSString * _displayText;
    NSString * _headerText;
    NSString * _inputText;
    NSString * _searchText;
}

@property (nonatomic, readonly) bool _shouldPersist;
@property (nonatomic, copy) NSString *displayText;
@property (nonatomic, copy) NSString *headerText;
@property (nonatomic, readonly, copy) NSString *inputText;
@property (nonatomic, copy) NSString *searchText;

+ (id)textSuggestionWithInputText:(id)arg1;
+ (id)textSuggestionWithInputText:(id)arg1 searchText:(id)arg2;

- (bool)_shouldPersist;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)displayText;
- (id)headerText;
- (id)initWithInputText:(id)arg1 searchText:(id)arg2 displayText:(id)arg3 headerText:(id)arg4;
- (id)inputText;
- (id)searchText;
- (void)setDisplayText:(id)arg1;
- (void)setHeaderText:(id)arg1;
- (void)setSearchText:(id)arg1;

@end
