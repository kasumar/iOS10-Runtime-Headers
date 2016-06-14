/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRMediaRemoteMessageProtobuf : PBCodable <NSCopying> {
    NSString * _authenticationToken;
    _MRClientUpdatesConfigurationProtobuf * _clientUpdatesConfigMessage;
    _MRSetConnectionStateMessageProtobuf * _connectionState;
    _MRPlaybackQueueProtobuf * _contentItemsChangedNotificationMessage;
    _MRCryptoPairingMessageProtobuf * _cryptoPairingMessage;
    _MRDeviceInfoMessageProtobuf * _deviceInfoMessage;
    unsigned int  _errorCode;
    _MRGameControllerMessageProtobuf * _gameController;
    _MRGameControllerPropertiesMessageProtobuf * _gameControllerProperties;
    _MRGetKeyboardSessionProtobuf * _getKeyboardMessage;
    _MRGetPlaybackQueueMessageProtobuf * _getPlaybackQueue;
    _MRGetStateMessageProtobuf * _getStateMessage;
    _MRGetVoiceInputDevicesMessageProtobuf * _getVoiceInputDevicesMessage;
    _MRGetVoiceInputDevicesResponseMessageProtobuf * _getVoiceInputDevicesResponseMessage;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int errorCode : 1; 
        unsigned int type : 1; 
    }  _has;
    NSString * _identifier;
    _MRKeyboardMessageProtobuf * _keyboardMessage;
    _MRNotificationMessageProtobuf * _notificationMessage;
    _MRSetReadyStateMessageProtobuf * _readyStateMessage;
    _MRRegisterForGameControllerEventsMessageProtobuf * _registerForGameControllerEvents;
    _MRRegisterGameControllerMessageProtobuf * _registerGameController;
    _MRRegisterGameControllerResponseMessageProtobuf * _registerGameControllerResponse;
    _MRRegisterHIDDeviceMessageProtobuf * _registerHIDDeviceMessage;
    _MRRegisterHIDDeviceResultMessageProtobuf * _registerHIDDeviceResultMessage;
    _MRRegisterVoiceInputDeviceMessageProtobuf * _registerVoiceInputDeviceMessage;
    _MRRegisterVoiceInputDeviceResponseMessageProtobuf * _registerVoiceInputDeviceResponseMessage;
    _MRSendButtonEventMessageProtobuf * _sendButtonEventMessage;
    _MRSendCommandMessageProtobuf * _sendCommandMessage;
    _MRSendCommandResultMessageProtobuf * _sendCommandResultMessage;
    _MRSendHIDEventMessageProtobuf * _sendHIDEventMessage;
    _MRSendHIDReportMessageProtobuf * _sendHIDReportMessage;
    _MRSendVirtualTouchEventMessageProtobuf * _sendVirtualTouchEventMessage;
    _MRSendVoiceInputMessageProtobuf * _sendVoiceInputMessage;
    _MRSetArtworkMessageProtobuf * _setArtworkMessage;
    _MRSetRecordingStateMessageProtobuf * _setRecordingStateMessage;
    _MRSetStateMessageProtobuf * _setStateMessage;
    _MRTextInputMessageProtobuf * _textInputMessage;
    unsigned long long  _timestamp;
    _MRTransactionMessageProtobuf * _transactionPackets;
    int  _type;
    _MRUnregisterGameControllerMessageProtobuf * _unregisterGameController;
    _MRVolumeControlAvailabilityProtobuf * _volumeControlAvailabilityMessage;
}

