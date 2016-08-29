/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKTextureTXR : NSObject {
    unsigned int  _GLTextureName;
    unsigned int  _arrayLength;
    unsigned int  _depth;
    unsigned int  _format;
    bool  _hasAlpha;
    unsigned int  _height;
    unsigned int  _internalFormat;
    NSString * _label;
    unsigned int  _loadTarget;
    unsigned int  _mipmapLevelCount;
    unsigned int  _target;
    TXRTexture * _texture;
    unsigned int  _type;
    unsigned int  _width;
}

@property (nonatomic) unsigned int GLTextureName;
@property (nonatomic) unsigned int arrayLength;
@property (nonatomic) unsigned int depth;
@property (nonatomic) unsigned int format;
@property (nonatomic) bool hasAlpha;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int internalFormat;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) unsigned int mipmapLevelCount;
@property (nonatomic) unsigned int target;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int width;

- (unsigned int)GLTextureName;
- (unsigned int)arrayLength;
- (void)dealloc;
- (unsigned int)depth;
- (unsigned int)format;
- (bool)hasAlpha;
- (unsigned int)height;
- (id)initWithTexture:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (unsigned int)internalFormat;
- (id)label;
- (unsigned int)mipmapLevelCount;
- (void)setArrayLength:(unsigned int)arg1;
- (void)setDepth:(unsigned int)arg1;
- (void)setFormat:(unsigned int)arg1;
- (void)setGLTextureName:(unsigned int)arg1;
- (void)setHasAlpha:(bool)arg1;
- (void)setHeight:(unsigned int)arg1;
- (void)setInternalFormat:(unsigned int)arg1;
- (void)setLabel:(id)arg1;
- (void)setMipmapLevelCount:(unsigned int)arg1;
- (void)setTarget:(unsigned int)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setWidth:(unsigned int)arg1;
- (unsigned int)target;
- (unsigned int)type;
- (bool)uploadToGLTexture:(unsigned int)arg1 error:(id*)arg2;
- (unsigned int)width;

@end