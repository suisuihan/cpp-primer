#Chapter5

##ex5_1

null statement is empty statement.

##ex5_2

block is some or none statements in a pair of  curly brace. 


##ex5_3

~~~
#include <iostream>
int main(){
    int sum = 0, val = 1;
    while(val <=10)
        sum += val, ++val;
    std:cout << "sum of 1 to 10 inclusive is " << sum << std:endl;
    return 0;
}
~~~

##ex5_4

each time iter or status is redefined.
~~~
(a)
string::iterator iter = s.begin();
while(iter != s.end()){/**/}

(b)
while(bool status = find(word)){
    if(!status){
        /**/
    }
}
~~~

##ex5_5
[ex5_5](https://github.com/suisuihan/cpp-primer/blob/master/chapter5/ex5_5.cpp)

##ex5_6
[ex5_6](https://github.com/suisuihan/cpp-primer/blob/master/chapter5/ex5_6.cpp)

##ex5_7
~~~
(a) ival1 = ival2; // add ;
(b) if(ival < minval){
        minval = ival;
        occurs =1;
    }
(c) it looks like can run well...
(d) if (ival == 0)
~~~

##ex5_8

c++ suports that if can has not else, so when we have more than one if, we don't know which if the else should belong. C++ 
discipline the else belong the if which is nearest to itself.

##ex5_9

[ex5_9](https://github.com/suisuihan/cpp-primer/blob/master/chapter5/ex5_9.cpp)

##ex5_10

[ex5_11](https://github.com/suisuihan/cpp-primer/blob/master/chapter5/ex5_10.cpp)

##ex5_11

[ex5_11](https://github.com/suisuihan/cpp-primer/blob/master/chapter5/ex5_11.cpp)

##ex5_12

[ex5_12](https://github.com/suisuihan/cpp-primer/blob/master/chapter5/ex5_12.cpp)

**notice: cin >> std::noskipws >> ch means not skip ' ' '\t' or '\n'**

##ex5_13

~~~
(a)switch(/**/){
    case:   // need add break;
}

(b)
    ix is a local variable in case, it can be declare without define in case 1, but i chocie to declare it out of switch ... case ...

(c)
    digit will never be 10, but can be 0

(d)
    case label must be const expression, so define ival/jval/kval as const.

##ex5_14
[ex5_14_a](https://github.com/suisuihan/cpp-primer/blob/master/chapter5/ex5_14_a.cpp)

there is a bug in this code. While there are more then one string appare the same times, it only tell the first string.
another version is [ex5_14_b](https://github.com/suisuihan/cpp-primer/blob/master/chapter5/ex5_14_b.cpp).

* use vector store statement;
* use sort and lambda expression sort vector;


