//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LicensingKit/ZTransactedObject.h>

@class NSData, NSDate, NSString, ZLicenseDescriptor, ZVersion;

@interface ZLicense : ZTransactedObject
{
}

+ (id)keyPathsForValuesAffectingValueForDescriptor;
@property(readonly, nonatomic) __weak ZLicenseDescriptor *descriptor;
@property(retain, nonatomic) NSString *comments;
@property(nonatomic) unsigned long long upgradeSerialNumber;
@property(nonatomic) unsigned long long registrationThreshold;
@property(nonatomic) unsigned long long users;
@property(retain, nonatomic) NSDate *blacklistingDate;
@property(nonatomic, getter=isBlacklisted) BOOL blacklisted;
@property(retain, nonatomic) NSDate *expiryDate;
@property(retain, nonatomic) NSData *key;
@property(retain, nonatomic) NSString *emailAddress;
@property(retain, nonatomic) ZVersion *version;
@property(nonatomic) unsigned long long flags;
@property(retain, nonatomic) NSString *type;
@property(retain, nonatomic) NSString *productCode;
@property(retain, nonatomic) NSDate *lastModificationDate;
@property(retain, nonatomic) NSDate *creationDate;
@property(nonatomic) unsigned long long productIdentifier;
@property(nonatomic) unsigned long long serialNumber;
- (id)init;
- (id)XMLRPCStructureWithOptions:(id)arg1;
- (id)initWithXMLRPCStructure:(id)arg1;

@end

