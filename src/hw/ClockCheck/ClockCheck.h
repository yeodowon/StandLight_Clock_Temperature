#ifndef CLOCKCHECK_H
#define CLOCKCHECK_H

#include <time.h>

class ClockCheck
{
private:
    time_t prevSec;

public:
    ClockCheck();
    ~ClockCheck();
    bool isUpdate();
};

#endif