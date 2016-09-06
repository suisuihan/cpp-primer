#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

bool isShorter(const string &s1, const string &s2){
	return s1.size() < s2.size();
}

template<typename T>
void elimDups(vector<T> &vec){
	for(auto &element: vec)
		cout << element << " ";
	cout << endl;
	
	sort(vec.begin(), vec.end());
	for(auto &element: vec)
		cout << element << " ";
	cout << endl;

	auto end_unique = unique(vec.begin(), vec.end());
	for(auto &element: vec)
		cout << element << " ";
	cout << endl;
	
	vec.erase(end_unique, vec.end());
	for(auto &element: vec)
		cout << element << " ";
	cout << endl;	

	stable_sort(vec.begin(), vec.end(), isShorter);
	for(auto &element: vec)
		cout << element << " ";
	cout << endl;	
	
}

string make_plural(size_t ctr,const string &word, const string &ending){
  return (ctr==1) ? word : word+ending;
}

void biggies(vector<string> &vec, vector<string>::size_type sz){
	elimDups(vec);
	stable_sort(vec.begin(), vec.end(),
		[](const string &s1, const string &s2){return s1.size() < s2.size();});
	for_each(vec.begin(), vec.end(), [](const string &s){cout << s << " ";});
	cout << endl;

	auto wc = stable_partition(vec.begin(), vec.end(), [sz](const string &s){return s.size() < sz;});

	auto count = vec.end() - wc;
	cout << count << " " << make_plural(count, "word", "s") << " of length " << sz << " or longer" << endl;
	for_each(wc, vec.end(), [](const string &s){cout << s << " ";});
	cout << endl;
}

int main(){
	vector<string> vec{ "a", "bc", "def", "ghij",  "pqrstu", "klmno", "vwxyz"};
	biggies(vec, 5);
}
