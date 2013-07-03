/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSString, NSMutableDictionary, NSMutableString;

@interface RTF_CMDictArchiveManager : RTF_CMArchiveManager  {
    NSMutableString *mCssString;
    NSMutableDictionary *mStyleCache;
    NSMutableDictionary *mResources;
    NSString *mPrefix;
    NSString *mResourceUrlProtocol;
    NSMutableString *mMainHtml;
    NSString *mName;
    boolmIsFrameset;
}


- (id)cssStylesheetString;
- (void)addCssStyle:(id)arg1 withName:(id)arg2;
- (id)resourceUrlProtocol;
- (id)copyDictionaryWithSizeInfos:(BOOL)arg1;
- (void)setIsFrameset;
- (id)initWithName:(id)arg1 resourcePathPrefix:(id)arg2;
- (id)addCssStyle:(id)arg1;
- (int)resourceCount;
- (void)pushCssToPath:(id)arg1;
- (void)pushText:(id)arg1 toPath:(id)arg2;
- (void)pushData:(id)arg1 toPath:(id)arg2;
- (id)newResourceWithName:(id)arg1;
- (id)name;
- (void)dealloc;

@end