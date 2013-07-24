/*
 * SQLiteTable_oo.h
 *
 *  Created on: July 19, 2013
 *      Author: Brett J Nelson
 */

#ifndef SQLITETABLE_OO_H_
#define SQLITETABLE_OO_H_

#include "../../lib/ooch/Executable_oo.h"  // Parent class

typedef struct ClassSQLiteTable
{

#include "src/SQLiteTable_oocv.h"

} ClassSQLiteTable;

typedef struct InstanceSQLiteTable
{

#include "src/SQLiteTable_ooiv.h"

} InstanceSQLiteTable;

typedef struct InstanceMethodsSQLiteTable
{

#include "src/SQLiteTable_ooimp.h"

} InstanceMethodsSQLiteTable;

typedef struct ClassMethodsSQLiteTable
{

#include "src/SQLiteTable_oocmp.h"

} ClassMethodsSQLiteTable;

void ClassSQLiteTable_Initialize();

#endif /* SQLITETABLE_OO_H_ */
