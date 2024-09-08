#include "AccountVerifyException.h"

const char* AccountVerifyException::what()
{
    return "account verify failed";
}
