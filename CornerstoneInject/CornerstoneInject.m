//
//  CornerstoneInject.m
//  CornerstoneInject
//
//  Created by huafeng chen on 2019/1/7.
//  Copyright © 2019 huafeng chen. All rights reserved.
//

#import "CornerstoneInject.h"
#import "JRSwizzle.h"
#import "ZSubscriptionLicensingPolicy.h"

@implementation NSObject (CornerstoneInject)

+ (void)load {
    Class class = NSClassFromString(@"ZSubscriptionLicensingPolicy");
    [class jr_swizzleMethod:@selector(apply) withMethod:@selector(hf_apply) error:NULL];
    [class jr_swizzleMethod:@selector(licensingKey) withMethod:@selector(hf_licensingKey) error:NULL];
}

- (BOOL)hf_apply {
    return YES;
}

- (NSData *)hf_licensingKey {
    return [NSData data];
}

@end
