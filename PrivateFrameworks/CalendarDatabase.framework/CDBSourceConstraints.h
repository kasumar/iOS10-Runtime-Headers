/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
 */

@interface CDBSourceConstraints : NSObject {
    struct { 
        unsigned int maxAlarmsAllowed : 1; 
        unsigned int maxRecurrencesAllowed : 1; 
        unsigned int supportsAlarmTriggerIntervals : 1; 
        unsigned int supportsAlarmTriggerDates : 1; 
        unsigned int supportsAlarmsTriggeringAfterStartDate : 1; 
        unsigned int snoozeAlarmRequiresDetach : 1; 
        unsigned int organizerCanSeeAttendeeStatuses : 1; 
        unsigned int inviteesCanSeeAttendeeStatuses : 1; 
        unsigned int statusesAreAccurate : 1; 
        unsigned int supportsIncomingInvitations : 1; 
        unsigned int supportsOutgoingInvitations : 1; 
        unsigned int requiresOutgoingInvitationsInDefaultCalendar : 1; 
        unsigned int supportsInvitationModifications : 1; 
        unsigned int supportsEventForwarding : 1; 
        unsigned int supportsResponseComments : 1; 
        unsigned int deliverySourceOrExternalIDRequiredForResponse : 1; 
        unsigned int proposedStatusRequiredForResponse : 1; 
        unsigned int declinedStatusChangeRequiresNoPendingStatus : 1; 
        unsigned int eventDurationConstrainedToRecurrenceInterval : 1; 
        unsigned int alarmTriggerIntervalConstrainedToRecurrenceInterval : 1; 
        unsigned int occurrencesMustOccurOnSeparateDays : 1; 
        unsigned int futureStartDateLimitedToOccurrenceCacheBounds : 1; 
        unsigned int supportsRecurrencesOnDetachedEvents : 1; 
        unsigned int recurrencesShouldPinToMonthDays : 1; 
        unsigned int requiresAttendeeSearchInSingleAccount : 1; 
        unsigned int mustAcknowledgeMasterEvent : 1; 
        unsigned int canSetAvailability : 1; 
        unsigned int eventAvalabilityLimited : 1; 
        unsigned int requiresMSFormattedUID : 1; 
        unsigned int shouldCancelDeletedEvents : 1; 
        unsigned int shouldDeclineDeletedInvitations : 1; 
        unsigned int supportsStructuredLocations : 1; 
        unsigned int supportsReminderActions : 1; 
        unsigned int supportsReminderLocations : 1; 
        unsigned int supportsAlarmProximity : 1; 
        unsigned int allowsCalendarAddDeleteModify : 1; 
        unsigned int allowsTasks : 1; 
        unsigned int allowsEvents : 1; 
        unsigned int supportsURLField : 1; 
        unsigned int supportsAllDayDueDates : 1; 
        unsigned int supportsSharedCalendars : 1; 
        unsigned int isFacebook : 1; 
        unsigned int recurrenceSeriesMustIncludeMoreThanFirstOccurrence : 1; 
        unsigned int supportsPrivateEvents : 1; 
        unsigned int prohibitsPrivateEventsWithAttendees : 1; 
        unsigned int supportsAvailabilityRequests : 1; 
        unsigned int supportsIgnoringEventsInAvailabilityRequests : 1; 
        unsigned int supportsLocationDirectorySearches : 1; 
        unsigned int requiresSamePrivacyLevelAcrossRecurrenceSeries : 1; 
        unsigned int prohibitsMultipleMonthsInYearlyRecurrence : 1; 
        unsigned int prohibitsMultipleDaysInMonthlyRecurrence : 1; 
        unsigned int prohibitsYearlyRecurrenceInterval : 1; 
        unsigned int requiresOccurrencesConformToRecurrenceRule : 1; 
        unsigned int prohibitsDetachmentOnCommentChange : 1; 
        unsigned int allowsProposeNewTime : 1; 
    }  _flags;
    int  _maxAlarmsAllowed;
    int  _maxRecurrencesAllowed;
}

