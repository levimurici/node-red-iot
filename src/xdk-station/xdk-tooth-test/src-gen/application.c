/**
 * Generated by Eclipse Mita 0.1.0.
 * @date 2021-07-15 13:38:29
 */


#include <stdio.h>
#include <stdbool.h>
#include <BCDS_Basics.h>
#include <BCDS_Retcode.h>
#include "MitaExceptions.h"
#include "application.h"

#ifndef BCDS_MODULE_ID
#define BCDS_MODULE_ID 0xCAFE
#endif


Retcode_T initGlobalVariables_application() {
	Retcode_T exception = RETCODE_OK;
	
	return exception;
}

Retcode_T HandleEveryButton_onePressed1(void* userParameter1, uint32_t userParameter2)
{
	
	BCDS_UNUSED(userParameter1);
	BCDS_UNUSED(userParameter2);

	Retcode_T exception = NO_EXCEPTION;
	
	
	printf("%s", "Hello World\n");


	return NO_EXCEPTION;
}


