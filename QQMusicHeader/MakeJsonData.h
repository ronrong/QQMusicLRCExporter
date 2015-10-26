//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KKMediaRootViewController, NSMutableArray, NSMutableData, NSString, QLURLRequest;

@interface MakeJsonData : NSObject
{
    BOOL ipLimit;
    NSMutableData *jsonData;
    NSString *postEventName;
    NSMutableArray *_objectDatas;
    int reRequestDataNums;
    NSString *urlString;
    int interfaceType;
    int videoDataType;
    int dltype;
    QLURLRequest *urlRequest;
    int retryNums;
    NSString *netRequestDataErrorEventName;
    NSString *networkRequestFailedEventName;
    KKMediaRootViewController *_mainCtrl;
    double _dateStartRequest;
}

@property(nonatomic) KKMediaRootViewController *mainCtrl; // @synthesize mainCtrl=_mainCtrl;
@property(copy, nonatomic) NSString *networkRequestFailedEventName; // @synthesize networkRequestFailedEventName;
@property(copy, nonatomic) NSString *netRequestDataErrorEventName; // @synthesize netRequestDataErrorEventName;
@property(nonatomic) int retryNums; // @synthesize retryNums;
@property(retain, nonatomic) QLURLRequest *urlRequest; // @synthesize urlRequest;
@property(nonatomic) int dltype; // @synthesize dltype;
@property double dateStartRequest; // @synthesize dateStartRequest=_dateStartRequest;
@property(nonatomic) int videoDataType; // @synthesize videoDataType;
@property(nonatomic) BOOL ipLimit; // @synthesize ipLimit;
@property(nonatomic) int interfaceType; // @synthesize interfaceType;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString;
@property(nonatomic) int reRequestDataNums; // @synthesize reRequestDataNums;
@property(retain, nonatomic) NSMutableArray *objectDatas; // @synthesize objectDatas=_objectDatas;
@property(copy, nonatomic) NSString *postEventName; // @synthesize postEventName;
@property(retain, nonatomic) NSMutableData *jsonData; // @synthesize jsonData;
- (void)request:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)requestDidFinishLoad:(id)arg1;
- (void)createDataByRequestURL:(id)arg1 apiType:(id)arg2;
- (void)cancelTheRequest;
- (void)requestTheOrginUrlAgain;
- (void)resetDataArrays;
- (void)createDataByRequestURL:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)fillData:(id)arg1 withUrlConnection:(id)arg2;
- (void)handleErrorDataWithEm:(int)arg1 withDataUserInfo:(id)arg2 withEmInfo:(id)arg3;
- (id)getErrorTextFromCode:(int)arg1;
- (void)makeErrorJsonContent:(id)arg1 withDataUserInfo:(id)arg2;
- (id)interfaceBaseCode;
- (int)changeNScodeToLocalCode:(int)arg1;
- (void)enscapeData:(id)arg1 withDataUserInfo:(id)arg2;
- (void)handleJsonParsedStatus:(id)arg1;
- (id)initWithEventName:(id)arg1;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)dealloc;

@end
