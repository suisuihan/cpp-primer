##chapter7

##[ex7_1](https://github.com/suisuihan/cpp-primer/blob/master/chapter7/ex7_1.cpp)


##[ex7_2](https://github.com/suisuihan/cpp-primer/blob/master/chapter7/ex7_2.h)

##[ex7_3](https://github.com/suisuihan/cpp-primer/blob/master/chapter7/ex7_4.h)

##[ex7_4](https://github.com/suisuihan/cpp-primer/blob/master/chapter7/Person.h)


##[ex7_5](https://github.com/suisuihan/cpp-primer/blob/master/chapter7/Person.h)


##[ex7_6](https://github.com/suisuihan/cpp-primer/blob/master/chapter7/ex7_6.h)

##[ex7_7](https://github.com/suisuihan/cpp-primer/blob/master/chapter7/ex7_7.cpp)

##ex7_8

read function want to change the member value of the class, and print not.

##[ex7_9](https://github.com/suisuihan/cpp-primer/blob/master/chapter7/Person.h)

##ex7_10

set data1, then set data2.

##[ex7_11](https://github.com/suisuihan/cpp-primer/blob/master/chapter7/ex7_11.cpp)

##[ex7_12](https://github.com/suisuihan/cpp-primer/blob/master/chapter7/ex7_12.cpp)

note: read need declare before the define of struct Sales_data, and the declare of struct Sales_data should be before the read.


##[ex7_13](https://github.com/suisuihan/cpp-primer/blob/master/chapter7/ex7_13.cpp)

##ex7_14
```
Sales_data() : bookNo("test"), units_sold(0) , revenue(0){ }
```


##[ex7_15](https://github.com/suisuihan/cpp-primer/blob/master/chapter7/ex7_15.cpp)


##ex7_16

no restrict about how many times the access specifiers should be.

if the member or function should be access to any one, it should be public; if should 
be access to is self, it should by private;

##ex7_17

the default access specifiers are different from each other.
in class ,it's private; in struct, it's public.


##ex7_18

encapsulation hides the detail of it's implement.

##ex7_19

getName/getAddress are publc, and name/address are private.

##ex7_20

when other class or function want to access to a class's private member, the friend declare is needed.

PRO: friend function can visit a class's private members;

CON: break the encapsulation of class

