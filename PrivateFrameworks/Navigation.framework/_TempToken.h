/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface _TempToken : NSObject <GEOServerFormatToken> {
    <GEOServerFormatTokenPriceValue> * _priceValue;
    NSString * _stringValue;
    NSString * _token;
    long long  _type;
    unsigned int  _value1;
    unsigned int  _value2;
    NSArray * _value3s;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <GEOServerFormatTokenPriceValue> *priceValue;
@property (nonatomic, retain) NSString *stringValue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *token;
@property (nonatomic) long long type;
@property (nonatomic) unsigned int value1;
@property (nonatomic) unsigned int value2;
@property (nonatomic, readonly) NSArray *value3s;

- (void).cxx_destruct;
- (id)priceValue;
- (void)setPriceValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setToken:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setValue1:(unsigned int)arg1;
- (void)setValue2:(unsigned int)arg1;
- (id)stringValue;
- (id)token;
- (long long)type;
- (unsigned int)value1;
- (unsigned int)value2;
- (id)value3s;

@end
