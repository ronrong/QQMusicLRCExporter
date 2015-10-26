//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKPaymentTransactionObserver.h"
#import "SKProductsRequestDelegate.h"

@interface AppIAPPayTool : NSObject <SKProductsRequestDelegate, SKPaymentTransactionObserver>
{
    id <IAppIAPPayDelegate> delegate;
}

+ (id)resloveReceipt:(id)arg1;
+ (void)pay:(id)arg1 withOpenid:(id)arg2 withOpenKey:(id)arg3 withSessionId:(id)arg4 withSessionType:(id)arg5 withPf:(id)arg6 withPfkey:(id)arg7 withPayItem:(id)arg8 withProductId:(id)arg9 withIsDepositGameCoin:(unsigned char)arg10 withProductType:(int)arg11 withZoneId:(id)arg12 withVarItem:(id)arg13;
+ (void)setAppIAPTools:(id)arg1;
+ (id)getIntanceAppIAPTools;
@property(nonatomic) id <IAppIAPPayDelegate> Delegate; // @synthesize Delegate=delegate;
- (id)getTransactionReceipt:(id)arg1;
- (void)dealloc;
- (void)restoreCompletedTransactions;
- (void)restoreCompletedTransactionsWithApplicationUsername:(id)arg1;
- (void)paymentQueue:(id)arg1 removedTransactions:(id)arg2;
- (void)paymentQueue:(id)arg1 restoreCompletedTransactionsFailedWithError:(id)arg2;
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)arg1;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)payWithProduct:(id)arg1;
- (void)requestDidFinish:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)requestProductData:(id)arg1;
- (BOOL)judgeCanPay;

@end

