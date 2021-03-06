/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@interface IMAVInvitationController : NSObject  {
}

+ (void)setupIMAVInvitationController;
+ (void)acceptInvitationRequestFromBuddy:(id)arg1 forConference:(id)arg2;
+ (void)declineInvitationRequestFromBuddy:(id)arg1 forConference:(id)arg2;
+ (unsigned int)currentAVChatState;
+ (void)setDelegate:(id)arg1;
+ (id)delegate;
+ (void)_markSetup;
+ (void)sendResponse:(unsigned int)arg1 toInvitationRequestFromBuddy:(id)arg2 forConference:(id)arg3;
+ (unsigned int)currentAVChatEndedReason;
+ (id)curentAVChatRemoteUserID;
+ (id)curentAVChatConnectedDate;


@end
