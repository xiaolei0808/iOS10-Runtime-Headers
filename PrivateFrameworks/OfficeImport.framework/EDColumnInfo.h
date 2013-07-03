/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDReference, EDWorksheet, EDResources;

@interface EDColumnInfo : NSObject <NSCopying, EDKeyedObject> {
    EDResources *mResources;
    EDWorksheet *mWorksheet;
    int mWidth;
    boolmHidden;
    EDReference *mRange;
    unsigned int mStyleIndex;
    unsigned char mOutlineLevel;
}

+ (id)columnInfoWithResources:(id)arg1 worksheet:(id)arg2;

- (unsigned char)outlineLevel;
- (int)widthInXlUnits;
- (void)setOutlineLevel:(unsigned char)arg1;
- (void)setRangeWithFirstColumn:(int)arg1 lastColumn:(int)arg2;
- (void)setWidthInXlUnits:(int)arg1;
- (id)initWithResources:(id)arg1 worksheet:(id)arg2;
- (void)setStyleIndex:(unsigned int)arg1;
- (unsigned int)styleIndex;
- (void)setWidth:(double)arg1;
- (double)width;
- (void)setStyle:(id)arg1;
- (void)setHidden:(bool)arg1;
- (bool)isHidden;
- (id)style;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setRange:(id)arg1;
- (id)range;
- (int)key;

@end