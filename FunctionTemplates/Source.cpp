/*
Katherine Walsh
Template Functions
12/4/22
*/

#include <iostream>
using namespace std;

int main() {
	double a = 7.0;
	float b = 5.0f;
	int c = 3;


	cout << endl;
	system("pause");
	return 0;
}


template <typename T>
T half(T num) {
	if (num = float || num = double) {
		return (num / 2);
	}
	else if (num = int) {
		float conv = static_cast<int>(num);
		return round(conv / 2);

	}
}