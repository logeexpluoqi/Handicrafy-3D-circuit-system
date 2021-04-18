/*
 * @Author: luoqi 
 * @Date: 2019-12-24 22:38:41 
 * @Last Modified by: luoqi
 * @Last Modified time: 2021-04-13 16:20:07
 */

#include "init.h"
#include "key.h"
#include "beep.h"
#include "task.h"

void main()
{
    sys_init();

    while(1)
    {
        task_process();
        if (key_get_state() == 0x01)
            bee(BEEP_ON);
        else
            bee(BEEP_OFF);
    }
}
