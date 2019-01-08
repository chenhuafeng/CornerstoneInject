//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, NSURLSession;

@interface ZLicenseServer : NSObject
{
    NSURLSession *session;
    NSURL *baseURL;
}

+ (id)licenseServer;
+ (id)licenseServerWithSession:(id)arg1;
+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session;
- (void).cxx_destruct;
- (id)unregisterLicense:(id)arg1 email:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)checkIfSubscriptionIsValid:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)saveOrder:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)findOrdersMatchingPredicate:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)orderForLicenseSerialNumber:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)registerLicense:(id)arg1 withNodeKey:(id)arg2 productInformation:(id)arg3 systemInformation:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)findLicensesMatchingPredicate:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)saveLicense:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)issueLicense:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)removeProductForIdentifier:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)saveProduct:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)addProduct:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)productForIdentifier:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)productsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)invalidResponseError;
- (id)errorFromFault:(id)arg1;
- (id)errorFromResponse:(id)arg1;
- (id)URLForEndpoint:(id)arg1;
- (id)initWithSession:(id)arg1;

@end
