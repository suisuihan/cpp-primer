#chapter9

##ex9_1
(a) list or forword_list;

(b) deque

(c) vector

##ex9_2
~~~
list<dequle<int>> myTestList;
~~~

##ex9_3

first, they refer the same container;

second, they will reach the end of the container.

##ex9_4
[ex9_4](https://github.com/suisuihan/cpp-primer/blob/master/chapter9/ex9_4.h)

##ex9_5
[ex9_5](https://github.com/suisuihan/cpp-primer/blob/master/chapter9/ex9_5.h)

##ex9_6
fixed:
~~~
while(iter1 != iter2)
~~~

##ex9_7

vector<int>::size_type


##ex9_8

list<string>::const_iterator
list<string>::iterator


##ex9_9
begin is the iterator refer to the first, and it return no-const iterator when the cotainer is not const, else return const_iterator;
 cbegin return const_iterator.

##ex9_10
* it1: vector<int>::iterator
* it2: vector<int>::const_iterator
* it3: vector<int>::const_iterator
* it4: vector<int>::const_iterator











