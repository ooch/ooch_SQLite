/*
 * SQLiteTest_oo.h
 *
 *  Created on: July 21, 2013
 *      Author: Bertt J. Nelson
 */

#ifndef SQLITETEST_OO_H_
#define SQLITETEST_OO_H_

#include "../../../ooch/lib/ooch/Executable_oo.h"  // Parent class

typedef struct ClassSQLiteTest
{

#include "src/SQLiteTest_oocv.h"

} ClassSQLiteTest;

typedef struct InstanceSQLiteTest
{

#include "src/SQLiteTest_ooiv.h"

} InstanceSQLiteTest;

typedef struct InstanceMethodsSQLiteTest
{

#include "src/SQLiteTest_ooimp.h"

} InstanceMethodsSQLiteTest;

typedef struct ClassMethodsSQLiteTest
{

#include "../../../ooch/lib/ooch/inc/Executable_oocmp.h"
#include "src/SQLiteTest_oocmp.h"

} ClassMethodsSQLiteTest;

void ClassSQLiteTest_Initialize();


#endif /* SQLITETEST_OO_H_ */
