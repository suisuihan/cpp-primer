#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
	int firstInt, secondInt;
	cout << "please enter two int: ";
		cin >> firstInt >> secondInt;
	if(secondInt == 0)
		throw runtime_error("second number is zero!");
	cout << firstInt/secondInt << endl;
}