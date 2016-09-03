#include <stack>
#include <string>
#include <iostream>
#include <stack>

using namespace std;

int main(){
	string s = "1 + 2  - (2 * 4)";
	stack<char> mystack;
	bool inparenthesis = false;
	for(auto &c: s){
		if(c == '('){
			inparenthesis = true;
			continue;
		}
		else if(c == ')')
			inparenthesis = false;
		if(inparenthesis)
			mystack.push(c);			
	}

	string expr;
	while(!mystack.empty()){
		expr += mystack.top();
		mystack.pop();
	}

	cout << expr << endl;

}