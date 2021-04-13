/*
 * @Author: luoqi 
 * @Date: 2019-12-24 22:40:53 
 * @Last Modified by: luoqi
 * @Last Modified time: 2021-04-13 15:46:56
 */
#ifndef _BEEP_H
#define _BEEP_H

typedef enum BEEP_STATE
{
    BEEP_ON = 1,
    BEEP_OFF = 0
} BeepState;

void bee(BeepState state);

#endif
