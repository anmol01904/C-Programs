#include <iostream>
#include <string>
#include "FundTransfer.h"
using namespace std;
class RTGSTransfer : public FundTransfer{
    public:
    	bool transfer(double transferAmount) {
    		return (transferAmount >= 10000) && (this->getBalance() >= transferAmount);
		}
};
