#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	string currStr, preStr;
	bool repeated = false;
	while(cin >> currStr){
		if(currStr == preStr){
			repeated = true;
			break;
		}
		preStr = currStr;
	}
	if(repeated)
		cout << "repeat string is: " << currStr << endl;
	else
		cout << "nothing happen!" << endl;
}