#pragma once
#include <iostream>
#include <stdexcept>

using namespace std;

class AccountVerifyException :public exception
{
public:
	const char* what();
};

