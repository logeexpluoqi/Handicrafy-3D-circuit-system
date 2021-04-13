/*
 * @Author: luoqi 
 * @Date: 2019-12-24 22:38:24 
 * @Last Modified by: luoqi
 * @Last Modified time: 2021-04-13 15:43:37
 */
#include "lcd12864.h"
#include "delay.h"

static void lcd_write_byte(unsigned char wdata);
static void lcd_write_data(unsigned char cmd, unsigned char wdata);
static unsigned char lcd_read_byte();

void lcd_init()
{

}

void lcd_bk_off_on(State state)
{
    lcd_bk = state;
}

void lcd_set_dot(unsigned char x, unsigned char y)
{

}

void lcd_write_byte(unsigned char wdata)
{

}

void lcd_write_data(unsigned char cmd, unsigned char wdata)
{

}