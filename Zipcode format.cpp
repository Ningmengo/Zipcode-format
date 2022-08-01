/*
Long Guan
102685211
PRG355
*/
#include <iostream>
#include <string>
using namespace std;

int main() {

	//ask for user input
	string userinut;
	cout << "enter the postal code: " << endl;
	getline(cin, userinut);

	//set conditions
	while (userinut.length() != 7) {
		cout << "enter the proper postal code: " << endl;
		getline(cin, userinut);
	}
	if ((userinut.length() == 7)) {
		if (isalpha(userinut.at(0)) && isalpha(userinut.at(2)) && isalpha(userinut.at(5)) && isdigit(userinut.at(6)) &&
			isdigit(userinut.at(1)) && isdigit(userinut.at(4)) && (userinut.at(3) == ' '|| userinut.at(3)=='-')) {
			cout << "your code is correct" << endl;
		}
		else {
			cout << "your code is wrong" << endl;
		}


	}


	return 0;
}
/*
enter the postal code:
dsadjal
your code is wrong
*/

/*
enter the postal code:
L6a 2B1
your code is correct
*/