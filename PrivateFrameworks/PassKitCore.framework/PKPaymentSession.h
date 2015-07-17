/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentSession : NSObject {
    NFSession * _internalSession;
    NSObject<OS_dispatch_queue> * _internalSessionSerialQueue;
}

@property (nonatomic, readonly) unsigned int lifecycleState;

+ (id)startContactlessInterfaceSessionWithCompletion:(id /* block */)arg1;
+ (id)startInAppSessionWithCompletion:(id /* block */)arg1;

- (void)dealloc;
- (id)initWithInternalSession:(id)arg1;
- (void)invalidateSession;
- (void)invalidateSessionWithCompletion:(id /* block */)arg1;
- (unsigned int)lifecycleState;
- (void)performBlockAsyncOnInternalSession:(id /* block */)arg1;
- (void)performBlockSyncOnInternalSession:(id /* block */)arg1;

@end