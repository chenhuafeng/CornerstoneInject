//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <LicensingKit/NSCoding-Protocol.h>
#import <LicensingKit/NSCopying-Protocol.h>
#import <LicensingKit/ZTimeLimitedCredential-Protocol.h>

@class NSDate, NSString;

@interface ZTrialPeriod : NSObject <ZTimeLimitedCredential, NSCopying, NSCoding>
{
    BOOL _isTrialPeriodValid;
    unsigned long long duration;
    NSDate *timestamp;
    unsigned long long elapsed;
}

+ (id)trialPeriodOfDuration:(unsigned long long)arg1;
+ (id)trialPeriod;
+ (id)trialPeriodFromSerializedRepresentation:(id)arg1;
+ (void)setCurrentTrialPeriod:(id)arg1;
+ (id)currentTrialPeriod;
+ (id)fileURL;
+ (id)fileName;
+ (id)appIdentifier;
+ (id)encryptionPad;
@property(nonatomic) BOOL isTrialPeriodValid; // @synthesize isTrialPeriodValid=_isTrialPeriodValid;
@property(nonatomic) unsigned long long elapsed; // @synthesize elapsed;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp;
@property(nonatomic) unsigned long long duration; // @synthesize duration;
- (void).cxx_destruct;
- (BOOL)checkBackwardCompatibility;
- (BOOL)hasExpired;
- (unsigned long long)remaining;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)serializedRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

