/*
 * @Author: luoqi 
 * @Date: 2019-12-24 22:40:32 
 * @Last Modified by:   luoqi 
 * @Last Modified time: 2019-12-24 22:40:32 
 */
#include "key.h"
#include "stc12c5a60s2.h"

KeyObj key_obj;

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
            key_obj.key_val |= KEY0;
        else if (key_1 == 0)
            key_obj.key_val |= KEY1;
        else if (key_2 == 0)
            key_obj.key_val |= KEY2;
        else if (key_3 == 0)
            key_obj.key_val |= KEY3;
        else
            key_obj.key_val = KEYNULL;
        scanState = 0;
    }
    else
        key_obj.key_val = KEYNULL;
}
