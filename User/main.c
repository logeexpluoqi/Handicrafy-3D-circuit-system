/*
 * @Author: luoqi 
 * @Date: 2019-12-24 22:38:41 
 * @Last Modified by: luoqi
 * @Last Modified time: 2021-04-13 15:48:40
 */

#include "beep.h"
#include "delay.h"
#include "key.h"
#include "lcd12864.h"
#include "relay.h"
#include "stc12c5a60s2.h"
#include "task.h"
extern KEY_Value keyVal;
void main()
{
    P0 = 0x81;
    P2 = 0xff;

    sys_init();

    while(1)
    {
        task_process();
        if (keyVal != KEYNULL)
            bee(BEEP_ON);
        else
            bee(BEEP_OFF);
    }
}
