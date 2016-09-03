#include <iostream>
#include <string>

using namespace std;

void myReplace(string &s, string oldVal, string newVal){
	int lenOldval = oldVal.length();
	int lenNewval = newVal.length();
	for(unsigned int index = 0; index < s.length() - lenOldval; ){
		if(s.substr(index, lenOldval) == oldVal){
			s.replace(index, lenOldval, newVal);
			index += lenNewval;
        }else
            index++;
	}
}

int main(){
	string s = "abcd";
	string oldstr = "bc";
	string newstr = "ban";
	myReplace(s, oldstr, newstr);
	cout << s << endl;
}
