/*
 * @Author: luoqi 
 * @Date: 2019-12-24 22:38:27 
 * @Last Modified by: luoqi
 * @Last Modified time: 2021-04-13 15:45:41
 */
#include "beep.h"
#include "../Firmware/stc12c5a60s2.h"

sbit beep = P0^0;
void bee(BeepState state)
{
    if (state)
        beep = 0;
    else
        beep = 1;
}
