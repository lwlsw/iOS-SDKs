/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:29:05 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PSSpecifierObserver <NSObject>
@property (nonatomic,readonly) long long observerType; 
@required
-(void)dataSource:(id)arg1 performUpdates:(id)arg2;
-(void)invalidateSpecifiersForDataSource:(id)arg1;
-(long long)observerType;

@end

