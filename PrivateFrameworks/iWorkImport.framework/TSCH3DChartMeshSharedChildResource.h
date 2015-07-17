/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartMeshSharedChildResource : NSObject <TSCHUnretainedParent> {
    struct DataBufferInfo { 
        int componentType; 
        unsigned int components; 
        unsigned int count; 
        unsigned int byteSize; 
        unsigned int componentByteSize; 
        unsigned int elementByteSize; 
    }  mBufferInfo;
    int  mCaching;
    BOOL  mChildRegenerated;
    TSCH3DChartMeshResources * mParent;
    unsigned long long  mResourceIdentifier;
}

@property (readonly) struct DataBufferInfo { int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } bufferInfo;
@property (nonatomic) int caching;
@property (nonatomic) BOOL childRegenerated;
@property (nonatomic, readonly) unsigned long long resourceIdentifier;

+ (id)resourceWithParent:(id)arg1;

- (id).cxx_construct;
- (struct DataBufferInfo { int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })bufferInfo;
- (int)caching;
- (BOOL)childRegenerated;
- (void)clearParent;
- (void)dealloc;
- (id)initWithParent:(id)arg1;
- (unsigned long long)resourceIdentifier;
- (void)setCaching:(int)arg1;
- (void)setChildRegenerated:(BOOL)arg1;

@end