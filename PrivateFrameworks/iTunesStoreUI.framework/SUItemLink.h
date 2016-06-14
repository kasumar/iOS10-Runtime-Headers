/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUItemLink : NSObject <NSCopying> {
    long long  _linkTarget;
    long long  _linkType;
    NSString * _title;
    NSURL * _url;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic) long long linkTarget;
@property (nonatomic) long long linkType;
@property (nonatomic, copy) NSString *title;

- (id)URL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (long long)linkTarget;
- (long long)linkType;
- (void)setLinkTarget:(long long)arg1;
- (void)setLinkType:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (id)title;

@end
