/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVPostCalendarItemRecurrenceSplitTask : CoreDAVPropertyFindBaseTask {
    CoreDAVResponseItem * _createdResponseItem;
    bool  _isAllDay;
    bool  _isFloating;
    NSURL * _postURLWithQuery;
    NSString * _previousETag;
    NSString * _previousScheduleTag;
    NSDate * _recurrenceDate;
    NSURL * _resourceURL;
    NSString * _uidForCreatedSeries;
    CoreDAVResponseItem * _updatedResponseItem;
}

@property (nonatomic, retain) CoreDAVResponseItem *createdResponseItem;
@property (nonatomic) bool isAllDay;
@property (nonatomic) bool isFloating;
@property (nonatomic, retain) NSURL *postURLWithQuery;
@property (nonatomic, retain) NSString *previousETag;
@property (nonatomic, retain) NSString *previousScheduleTag;
@property (nonatomic, retain) NSDate *recurrenceDate;
@property (nonatomic, retain) NSURL *resourceURL;
@property (nonatomic, retain) NSString *uidForCreatedSeries;
@property (nonatomic, retain) CoreDAVResponseItem *updatedResponseItem;

- (void).cxx_destruct;
- (id)_dataForItem:(id)arg1;
- (id)_documentForItem:(id)arg1;
- (id)_etagForItem:(id)arg1;
- (id)_recurrenceDateString;
- (id)_scheduleTagForItem:(id)arg1;
- (void)_updateBothResponseItems;
- (id)additionalHeaderValues;
- (id)createdETag;
- (id)createdICSData;
- (id)createdICSDocument;
- (id)createdResponseItem;
- (id)createdScheduleTag;
- (id)createdURL;
- (id)description;
- (id)httpMethod;
- (id)initWithResourceURL:(id)arg1 recurrenceDate:(id)arg2 floating:(bool)arg3 allday:(bool)arg4;
- (bool)isAllDay;
- (bool)isFloating;
- (id)postURLWithQuery;
- (id)previousETag;
- (id)previousScheduleTag;
- (id)recurrenceDate;
- (id)resourceURL;
- (void)setCreatedResponseItem:(id)arg1;
- (void)setIsAllDay:(bool)arg1;
- (void)setIsFloating:(bool)arg1;
- (void)setPostURLWithQuery:(id)arg1;
- (void)setPreviousETag:(id)arg1;
- (void)setPreviousScheduleTag:(id)arg1;
- (void)setRecurrenceDate:(id)arg1;
- (void)setResourceURL:(id)arg1;
- (void)setUidForCreatedSeries:(id)arg1;
- (void)setUpdatedResponseItem:(id)arg1;
- (id)uidForCreatedSeries;
- (id)updatedETag;
- (id)updatedICSDocument;
- (id)updatedResponseItem;
- (id)updatedScheduleTag;
- (id)url;
- (id)urlWithQuery;

@end
