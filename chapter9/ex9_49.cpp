#include <iostream>
#include <string>

using namespace std;

int main(){
	string regexp= "acemnorsuvwxz";
	string input;
	while(cin >> input){
		string::size_type index = 0;
		while((index = input.find_first_of(regexp, index)) != string::npos){
			cout << input[index];
			index++;
		}
		cout << endl;
	}
	cin.clear();
	cout << endl;
}
