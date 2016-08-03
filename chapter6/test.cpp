#include <iostream>

using namespace std;

int &func(int& a)  
{  
    return a;  
}  
  
int main()   
{  
    int a=0;  
    int &b=func(a); 
    int &c=a; 
    printf("&a=%p, &(func(a))=%p, &b=%p, &c=%p\n",&a, &(func(a)), &b, &c);// %p也可以换做%08X，用于输出内存地址  
}  