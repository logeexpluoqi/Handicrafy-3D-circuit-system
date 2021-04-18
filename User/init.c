/*
 * @Author: luoqi 
 * @Date: 2019-12-24 22:38:38 
 * @Last Modified by: luoqi
 * @Last Modified time: 2021-04-13 16:07:27
 */
#include "init.h"
#include "../Hardware/beep.h"
#include "../System/delay.h"
#include "../System/displayer.h"
#include "../Hardware/ds18b20.h"
#include "../Hardware/relay.h"
#include "../Firmware/stc12c5a60s2.h"
#include "../System/task.h"

void sys_init()
{
	P0M0 = 0xff;
	P0M1 = 0x00; 
	P0 = 0x81;
    P2 = 0xff;
	displayer_init();
	task_init();
	bee(BEEP_ON);
	delay_ms(500);
	bee(BEEP_OFF);
	jk_off_on(OFF);
	displayer_open();
}
