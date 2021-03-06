/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPFontCache : NSObject {
    NSMutableArray * _cachedAvailableMembers;
    NSString * _cachedMembersFamilyName;
    NSArray * _cachedRecentFontNames;
    NSMutableDictionary * _familyDisplayNames;
    NSArray * _familyFonts;
    NSArray * _familyNames;
    NSDictionary * _familyToFontLookup;
    TSULRUCache * _fontCache;
    NSMutableSet * _missingFonts;
}

@property (nonatomic, readonly) NSSet *missingFonts;

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)reset;
+ (id)sharedCache;

- (void)addMissingFonts:(id)arg1;
- (id)autorelease;
- (id)availableMembersOfFontFamily:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct __CTFont { }*)createFontWithName:(id)arg1 size:(double)arg2;
- (void)dealloc;
- (id)displayNameForFontFamily:(id)arg1;
- (id)fontFamilyToTSWPFontLookup;
- (id)fontNameForFailyName:(id)arg1;
- (id)init;
- (bool)isFontMissing:(id)arg1;
- (id)missingFonts;
- (void)p_FontWasDownloaded:(id)arg1;
- (id)p_excludedFamilyNames;
- (id)recentFontNames;
- (id)recentFonts;
- (bool)registerRecentFont:(id)arg1;
- (oneway void)release;
- (void)removeMissingFonts:(id)arg1;
- (id)retain;
- (unsigned long long)retainCount;
- (id)sortedFontFamilies;
- (id)sortedFontFamilyEntriesForStylesheet:(id)arg1;

@end