@property (nonatomic, retain) NSString *authenticationToken;
@property (nonatomic, retain) _MRClientUpdatesConfigurationProtobuf *clientUpdatesConfigMessage;
@property (nonatomic, retain) _MRSetConnectionStateMessageProtobuf *connectionState;
@property (nonatomic, retain) _MRPlaybackQueueProtobuf *contentItemsChangedNotificationMessage;
@property (nonatomic, retain) _MRCryptoPairingMessageProtobuf *cryptoPairingMessage;
@property (nonatomic, retain) _MRDeviceInfoMessageProtobuf *deviceInfoMessage;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic, retain) _MRGameControllerMessageProtobuf *gameController;
@property (nonatomic, retain) _MRGameControllerPropertiesMessageProtobuf *gameControllerProperties;
@property (nonatomic, retain) _MRGetKeyboardSessionProtobuf *getKeyboardMessage;
@property (nonatomic, retain) _MRGetPlaybackQueueMessageProtobuf *getPlaybackQueue;
@property (nonatomic, retain) _MRGetStateMessageProtobuf *getStateMessage;
@property (nonatomic, retain) _MRGetVoiceInputDevicesMessageProtobuf *getVoiceInputDevicesMessage;
@property (nonatomic, retain) _MRGetVoiceInputDevicesResponseMessageProtobuf *getVoiceInputDevicesResponseMessage;
@property (nonatomic, readonly) bool hasAuthenticationToken;
@property (nonatomic, readonly) bool hasClientUpdatesConfigMessage;
@property (nonatomic, readonly) bool hasConnectionState;
@property (nonatomic, readonly) bool hasContentItemsChangedNotificationMessage;
@property (nonatomic, readonly) bool hasCryptoPairingMessage;
@property (nonatomic, readonly) bool hasDeviceInfoMessage;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic, readonly) bool hasGameController;
@property (nonatomic, readonly) bool hasGameControllerProperties;
@property (nonatomic, readonly) bool hasGetKeyboardMessage;
@property (nonatomic, readonly) bool hasGetPlaybackQueue;
@property (nonatomic, readonly) bool hasGetStateMessage;
@property (nonatomic, readonly) bool hasGetVoiceInputDevicesMessage;
@property (nonatomic, readonly) bool hasGetVoiceInputDevicesResponseMessage;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasKeyboardMessage;
@property (nonatomic, readonly) bool hasNotificationMessage;
@property (nonatomic, readonly) bool hasReadyStateMessage;
@property (nonatomic, readonly) bool hasRegisterForGameControllerEvents;
@property (nonatomic, readonly) bool hasRegisterGameController;
@property (nonatomic, readonly) bool hasRegisterGameControllerResponse;
@property (nonatomic, readonly) bool hasRegisterHIDDeviceMessage;
@property (nonatomic, readonly) bool hasRegisterHIDDeviceResultMessage;
@property (nonatomic, readonly) bool hasRegisterVoiceInputDeviceMessage;
@property (nonatomic, readonly) bool hasRegisterVoiceInputDeviceResponseMessage;
@property (nonatomic, readonly) bool hasSendButtonEventMessage;
@property (nonatomic, readonly) bool hasSendCommandMessage;
@property (nonatomic, readonly) bool hasSendCommandResultMessage;
@property (nonatomic, readonly) bool hasSendHIDEventMessage;
@property (nonatomic, readonly) bool hasSendHIDReportMessage;
@property (nonatomic, readonly) bool hasSendVirtualTouchEventMessage;
@property (nonatomic, readonly) bool hasSendVoiceInputMessage;
@property (nonatomic, readonly) bool hasSetArtworkMessage;
@property (nonatomic, readonly) bool hasSetRecordingStateMessage;
@property (nonatomic, readonly) bool hasSetStateMessage;
@property (nonatomic, readonly) bool hasTextInputMessage;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasTransactionPackets;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasUnregisterGameController;
@property (nonatomic, readonly) bool hasVolumeControlAvailabilityMessage;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) _MRKeyboardMessageProtobuf *keyboardMessage;
@property (nonatomic, retain) _MRNotificationMessageProtobuf *notificationMessage;
@property (nonatomic, retain) _MRSetReadyStateMessageProtobuf *readyStateMessage;
@property (nonatomic, retain) _MRRegisterForGameControllerEventsMessageProtobuf *registerForGameControllerEvents;
@property (nonatomic, retain) _MRRegisterGameControllerMessageProtobuf *registerGameController;
@property (nonatomic, retain) _MRRegisterGameControllerResponseMessageProtobuf *registerGameControllerResponse;
@property (nonatomic, retain) _MRRegisterHIDDeviceMessageProtobuf *registerHIDDeviceMessage;
@property (nonatomic, retain) _MRRegisterHIDDeviceResultMessageProtobuf *registerHIDDeviceResultMessage;
@property (nonatomic, retain) _MRRegisterVoiceInputDeviceMessageProtobuf *registerVoiceInputDeviceMessage;
@property (nonatomic, retain) _MRRegisterVoiceInputDeviceResponseMessageProtobuf *registerVoiceInputDeviceResponseMessage;
@property (nonatomic, retain) _MRSendButtonEventMessageProtobuf *sendButtonEventMessage;
@property (nonatomic, retain) _MRSendCommandMessageProtobuf *sendCommandMessage;
@property (nonatomic, retain) _MRSendCommandResultMessageProtobuf *sendCommandResultMessage;
@property (nonatomic, retain) _MRSendHIDEventMessageProtobuf *sendHIDEventMessage;
@property (nonatomic, retain) _MRSendHIDReportMessageProtobuf *sendHIDReportMessage;
@property (nonatomic, retain) _MRSendVirtualTouchEventMessageProtobuf *sendVirtualTouchEventMessage;
@property (nonatomic, retain) _MRSendVoiceInputMessageProtobuf *sendVoiceInputMessage;
@property (nonatomic, retain) _MRSetArtworkMessageProtobuf *setArtworkMessage;
@property (nonatomic, retain) _MRSetRecordingStateMessageProtobuf *setRecordingStateMessage;
@property (nonatomic, retain) _MRSetStateMessageProtobuf *setStateMessage;
@property (nonatomic, retain) _MRTextInputMessageProtobuf *textInputMessage;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) _MRTransactionMessageProtobuf *transactionPackets;
@property (nonatomic) int type;
@property (nonatomic, retain) _MRUnregisterGameControllerMessageProtobuf *unregisterGameController;
@property (nonatomic, retain) _MRVolumeControlAvailabilityProtobuf *volumeControlAvailabilityMessage;

