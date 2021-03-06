/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSSet, <CoreDAVTaskDelegate>;

@interface CoreDAVMkcolTask : CoreDAVTask  {
    NSSet *_propertiesToSet;
    BOOL _sendOrder;
    int _order;
}

@property int order;
@property(retain) NSSet * propertiesToSet;
@property <CoreDAVTaskDelegate> * delegate;


- (id)initWithURL:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)setOrder:(int)arg1;
- (int)order;
- (id)initWithPropertiesToSet:(id)arg1 atURL:(id)arg2;
- (id)additionalHeaderValues;
- (id)propertiesToSet;
- (void)setPropertiesToSet:(id)arg1;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)httpMethod;
- (id)requestBody;

@end
