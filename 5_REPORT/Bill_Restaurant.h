/**
 * @file bill_restaurant.h
 * @author Prince
 * @brief Bill restaurant structure definition
 * @version 0.1
 * @date 2021-11-20
 * 
 * @copyright Copyright (c) 2021
 * 
 * 
 */

#ifndef __BILL_RESTAURANT_H__
#define __BILL_RESTAURANT_H__


#include "math.h"

typedef struct entity_item{
char item[100];
	float price;
	float qty;
}items;

typedef struct entity_orders{
	char customer[100];
	char date[30];
	int numOfitems;
    items itm[50];
}orders;

#endif //#ifndef BILL_RESTAURANT