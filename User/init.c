/*
 * @Author: luoqi 
 * @Date: 2019-12-24 22:38:38 
 * @Last Modified by: luoqi
 * @Last Modified time: 2020-10-15 01:13:30
 */
#include "init.h"
#include "beep.h"
#include "delay.h"
#include "displayer.h"
#include "ds18b20.h"
#include "lcd12864.h"
#include "relay.h"
#include "stc12c5a60s2.h"
#include "task.h"

void sys_init()
{
	P0M0 = 0xff;
	P0M1 = 0x00; 
	displayer_init();
	task_init();
	bee(BEEP_ON);
	delay_ms(500);
	bee(BEEP_OFF);
	jk_off_on(JK_OFF);
	// lcd_bk_off_on(LCD_OFF);
}
