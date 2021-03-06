/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class IMConnectionMonitor, NSString, NSArray;

@interface NetworkChangeNotifier : NSObject <IMSystemMonitorListener, IMConnectionMonitorDelegate> {
    struct __SCDynamicStore { } *_store;
    struct __CFRunLoopSource { } *_runLoopSource;
    NSString *_myIP;
    NSArray *_myIPs;
    IMConnectionMonitor *_connectionMonitor;
    BOOL _lastPostedNetworkUp;
}

@property(readonly) BOOL isNetworkUp;
@property(readonly) NSString * myIPAddress;
@property(readonly) NSArray * myIPAddresses;
@property(readonly) unsigned short nextAvailablePort;
@property(readonly) struct __SCDynamicStore { }* getDynamicStore;

+ (id)sharedNotifier;
+ (BOOL)enableNotifications;
+ (void)disableNotifications;

- (BOOL)isNetworkUp;
- (void)systemDidWake;
- (void)systemWillSleep;
- (id)init;
- (void)dealloc;
- (void)_clearIPCache;
- (id)myIPAddresses;
- (unsigned short)nextAvailablePort;
- (void)_clearSharedDNSService;
- (struct __SCDynamicStore { }*)getDynamicStore;
- (void)connectionMonitorDidUpdate:(id)arg1;
- (BOOL)_listenForChanges;
- (id)myIPAddress;

@end
