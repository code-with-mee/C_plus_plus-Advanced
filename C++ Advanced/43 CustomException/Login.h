#pragma once
#include <iostream>
#include "AuthenticationException.h"

using namespace std;

class Login
{
private:
	string username = "ratana";
	string password = "12345";
public:
	void Authenticate(string username, string password);
};

