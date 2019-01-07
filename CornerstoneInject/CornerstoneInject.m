//
//  CornerstoneInject.m
//  CornerstoneInject
//
//  Created by huafeng chen on 2019/1/7.
//  Copyright © 2019 huafeng chen. All rights reserved.
//

#import <objc/objc-class.h>
#import "JRSwizzle.h"
#import "ZSubscriptionLicensingPolicy.h"

@interface NSObject (CornerstoneInject)

@end

@implementation NSObject (CornerstoneInject)

+ (void)load {
    Class class = NSClassFromString(@"ZSubscriptionLicensingPolicy");
    [class jr_swizzleMethod:@selector(apply) withMethod:@selector(hf_apply) error:NULL];
    [class jr_swizzleMethod:@selector(licensingKey) withMethod:@selector(hf_licensingKey) error:NULL];
}

- (BOOL)hf_apply {
    [self hf_apply];
    return YES;
}

- (NSData *)hf_licensingKey {
    return [self hf_licensingKey] ?: [NSData data];
}

@end
