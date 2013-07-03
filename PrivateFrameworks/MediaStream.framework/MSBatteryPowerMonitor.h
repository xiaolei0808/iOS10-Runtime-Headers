/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@interface MSBatteryPowerMonitor : NSObject  {
    BOOL _isExternalPowerConnected;
}

@property(readonly) BOOL isExternalPowerConnected;

+ (id)defaultMonitor;

- (BOOL)isExternalPowerConnected;
- (double)batteryPercentRemaining;

@end