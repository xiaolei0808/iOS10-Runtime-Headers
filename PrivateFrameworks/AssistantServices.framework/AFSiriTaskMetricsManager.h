/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSiriTaskMetricsManager : NSObject {
    CDSession * _coreDuetSession;
    NSObject<OS_dispatch_queue> * _duetQueue;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (BOOL)_parseCoreDuetAttributeValue:(id)arg1 aceId:(id*)arg2 duration:(double*)arg3;
- (void)deleteRegisteredIdentifiers;
- (id)init;
- (void)registerPunchoutIdentifier:(id)arg1;
- (void)retrieveMetricsFromPreviousPunchout:(id /* block */)arg1;

@end