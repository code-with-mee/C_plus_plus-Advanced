#include "Math.h"

double Math::Divide(int x, int y)
{
    if (y == 0)
        throw runtime_error("division by zero!");
    return x / y;
}