@property (nonatomic) bool alarmTriggerIntervalConstrainedToRecurrenceInterval;
@property (nonatomic) bool allowsCalendarAddDeleteModify;
@property (nonatomic) bool allowsEvents;
@property (nonatomic) bool allowsProposeNewTime;
@property (nonatomic) bool allowsTasks;
@property (nonatomic) bool canSetAvailability;
@property (nonatomic) bool declinedStatusChangeRequiresNoPendingStatus;
@property (nonatomic) bool deliverySourceOrExternalIDRequiredForResponse;
@property (nonatomic) bool eventAvalabilityLimited;
@property (nonatomic) bool eventDurationConstrainedToRecurrenceInterval;
@property (nonatomic) struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; unsigned int x39 : 1; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; unsigned int x43 : 1; unsigned int x44 : 1; unsigned int x45 : 1; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; unsigned int x51 : 1; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; unsigned int x55 : 1; } flags;
@property (nonatomic) bool futureStartDateLimitedToOccurrenceCacheBounds;
@property (nonatomic) bool inviteesCanSeeAttendeeStatuses;
@property (nonatomic) bool isFacebook;
@property (nonatomic) int maxAlarmsAllowed;
@property (nonatomic) int maxRecurrencesAllowed;
@property (nonatomic) bool mustAcknowledgeMasterEvent;
@property (nonatomic) bool occurrencesMustOccurOnSeparateDays;
@property (nonatomic) bool organizerCanSeeAttendeeStatuses;
@property (nonatomic) bool prohibitsDetachmentOnCommentChange;
@property (nonatomic) bool prohibitsMultipleDaysInMonthlyRecurrence;
@property (nonatomic) bool prohibitsMultipleMonthsInYearlyRecurrence;
@property (nonatomic) bool prohibitsPrivateEventsWithAttendees;
@property (nonatomic) bool prohibitsYearlyRecurrenceInterval;
@property (nonatomic) bool proposedStatusRequiredForResponse;
@property (nonatomic) bool recurrenceSeriesMustIncludeMoreThanFirstOccurrence;
@property (nonatomic) bool recurrencesShouldPinToMonthDays;
@property (nonatomic) bool requiresAttendeeSearchInSingleAccount;
@property (nonatomic) bool requiresMSFormattedUID;
@property (nonatomic) bool requiresOccurrencesConformToRecurrenceRule;
@property (nonatomic) bool requiresOutgoingInvitationsInDefaultCalendar;
@property (nonatomic) bool requiresSamePrivacyLevelAcrossRecurrenceSeries;
@property (nonatomic) bool shouldCancelDeletedEvents;
@property (nonatomic) bool shouldDeclineDeletedInvitations;
@property (nonatomic) bool snoozeAlarmRequiresDetach;
@property (nonatomic) bool statusesAreAccurate;
@property (nonatomic) bool supportsAlarmProximity;
@property (nonatomic) bool supportsAlarmTriggerDates;
@property (nonatomic) bool supportsAlarmTriggerIntervals;
@property (nonatomic) bool supportsAlarmsTriggeringAfterStartDate;
@property (nonatomic) bool supportsAllDayDueDates;
@property (nonatomic) bool supportsAvailabilityRequests;
@property (nonatomic) bool supportsEventForwarding;
@property (nonatomic) bool supportsIgnoringEventsInAvailabilityRequests;
@property (nonatomic) bool supportsIncomingInvitations;
@property (nonatomic) bool supportsInvitationModifications;
@property (nonatomic) bool supportsLocationDirectorySearches;
@property (nonatomic) bool supportsOutgoingInvitations;
@property (nonatomic) bool supportsPrivateEvents;
@property (nonatomic) bool supportsRecurrencesOnDetachedEvents;
@property (nonatomic) bool supportsReminderActions;
@property (nonatomic) bool supportsReminderLocations;
@property (nonatomic) bool supportsResponseComments;
@property (nonatomic) bool supportsSharedCalendars;
@property (nonatomic) bool supportsStructuredLocations;
@property (nonatomic) bool supportsURLField;

