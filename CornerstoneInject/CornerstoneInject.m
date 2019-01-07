//
//  CornerstoneInject.m
//  CornerstoneInject
//
//  Created by huafeng chen on 2019/1/7.
//  Copyright © 2019 huafeng chen. All rights reserved.
//

#import "CornerstoneInject.h"
#import "JRSwizzle.h"
#import "ZStandardLicensingPolicy.h"

@implementation NSObject (CornerstoneInject)

+ (void)load {
    Class class = NSClassFromString(@"ZStandardLicensingPolicy");
    [class jr_swizzleMethod:@selector(applyWithUserInterface:) withMethod:@selector(hf_applyWithUserInterface:) error:NULL];
}

- (BOOL)hf_applyWithUserInterface:(BOOL)arg1 {
    return YES;
}

@end
