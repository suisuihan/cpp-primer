#include <iostream>
#include <string>

using namespace std;

void myReplace(string &s, string oldVal, string newVal){
	int lenOldval = oldVal.length();
	int lenNewval = newVal.length();
	for(int index = 0; index < static_cast<int>(s.length()) - lenOldval; ){
		if(s.substr(index, lenOldval) == oldVal){
			s.erase(index, lenOldval);
            s.insert(index,newVal);
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
