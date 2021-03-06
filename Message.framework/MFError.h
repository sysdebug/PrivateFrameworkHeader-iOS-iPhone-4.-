/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableDictionary;

@interface MFError : NSError  {
    NSMutableDictionary *_moreUserInfo;
}

+ (id)errorWithException:(id)arg1;
+ (id)errorWithDomain:(id)arg1 code:(long)arg2 localizedDescription:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long)arg2 localizedDescription:(id)arg3 title:(id)arg4 userInfo:(id)arg5;

- (void)setLocalizedDescription:(id)arg1;
- (void)useGenericDescription:(id)arg1;
- (id)mf_moreInfo;
- (void)setMoreInfo:(id)arg1;
- (id)mf_shortDescription;
- (void)setShortDescription:(id)arg1;
- (id)localizedDescription;
- (id)userInfo;
- (void)dealloc;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;

@end