- (bool)alarmTriggerIntervalConstrainedToRecurrenceInterval;
- (bool)allowsCalendarAddDeleteModify;
- (bool)allowsEvents;
- (bool)allowsProposeNewTime;
- (bool)allowsTasks;
- (bool)canSetAvailability;
- (bool)declinedStatusChangeRequiresNoPendingStatus;
- (bool)deliverySourceOrExternalIDRequiredForResponse;
- (bool)eventAvalabilityLimited;
- (bool)eventDurationConstrainedToRecurrenceInterval;
- (struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; unsigned int x39 : 1; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; unsigned int x43 : 1; unsigned int x44 : 1; unsigned int x45 : 1; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; unsigned int x51 : 1; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; unsigned int x55 : 1; })flags;
- (bool)futureStartDateLimitedToOccurrenceCacheBounds;
- (id)init;
- (id)initWithMaxAlarms:(int)arg1 maxRecurrences:(int)arg2 constraintFlags:(unsigned long long)arg3;
- (bool)inviteesCanSeeAttendeeStatuses;
- (bool)isFacebook;
- (int)maxAlarmsAllowed;
- (int)maxRecurrencesAllowed;
- (bool)mustAcknowledgeMasterEvent;
- (bool)occurrencesMustOccurOnSeparateDays;
- (bool)organizerCanSeeAttendeeStatuses;
- (bool)prohibitsDetachmentOnCommentChange;
- (bool)prohibitsMultipleDaysInMonthlyRecurrence;
- (bool)prohibitsMultipleMonthsInYearlyRecurrence;
- (bool)prohibitsPrivateEventsWithAttendees;
- (bool)prohibitsYearlyRecurrenceInterval;
- (bool)proposedStatusRequiredForResponse;
- (bool)recurrenceSeriesMustIncludeMoreThanFirstOccurrence;
- (bool)recurrencesShouldPinToMonthDays;
- (bool)requiresAttendeeSearchInSingleAccount;
- (bool)requiresMSFormattedUID;
- (bool)requiresOccurrencesConformToRecurrenceRule;
- (bool)requiresOutgoingInvitationsInDefaultCalendar;
- (bool)requiresSamePrivacyLevelAcrossRecurrenceSeries;
- (void)setAlarmTriggerIntervalConstrainedToRecurrenceInterval:(bool)arg1;
- (void)setAllowsCalendarAddDeleteModify:(bool)arg1;
- (void)setAllowsEvents:(bool)arg1;
- (void)setAllowsProposeNewTime:(bool)arg1;
- (void)setAllowsTasks:(bool)arg1;
- (void)setCanSetAvailability:(bool)arg1;
- (void)setDeclinedStatusChangeRequiresNoPendingStatus:(bool)arg1;
- (void)setDeliverySourceOrExternalIDRequiredForResponse:(bool)arg1;
- (void)setEventAvalabilityLimited:(bool)arg1;
- (void)setEventDurationConstrainedToRecurrenceInterval:(bool)arg1;
- (void)setFlags:(struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; unsigned int x39 : 1; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; unsigned int x43 : 1; unsigned int x44 : 1; unsigned int x45 : 1; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; unsigned int x51 : 1; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; unsigned int x55 : 1; })arg1;
- (void)setFutureStartDateLimitedToOccurrenceCacheBounds:(bool)arg1;
- (void)setInviteesCanSeeAttendeeStatuses:(bool)arg1;
- (void)setIsFacebook:(bool)arg1;
- (void)setMaxAlarmsAllowed:(int)arg1;
- (void)setMaxRecurrencesAllowed:(int)arg1;
- (void)setMustAcknowledgeMasterEvent:(bool)arg1;
- (void)setOccurrencesMustOccurOnSeparateDays:(bool)arg1;
- (void)setOrganizerCanSeeAttendeeStatuses:(bool)arg1;
- (void)setProhibitsDetachmentOnCommentChange:(bool)arg1;
- (void)setProhibitsMultipleDaysInMonthlyRecurrence:(bool)arg1;
- (void)setProhibitsMultipleMonthsInYearlyRecurrence:(bool)arg1;
- (void)setProhibitsPrivateEventsWithAttendees:(bool)arg1;
- (void)setProhibitsYearlyRecurrenceInterval:(bool)arg1;
- (void)setProposedStatusRequiredForResponse:(bool)arg1;
- (void)setRecurrenceSeriesMustIncludeMoreThanFirstOccurrence:(bool)arg1;
- (void)setRecurrencesShouldPinToMonthDays:(bool)arg1;
- (void)setRequiresAttendeeSearchInSingleAccount:(bool)arg1;
- (void)setRequiresMSFormattedUID:(bool)arg1;
- (void)setRequiresOccurrencesConformToRecurrenceRule:(bool)arg1;
- (void)setRequiresOutgoingInvitationsInDefaultCalendar:(bool)arg1;
- (void)setRequiresSamePrivacyLevelAcrossRecurrenceSeries:(bool)arg1;
- (void)setShouldCancelDeletedEvents:(bool)arg1;
- (void)setShouldDeclineDeletedInvitations:(bool)arg1;
- (void)setSnoozeAlarmRequiresDetach:(bool)arg1;
- (void)setStatusesAreAccurate:(bool)arg1;
- (void)setSupportsAlarmProximity:(bool)arg1;
- (void)setSupportsAlarmTriggerDates:(bool)arg1;
- (void)setSupportsAlarmTriggerIntervals:(bool)arg1;
- (void)setSupportsAlarmsTriggeringAfterStartDate:(bool)arg1;
- (void)setSupportsAllDayDueDates:(bool)arg1;
- (void)setSupportsAvailabilityRequests:(bool)arg1;
- (void)setSupportsEventForwarding:(bool)arg1;
- (void)setSupportsIgnoringEventsInAvailabilityRequests:(bool)arg1;
- (void)setSupportsIncomingInvitations:(bool)arg1;
- (void)setSupportsInvitationModifications:(bool)arg1;
- (void)setSupportsLocationDirectorySearches:(bool)arg1;
- (void)setSupportsOutgoingInvitations:(bool)arg1;
- (void)setSupportsPrivateEvents:(bool)arg1;
- (void)setSupportsRecurrencesOnDetachedEvents:(bool)arg1;
- (void)setSupportsReminderActions:(bool)arg1;
- (void)setSupportsReminderLocations:(bool)arg1;
- (void)setSupportsResponseComments:(bool)arg1;
- (void)setSupportsSharedCalendars:(bool)arg1;
- (void)setSupportsStructuredLocations:(bool)arg1;
- (void)setSupportsURLField:(bool)arg1;
- (bool)shouldCancelDeletedEvents;
- (bool)shouldDeclineDeletedInvitations;
- (bool)snoozeAlarmRequiresDetach;
- (bool)statusesAreAccurate;
- (bool)supportsAlarmProximity;
- (bool)supportsAlarmTriggerDates;
- (bool)supportsAlarmTriggerIntervals;
- (bool)supportsAlarmsTriggeringAfterStartDate;
- (bool)supportsAllDayDueDates;
- (bool)supportsAvailabilityRequests;
- (bool)supportsEventForwarding;
- (bool)supportsIgnoringEventsInAvailabilityRequests;
- (bool)supportsIncomingInvitations;
- (bool)supportsInvitationModifications;
- (bool)supportsLocationDirectorySearches;
- (bool)supportsOutgoingInvitations;
- (bool)supportsPrivateEvents;
- (bool)supportsRecurrencesOnDetachedEvents;
- (bool)supportsReminderActions;
- (bool)supportsReminderLocations;
- (bool)supportsResponseComments;
- (bool)supportsSharedCalendars;
- (bool)supportsStructuredLocations;
- (bool)supportsURLField;

@end
