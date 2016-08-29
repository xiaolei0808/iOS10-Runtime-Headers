/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MailboxPrediction.framework/MailboxPrediction
 */

@interface MPRecommender : NSObject <MPRecommending, NSSecureCoding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)featureSetWithSubject;
+ (id)featureSetWithoutSubject;
+ (id)recommenderWithModelPath:(id)arg1;
+ (bool)supportsSecureCoding;

- (bool)addMessages:(id)arg1;
- (bool)clear;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithModelPath:(id)arg1;
- (id)recommendationsForMessage:(id)arg1 error:(id*)arg2;
- (bool)removeMessage:(id)arg1;
- (bool)synchronize;
- (bool)train;

@end