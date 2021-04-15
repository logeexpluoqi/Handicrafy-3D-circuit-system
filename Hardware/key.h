/*
 * @Author: luoqi 
 * @Date: 2019-12-24 22:40:23 
 * @Last Modified by: luoqi
 * @Last Modified time: 2021-04-13 15:42:00
 */
#ifndef _KEY_H
#define _KEY_H

enum KEY_VALUE
{
    KEYNULL = 0x00,
    KEY0    = 0x01,
    KEY1    = 0x02,
    KEY2    = 0x04,
    KEY3    = 0x08
} ;

void key_scan(void);
unsigned char key_get_state(void);

#endif
