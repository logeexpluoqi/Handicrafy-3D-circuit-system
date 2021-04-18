#include "relay.h"
#include "../Firmware/stc12c5a60s2.h"

sbit JK = P0^6;

void jk_off_on(State state)
{
    JK = state;
}
