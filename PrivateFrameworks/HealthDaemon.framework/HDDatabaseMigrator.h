/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDatabaseMigrator : NSObject {
    HDSQLiteDatabase * _database;
}

@property (nonatomic, readonly) HDSQLiteDatabase *database;

- (void).cxx_destruct;
- (id)database;
- (BOOL)executeSQL:(id)arg1 argument:(id)arg2 error:(id*)arg3;
- (BOOL)executeSQL:(id)arg1 error:(id*)arg2;
- (BOOL)executeSQLStatements:(id)arg1 error:(id*)arg2;
- (int)fatalStatusForVersion:(int)arg1 errorMessage:(id)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithDatabase:(id)arg1;
- (int)migrateProtectedDatabaseFromVersion:(int)arg1 healthDaemon:(id)arg2 error:(id*)arg3;
- (int)migrateUnprotectedDatabaseFromVersion:(int)arg1 error:(id*)arg2;
- (int)statusForUnhandledVersion:(int)arg1 error:(id*)arg2;

@end