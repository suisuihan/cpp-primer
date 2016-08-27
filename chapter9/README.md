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

##ex9_11
```
vector<int> vec; // none member
vector<int> vec(other_vec); //vec init with the copy of other vec;
vector<int> vec{1,2,3}; // 1, 2, 3
vector<int> vec(other_vec.cbegin(), other_vec.cend()); // c init with the copy of members between itr1(other_vec.cbegin()), itr2(other_vec.cend())
vector<int> vec(10); // 10 members, each value is 0
vector<int> vec(10, 1); // 10 members, each value is 1
```

##ex9_12
```
vector<int> vec(other_vec); // vec and other_vec's type and element type must be the same;
vector<int> vec(iterator1, iterator2); // if the type of *iterator can translate to vec' element type
```

##ex9_13
[ex9_13](https://github.com/suisuihan/cpp-primer/blob/master/chapter9/ex9_13.cpp)


##ex9_14
[ex9_14](https://github.com/suisuihan/cpp-primer/blob/master/chapter9/ex9_14.cpp)
the compiler output warning:
```
zhaoyf@ubuntu:/opt/app/git/cpp-primer/chapter9$ g++ -std=c++11 -Wall -o a.out ex9_14.cpp
ex9_14.cpp: In function ‘int main()’:
ex9_14.cpp:9:41: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
     list<char *> myList{"aa", "bb", "cc"};
                                         ^
ex9_14.cpp:9:41: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
ex9_14.cpp:9:41: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
```

##ex9_15
[ex9_15](https://github.com/suisuihan/cpp-primer/blob/master/chapter9/ex9_15.cpp)


##ex9_16
[ex9_16](https://github.com/suisuihan/cpp-primer/blob/master/chapter9/ex9_16.cpp)


##ex9_17
c1 and c2 must have same container type/element type and the element's type support "<" operate.

##ex9_18
[ex9_18](https://github.com/suisuihan/cpp-primer/blob/master/chapter9/ex9_18.cpp)

##ex9_19
[ex9_19](https://github.com/suisuihan/cpp-primer/blob/master/chapter9/ex9_19.cpp)

##ex9_20
[ex9_20](https://github.com/suisuihan/cpp-primer/blob/master/chapter9/ex9_20.cpp)

##ex9_21
[ex9_21](https://github.com/suisuihan/cpp-primer/blob/master/chapter9/ex9_21.cpp)
vector will move each element to the next index, cost O(n) time.

##ex9_22
* container.insert(olditer, value) insert the value before olditer, and the return value of insert is the new iter, so the place of insert will not change, the
program will not stop;
* when insert a new value, the old iterator will be invalid.





















