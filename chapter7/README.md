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

























































