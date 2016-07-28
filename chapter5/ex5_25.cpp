#include <iostream>
#include <stdexcept>
#include <cctype>
using namespace std;

int main() {
	int firstInt, secondInt;
	while(true){
		cout << "please enter two int: ";
			cin >> firstInt >> secondInt;
		try{
			if(secondInt == 0)
				throw runtime_error("second number is zero!");
			cout << firstInt/secondInt << endl;
		}catch(runtime_error err){
			cout << err.what()
				<< endl << "try again?(Y/N):";
			char c;
			cin >> c;
			if(c == 'Y' or toupper(c) == 'Y')
				continue;
			else
				break;
		}
	}
}