/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSSession : NSObject {
    _IDSSession * _internal;
}

@property (nonatomic, readonly) NSString *destination;
@property (nonatomic) long long invitationTimeOut;
@property (nonatomic) bool isAudioEnabled;
@property (nonatomic) bool isMuted;
@property (nonatomic, readonly) unsigned int sessionEndedReason;
@property (nonatomic, readonly) int socket;

- (unsigned long long)MTUForAddressFamily:(unsigned long long)arg1;
- (id)_initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 uniqueID:(id)arg4;
- (id)_internal;
- (id)_streamPreferences;
- (void)acceptInvitation;
- (void)acceptInvitationWithData:(id)arg1;
- (void)cancelInvitation;
- (void)cancelInvitationWithData:(id)arg1;
- (void)cancelInvitationWithRemoteEndedReasonOverride:(unsigned int)arg1;
- (void)dealloc;
- (void)declineInvitation;
- (void)declineInvitationWithData:(id)arg1;
- (id)description;
- (id)destination;
- (void)endSession;
- (void)endSessionWithData:(id)arg1;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3;
- (long long)invitationTimeOut;
- (bool)isAudioEnabled;
- (bool)isMuted;
- (bool)sendData:(id)arg1 error:(id*)arg2;
- (void)sendInvitation;
- (void)sendInvitationWithData:(id)arg1;
- (void)sendInvitationWithData:(id)arg1 declineOnError:(bool)arg2;
- (void)sendInvitationWithOptions:(id)arg1;
- (void)sendSessionMessage:(id)arg1;
- (unsigned int)sessionEndedReason;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setInvitationTimeOut:(long long)arg1;
- (void)setIsAudioEnabled:(bool)arg1;
- (void)setIsMuted:(bool)arg1;
- (void)setPreferences:(id)arg1;
- (void)setStreamPreferences:(id)arg1;
- (bool)shouldUseSocketForTransport;
- (int)socket;
- (unsigned int)state;

@end
