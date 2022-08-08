#include <iostream>
#include <string>
#include "FundTransfer.h"
using namespace std;
class NEFTTransfer : public FundTransfer{
	public:
		bool transfer(double transferAmount) {
			return this->getBalance() >= transferAmount;
		}
		bool timeCheck(string transferTime) {
			string hours_str = transferTime.substr(0, 2);
			string am_pm = transferTime.substr(5, 2);
			
			int hours;
			sscanf(hours_str.c_str(), "%d", &hours);
			
			if (am_pm == "PM") {
				hours += 12;
			}
			else if((am_pm == "AM") && (hours == 12)) {
				hours -= 12;
			}

			return (hours >= 9) && (hours <= 18);
		}
};