##ex7_21
[ex7_12.h](https://github.com/suisuihan/cpp-primer/blob/master/chapter7/ex7_12.h)

##ex7_22

[ex7_22.h](https://github.com/suisuihan/cpp-primer/blob/master/chapter7/ex7_22.h)


##ex7_23
[ex7_23.h](https://github.com/suisuihan/cpp-primer/blob/master/chapter7/ex7_23.h)

##ex7_24

[ex7_24.h](https://github.com/suisuihan/cpp-primer/blob/master/chapter7/ex7_24.h)




##ex7_27

[ex7_27.h](https://github.com/suisuihan/cpp-primer/blob/master/chapter7/ex7_27.h)

result:
```
xxxxxxxxxxxxxxxxxxxx#xxxx
xxxxxxxxxxxxxxxxxxxx#xxxx
```

##ex7_28
if the return is not a reference, the result of main should be:
```
xxxxxxxxxxxxxxxxxxxx#xxxx
xxxxxxxxxxxxxxxxxxxxxxxxx
```

[ex7_28.h](https://github.com/suisuihan/cpp-primer/blob/master/chapter7/ex7_28.h)
[ex7_28.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter7/ex7_28.cpp)


##ex7_29

look above

##ex7_30

pros:
* be clear to read 
* can use the paramete that has the same name of class

cons:
* to0 long to read
* sometimes it is not necessity


##ex7_31
[ex7_31.h](https://github.com/suisuihan/cpp-primer/blob/master/chapter7/ex7_31.h)


##ex7_32
[ex7_32.h](https://github.com/suisuihan/cpp-primer/blob/master/chapter7/ex7_32.h)



##ex7_33
[ex7_33.h](https://github.com/suisuihan/cpp-primer/blob/master/chapter7/ex7_33.h)


##ex7_34

compiling error:
```
In file included from ex7_34.cpp:3:0:
ex7_34.h:8:24: error: ‘pos’ has not been declared
         void dummy_fcn(pos height){
                        ^
ex7_34.h:13:9: error: ‘pos’ does not name a type
         pos cursor = 0;
         ^
ex7_34.h:14:9: error: ‘pos’ does not name a type
         pos height = 0, width = 0;
         ^
ex7_34.h: In member function ‘void Screen::dummy_fcn(int)’:
ex7_34.h:9:13: error: ‘cursor’ was not declared in this scope
             cursor = width * height;
             ^
ex7_34.h:9:22: error: ‘width’ was not declared in this scope
             cursor = width * height;
                      ^
```

##ex7_35
~~~
typedef string Type;
Type initVal();           // string
class Exercise {
public:
    typedef double Type;
    Type setVal(Type);   // double
    Type initVal();      // double 
private:
    int val;
};

Type Exercise::setVal(Type parm) {  // return is string, argument is double
    val = parm + initVal();         // initVal() return double, val is double
    return val;
}
~~~

the return of setVal() should be 'double' or 'Exercise::Type'
```
Exercise::Type Exercise::setVal(Type parm){
    ...
}
```
##ex7_36

the sequence of c++ class members' init is  based on their apperence's squence, so rem is inited first in this case, and when rem 
initing, base does not be inited.
```
X(int i, int j): rem(i%j), base(j){}
```

##ex7_37

```
Sales_data first_item(cin);         // Sales_data(std::istream &is) 

int main() {
  Sales_data next;                  // Sales_data(std::string s = "")
  Sales_data last("9-999-99999-9"); // Sales_data(std::string s = "")
```



##ex7_38
~~~
Sale_data(std::istream &is = std::cin){read(is, *this);}
~~~


##ex7_39
illegal. the two constructed functions have ambiguous.

##ex7_40
[ex7_40.h](https://github.com/suisuihan/cpp-primer/blob/master/chapter7/ex7_40.h)
[ex7_40.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter7/ex7_41.cpp)

##ex7_41
[ex7_41.h](https://github.com/suisuihan/cpp-primer/blob/master/chapter7/ex7_41.h)
[ex7_41.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter7/ex7_41.cpp)

output:
~~~
this is three arguments constructor
this is default constructor
-------------------------------------
this is three arguments constructor
this is one argument constructor
-------------------------------------
this is three arguments constructor
-------------------------------------
~~~

##ex7_42
[ex7_42.h](https://github.com/suisuihan/cpp-primer/blob/master/chapter7/ex7_42.h)
[ex7_42.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter7/ex7_42.cpp)

##ex7_43

[ex7_43.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter7/ex7_43.cpp)

##ex7_44

illegal. There is no default constructor in class NoDefault.

##ex7_45

legal. C has a default constructor.

##ex7_46

* (a) wrong. class can be inited by default constructor if it is legal.
* (b) wrong. wiki says:
```
C++标准规定，如果构造函数没有参数（nullary），或者构造函数的所有参数都有缺省值（default value），都算作缺省构造函数
```
* (c) wrong. the compiler will  provide a default constructor.
* (d) wrong. only if the member can be inited default.


##ex7_47

i don't like it because sometimes it is confused.

##ex7_48

both ok, because there is no implicit convert to Sales_data

##ex7_49

```
(a) Sales_data &combine(Sales_data); // ok
(b) Sales_data &combine(Sales_data&); // wrong. s can only convert to a temporary Sales_data, and we can not pass a temporary to a non-const reference argument.
(c) Sales_data &combine(const Sales_data&) const; //combine function will change the member of Sales_data, so it's wrong when having trailing const
```

##ex7_50

my "Person" class does not have any constructor including one argument. ^^But if it has an argument like (istream &in), it should be explicit

##ex7_51

i think when the argument is func(vector<T> vec&), it is confused  when calling func(10): a vector has 10 elements, or a vector has an element which is 10?

##ex7_52

only if the class Sala_data is a aggregate class, it can be inited like class x = {...},but  class Sala_data has initial value in class.
modify:
```
struct Sales_data {
    std::string bookNo;
    unsigned units_sold;
    double revenue;
};
```
##ex7_53

[ex7_53.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter7/ex7_53.cpp)


##ex7_54
wiki says:
```
用constexpr修饰函数将限制函数的行为。
首先，该函数的回返值类型不能为void;
第二，函数的内容必须依照"return expr"的形式;
第三，在参数替换后，expr必须是个常数表示式。
```
set_ function will change the memeber, and it does not has return statement, so can't moidified by constexpr-in c++11. In c++14, it can be used.
wiki:
~~~
C++14将放松这些限制。声明为constexpr的函数可以含有以下内容：[8]
任何声明，除了：
static或thread_local变量。
没有初始化的变量声明。
条件分支语句if和switch。
所有的循环语句，包括基于范围的for循环。
表达式可以改变一个对象的值，只需该对象的生命期在声明为constexpr的函数内部开始。包括对有constexpr声明的任何非const非静态成员函数的调用。
goto仍然不允许在constexpr函数中出现。
此外，C++11指出，所有被声明为constexpr的非静态成员函数也隐含声明为const（即函数不能修改*this的值）。这点已经被删除，非静态成员函数可以为非const
~~~

##ex7_55

Data is aggregate class, not constexpr class, because constexpr class requres that its memebers must be literal type, and string is not.

c++11 provide a std::is_literal_type , can use is_literal_type<T>::value to judge a type is literal type or not. 


https://github.com/suisuihan/Cpp-Primer-1/tree/master/ch07 provide a example to test Data, or [ex7_55](ttps://github.com/suisuihan/cpp-primer/blob/master/chapter7/ex7_55.cpp)

##ex7_56

static member:
* modified by "static" when declare.
* associate with class, not any object.
* static function isn't binded with any object, and it does not own this pointer.

advantages:

static member is independent away from any object, so when it change, any object get the new value.

* static member can be a incomplete type.
* static member can be default argument.

##ex7_57
[ex7_57](ttps://github.com/suisuihan/cpp-primer/blob/master/chapter7/ex7_57.h)


##ex7_58

[ex7_58.h](ttps://github.com/suisuihan/cpp-primer/blob/master/chapter7/ex7_58.h)
[ex7_58.cpp](ttps://github.com/suisuihan/cpp-primer/blob/master/chapter7/ex7_58.cpp)

~~~
zhaoyf@ubuntu:/opt/app/git/cpp-primer/chapter7$ g++ -std=c++11 -Wall -c ex7_58.cpp 
In file included from ex7_58.cpp:1:0:
ex7_58.h:9:26: error: ‘constexpr’ needed for in-class initialization of static data member ‘double Example::rate’ of non-integral type [-fpermissive]
     static double rate = 6.5;
                          ^
ex7_58.cpp:2:17: error: ‘constexpr’ needed for in-class initialization of static data member ‘double Example::rate’ of non-integral type [-fpermissive]
 double Example::rate;
                 ^
~~~
static member should not initialize in class, except it is a constexpr. So rate should be inited out of class,
or it should be constexpr type.

fix:[ex7_58_1.h](ttps://github.com/suisuihan/cpp-primer/blob/master/chapter7/ex7_58_1.h)
[ex7_58_1.cpp](ttps://github.com/suisuihan/cpp-primer/blob/master/chapter7/ex7_58_1.cpp)

~~~
//ex7_58_1.h
#ifndef EX7_58_1_H
#define EX7_58_1_H
#include <vector>
using namespace std;
class Example {
public:
    static constexpr double rate = 6.5;
    static const int vecSize = 20;
    static vector<double> vec;
};
#endif

//ex7_58_1.cpp
#include "ex7_58.h"
double Example::rate;
vector<double> Example::vec;

~~~



















































































