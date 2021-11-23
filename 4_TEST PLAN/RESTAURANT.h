/** 
* @file RESTAURANT.h
* Billing Management for Restaurant
*
*/
#ifndef __RESTAURANT.h
#define __RESTAURANT.h

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
*  functions to generate bill header
* @param[in] operand1 
* @param[in] operand2 
* @return date invoice to items Qty total
*/
void generateBillHeader(char name[50],char date[30]);
/**
*  functions to generate bill body
* @param[in] operand1 
* @param[in] operand2 
* @return qty*price
*/
void generateBillBody(char item[30],int qty,float price);

/**
*  functions to generate bill footer
* @param[in] operand1 
* @param[in] operand2 
* @return Grand Total
*/
void generateBillFooter(float total);


#endif  /* #define __RESTAURANT.h*/