- (int)StringAsType:(id)arg1;
- (id)authenticationToken;
- (id)clientUpdatesConfigMessage;
- (id)connectionState;
- (id)contentItemsChangedNotificationMessage;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cryptoPairingMessage;
- (void)dealloc;
- (id)description;
- (id)deviceInfoMessage;
- (id)dictionaryRepresentation;
- (unsigned int)errorCode;
- (id)gameController;
- (id)gameControllerProperties;
- (id)getKeyboardMessage;
- (id)getPlaybackQueue;
- (id)getStateMessage;
- (id)getVoiceInputDevicesMessage;
- (id)getVoiceInputDevicesResponseMessage;
- (bool)hasAuthenticationToken;
- (bool)hasClientUpdatesConfigMessage;
- (bool)hasConnectionState;
- (bool)hasContentItemsChangedNotificationMessage;
- (bool)hasCryptoPairingMessage;
- (bool)hasDeviceInfoMessage;
- (bool)hasErrorCode;
- (bool)hasGameController;
- (bool)hasGameControllerProperties;
- (bool)hasGetKeyboardMessage;
- (bool)hasGetPlaybackQueue;
- (bool)hasGetStateMessage;
- (bool)hasGetVoiceInputDevicesMessage;
- (bool)hasGetVoiceInputDevicesResponseMessage;
- (bool)hasIdentifier;
- (bool)hasKeyboardMessage;
- (bool)hasNotificationMessage;
- (bool)hasReadyStateMessage;
- (bool)hasRegisterForGameControllerEvents;
- (bool)hasRegisterGameController;
- (bool)hasRegisterGameControllerResponse;
- (bool)hasRegisterHIDDeviceMessage;
- (bool)hasRegisterHIDDeviceResultMessage;
- (bool)hasRegisterVoiceInputDeviceMessage;
- (bool)hasRegisterVoiceInputDeviceResponseMessage;
- (bool)hasSendButtonEventMessage;
- (bool)hasSendCommandMessage;
- (bool)hasSendCommandResultMessage;
- (bool)hasSendHIDEventMessage;
- (bool)hasSendHIDReportMessage;
- (bool)hasSendVirtualTouchEventMessage;
- (bool)hasSendVoiceInputMessage;
- (bool)hasSetArtworkMessage;
- (bool)hasSetRecordingStateMessage;
- (bool)hasSetStateMessage;
- (bool)hasTextInputMessage;
- (bool)hasTimestamp;
- (bool)hasTransactionPackets;
- (bool)hasType;
- (bool)hasUnregisterGameController;
- (bool)hasVolumeControlAvailabilityMessage;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)keyboardMessage;
- (void)mergeFrom:(id)arg1;
- (id)notificationMessage;
- (bool)readFrom:(id)arg1;
- (id)readyStateMessage;
- (id)registerForGameControllerEvents;
- (id)registerGameController;
- (id)registerGameControllerResponse;
- (id)registerHIDDeviceMessage;
- (id)registerHIDDeviceResultMessage;
- (id)registerVoiceInputDeviceMessage;
- (id)registerVoiceInputDeviceResponseMessage;
- (id)sendButtonEventMessage;
- (id)sendCommandMessage;
- (id)sendCommandResultMessage;
- (id)sendHIDEventMessage;
- (id)sendHIDReportMessage;
- (id)sendVirtualTouchEventMessage;
- (id)sendVoiceInputMessage;
- (id)setArtworkMessage;
- (void)setAuthenticationToken:(id)arg1;
- (void)setClientUpdatesConfigMessage:(id)arg1;
- (void)setConnectionState:(id)arg1;
- (void)setContentItemsChangedNotificationMessage:(id)arg1;
- (void)setCryptoPairingMessage:(id)arg1;
- (void)setDeviceInfoMessage:(id)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setGameController:(id)arg1;
- (void)setGameControllerProperties:(id)arg1;
- (void)setGetKeyboardMessage:(id)arg1;
- (void)setGetPlaybackQueue:(id)arg1;
- (void)setGetStateMessage:(id)arg1;
- (void)setGetVoiceInputDevicesMessage:(id)arg1;
- (void)setGetVoiceInputDevicesResponseMessage:(id)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setKeyboardMessage:(id)arg1;
- (void)setNotificationMessage:(id)arg1;
- (void)setReadyStateMessage:(id)arg1;
- (id)setRecordingStateMessage;
- (void)setRegisterForGameControllerEvents:(id)arg1;
- (void)setRegisterGameController:(id)arg1;
- (void)setRegisterGameControllerResponse:(id)arg1;
- (void)setRegisterHIDDeviceMessage:(id)arg1;
- (void)setRegisterHIDDeviceResultMessage:(id)arg1;
- (void)setRegisterVoiceInputDeviceMessage:(id)arg1;
- (void)setRegisterVoiceInputDeviceResponseMessage:(id)arg1;
- (void)setSendButtonEventMessage:(id)arg1;
- (void)setSendCommandMessage:(id)arg1;
- (void)setSendCommandResultMessage:(id)arg1;
- (void)setSendHIDEventMessage:(id)arg1;
- (void)setSendHIDReportMessage:(id)arg1;
- (void)setSendVirtualTouchEventMessage:(id)arg1;
- (void)setSendVoiceInputMessage:(id)arg1;
- (void)setSetArtworkMessage:(id)arg1;
- (void)setSetRecordingStateMessage:(id)arg1;
- (void)setSetStateMessage:(id)arg1;
- (id)setStateMessage;
- (void)setTextInputMessage:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransactionPackets:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUnregisterGameController:(id)arg1;
- (void)setVolumeControlAvailabilityMessage:(id)arg1;
- (id)textInputMessage;
- (unsigned long long)timestamp;
- (id)transactionPackets;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unregisterGameController;
- (id)volumeControlAvailabilityMessage;
- (void)writeTo:(id)arg1;

@end
