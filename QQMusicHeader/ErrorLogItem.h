//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ErrorLogItem : NSObject
{
    NSString *_date;
    int _thread;
    NSString *_file;
    int _line;
    NSString *_func;
    int _uin;
    NSString *_msg;
}

@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) int uin; // @synthesize uin=_uin;
@property(retain, nonatomic) NSString *func; // @synthesize func=_func;
@property(nonatomic) int line; // @synthesize line=_line;
@property(retain, nonatomic) NSString *file; // @synthesize file=_file;
@property(nonatomic) int thread; // @synthesize thread=_thread;
@property(retain, nonatomic) NSString *date; // @synthesize date=_date;
- (void)generateDate;
- (id)outputString;
- (void)outputConsole;
- (void)dealloc;
- (id)init;

@end

