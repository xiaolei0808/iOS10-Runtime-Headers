/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Twitter.framework/Twitter
 */

@interface TWRequest : NSObject {
    SLTwitterRequest * _request;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, readonly) NSDictionary *parameters;
@property (nonatomic, readonly) int requestMethod;

- (id)URL;
- (id)account;
- (void)addMultiPartData:(id)arg1 withName:(id)arg2 type:(id)arg3;
- (void)dealloc;
- (id)initWithURL:(id)arg1 parameters:(id)arg2 requestMethod:(int)arg3;
- (id)parameters;
- (void)performRequestWithHandler:(id /* block */)arg1;
- (int)requestMethod;
- (void)setAccount:(id)arg1;
- (id)signedURLRequest;

@end