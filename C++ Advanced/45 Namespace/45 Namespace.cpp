#include <iostream>
#include "SaleDepartment.h"
#include "MarketingDepartment.h"

#include "HRDepartment.h"
#include "ITDepartment.h"

#include "FinanceDepartment.h";

using namespace SaleDepartment;
using namespace MarketingDepartment;

using namespace HRDepartment;
using namespace ITDepartment;

using namespace FinanceDepartment;

int main()
{
    SaleOperation();
    MarketingOperation();

    HROperation();
    HRDepartment::Process();

    ITOperation();
    ITDepartment::Process();

    Account account("000999000", "ratana");
    account.Display();
}
