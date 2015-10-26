//
//  SQLHelper.h
//  QQMusicHelper
//
//  Created by Zhang Naville on 15/3/23.
//
//
#import <sqlite3.h>
#import <Foundation/Foundation.h>
@interface SQLHelper : NSObject

+ (NSArray *)querySQL:(NSString *)SQLPath TableName:(NSString *)tableName ColumnNames:(NSArray *)colunmNames Error:(NSError **)error;

@end

