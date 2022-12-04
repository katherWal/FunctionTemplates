/*
Katherine Walsh
Template Functions
12/4/22
*/

#include <iostream>
using namespace std;

template <typename T>
T half(T num);
template<>
int half(int num);

int main() {
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half<double>(a) << endl;
	cout << half<float>(b) << endl;
	cout << half<int>(c) << endl;

	cout << endl;
	system("pause");
	return 0;
}


template <typename T>
T half(T num) {
		return (num / 2);
}
template<>
int half(int num) {
	float conv = static_cast<int>(num);
	return round(conv / 2);
}