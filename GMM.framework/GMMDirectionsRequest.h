/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMDirectionsIconRequest, GMMMapInfo, NSMutableArray, GMMDateTime;

@interface GMMDirectionsRequest : PBRequest  {
    NSMutableArray *_modes;
    NSMutableArray *_waypoints;
    GMMDateTime *_requestedDateTime;
    int _requestedTimeType;
    BOOL _hasRequestedTimeType;
    int _tripMaxCount;
    BOOL _hasTripMaxCount;
    GMMDirectionsIconRequest *_iconRequest;
    int _requestedResultType;
    BOOL _hasRequestedResultType;
    int _resultPageOffset;
    BOOL _hasResultPageOffset;
    GMMMapInfo *_mapViewport;
    NSMutableArray *_optionss;
    BOOL _includeStreetViewPanoId;
    BOOL _hasIncludeStreetViewPanoId;
    BOOL _addStepNoticesToInstructionText;
    BOOL _hasAddStepNoticesToInstructionText;
    BOOL _includeStructuredInstructions;
    BOOL _hasIncludeStructuredInstructions;
    BOOL _returnMultipleRoutes;
    BOOL _hasReturnMultipleRoutes;
}

@property(readonly) int modesCount;
@property(readonly) int waypointsCount;
@property(readonly) BOOL hasRequestedDateTime;
@property(readonly) BOOL hasIconRequest;
@property(readonly) BOOL hasMapViewport;
@property(readonly) int optionssCount;
@property(readonly) BOOL hasReturnMultipleRoutes;
@property BOOL returnMultipleRoutes;
@property(readonly) BOOL hasIncludeStructuredInstructions;
@property BOOL includeStructuredInstructions;
@property(readonly) BOOL hasAddStepNoticesToInstructionText;
@property BOOL addStepNoticesToInstructionText;
@property(readonly) BOOL hasIncludeStreetViewPanoId;
@property BOOL includeStreetViewPanoId;
@property(retain) NSMutableArray * optionss;
@property(retain) GMMMapInfo * mapViewport;
@property(readonly) BOOL hasResultPageOffset;
@property int resultPageOffset;
@property(readonly) BOOL hasRequestedResultType;
@property int requestedResultType;
@property(retain) GMMDirectionsIconRequest * iconRequest;
@property(readonly) BOOL hasTripMaxCount;
@property int tripMaxCount;
@property(readonly) BOOL hasRequestedTimeType;
@property int requestedTimeType;
@property(retain) GMMDateTime * requestedDateTime;
@property(retain) NSMutableArray * waypoints;
@property(retain) NSMutableArray * modes;


- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)hasRequestedDateTime;
- (id)waypoints;
- (BOOL)hasRequestedTimeType;
- (BOOL)hasTripMaxCount;
- (int)requestedResultType;
- (int)resultPageOffset;
- (id)mapViewport;
- (BOOL)includeStructuredInstructions;
- (BOOL)returnMultipleRoutes;
- (int)waypointsCount;
- (int)modesCount;
- (void)setMode:(int)arg1 atIndex:(unsigned int)arg2;
- (void)setWaypoint:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)hasIconRequest;
- (void)setRequestedResultType:(int)arg1;
- (BOOL)hasMapViewport;
- (int)optionssCount;
- (void)setOptions:(id)arg1 atIndex:(unsigned int)arg2;
- (id)optionsAtIndex:(unsigned int)arg1;
- (void)addOptions:(id)arg1;
- (void)setIncludeStructuredInstructions:(BOOL)arg1;
- (void)setReturnMultipleRoutes:(BOOL)arg1;
- (BOOL)hasReturnMultipleRoutes;
- (BOOL)hasIncludeStructuredInstructions;
- (BOOL)hasAddStepNoticesToInstructionText;
- (BOOL)addStepNoticesToInstructionText;
- (id)optionss;
- (void)setOptionss:(id)arg1;
- (BOOL)hasResultPageOffset;
- (BOOL)hasRequestedResultType;
- (id)iconRequest;
- (int)tripMaxCount;
- (void)setWaypoints:(id)arg1;
- (void)setModes:(id)arg1;
- (void)setIncludeStreetViewPanoId:(BOOL)arg1;
- (BOOL)hasIncludeStreetViewPanoId;
- (BOOL)readFrom:(id)arg1;
- (BOOL)includeStreetViewPanoId;
- (void)writeTo:(id)arg1;
- (id)modes;
- (int)requestedTimeType;
- (id)requestedDateTime;
- (void)addWaypoint:(id)arg1;
- (void)setTripMaxCount:(int)arg1;
- (void)addMode:(int)arg1;
- (void)setAddStepNoticesToInstructionText:(BOOL)arg1;
- (void)setMapViewport:(id)arg1;
- (void)setIconRequest:(id)arg1;
- (void)setRequestedTimeType:(int)arg1;
- (void)setRequestedDateTime:(id)arg1;
- (void)setResultPageOffset:(int)arg1;
- (id)waypointAtIndex:(unsigned int)arg1;
- (int)modeAtIndex:(unsigned int)arg1;

@end
