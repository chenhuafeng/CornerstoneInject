//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <LicensingKit/NSCopying-Protocol.h>

@class NSMutableDictionary;

@interface ZTransactedObject : NSObject <NSCopying>
{
    NSMutableDictionary *attributes;
    NSMutableDictionary *uncommittedAttributes;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isModified;
- (BOOL)isModifiedAttribute:(id)arg1;
- (void)commit;
- (void)commitAttribute:(id)arg1;
- (void)revert;
- (void)revertAttribute:(id)arg1;
- (void)setValue:(id)arg1 forAttribute:(id)arg2;
- (id)valueForAttribute:(id)arg1;
- (void)setAttributes:(id)arg1;
- (id)attributes;
- (id)initWithAttributes:(id)arg1 uncommittedAttributes:(id)arg2;
- (id)init;

@end
