#include <iostream>
#include <string>

using namespace std;

string myReplace(const string &s, const string &pre, const string &suf){
	string retStr = s;
	int index = 0;
	retStr.insert(index, pre);
	index = retStr.length();
	retStr.insert(index, suf);
	return retStr;
}

int main(){
	string s = "ass";
	string pre = "begin";
	string suf = "end";
	auto newStr =  myReplace(s, pre, suf);
	cout << s << endl;
	cout << newStr << endl;
}
