// This class can be used to determine the state of the blinker
// It shall return ON or OFF depending on the counter and the blink rate
// It shall be hardware/platform independent
// It shall define the blink state ON or OFF in an enum

#ifndef BLINK_H
#define BLINK_H

class Blink

{
public:
    enum BlinkState
    {
        ON,
        OFF
    };
    Blink(int blink_rate);
    BlinkState get_state();

private:
    int blink_rate;
    int counter;
};

#endif // BLINK_H
