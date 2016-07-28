#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	string currStr, preStr;
	bool repeated = false;
	while(cin >> currStr){
		if(currStr == preStr){
			if(isupper(currStr.at(0))){
				repeated = true;
				break;
			}
			else
				continue;
		}
		preStr = currStr;
	}
	if(repeated)
		cout << "repeat string is: " << currStr << endl;
	else
		cout << "nothing happen!" << endl;
}