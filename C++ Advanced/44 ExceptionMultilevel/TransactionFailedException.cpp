#include "TransactionFailedException.h"

const char* TransactionFailedException::what()
{
    return "transaction failed exception";
}
