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
[]()
