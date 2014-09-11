// main.h
//
//****************************************************************************************************
// Author:
// 	Nipun Gunawardena
//
// Credits:
//
//
// Requirements:
//	Some sort of main.c file
//
// Description:
// 	Values used by everyone. Should be included in the *lib.h files
//
// Notes:
//
// Todo:
//	Make universal
//****************************************************************************************************


#ifndef MAIN_H_
#define MAIN_H_



// Defines -------------------------------------------------------------------------------------------
#define SCODE_BMP180_CALS 0x02
#define SCODE_BMP180_VALS 0x03



// Global --------------------------------------------------------------------------------------------
volatile uint8_t g_sensorCode;



#endif /* MAIN_H_ */
