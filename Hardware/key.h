/*
 * @Author: luoqi 
 * @Date: 2019-12-24 22:40:23 
 * @Last Modified by: luoqi
 * @Last Modified time: 2021-04-13 15:42:00
 */
#ifndef _KEY_H
#define _KEY_H
#include "stc12c5a60s2.h"

sbit key_0 = P3^2;
sbit key_1 = P3^3;
sbit key_2 = P3^4;
sbit key_3 = P3^5;

enum KEY_VALUE
{
    KEYNULL = 0x00,
    KEY0    = 0x01,
    KEY1    = 0x02,
    KEY2    = 0x04,
    KEY3    = 0x08
} ;

typedef struct key_obj
{
    unsigned char key_val;
} KeyObj;

void key_scan(void);

#endif
