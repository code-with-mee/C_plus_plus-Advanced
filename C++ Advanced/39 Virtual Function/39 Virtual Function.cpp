#include <iostream>
#include "Payment.h"
#include "BankTransferPayment.h"
#include "PayPalPayment.h"
#include <vector>

using namespace std;

int main()
{
    Payment* payment = new Payment("payment");
    payment->ProcessPayment();

    BankTransferPayment* bankTransfer = new BankTransferPayment("bank-transfer");
    bankTransfer->ProcessPayment();

    PayPalPayment* paypalPayment = new PayPalPayment("paypal");
    paypalPayment->ProcessPayment();

    Payment* payment2 = bankTransfer;
    payment2->ProcessPayment();

    payment->Print();
    payment2->Print();

    payment2 = paypalPayment;
    payment2->Print();

    cout << "=================" << endl;

    vector<shared_ptr<Payment>> payments;
    payments.push_back(make_shared<Payment>("payment"));
    payments.push_back(make_shared<BankTransferPayment>("bank-transfer"));
    payments.push_back(make_shared<PayPalPayment>("paypal"));

    for (auto& p : payments)
    {
        p->ProcessPayment();
    }
}
