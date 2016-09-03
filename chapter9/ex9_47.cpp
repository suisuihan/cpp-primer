#include <iostream>
#include <string>

using namespace std;

int main(){
	string number = "0123456789";
	string srcStr = "ab2c3d7R4E6";
	string alphabet = "";
	char alphabetIndex = 'A';
	while(alphabetIndex <= 'Z'){
		string s{alphabetIndex};
		alphabet.append(s);
		alphabetIndex++;
	}

	alphabetIndex = 'a';
	while(alphabetIndex <= 'z'){
		string s{alphabetIndex};
		alphabet.append(s);
		alphabetIndex++;
	}
	string::size_type index = 0;
	while((index = srcStr.find_first_of(number, index)) != string::npos){
		cout << srcStr[index];
		index++;
	}
	cout << endl;

	index = 0;
	while((index = srcStr.find_first_not_of(alphabet, index)) != string::npos){
		cout << srcStr[index];
		index++;
	}
	cout << endl;

}
