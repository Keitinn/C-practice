// _3_1.cpp
#include <string>
#include <iostream>

using namespace std;

int main()
{
	string retry;
	do{
		int month;
		cout << "季節を求めます" << endl << "何月ですか:" ;
		cin >> month;

		if (month >= 3 && month <= 5)
			cout << "それは春です" << endl;
		else if(month >= 6 && month <=8)
			cout << "それは夏です" << endl;
		else if(month >= 9 && month <= 11)
			cout << "それは秋です" <<endl;
		else if (month == 12 || month == 1 || month == 2 )
			cout << "それは冬です" << endl;

		cout << "もう一度？ Y・・・Yes/N・・・No:";
		cin >> retry;
	}
	while (retry == "Y"||retry == "y");

	cin.get();
	return 0;
}
