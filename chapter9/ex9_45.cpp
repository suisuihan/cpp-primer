#include <iostream>
#include <string>

using namespace std;

string myReplace(const string &s, const string &pre, const string &suf){
	string retStr = s;
	auto iter = retStr.begin();
	retStr.insert(iter, pre.cbegin(), pre.cend());
	retStr.append(suf);
	return retStr;
}

int main(){
	string s = "abcd";
	string pre = "begin";
	string suf = "end";
	auto newStr =  myReplace(s, pre, suf);
	cout << s << endl;
	cout << newStr << endl;
}
