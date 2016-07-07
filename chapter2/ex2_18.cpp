#include <iostream>
using namespace std;

int main(int argc, char** argv){
	int local_int=0;
	int *ptr_int=&local_int;
	int &ref_int=local_int;
	*ptr_int = 1;
	cout << "*ptr_int=" << *ptr_int << " &ref_int=" << ref_int << endl;
	ref_int = 2;
	cout << "*ptr_int=" << *ptr_int << " &ref_int=" << ref_int << endl;
}
