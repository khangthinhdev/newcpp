#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string>
using namespace std;

double Conveter(double money, int fromMoney, int toMoney);

int main()
{
	cout << "-------------------" << endl;
	cout << "1.USD  2.VND  3.KRW" << endl;
	cout << "4.JPY  5.CNY  6.GBP" << endl;
	cout << "-------------------" << endl;

	int fromMoney = 0;
	while (1) {
		cout << "Type kind (index) of money you want to convert FROM: ";
		cin >> fromMoney;
		if (fromMoney <= 6 && fromMoney >= 1) {
			break;
		}
		else{
			cout << "something went wrong!" << endl;
			continue;
		};
	};

	cout << "Type money you want to convert: ";
	double inputMoney; cin >> inputMoney;

	int toMoney = 0;
	while (1) {
		cout << "Type kind (index) of money you want to convert TO: ";
		cin >> toMoney;
		if (toMoney <= 6 && toMoney >= 1) {
			break;
		}
		else{
			cout << "Something went wrong!" << endl;
			continue;
		}
	};

	string unit;
	if (toMoney==1) unit = " USD";
	else if(toMoney==2) unit = " VND";
	else if(toMoney==3) unit = " KRW";
	else if(toMoney==4) unit = " JPY";
	else if(toMoney==5) unit = " CNY";
	else if(toMoney==6) unit = " Pound";
	else unit = "";

	cout << "------------------------" << endl;
	cout << setprecision(3) << fixed;
	cout << Conveter(inputMoney, fromMoney, toMoney) << unit <<endl;


	system("Pause");
	return 0;
}

double Conveter(double money, int fromMoney, int toMoney){
	switch (fromMoney) {
		case 1:
			switch (toMoney) {
				case 2:
					money = money * 23,181.50;
					return money;
					break;
				case 3:
					money = money * 1,197.02;
					return money;
					break;
			    case 4:
					money = money * 105.41;
					return money;
					break;
				case 5:
					money = money * 7.00;
					return money;
					break;
				case 6:
					money = money * 0.78;
					return money;
					break;
				default:
					return money;
					break;
			};
		case 2:
			switch (toMoney) {
				case 1:
					money = money * 0.000044;
					return money;
					break;
				case 3:
					money = money * 0.052;
					return money;
					break;
				case 4:
					money = money * 0.0046;
					return money;
					break;
				case 5:
					money = money * 0.00031;
					return money;
					break;
				case 6:
					money = money * 0.000034;
					return money;
					break;
				default:
					return money;
					break;
			};
		case 3:
			switch (toMoney) {
				case 1:
					money = money * 0.00084;
					return money;
					break;
				case 2:
					money = money * 19.37;
					return money;
					break;
				case 4:
					money = money * 0.088;
					return money;
					break;
				case 5:
					money = money * 0.0058;
					return money;
					break;
				case 6:
					money = money * 0.00065;
					return money;
					break;
				default:
					return money;
					break;
			};
		case 4:
			switch (toMoney) {
				case 1:
					money = money * 0.0095;
					return money;
					break;
				case 2:
					money = money * 219.98;
					return money;
					break;
				case 3:
					money = money * 11.36;
					return money;
					break;
				case 5:
					money = money * 0.066;
					return money;
					break;
				case 6:
					money = money * 0.0074;
					return money;
					break;
				default:
					return money;
					break;
			};
		case 5:
			switch (toMoney) {
				case 1:
					money = money * 0.14;
					return money;
					break;
				case 2:
					money = money * 3,309.99;
					return money;
					break;
				case 3:
					money = money * 170.93;
					return money;
					break;
				case 4:
					money = money * 15.05;
					return money;
					break;
				case 6:
					money = money * 0.11;
					return money;
					break;
				default:
					return money;
					break;
			};
		case 6:
			switch (toMoney) {
				case 1:
					money = money * 1.28;
					return money;
					break;
				case 2:
					money = money * 29,784.40;
					return money;
					break;
				case 3:
					money = money * 1,537.45;
					return money;
					break;
				case 4:
					money = money * 135.37;
					return money;
					break;
				case 5:
					money = money * 8.99;
					return money;
					break;
				default:
					return money;
					break;
			};
	}
};
