parameter is the local variable which can be used in the scope of the function. It is inited with arguments;
argument is the used to init parameter.

##ex6_2
~~~
(a) the declare of return value type is int, but s is string;
(b) the function must hava a return value, void is needed when does not;
(c) left "{"
(d) right
~~~

##[ex6_3](https://github.com/suisuihan/cpp-primer/blob/master/chapter6/ex6_3.cpp)


##[ex6_4](https://github.com/suisuihan/cpp-primer/blob/master/chapter6/ex6_3.cpp)

##ex6_5

~~~
int getabs(int a){
    return a >= 0? a: -a;
}
~~~

##ex6_6
* parameter: declare int the function arguments list, init by the caller passing arguments;
* local variable: be effective in the block;
* local static variable: int by the first time, always effective before the program is destroied.

~~~
int buybuybuy(int price, int num){
    static int money = 10000;
    int totalPrice = price * num;
    money -= tootalPrice;
}
~~~

##ex6_7

~~~
int nomeaningfunc(){
    static int wtf = 0;
    if(wtf == 0)
        return 0;
    wtf = 1;
    return wtf;
}
~~~

##[ex6_8](https://github.com/suisuihan/cpp-primer/blob/master/chapter6/fact.h)

##ex6_9

[factMain.cc](https://github.com/suisuihan/cpp-primer/blob/master/chapter6/factMain.cc)

[fact.cc](https://github.com/suisuihan/cpp-primer/blob/master/chapter6/fact.cc)


compile command: g++ -Wall -std=c++11 -o a.out factMain.cc fact.cc

##[ex6_10](https://github.com/suisuihan/cpp-primer/blob/master/chapter6/ex6_10.cpp)


##[ex6_11](https://github.com/suisuihan/cpp-primer/blob/master/chapter6/ex6_11.cpp)


##[ex6_12](https://github.com/suisuihan/cpp-primer/blob/master/chapter6/ex6_12.cpp)

##ex6_13

* void f(T) pass the value to the function, T will not be changed;
* voif f(&T) pass the reference T to function, T may be changed.

##ex6_14

while want to change the parameter, a reference should pass to the function; else please not.

##ex6_15

* the function doesn't want to change the string, so need a const reference;
* the function wants to store the times in occurs, in another word, occurs will be changed, so need a reference;
* if we pass a copy of s to the function, it will cost the time of copy, pass a reference is more efficient; the number of
the char will store in occurs, so occurs must be a reference; c does not fit any of this two situation;
* an error will appear when compiling.

##ex6_16

if the pass expression is a const expression, the function can not work, for example:
~~~
is_empty("aaa");
~~~
change the function define:
bool is_empty(const string &s){...};

##[ex6_17](https://github.com/suisuihan/cpp-primer/blob/master/chapter6/ex6_17.cpp)

##ex6_18

(a)
~~~
bool compare(Matrix &a, Matrix &b);
~~~
(b)
~~~
vector<int> change(int a, vector<int>::iterator itr);
~~~

##ex6_19

(a) illegal. calc just has one parameter;
(b) legal;
(c) legal;
(d) legal.

##ex6_20

* while want to change the parameter, a reference should pass to the function; else please not.
* in some situation it will get a compling error.

##[ex6_21](https://github.com/suisuihan/cpp-primer/blob/master/chapter6/ex6_21.cpp)

##[ex6_22](https://github.com/suisuihan/cpp-primer/blob/master/chapter6/ex6_22.cpp)

##[ex6_23](https://github.com/suisuihan/cpp-primer/blob/master/chapter6/ex6_23.cpp)

##ex6_24

in the case, (const int ia[10]) equals (const int*). We can use:
~~~
void print(const int (*arr)[10]){...}
~~~

##[ex6_25](https://github.com/suisuihan/cpp-primer/blob/master/chapter6/ex6_25.cpp)

##[ex6_26](https://github.com/suisuihan/cpp-primer/blob/master/chapter6/ex6_26.cpp)

##[ex6_27](https://github.com/suisuihan/cpp-primer/blob/master/chapter6/ex6_27.cpp)


##ex6_28

elem is const string&

##ex6_29

while the loop variable is simple type easy to copy, it is not nessary to be a &; otherwise it's better to be a reference.

##ex6_30
```
warning: control reaches end of non-void function [-Wreturn-type]
```

##ex6_31

while the variable will be destroied out of the function.

##[ex6_32](https://github.com/suisuihan/cpp-primer/blob/master/chapter6/ex6_32.cpp)

legal. 

##[ex6_33](https://github.com/suisuihan/cpp-primer/blob/master/chapter6/ex6_33.cpp)

##ex6_34

* if the argument val > 0, it can return the true result;
* if the argument val < 0, it wo'nt stop.

##ex6_35

value of "val--" is val, the function will not stop


##ex6_36
```
string (&func())[10]
```

##ex6_37

```
typedef string arrStr[10];
arrStr& func()

auto func() -> string(&)[10];

string arrStr[10];
decltype(arrStr) &func();

```

##ex6_38
```
decltype(odd) &arrPtr(int i)
    return (i%2)?odd:even;

##ex6_39
(a) illegal, top-level const can't be department with other none const argument.

(b) illegal, func can not be department with the return type.

(c) legal

##ex6_40

(b) illegal. The default argument must be placed at the end of function arguments list.

##ex6_41

(a) illegal, argument ht must get a parameter

(b) legal

(c) illegal

##[ex6_42](https://github.com/suisuihan/cpp-primer/blob/master/chapter6/ex6_42.cpp)


##ex6_43

(a) put in head.h, it is an inline function;

(b) put in .cpp file
```
inline bool isShorter(const string &s1, const string &s2){
    return s1.size() < s2.size();
}
```

##[ex6_44](https://github.com/suisuihan/cpp-primer/blob/master/chapter6/ex6_44.cpp)

##ex6_45

first, the function should be short;
second, it should be used everywhere , or often.

##ex6_46

no, it can't be sure about it's argument and return value.

