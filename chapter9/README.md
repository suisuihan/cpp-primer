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

##ex9_23
all equal the copy of the unique elent of c

##ex9_24
[ex9_24_1](https://github.com/suisuihan/cpp-primer/blob/master/chapter9/ex9_24_1.cpp)
[ex9_24_2](https://github.com/suisuihan/cpp-primer/blob/master/chapter9/ex9_24_2.cpp)

```
zhaoyf@ubuntu:/opt/app/git/cpp-primer/chapter9$ g++ -std=c++11 -Wall -o a.out ex9_24_2.cpp
ex9_24_2.cpp: In function ‘int main()’:
ex9_24_2.cpp:9:33: error: request for member ‘at’ in ‘vec’, which is of non-class type ‘std::vector<std::__cxx11::basic_string<char> >()’
     cout << "vec.at(0)=" << vec.at(0)<<endl;
                                 ^
ex9_24_2.cpp:10:31: warning: pointer to a function used in arithmetic [-Wpointer-arith]
     cout << "vec[0]=" << vec[0]<<endl;
                               ^
ex9_24_2.cpp:10:31: warning: the address of ‘std::vector<std::__cxx11::basic_string<char> > vec()’ will always evaluate as ‘true’ [-Waddress]
ex9_24_2.cpp:11:35: error: request for member ‘front’ in ‘vec’, which is of non-class type ‘std::vector<std::__cxx11::basic_string<char> >()’
     cout << "vec.front()=" << vec.front() << endl;
                                   ^
ex9_24_2.cpp:12:36: error: request for member ‘begin’ in ‘vec’, which is of non-class type ‘std::vector<std::__cxx11::basic_string<char> >()’
     cout << "vec.begin()=" << *vec.begin() << endl; 
                                    ^
```

##ex9_25

* if elem1 == elem2, no element will be delete
* if elem2 is c.end(), the container will delete elements from elem1 to the end;
* fi elem1 is c.end(), no element will be delete

##ex9_26
[ex9_26](https://github.com/suisuihan/cpp-primer/blob/master/chapter9/ex9_26.cpp)

##ex9_27
[ex9_27](https://github.com/suisuihan/cpp-primer/blob/master/chapter9/ex9_27.cpp)

##ex9_28
[ex9_28](https://github.com/suisuihan/cpp-primer/blob/master/chapter9/ex9_28.cpp)

##ex9_29
* insert 75 elements to vec, the value are inited default;
* delete 15 elements from the back of vec


##ex9_30

the type of element should have a default constructor.


##ex9_31

random-access iterator supports '+' operator, and bidirectional iterators does not.

list<int>::iterator is bidirectional iterator; forward_list<int>::iterator is Forward_iterator;
reference: http://www.cplusplus.com/reference/iterator/

[ex9_31_1](https://github.com/suisuihan/cpp-primer/blob/master/chapter9/ex9_31_1.cpp)
[ex9_31_2](https://github.com/suisuihan/cpp-primer/blob/master/chapter9/ex9_31_2.cpp)

##ex9_32
illegal. the order of evaluation is not defined.

##ex9_33
crash, begin is invalid after v.insert()

##ex9_34

never stop


















































