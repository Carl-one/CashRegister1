#include <iostream>

class Employee {
private:
	std::string name;

public:
	std::string/*Receipt */ CreateReceipt(/*Item item,*/ int itemCount ) {
		
	}

	void IncreaseStock(/*Item item*/, int increment) {
		if(increment < 1)
			std::cout<< "pouze navysuj"
			else
				/*Stock::SetStock(item, increment)*/
	}

	int GetCashSalesE() {
		/*CashReg::GetCashSales()*/
	}

	std::string*/*Item* item */ GetItemSalesE() {
		/*Stock::GetItemSales()*/
	}
	
	void CloseSalesE() {
		/*CashReg::CloseSales()*/

	};