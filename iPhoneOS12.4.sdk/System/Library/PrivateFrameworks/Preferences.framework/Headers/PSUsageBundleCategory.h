//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PSUsageBundleApp;

@interface PSUsageBundleCategory : NSObject
{
    PSUsageBundleApp *_usageBundleApp;
    NSString *_identifier;
    NSString *_name;
}

+ (id)categoryNamed:(id)arg1 withIdentifier:(id)arg2 forUsageBundleApp:(id)arg3;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak PSUsageBundleApp *usageBundleApp; // @synthesize usageBundleApp=_usageBundleApp;
- (id)description;

@end

