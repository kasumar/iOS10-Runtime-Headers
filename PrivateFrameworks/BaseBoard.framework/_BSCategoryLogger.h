/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface _BSCategoryLogger : NSObject <BSLogging> {
    NSString * _category;
    bool  _enabled;
    NSString * _name;
}

@property (nonatomic, retain) NSString *category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *name;
@property (readonly) Class superclass;

- (id)category;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithLoggerName:(id)arg1 category:(id)arg2;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (void)logWithFormat:(id)arg1;
- (void)logWithFormat:(id)arg1 arguments:(char *)arg2;
- (id)name;
- (void)setCategory:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setName:(id)arg1;

@end
