/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;

@interface OADCustomDash : OADDash  {
    NSMutableArray *mStops;
    unsigned int mAreStopsOverridden : 1;
}

+ (id)defaultProperties;

- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)addStopWithDash:(float)arg1 space:(float)arg2;
- (id)stops;
- (void)setStops:(id)arg1;
- (BOOL)areStopsOverridden;
- (id)initWithDefaults;
- (float)dashAtIndex:(unsigned int)arg1;
- (float)spaceAtIndex:(unsigned int)arg1;
- (unsigned int)stopCount;

@end
