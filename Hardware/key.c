/*
 * @Author: luoqi 
 * @Date: 2019-12-24 22:40:32 
 * @Last Modified by:   luoqi 
 * @Last Modified time: 2019-12-24 22:40:32 
 */
#include "key.h"
#include "../Firmware/stc12c5a60s2.h"

static unsigned char key_state;

sbit key_0 = P3^2;
sbit key_1 = P3^3;
sbit key_2 = P3^4;
sbit key_3 = P3^5;

void key_scan()
{
    static unsigned char scanState = 0;

    if (key_0 == 0 | key_1 == 0 | key_2 == 0 | key_3 == 0)
    {
        scanState = 1;
    }
    if (scanState == 1)
    {
        if (key_0 == 0)
            key_state |= KEY0;
         else if (key_1 == 0)
            key_state |= KEY1;
        else if (key_2 == 0)
            key_state |= KEY2;
        else if (key_3 == 0)
            key_state |= KEY3;
        else
            key_state = KEYNULL;
        scanState = 0;
    }
    else
        key_state = KEYNULL;
}

unsigned char key_get_state()
{
    return key_state;
}
