#include "Login.h"

void Login::Authenticate(string username, string password)
{
    if (username != this->username ||
        password != this->password)
    {
        throw AuthenticationException();
    }
}
