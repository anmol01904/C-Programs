#include <iostream>
#include <string>
#include "FundTransfer.h"
using namespace std;
class IMPSTransfer : public FundTransfer{
	public:
		bool transfer(double transferAmount) {
			double serviceCharge = 0.02 * transferAmount;
			return (this->getBalance() >= (transferAmount + serviceCharge));
		}
};
