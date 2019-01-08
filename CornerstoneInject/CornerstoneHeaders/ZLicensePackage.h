//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <LicensingKit/NSCoding-Protocol.h>
#import <LicensingKit/NSCopying-Protocol.h>

@class NSData, NSMutableDictionary;

@interface ZLicensePackage : NSObject <NSCoding, NSCopying>
{
    NSMutableDictionary *options;
    NSData *key;
}

+ (id)package;
+ (id)packageFromSerializedRepresentation:(id)arg1;
+ (id)packageWithName:(id)arg1;
@property(retain, nonatomic) NSData *key; // @synthesize key;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setValue:(id)arg1 forOptionWithName:(id)arg2;
- (id)valueForOptionWithName:(id)arg1;
- (void)setOptions:(id)arg1;
- (id)options;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)serializedRepresentation;
- (BOOL)writeToFile:(id)arg1 error:(id *)arg2;
@property(nonatomic) BOOL includeAnonymousSystemInformation;
@property(nonatomic) BOOL replaceExisting;

@end

