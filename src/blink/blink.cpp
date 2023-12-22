#include "blink.h"

Blink::Blink(int blink_rate)
{
    this->blink_rate = blink_rate;
    counter = 0;
}

Blink::BlinkState Blink::get_state()
{
    counter++;
    if (counter == blink_rate)
    {
        counter = 0;
        return ON;
    }
    else
    {
        return OFF;
    }
}
