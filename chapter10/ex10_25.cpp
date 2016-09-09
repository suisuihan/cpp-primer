#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <functional> 

using namespace std;
using namespace std::placeholders;

int check_size(string &s, string::size_type sz){
	return s.size() <= sz;
}

bool isShorter(const string &s1, const string &s2){
	return s1.size() < s2.size();
}

template<typename T>
void elimDups(vector<T> &vec){
	sort(vec.begin(), vec.end());
	auto end_unique = unique(vec.begin(), vec.end());
	vec.erase(end_unique, vec.end());
	stable_sort(vec.begin(), vec.end(), isShorter);	
}

void biggies(vector<string> &words, vector<string>::size_type sz){
	auto iter = partition(words.begin(), words.end(), bind(check_size, _1, sz));
	for_each(words.begin(), iter, [](string &s){cout << s <<" ";});
}

int main(){
	vector<string> vec{ "abc","defg","hijkl","opq"};
	biggies(vec, 4);
}
