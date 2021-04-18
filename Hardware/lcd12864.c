/*
 * @Author: luoqi 
 * @Date: 2019-12-24 22:38:24 
 * @Last Modified by: luoqi
 * @Last Modified time: 2021-04-18 23:43:49
 */
#include "lcd12864.h"
#include "../System/delay.h"

static void lcd_write_byte(LcdWType type, unsigned char wdata);
static void lcd_write_data(unsigned char cmd, unsigned char wdata);
static unsigned char lcd_read_byte();

void lcd_init()
{
    lcd_bk_off_on(OFF);
    delay_ms(500);
    lcd_bk_off_on(ON);
    lcd_write_byte(LCD_INST, LCD_CLEAR);
    delay_ms(5);
    lcd_write_byte(LCD_INST, LCD_HOME);
    lcd_write_byte(LCD_INST, LCD_CURSOR_ON);
    lcd_write_byte(LCD_INST, LCD_BLINK_ON);
}

void lcd_bk_off_on(State state)
{
    lcd_bk = state;
}

void lcd_set_dot(unsigned char x, unsigned char y)
{

}

void lcd_write_byte(LcdWType type, unsigned char wdata)
{
    unsigned char i;

    lcd_cs = 1;

    for(i = 1; i <= 24; i++)
    {
        delay_us(1);
        lcd_clk = 0;

        if(i <= 5)
            lcd_sda_out = 1;
        if(i == 6)
            lcd_sda_out = 0;
        if(type == LCD_INST)
            lcd_sda_out = 0;
        else if(type == LCD_DATA)
            lcd_sda_out = 1;
        if(i == 8)
            lcd_sda_out = 0;
        if(i >= 9 && i <= 12)
        {
            lcd_sda_out = ((wdata & 0x80) == 0x80);
            wdata <<= 1;
        }
        if(i >= 13 && i <= 16)
            lcd_sda_out = 0;
        if(i >= 17 && i <= 20)
        {
            lcd_sda_out = ((wdata & 0x80) == 0x80);
            wdata <<= 1;
        }
        if(i >= 21 && i <= 24)
            lcd_sda_out = 0;

        lcd_clk = 1;
    }

    lcd_cs = 0;
    delay_us(100);
}

void lcd_write_data(unsigned char cmd, unsigned char wdata)
{

}