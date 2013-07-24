/*
 * SQLiteDB_oo.h
 *
 *  Created on: July 19, 2013
 *      Author: Brett J Nelson
 */

#ifndef SQLITEDB_OO_H_
#define SQLITEDB_OO_H_

typedef void *db_ptr;

#include "../../../ooch/lib/ooch/Object_oo.h"  // Parent class */

typedef struct ClassSQLiteDB
{
#include "../../../ooch/lib/ooch/inc/Object_oocv.h"  // Parent class */
#include "src/SQLiteDB_oocv.h"

} ClassSQLiteDB;

typedef struct InstanceSQLiteDB
{

#include "../../../ooch/lib/ooch/inc/Object_ooiv.h"  // Parent class */
#include "src/SQLiteDB_ooiv.h"

} InstanceSQLiteDB;

typedef struct InstanceMethodsSQLiteDB
{

#include "../../../ooch/lib/ooch/inc/Object_ooimp.h"  // Parent class */
#include "src/SQLiteDB_ooimp.h"

} InstanceMethodsSQLiteDB;

typedef struct ClassMethodsSQLiteDB
{

#include "../../../ooch/lib/ooch/inc/Object_oocmp.h"  // Parent class */
#include "src/SQLiteDB_oocmp.h"

} ClassMethodsSQLiteDB;

void ClassSQLiteDB_Initialize();
InstanceSQLiteDB *SQLiteDB();           // allocates only
InstanceSQLiteDB *ClassSQLiteDB_New();  // allocates and initializes

#endif /* SQLITEDB_OO_H_ */
