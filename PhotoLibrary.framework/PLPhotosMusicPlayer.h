/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPhotosMusicPlayer : NSObject  {
}

+ (void)startMusicWithSettings:(id)arg1;
+ (void)startMusicForAlbum:(id)arg1;
+ (void)stopMusic;
+ (void)pauseMusic:(BOOL)arg1;
+ (void)continueMusic;
+ (void)setShouldRepeatMusic:(BOOL)arg1;
+ (void)setEnableRouteDiscovery:(BOOL)arg1;
+ (void)routeMusicToAirTunesService:(id)arg1;
+ (void)stopRoutingMusicToAirTunes;

- (void)audioDeviceControllerAudioRoutesChanged:(id)arg1;

@end