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

##ex4_25

[ex4_25](https://github.com/suisuihan/cpp-primer/blob/master/chapter4/ex4_25.cpp)
~~~
2232 // BIN: 0001 1100 0100 0000
~~~

##ex4_26

if int's size is less than 32 on the machine, the behaviour is undefined.

##ex4_27

(a) 011 & 1011 = 0011

(b) 011 & 1011 = 1011

(c) 011 && 1011 = true
 
(d) 011 || 1011 = true

##ex4_28

[ex4_28](https://github.com/suisuihan/cpp-primer/blob/master/chapter4/ex4_28.cpp)

##ex4_29

the two expressions have same result: 10.
the first has no question. In my opinion, p point to the same address as x, because the name of array is a pointer which point to the begin of array,
 and pointer's type depends array's element. In this case, x's element is int, so x is int*, and p is int*, too.

[ex4_29](https://github.com/suisuihan/cpp-primer/blob/master/chapter4/ex4_29.cpp)


##ex4_30

while I am not sure about the priority, use ().
~~~
(a) (sizeof x)+y
(b) sizeof(p->mem[i])
(c) (sizeof a)<b
(d) sizeof(f())
~~~

##ex4_31

look ex4_17

##ex4_32

ix and ptr implement the same fuction: traverse the array.

##ex4_33

if someValue is true, x=x+1, y=y+1 ,and return y(after +1); else if someValue is false , x=x-1, y=y-1, return y(after -1).

##ex4_34

~~~
if(fval) // float -> boolean
dval = fval + ival // int -> float, float ->double
dval + ival * cval // c -> int, int -> double
~~~

##ex4_35

~~~
(a) yes. char - >int , int -> char.
(b) yes. ival -> float.
(c) yes. i -> float, float -> double.
(d) yes. i -> float, float -> double, double -> char.
~~~

##ex4_36

~~~
i*=static_cast<int>(d)
~~~

##ex4_37

~~~
(a) pv = const_cast<char*>(ps);
(b) i = static_cast<int>(*pc);
(c) pv = static_cast<void*>(&d);
(d) pc = static_cast<char*>(pv);
~~~

##ex4_38

j/i is int, convert to double.




















