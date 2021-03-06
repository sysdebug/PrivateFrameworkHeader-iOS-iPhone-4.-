/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@class NSSet, NSMutableDictionary;

@interface SCROMobileBrailleDisplayInputManager : NSObject  {
    NSMutableDictionary *_displayInfoDict;
    NSSet *_brailleKeys;
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedManager;

- (void)release;
- (id)init;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)retainCount;
- (id)autorelease;
- (void)configureWithDriverConfiguration:(id)arg1;
- (id)driverIdentifierForDisplayWithToken:(long)arg1;
- (id)modelIdentifierForDisplayWithToken:(long)arg1;
- (id)commandForBrailleKey:(id)arg1;
- (id)buttonNamesForInputIdentifier:(id)arg1 forDisplayWithToken:(long)arg2;
- (unsigned int)countForDisplayWithToken:(long)arg1;
- (id)inputIdentifierAtIndex:(unsigned int)arg1 forDisplayWithToken:(long)arg2;
- (id)commandAtIndex:(unsigned int)arg1 forDisplayWithToken:(long)arg2;
- (id)buttonNamesAtIndex:(unsigned int)arg1 forDisplayWithToken:(long)arg2;

@end
