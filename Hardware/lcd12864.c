/*
 * @Author: luoqi 
 * @Date: 2019-12-24 22:38:24 
 * @Last Modified by: luoqi
 * @Last Modified time: 2020-03-14 22:47:34
 */
#include "lcd12864.h"
#include "delay.h"

static void lcd_write_byte(unsigned char wdata);
static void lcd_write_data(unsigned char cmd, unsigned char wdata);
static unsigned char lcd_read_byte();

void lcd_init()
{

}

void lcd_bk_off_on(LcdBk state)
{
    lcd_bk = state;
}

void lcd_set_dot(unsigned char x, unsigned char y)
{

}

void lcd_set_graph(unsigned char graph[16][64])
{

}

void lcd_write_byte(unsigned char wdata)
{

}

void lcd_write_data(unsigned char cmd, unsigned char wdata)
{

}