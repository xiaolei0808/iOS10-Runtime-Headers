/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface WLOTcpServer : NSObject {
    <WLOTcpServerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _listenQueue;
    int  _port;
    int  _sockd;
}

@property (nonatomic) <WLOTcpServerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *listenQueue;
@property (nonatomic) int port;
@property (nonatomic) int sockd;

- (void).cxx_destruct;
- (void)_listen:(int)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithPort:(int)arg1;
- (void)listen;
- (id)listenQueue;
- (int)port;
- (void)setDelegate:(id)arg1;
- (void)setListenQueue:(id)arg1;
- (void)setPort:(int)arg1;
- (void)setSockd:(int)arg1;
- (int)sockd;

@end