/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@interface ADTimeStamp : PBCodable  {
    unsigned long long _timestampEvent;
    BOOL _hasTimestampEvent;
    unsigned long long _timestampReport;
    BOOL _hasTimestampReport;
}

@property(readonly) BOOL hasTimestampReport;
@property unsigned long long timestampReport;
@property(readonly) BOOL hasTimestampEvent;
@property unsigned long long timestampEvent;


- (void)setTimestampReport:(unsigned long long)arg1;
- (BOOL)hasTimestampReport;
- (unsigned long long)timestampReport;
- (unsigned long long)timestampEvent;
- (BOOL)hasTimestampEvent;
- (void)setTimestampEvent:(unsigned long long)arg1;
- (id)dictionaryRepresentation;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
