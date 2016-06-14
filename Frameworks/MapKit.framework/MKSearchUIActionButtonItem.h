/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKSearchUIActionButtonItem : NSObject <SearchUIActionButtonItem> {
    unsigned long long  _actionType;
    bool  _isOverlay;
    NSString * _label;
    NSURL * _punchoutURL;
}

@property (nonatomic, readonly) unsigned long long actionType;
@property (nonatomic, readonly) NSArray *adamIDs;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *contactIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isOverlay;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly, copy) NSString *labelForLocalMedia;
@property (nonatomic, readonly, copy) NSString *localMediaIdentifier;
@property (nonatomic, readonly) NSURL *punchoutURL;
@property (nonatomic, readonly) bool requiresLocalMedia;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)actionType;
- (id)initWithActionType:(unsigned long long)arg1 punchOutURL:(id)arg2;
- (bool)isOverlay;
- (id)label;
- (id)punchoutURL;

@end
