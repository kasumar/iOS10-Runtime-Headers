/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECSearchFeedbackListener : NSObject <SFFeedbackListener> {
    unsigned char  _consumerSubType;
    NSString * _consumerSubTypeString;
    NSArray * _currentZKWItems;
    _DECConsumer * _decConsumer;
    unsigned long long  _decFeedbackState;
    bool  _justSelectedAQueryPrediction;
    unsigned long long  _lastDidStartSearchTimeStamp;
    int  _lastEngagedQueryPredictionPosition;
    NSSet * _lastEngagedQueryPredictionSources;
    bool  _lastPredictedQuerySetWasEngagedOn;
    unsigned long long  _lastResultsDidBecomeVisibleTimeStamp;
    bool  _predictedQuerySessionActive;
    bool  _predictedQuerySessionPredictedQueryWasEdited;
    PETDistributionEventTracker * _qpEventDelayTracker;
    PETDistributionEventTracker * _qpEventEngagementByQueryCountTracker;
    PETGoalConversionEventTracker * _qpEventGoalConvTracker;
    PETGoalConversionEventTracker * _qpEventQueriesShownTracker;
    PETDistributionEventTracker * _qpEventQueryShownCountTracker;
    PETScalarEventTracker * _qpEventQueryShownSourceTracker;
    PETDistributionEventTracker * _qpEventSpotlightResultsPerPredictedQueryTracker;
    PETScalarEventTracker * _qpPredictionQueryDetailTracker;
    PETDistributionEventTracker * _qpQueryLengthTracker;
    PETScalarEventTracker * _qpResultDetailTracker;
    PETGoalConversionEventTracker * _qpResultGoalConvTracker;
    PETScalarEventTracker * _qpSpotlightEngagementTracker;
    PETScalarEventTracker * _qpSpotlightQuerySourceTracker;
    NSString * _query;
    bool  _waitingForPredictedQueryFeedback;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)flatSourceList:(id)arg1;

- (void).cxx_destruct;
- (void)_endQueryPredictionSessionAndLogResults:(id)arg1;
- (void)_logQueryPredictionEventStats:(id)arg1 searchResults:(id)arg2;
- (void)_logZkwDisplayTime:(unsigned long long)arg1;
- (void)_sendAppFeedbackToDuetExpertCenter:(id)arg1 searchResults:(id)arg2;
- (void)_sendFeedbackAndDoLogging:(id)arg1 searchResults:(id)arg2;
- (void)_setConsumerSubType:(unsigned char)arg1;
- (void)_setCurrentZKWItems:(id)arg1;
- (void)_setDECFeedbackState:(unsigned long long)arg1;
- (void)_setPredictedQueryWasEdited;
- (void)_setQuery:(id)arg1;
- (void)_startQueryPredictionSession;
- (void)didEngageResult:(id)arg1;
- (void)didStartSearch:(id)arg1;
- (id)init;
- (id)initWithDecConsumer:(id)arg1;
- (void)resultsDidBecomeVisible:(id)arg1;
- (void)searchViewDidAppear:(id)arg1;
- (void)searchViewDidDisappear:(id)arg1;

@end
