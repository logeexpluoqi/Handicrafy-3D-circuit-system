/*
 * @Author: luoqi 
 * @Date: 2020-03-14 21:23:59 
 * @Last Modified by: luoqi
 * @Last Modified time: 2021-04-13 16:06:25
 */
#include "graphic.h"
#include "../Hardware/lcd12864.h"
#include "fonts.h"

void graphic_init()
{
    
}

void graphic_clear()
{

}

void graphic_close()
{
    lcd_bk_off_on(OFF);
}

void graphic_open()
{
    lcd_bk_off_on(ON);
}

void graphic_draw_point(uint8 x, uint8 y)
{
    lcd_set_dot(x, y);
}

void graphic_draw_line(uint8 x1, uint8 y1, uint8 x2, uint8 y2)
{
}

void graphic_draw_rectangle(uint8 x1, uint8 y1, uint8 x2, uint8 y2)
{
}

void graphic_draw_triangle(uint8 x1, uint8 y1, uint8 x2, uint8 y2, uint8 x3, uint8 y3)
{
}

void graphic_draw_circle(uint8 center_x, uint8 center_y, uint8 r)
{
}