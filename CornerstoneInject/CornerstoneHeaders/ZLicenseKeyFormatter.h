//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSString;

@interface ZLicenseKeyFormatter : NSFormatter
{
    NSString *format;
}

@property(retain, nonatomic) NSString *format; // @synthesize format;
- (void).cxx_destruct;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (id)licenseKeyFromString:(id)arg1;
- (id)stripCharactersInSet:(id)arg1 fromString:(id)arg2;
- (id)stringFromLicenseKey:(id)arg1;
- (id)init;

@end

