/*
 * @Author: luoqi 
 * @Date: 2019-12-24 22:38:20 
 * @Last Modified by: luoqi
 * @Last Modified time: 2021-04-13 15:45:22
 */
#ifndef _LCD12864_H
#define _LCD12864_H

#include "stc12c5a60s2.h"
#include "common.h"

sbit lcd_bk         = P2^0; // background light
sbit lcd_clk        = P0^5; // E, serial model clock
sbit lcd_sda_out    = P0^4; // R/W, serial model data
sbit lcd_sda_in     = P0^4; // read sda data
sbit lcd_cs         = P0^3; // RS, serial model chip select, "1" is active

#define LCD_CLEAR               0x01
#define LCD_HOME                0x02
#define LCD_DISPLAY_OFF         0x08 
#define LCD_DISPLAY_ON          0x0c
#define LCD_CURSOR_OFF          0x08
#define LCD_CURSOR_ON           0x0a
#define LCD_BLINK_OFF           0x08
#define LCD_BLINK_ON            0x09

typedef enum
{
    LCD_INST,
    LCD_DATA
} LcdWType;

void lcd_init(void);
void lcd_bk_off_on(State state);
void lcd_set_dot(unsigned char x, unsigned char y);

#endif
