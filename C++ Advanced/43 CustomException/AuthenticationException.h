#pragma once
#include <iostream>
#include <stdexcept>

using namespace std;

class AuthenticationException : public exception
{
public:
	const char* what();
};

