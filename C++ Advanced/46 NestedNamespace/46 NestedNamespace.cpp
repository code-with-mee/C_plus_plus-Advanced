#include <iostream>
#include "PaymentSystem.h"
#include "Option1.h"
#include "Option2.h"

using namespace std;
using namespace PaymentSystem;

int main()
{
    OnlinePayment::ProcessPayment(100);
    CashPayment::ProcessPayment(500);

    PayPalPayment::ProcessPayment(10000);
    BankTransferPayment::ProcessPayment(20000);
}
