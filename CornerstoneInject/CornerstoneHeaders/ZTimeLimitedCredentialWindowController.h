//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSImage, NSProgressIndicator, NSString, NSTextField, NSURL, ZDispatchTimer;
@protocol ZTimeLimitedCredential;

@interface ZTimeLimitedCredentialWindowController : NSWindowController
{
    NSTextField *titleField;
    NSTextField *timeRemainingField;
    NSTextField *purchaseField;
    NSButton *closeButton;
    NSProgressIndicator *progressIndicator;
    ZDispatchTimer *roadblockTimer;
    NSImage *productIcon;
    NSURL *productPageURL;
    id <ZTimeLimitedCredential> credential;
    NSString *title;
    NSString *description;
    double roadblockDuration;
    double remainingRoadblockDuration;
}

+ (id)controllerForLicenseDescriptor:(id)arg1;
+ (id)controllerForTrialPeriod:(id)arg1;
@property(nonatomic) double remainingRoadblockDuration; // @synthesize remainingRoadblockDuration;
@property(nonatomic) double roadblockDuration; // @synthesize roadblockDuration;
@property(retain, nonatomic) NSString *description; // @synthesize description;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) id <ZTimeLimitedCredential> credential; // @synthesize credential;
@property(retain, nonatomic) NSURL *productPageURL; // @synthesize productPageURL;
@property(retain, nonatomic) NSImage *productIcon; // @synthesize productIcon;
- (void).cxx_destruct;
- (void)close:(id)arg1;
- (void)openProductPage:(id)arg1;
- (void)remainingRoadblockDurationChanged;
- (void)roadblockDurationChanged;
- (void)credentialElapsedChanged;
- (void)credentialDurationChanged;
- (void)tearDownRoadblock;
- (void)setupRoadblock;
- (void)scheduleRoadblockUpdate;
- (void)awakeFromNib;
- (void)setupProgressIndicator;
- (void)dealloc;
- (id)init;
- (id)initWithWindowNibName:(id)arg1;

@end

