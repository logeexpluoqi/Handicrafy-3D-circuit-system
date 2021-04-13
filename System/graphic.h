/*
 * @Author: luoqi 
 * @Date: 2020-03-14 21:23:54 
 * @Last Modified by: luoqi
 * @Last Modified time: 2021-04-13 16:08:42
 */
#ifndef _GRAPHIC_H
#define _GRAPHIC_H

#define uint8 unsigned int

void graphic_init(void);
void graphic_clear(void);
void graphic_close(void);
void graphic_open(void);
void graphic_draw_point(uint8 x, uint8 y);
void graphic_draw_line(uint8 x1, uint8 y1, uint8 x2, uint8 y2);
void graphic_draw_rectangle(uint8 x1, uint8 y1, uint8 x2, uint8 y2);
void graphic_draw_triangle(uint8 x1, uint8 y1, uint8 x2, uint8 y2, uint8 x3, uint8 y3);
void graphic_draw_circle(uint8 center_x, uint8 center_y, uint8 r);

#endif