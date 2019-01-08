//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSImage, NSString, NSTextField, NSURL, ZLicenseWindowController;

@interface ZTimeLimitedCredentialExpiryWindowController : NSWindowController
{
    NSTextField *titleField;
    NSTextField *purchaseTitleField;
    NSTextField *licenseTitleField;
    NSTextField *numberOneField;
    NSTextField *numberTwoField;
    ZLicenseWindowController *licenseWindowController;
    NSImage *productIcon;
    NSURL *productPageURL;
    NSString *title;
    NSString *description;
}

+ (id)controllerForLicenseDescriptor:(id)arg1;
+ (id)controllerForTrialPeriod:(id)arg1;
@property(retain, nonatomic) NSString *description; // @synthesize description;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSURL *productPageURL; // @synthesize productPageURL;
@property(retain, nonatomic) NSImage *productIcon; // @synthesize productIcon;
@property(retain, nonatomic) ZLicenseWindowController *licenseWindowController; // @synthesize licenseWindowController;
- (void).cxx_destruct;
- (void)close:(id)arg1;
- (void)showLicenseWindow:(id)arg1;
- (void)openProductPage:(id)arg1;
- (void)awakeFromNib;
- (id)init;
- (id)initWithWindowNibName:(id)arg1;

@end

