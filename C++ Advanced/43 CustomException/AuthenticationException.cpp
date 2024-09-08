#include "AuthenticationException.h"

const char* AuthenticationException::what()
{
    return "authentication failed";
}
