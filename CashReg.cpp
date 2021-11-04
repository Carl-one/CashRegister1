#include <iostream>

class CashReg {
private:
	int _sales;
	bool _salesClosed;

public:
	void IncreaseCashSales(int ammount){
		if(ammount < 0)
			std::cout<< "pouze navysuj";
		_sales += ammount;
	}
		
	int GetCashSales(){
		return _sales;
	}
	void EditCashSales(int ammount){
		_sales += ammount;
	}
	
	void CloseSales(){
		_salesClosed = True;
	}
	

	};