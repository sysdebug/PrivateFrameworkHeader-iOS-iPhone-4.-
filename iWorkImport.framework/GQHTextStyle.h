/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHTextStyle : NSObject  {
}

+ (struct __GSFont { }*)createFontFromName:(struct __CFString { }*)arg1 size:(float)arg2;
+ (struct __CFString { }*)platformCreateCssFontFamilyStringFromFontName:(struct __CFString { }*)arg1;
+ (BOOL)platformGetDefaultLineHeight:(struct __CFString { }*)arg1 fontSize:(float)arg2 defLineHeight:(int*)arg3;
+ (BOOL)getDefaultLineHeight:(struct __CFString { }*)arg1 fontSize:(float)arg2 defLineHeight:(int*)arg3;
+ (void)reduceFontSizeForSuperscriptedText:(id)arg1 style:(id)arg2 state:(id)arg3;
+ (void)mapStyle:(id)arg1 style:(id)arg2 state:(id)arg3 isSpan:(BOOL)arg4;
+ (void)mapStyle:(id)arg1 style:(id)arg2 state:(id)arg3;
+ (const char *)name;


@end