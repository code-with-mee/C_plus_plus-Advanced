#include <iostream>
#include "AuthenticationException.h"
#include "Login.h"

using namespace std;

int main()
{
    string username, password;
    cout << "username : ";
    cin >> username;
    cout << "password : ";
    cin >> password;

	try
	{
		Login login;
		login.Authenticate(username, password);
		cout << "login success!" << endl;
	}
	catch (AuthenticationException& e)
	{
		cout << e.what() << endl;
	}
}
