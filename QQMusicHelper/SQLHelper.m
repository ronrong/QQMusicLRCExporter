//
//  SQLHelper.m
//  QQMusicHelper
//
//  Created by Zhang Naville on 15/3/23.
//
//

#import "SQLHelper.h"

@implementation SQLHelper

+ (NSArray *)querySQL:(NSString *)SQLPath
            TableName:(NSString *)tableName
          ColumnNames:(NSArray *)colunmNames
                Error:(NSError **)error
{
    NSLog(@"Querying SQL");
    NSMutableArray * result = [NSMutableArray new];
    sqlite3 *database;
    sqlite3_open([SQLPath UTF8String], &database);
    sqlite3_stmt *statementsql;
    
    NSString * querySQL = @"SELECT ";
    NSInteger countOfQuery = colunmNames.count;
    for (NSInteger i = 0;  i < countOfQuery - 1; i++) {
        querySQL = [querySQL stringByAppendingFormat:@"%@, ",colunmNames[i]];
    }
    querySQL = [querySQL stringByAppendingFormat:@"%@ FROM %@;",colunmNames[countOfQuery - 1], tableName];
    
    if (sqlite3_prepare_v2(database, querySQL.UTF8String, -1, &statementsql, nil)== SQLITE_OK)
    {
        while (sqlite3_step(statementsql) == SQLITE_ROW) {
            NSMutableDictionary * dict = [NSMutableDictionary new];
            for (int i = 0; i < countOfQuery; i++) {
                const unsigned char * text = sqlite3_column_text(statementsql, i);
                if (text) {
                    NSString * content = [[NSString alloc] initWithCString:(const  char *)text encoding:NSUTF8StringEncoding];
                    [dict setValue:content forKey:[colunmNames objectAtIndex:i]];
                }else{
                    [dict setValue:@"" forKey:[colunmNames objectAtIndex:i]];
                }
            }
            [result addObject:dict];
        }
        sqlite3_finalize(statementsql);
    }
    else
    {
        int errorCode = sqlite3_errcode(database);
        *error = [[NSError alloc] initWithDomain:@"com.0xBBC.SQLHelper" code:errorCode userInfo:@{@"Error":[NSString stringWithFormat:@"%s",sqlite3_errmsg(database)]}];
    }
        NSLog(@"Querying SQL Finished");
    return result;
}

@end