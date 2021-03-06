/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@interface GMMEfficientMapPoint : PBCodable  {
    int _latitude;
    int _longitude;
}

@property(readonly) struct { double latitude; double longitude; } coordinate;
@property(readonly) int latitudeE6;
@property(readonly) int longitudeE6;
@property int longitude;
@property int latitude;


- (id)dictionaryRepresentation;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)readFrom:(id)arg1;
- (int)latitude;
- (int)longitude;
- (void)writeTo:(id)arg1;
- (void)setLatitude:(int)arg1;
- (void)setLongitude:(int)arg1;
- (int)latitudeE6;
- (int)longitudeE6;
- (struct { double x1; double x2; })coordinate;

@end
