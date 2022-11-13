#include <iostream>

using namespace std;

int main() {
	double n;

	cout << "Enter the operator to perform: ";
	cin >> n;

	if (n < 10) 
		cout << "This number is lower than 10" << endl;
	
	else 

		if (n == 10) 
			cout << "This number is 10" << endl;
		
		else 
			cout << "This number is more than 10" << endl;
		
	
	return 0;

}
