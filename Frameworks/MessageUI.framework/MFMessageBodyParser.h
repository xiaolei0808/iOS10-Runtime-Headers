/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSError, NSMutableArray;

@interface MFMessageBodyParser : MFMessageBodyParserObject  {
    NSMutableArray *_subparsers;
    NSMutableArray *_elementPool;
    NSMutableArray *_paragraphNodes;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _foundMessageBodyElementBlock;

    NSError *_parserError;
    struct __CFArray { } *_nodesStackCache;
    struct __CFDictionary { } *_nodesLevelCache;
    struct __CFDictionary { } *_nodesQuoteLevelCache;
    unsigned int _options;
}

@property unsigned int options;

+ (BOOL)isLinebreakImpliedAfterTagName:(id)arg1;
+ (BOOL)isLinebreakImpliedBeforeTagName:(id)arg1;

- (unsigned int)quoteLevelForBodyNode:(id)arg1;
- (void)didFindError:(id)arg1;
- (void)didFinishParsing;
- (void)willBeginParsing;
- (void)enqueueParagraphNode:(id)arg1 withTagName:(id)arg2;
- (BOOL)shouldIgnoreTagWithTagName:(id)arg1;
- (BOOL)isLandmarkTagName:(id)arg1;
- (void)removeSubparser:(id)arg1;
- (void)setFoundMessageBodyElementBlock:(id)arg1;
- (id)newStringAccumulatorWithOptions:(int)arg1 lengthLimit:(unsigned int)arg2;
- (void)getLevel:(int*)arg1 quoteLevel:(int*)arg2 forBodyNode:(id)arg3;
- (void)didFindBodyElement:(id)arg1;
- (id)getAvailableMessageBodyElement;
- (void)flushParagraphNodes;
- (Class)messageBodyElementClass;
- (int)messageBodyStringAccumulatorDefaultOptions;
- (Class)messageBodyStringAccumulatorClass;
- (BOOL)shouldProceedParsing;
- (void)copyBlocks;
- (void)addSubparser:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setOptions:(unsigned int)arg1;
- (id)parserError;
- (BOOL)parse;
- (unsigned int)options;

@end