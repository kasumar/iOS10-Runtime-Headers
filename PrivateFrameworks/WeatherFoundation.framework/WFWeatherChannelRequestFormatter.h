/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFWeatherChannelRequestFormatter : NSObject <WFAirQualityRequestFormatter, WFForecastRequestFormatter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)airQualityRequestForLocation:(id)arg1 locale:(id)arg2 error:(id*)arg3;
+ (id)forecastRequestForLocation:(id)arg1 date:(id)arg2;

@end
