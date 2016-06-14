/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

@interface AXAttributedString : NSString <NSCopying> {
    struct __CFAttributedString { } * _string;
}

+ (id)axAttributedStringWithString:(id)arg1;
+ (id)string;

- (void)appendAXAttributedString:(id)arg1;
- (void)appendFormat:(id)arg1;
- (void)appendString:(id)arg1;
- (void)appendStringOrAXAttributedString:(id)arg1;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (id)attributeValueForKey:(id)arg1;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)attributesAtIndex:(long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)axAttributedStringDescription;
- (const struct __CFAttributedString { }*)cfAttributedString;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)coalescedAttributes;
- (id)coalescedFontAttributes;
- (void)convertAttachmentsWithBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)enumerateAttributesUsingBlock:(id /* block */)arg1;
- (bool)hasAttribute:(id)arg1;
- (bool)hasAttributes;
- (id)initWithCFAttributedString:(struct __CFAttributedString { }*)arg1;
- (id)initWithString:(id)arg1;
- (bool)isAXAttributedString;
- (unsigned long long)length;
- (id)lowercaseString;
- (void)removeAttributes:(id)arg1;
- (void)replaceString:(struct __CFString { }*)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)setAttribute:(id)arg1 forKey:(id)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setAttributes:(id)arg1;
- (void)setAttributes:(id)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)string;
- (id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)substringFromIndex:(unsigned long long)arg1;
- (id)uppercaseString;

@end
