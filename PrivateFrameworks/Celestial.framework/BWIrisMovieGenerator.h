/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWIrisMovieGenerator : NSObject {
    struct OpaqueCMByteStream { } * _byteStream;
    long long  _masterMovieAudioExtractionID;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _masterMovieDuration;
    bool  _masterMovieParsingComplete;
    struct OpaqueFigFormatReader { } * _masterMovieReader;
    NSObject<OS_dispatch_queue> * _movieGenerationQueue;
    NSMutableArray * _movieInfoAndCallbacks;
    struct OpaqueFigSimpleMutex { } * _movieInfoAndCallbacksMutex;
    bool  _sampleReferenceMoviesEnabled;
    bool  _sourceIsFrontFacingCamera;
    bool  _suspended;
}

@property bool suspended;

+ (bool)_addStillImageTimeMetadataTrackToAssetWriter:(struct OpaqueFigAssetWriter { }*)arg1 forTrackTimeScale:(int)arg2 yieldingTrackID:(int*)arg3;
+ (void)initialize;

- (bool)_generateIrisMovies:(bool)arg1;
- (int)_generateRefMovieForInfo:(id)arg1;
- (void)dealloc;
- (bool)flush;
- (void)flushAsync;
- (id)initWithReadableByteStream:(struct OpaqueCMByteStream { }*)arg1 forFrontFacingCamera:(bool)arg2 sampleReferenceMoviesEnabled:(bool)arg3;
- (void)parseAdditionalFragments;
- (void)setSuspended:(bool)arg1;
- (bool)suspended;
- (void)writeMovieWithInfo:(id)arg1 completionHandler:(id /* block */)arg2;

@end
