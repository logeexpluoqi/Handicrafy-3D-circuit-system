/*
 * @Author: luoqi 
 * @Date: 2019-12-24 22:38:20 
 * @Last Modified by: luoqi
 * @Last Modified time: 2020-03-14 21:32:03
 */
#ifndef _LCD12864_H
#define _LCD12864_H

#include "stc12c5a60s2.h"

sbit lcd_bk         = P2^0; // background light
sbit lcd_clk        = P0^5; // E, serial model clock
sbit lcd_sda_out    = P0^4; // R/W, serial model data
sbit lcd_sda_in     = P0^4; // read sda data
sbit lcd_cs         = P0^3; // RS, serial model chip select, "1" is active

#define LCD_WRITE_CMD       0xf8
#define LCD_WRITE_DATA      0xfa
#define LCD_READ_STATE      0xfc
#define LCD_READ_DATA       0xfe   

#define LCD_DISP_CLR             0x01
#define LCD_RETURN_HOME          0x02
#define LCD_ENTRY_MODE           0x04
#define LCD_DISP_CTRL            0x08
#define LCD_DISP_CURSOR          0x10
#define LCD_FUNCTION_SET         0x20
#define LCD_CGRAM_ADDR           0x40
#define LCD_DDRAM_ADDR           0x80

#define LCD_STANDBY_MODE         0x01
#define LCD_SCROLL_CGRAM_ADDR    0x02
#define LCD_REVERSE              0x04
#define LCD_EXTENDED_FUNCTION    0x20
#define LCD_SCROLL_ADDR          0x40
#define LCD_GDRAM_ADDR           0x80

typedef enum LCD_BK_OFF_ON
{
    LCD_ON  = 0,
    LCD_OFF = 1
} LcdBk;

void lcd_init(void);
void lcd_bk_off_on(LcdBk state);
void lcd_set_dot(unsigned char x, unsigned char y);
void lcd_set_graph(unsigned char graph[16][64]);

#endif
