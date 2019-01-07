//
//  CornerstoneInject.m
//  CornerstoneInject
//
//  Created by huafeng chen on 2019/1/7.
//  Copyright © 2019 huafeng chen. All rights reserved.
//

#import "fishhook.h"
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

static int (*orig_sysctlbyname)(const char *, void *, size_t *, void *, size_t) = NULL;
int hf_sysctlbyname(const char *name, void *b, size_t *c, void *d, size_t e) {
    return 0;
}

__attribute__((constructor)) static void entry() {
    rebind_symbols((struct rebinding[1]){{"sysctlbyname", hf_sysctlbyname, (void *)&orig_sysctlbyname}},1);
}
