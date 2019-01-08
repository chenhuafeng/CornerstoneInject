//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LicensingKit/NSObject-Protocol.h>

@class NSString, ZLicenseCredential, ZLicenseServer;
@protocol ZUnregisterLicenseViewInterface;

@protocol ZUnregisterLicensePresenterInterface <NSObject>
@property(retain, nonatomic) id <ZUnregisterLicenseViewInterface> view;
@property(retain, nonatomic) ZLicenseCredential *licenseCredential;
@property(retain, nonatomic) ZLicenseServer *licenseServer;
- (void)unregisterLicenseWithEmail:(NSString *)arg1;
- (id)initWithLicenseServer:(ZLicenseServer *)arg1 credentials:(ZLicenseCredential *)arg2;
@end
