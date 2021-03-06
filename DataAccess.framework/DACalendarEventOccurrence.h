/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSDate, DACalendarEvent;

@interface DACalendarEventOccurrence : DACalendarObject  {
}

@property(readonly) DACalendarEvent * event;
@property(readonly) NSDate * date;
@property(readonly) BOOL canBeDetached;


- (BOOL)canBeDetached;
- (void)removeAndFuture:(BOOL)arg1;
- (id)detachAndFuture:(BOOL)arg1;
- (id)event;
- (id)date;

@end
