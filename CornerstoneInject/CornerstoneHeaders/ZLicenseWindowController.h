//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSData, NSImage, NSString, NSTextField, NSView, ZLicenseDescriptor, ZLicenseServer;

@interface ZLicenseWindowController : NSWindowController
{
    NSTextField *titleField;
    NSTextField *keyField;
    NSButton *defaultButton;
    NSButton *alternateButton;
    NSView *collapsingRegion;
    BOOL showsActionButton;
    BOOL includeAnonymousSystemInformation;
    BOOL registered;
    BOOL registering;
    BOOL suppressLayout;
    id delegate;
    ZLicenseServer *licenseServer;
    NSImage *iconImage;
    NSData *licenseKey;
    NSData *nodeKey;
    NSData *publicKey;
    ZLicenseDescriptor *licenseDescriptor;
    NSData *nodeSignature;
    NSString *title;
    NSString *description1;
    NSString *description2;
}

+ (id)controller;
@property(nonatomic) BOOL suppressLayout; // @synthesize suppressLayout;
@property(retain, nonatomic) NSString *description2; // @synthesize description2;
@property(retain, nonatomic) NSString *description1; // @synthesize description1;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic, getter=isRegistering) BOOL registering; // @synthesize registering;
@property(nonatomic, getter=isRegistered) BOOL registered; // @synthesize registered;
@property(retain, nonatomic) NSData *nodeSignature; // @synthesize nodeSignature;
@property(retain, nonatomic) ZLicenseDescriptor *licenseDescriptor; // @synthesize licenseDescriptor;
@property(retain, nonatomic) NSData *publicKey; // @synthesize publicKey;
@property(retain, nonatomic) NSData *nodeKey; // @synthesize nodeKey;
@property(retain, nonatomic) NSData *licenseKey; // @synthesize licenseKey;
@property(nonatomic) BOOL includeAnonymousSystemInformation; // @synthesize includeAnonymousSystemInformation;
@property(nonatomic) BOOL showsActionButton; // @synthesize showsActionButton;
@property(retain, nonatomic) NSImage *iconImage; // @synthesize iconImage;
@property(retain, nonatomic) ZLicenseServer *licenseServer; // @synthesize licenseServer;
@property(nonatomic) __weak id delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateSaveAsPackage:(id)arg1;
- (BOOL)validateSaveForNodeRegistration:(id)arg1;
- (void)saveAsPackage:(id)arg1;
- (void)saveForNodeRegistration:(id)arg1;
- (void)reset:(id)arg1;
- (void)registerLicense:(id)arg1;
- (void)cancel:(id)arg1;
- (void)close:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)registeredChangedFrom:(BOOL)arg1;
- (void)licenseDescriptorChanged;
- (void)licenseKeyChanged;
- (void)layout;
- (void)registerLicenseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)translateRegistrationError:(id)arg1;
- (void)showRegistrationSuccessAlertWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;
- (id)initWithWindowNibName:(id)arg1;

@end

