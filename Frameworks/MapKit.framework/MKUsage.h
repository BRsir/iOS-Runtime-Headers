/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSMutableDictionary;



@interface MKUsage : NSObject 
{
    NSMutableDictionary *_requests;
}

+ (id)sharedUsage;

- (void)logRequest:(id)arg1 count:(NSUInteger)arg2;
- (void)submitUsageNow;
- (id)init;
- (void)dealloc;

@end