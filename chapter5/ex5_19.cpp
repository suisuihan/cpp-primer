#include <iostream>
#include <string>
using namespace std;

int main() {
	string firstStr, secondStr;
	do{
		cout << "please enter first string:";
		cin >> firstStr;
		cout << "please enter second string:";
		cin >> secondStr;
		cout << "short string is: " << (firstStr.length()>secondStr.length()?secondStr:firstStr) <<endl;
	}while(true);

}