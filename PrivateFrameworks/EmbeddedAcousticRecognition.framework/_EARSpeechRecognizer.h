/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface _EARSpeechRecognizer : NSObject {
    bool  _concatenateUtterances;
    NSString * _configPath;
    bool  _detectUtterances;
    _EARFormatter * _formatter;
    NSObject<OS_dispatch_queue> * _formatterQueue;
    double  _maximumRecognitionDuration;
    NSObject<OS_dispatch_queue> * _recognitionQueue;
    struct unique_ptr<quasar::SpeechRecognizer, std::__1::default_delete<quasar::SpeechRecognizer> > { 
        struct __compressed_pair<quasar::SpeechRecognizer *, std::__1::default_delete<quasar::SpeechRecognizer> > { 
            struct SpeechRecognizer {} *__first_; 
        } __ptr_; 
    }  _recognizer;
    NSData * _userProfileData;
}

@property (nonatomic) bool concatenateUtterances;
@property (nonatomic) bool detectUtterances;
@property (nonatomic) double maximumRecognitionDuration;
@property (nonatomic, readonly) _EARSpeechModelInfo *modelInfo;
@property (nonatomic, copy) NSData *userProfileData;

+ (void)initialize;
+ (id)maximumSupportedConfigurationVersion;
+ (id)minimumSupportedConfigurationVersion;
+ (id)rawTokenResultsFromRecognitionResults:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancelRecognition;
- (bool)concatenateUtterances;
- (bool)detectUtterances;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 useQuasarFormatter:(bool)arg2;
- (id)initWithConfiguration:(id)arg1 withGeneralVoc:(id)arg2 withLexiconEnh:(id)arg3 withItnEnh:(id)arg4;
- (id)initWithConfiguration:(id)arg1 withLanguage:(id)arg2 withSdapiConfig:(id)arg3;
- (double)maximumRecognitionDuration;
- (id)modelInfo;
- (id)recognitionResultsWithAudioData:(id)arg1 userProfileData:(id)arg2 language:(id)arg3 task:(id)arg4 samplingRate:(unsigned long long)arg5 extraLanguageModel:(id)arg6;
- (struct shared_ptr<quasar::SpeechRequestData> { struct SpeechRequestData {} *x1; struct shared_count { struct sp_counted_base {} *x_2_1_1; } x2; })requestParametersWithUserProfileData:(id)arg1 task:(id)arg2 samplingRate:(unsigned long long)arg3 resultStream:(struct shared_ptr<quasar::RecogResultStreamBase> { struct RecogResultStreamBase {} *x1; struct shared_count { struct sp_counted_base {} *x_2_1_1; } x2; })arg4 extraLanguageModel:(id)arg5 symbolTableList:(struct SymbolTableList { struct vector<quasar::SymbolTableList::Data, std::__1::allocator<quasar::SymbolTableList::Data> > { struct Data {} *x_1_1_1; struct Data {} *x_1_1_2; struct __compressed_pair<quasar::SymbolTableList::Data *, std::__1::allocator<quasar::SymbolTableList::Data> > { struct Data {} *x_3_2_1; } x_1_1_3; } x1; }*)arg6;
- (id)runRecognitionWithResultStream:(id)arg1;
- (id)runRecognitionWithResultStream:(id)arg1 language:(id)arg2 task:(id)arg3 samplingRate:(unsigned long long)arg4;
- (void)setConcatenateUtterances:(bool)arg1;
- (void)setDetectUtterances:(bool)arg1;
- (void)setMaximumRecognitionDuration:(double)arg1;
- (void)setUserProfileData:(id)arg1;
- (void)updateUserProfileData:(id)arg1;
- (id)userProfileData;

@end
