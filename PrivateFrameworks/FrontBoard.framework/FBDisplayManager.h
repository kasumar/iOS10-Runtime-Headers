/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBDisplayManager : NSObject {
    NSMapTable * _displayIDToFBSDisplayMap;
    NSMutableSet * _displaysDebouncing;
    FBSDisplay * _mainDisplay;
    NSHashTable * _observers;
}

@property (nonatomic, retain) FBSDisplay *mainDisplay;

+ (id)mainDisplay;
+ (id)sharedInstance;

- (void)_broadcastFBSDisplayDidConnect:(id)arg1;
- (void)_caDisplayDidConnect:(id)arg1 debounce:(bool)arg2 broadcast:(bool)arg3;
- (void)_caDisplayDidDisconnect:(id)arg1;
- (bool)_caDisplayIsMainDisplay:(id)arg1;
- (void)_debounceDisplay:(id)arg1 broadcast:(bool)arg2;
- (void)_displayDidDebounce:(id)arg1 broadcast:(bool)arg2;
- (id)_fbsDisplayForCADisplay:(id)arg1;
- (void)_initializeDisplays;
- (void)addObserver:(id)arg1;
- (id)description;
- (id)displays;
- (id)init;
- (id)mainDisplay;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeObserver:(id)arg1;
- (void)setMainDisplay:(id)arg1;

@end
