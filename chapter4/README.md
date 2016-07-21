#chapter4

##ex4_1
105

##ex4_2

* *(vec.begin())
* (*vec.begin()) + 1

##ex4_3

I like the explicit rules.

##ex4_4

((12/3)*4)+(5*15)+((24%4)/2) = 16+75+0 =91

##ex4_5

-86, -18, 0, -2

##ex4_6

(a%2) or a & 0x01

##ex4_7
^_^
~~~
unsigned int a = 0-1; 
unsigned a = 0-1; 0-1; 
unsigned short a = 0-1; 
~~~

##ex4_8

AND: calculate right while left is true;    
OR: calculate right while left is false;  
==: calculate both side.

##ex4_9

first: cp is null? in another word, cp point nothing?

second: *cp is null?

##ex4_10

~~~
int num = 0;
while(cin >> num && num != 42);
~~~

##ex4_11

a>b && b>c && c>d 


##ex4_12

"<"'s level is high then "!=", so it means i!=(j<k)

##ex4_13

(a)d=3.0 ,i=3

(b)d=3.5, i =3

##ex4_14

* if(42 = i) in time of compiling , compiler reports error. constant can not be assigned.

* if(i = 42) right forever. 

##ex4_15

pi is a int point.
~~~
dval = ival = *pi = 0
~~~

##ex4_16


if((p=getPtr()) != 0);  
if(i == 1024)

##ex4_17

* after i++, i = i+1, the expression value is i(before +1), for example:
~~~
int i = 1;
cout << i++ << endl;
cout << i << endl;

the result is :
1
2
~~~

* after ++i, i = i + 1, the expression value is i(after +1), for example:
~~~
int i = 1;
cout << ++i << endl;
cout << i << endl;

the result is :
2
2
~~~

* ++i expression is more efficiency then i++. i++ should remember two values: before, after.

##ex4_18

it start with the second iterator, and print the itrator afer the last one, which out of the range.

##ex4_19

~~~
* ptr !=0 && *ptr++ // check ptr is or not nullptr, then check *ptr is or not null, last ptr point next value
* ival++ && ival    // check ival is zero, then check ival+1 is zero.
* vec[ival++] <= vec[ival] // error. vecival+1] <= vec[ival]. The behaour is undefined for compiler.
~~~

##ex4_20

code:
~~~
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv){
    vector<string> v{"abc","def","ghi","jkl"};
    auto iter = v.begin();
    cout << *iter++ << endl;                 //legal. return (*iter), then iter++
    cout <<(*iter)++ << endl;                //illegal. string can not ++
    cout << *iter.empty() << endl;           //illegal. '.''s level is high then *
    cout << iter->empty() << endl;           // llegal.
    cout << ++*iter << endl;                 //string can not ++
    cout << iter++->empty() << endl;         //return iter->empty(), then iter++.
    return 0;
}
~~~

compiling infomation:
~~~
zhaoyf@ubuntu:/opt/app/git/cpp-primer/chapter4$ g++ -std=c++11 -o a.out ex4_20.cpp 
ex4_20.cpp: In function ‘int main(int, char**)’:
ex4_20.cpp:10:19: error: no ‘operator++(int)’ declared for postfix ‘++’ [-fpermissive]
     cout <<(*iter)++ << endl;
                   ^
ex4_20.cpp:11:19: error: ‘class __gnu_cxx::__normal_iterator<std::__cxx11::basic_string<char>*, std::vector<std::__cxx11::basic_string<char> > >’ has no member named ‘empty’
     cout << *iter.empty() << endl;
                   ^
ex4_20.cpp:13:13: error: no match for ‘operator++’ (operand type is ‘std::__cxx11::basic_string<char>’)
     cout << ++*iter << endl;          ^
~~~

##ex4_21

[ex4_21.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter4/ex4_21.cpp);

##ex4_22

[ex4_22.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter4/ex4_22.cpp);

##ex4_23
Operator Precedence:  + == 
string pl = s + (s[s.size() - 1] == 's' ? "" : "s") ;

##ex4_24

skip