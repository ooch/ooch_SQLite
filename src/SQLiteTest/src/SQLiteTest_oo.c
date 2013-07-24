#include "../../../../ooch/lib/ooch/ooc.h"

#include "../../../../ooch/config/project_settings.h"

#ifdef THIS_CLASS_NAME
#undef THIS_CLASS_NAME
#endif

#define THIS_CLASS_NAME "SQLiteTest"
#define INST             sqlite_test_instance_method_ptrs

#ifdef M
#undef M
#endif

// Turn off Method dispatch check
#ifdef  METHOD_DISPATCH_CHECK
#define SAVE_METHOD_DISPATCH_CHECK
#undef  METHOD_DISPATCH_CHECK
#endif

#define Y_TUPLE_SIZE(...) Y_TUPLE_SIZE_II((Y_TUPLE_SIZE_PREFIX_ ## __VA_ARGS__ ## _Y_TUPLE_SIZE_POSTFIX,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0))
#define Y_TUPLE_SIZE_II(__args) Y_TUPLE_SIZE_I __args

#define Y_TUPLE_SIZE_PREFIX__Y_TUPLE_SIZE_POSTFIX ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,0

#define Y_TUPLE_SIZE_I(__p0,__p1,__p2,__p3,__p4,__p5,__p6,__p7,__p8,__p9,__p10,__p11,__p12,__p13,__p14,__p15,__p16,__p17,__p18,__p19,__p20,__p21,__p22,__p23,__p24,__p25,__p26,__p27,__p28,__p29,__p30,__p31,__n,...) __n

#define PICK5(a1,a2,a3,a4,a5,...) a5
#define ZARGX(n,a,...) PICK5(__VA_ARGS__,a,a,a,n,)
//#define M(obj,method,...) ZARGX(obj.method(),obj.method(__VA_ARGS__),__VA_ARGS__)


#ifdef  METHOD_DISPATCH_CHECK
#define MN(obj,method,...) ( 0 == INST->method ? fprintf( stderr, "missing method pointer:%s for class:%s\n", #method, THIS_CLASS_NAME ) : (/*fprintf(stdout,"sqlite_db M called\n"),*/ (*INST->method)(obj) ) )
#define MA(obj,method,...) ( 0 == INST->method ? fprintf( stderr, "missing method pointer:%s for class:%s\n", #method, THIS_CLASS_NAME ) : (/*fprintf(stdout,"sqlite_db M called\n"),*/ (*INST->method)(obj,__VA_ARGS__) ) )
#define M(obj,...)  ZARGX( MN(obj,__VA_ARGS__) , MA(obj,__VA_ARGS__) , __VA_ARGS__ )
#else
#define MN(obj,method,...)     (*INST->method)(obj)
//#define MN(obj,method,...)     (fprintf(stdout,"sqlite_db M called\n"), (*INST->method)(obj))
#define MA(obj,method,...)     (*INST->method)(obj,__VA_ARGS__)
//#define MA(obj,method,...)   (fprintf(stdout,"sqlite_db M called\n"), (*INST->method)(obj,__VA_ARGS__))
#define M(obj,...)  ZARGX( MN(obj,__VA_ARGS__) , MA(obj,__VA_ARGS__) , __VA_ARGS__ )
#endif

#ifdef  SAVE_METHOD_DISPATCH_CHECK
#define METHOD_DISPATCH_CHECK
#undef  SAVE_METHOD_DISPATCH_CHECK
#endif

#include <stdlib.h>
#include <stdio.h>

#include "../../../../ooch/lib/ooch/types_oo.h"

#include "../SQLiteTest_oo.h"

#include "../../SQLiteDB/SQLiteDB_oo.h"

static ClassSQLiteTest            *sqlite_test_class_vars;
static InstanceMethodsSQLiteTest  *sqlite_test_instance_method_ptrs;
static ClassMethodsSQLiteTest     *sqlite_test_class_method_ptrs;

static BOOL class_is_uninitialized = TRUE;

InstanceSQLiteTest *SQLiteTest()
{
    InstanceSQLiteTest* newObj = calloc( sizeof(InstanceSQLiteTest), 1 );
    //InstanceSQLiteTest* newObj = NULL;
    //M(newObj,Initialize);  // initialize the newly allocated object
    return newObj;
}

InstanceSQLiteTest *SQLiteTestInstance_Initialize(InstanceSQLiteTest *self)
{
    if ( NULL == self )
    {
        fprintf( stderr, "UNABLE TO INITIALIZE NULL OBJECT");
        exit(EXIT_FAILURE);
    }

    return self;
}

void ClassSQLiteTest_AssignInstanceMethodPointers(InstanceMethodsSQLiteTest *instance_method_pointers)
{
    //instance_method_pointers->Quack      = &SQLiteTestInstance_Quack;
    //instance_method_pointers->Sing       = &SQLiteTestInstance_Sing;  // overriding parent class Bird->Sing method
    //instance_method_pointers->Initialize = &SQLiteTestInstance_Initialize;
}

int SQLiteTestClass_Run()
{
    fprintf(stdout, " HELLO WORLD CALLED IN RUN()!!!\n");
    return EXIT_SUCCESS;
}

void ClassSQLiteTest_AssignClassMethodPointers(ClassMethodsSQLiteTest *class_method_pointers)
{
    ClassExecutable_OverrideClassRun( &SQLiteTestClass_Run );
}

void ClassSQLiteTest_Initialize()
{
    if ( class_is_uninitialized )
    {
        ClassExecutable_Initialize();  // Initialize parent class

#ifdef VERBOSE_DEBUG
        fprintf( stdout, "Initializing SQLiteTest Class\n");
#endif
        sqlite_test_class_vars                    = calloc( sizeof(InstanceSQLiteTest), 1 );

        sqlite_test_instance_method_ptrs          = calloc( sizeof(InstanceMethodsSQLiteTest), 1 );
        //ClassBird_AssignInstanceMethodPointers( sqlite_test_instance_method_ptrs);
        ClassSQLiteTest_AssignInstanceMethodPointers( sqlite_test_instance_method_ptrs);

        sqlite_test_class_method_ptrs             = calloc( sizeof(ClassMethodsSQLiteTest), 1 );
        ClassSQLiteTest_AssignClassMethodPointers(sqlite_test_class_method_ptrs);
        class_is_uninitialized = FALSE;
    }
}

void initialize_main()
{
	InstanceSQLiteDB *db;

    ClassSQLiteTest_Initialize();

	db = ClassSQLiteDB_New();

	SQLiteDB_Open(db,"/tmp/test.sqlitedb");

}

#undef M


