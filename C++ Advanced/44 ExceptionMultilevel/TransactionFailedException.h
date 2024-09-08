#pragma once
#include <iostream>
#include <stdexcept>

using namespace std;

class TransactionFailedException:public exception
{
public:
	const char* what();
};

