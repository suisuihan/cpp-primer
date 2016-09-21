#chapter12

##ex12_1
* b1 include {"a", "an", "the", "about"};
* b2 has been destroyed.

##ex12_2  
[ex12_2](https://github.com/suisuihan/cpp-primer/blob/master/chapter12/ex12_2.cpp)

##ex12_3

I don't want a "const" function to change my member variable, and the push_back will add an element to the vector. So I think need not.
But if we do persistent, when compliing(gcc version 5.2.1 20151010 (Ubuntu 5.2.1-22ubuntu2)), nothing happen. In my option, the reason is
we did not change the shared_ptr of data. But which fuction will call? test code like [ex12_3](https://github.com/suisuihan/cpp-primer/blob/master/chapter12/ex12_3.cpp)

the output is:
```
ab cd
non-const
```

the non-const push_back() will be called.


#ex12_4

size_type is unsinged, never little then 0.

#ex12_5

keyword explicit prevent automatic conversion, so we can not use parameters like {"aa", "bb" } to init a new object.

##ex12_6  
[ex12_6](https://github.com/suisuihan/cpp-primer/blob/master/chapter12/ex12_6.cpp)


##ex12_7
[ex12_7](https://github.com/suisuihan/cpp-primer/blob/master/chapter12/ex12_7.cpp)

##ex12_8
p which convert to bool. if p point to nullptr, the bool value is false, else true, and it means p is not delete, dynamic memory is not freed.

##ex12_9

* r apply for dynamic memory, then r point to another field, memory leakage occur.
* r2 is a shared_ptr, while r2 = q2, r2 reference count reduce to 0, r2 free its memory; q2 reference count add 1;


##ex12_10
[ex12_10](https://github.com/suisuihan/cpp-primer/blob/master/chapter12/ex12_10.cpp)
That's OK, the parameter of process() use p to init shared_ptr, p reference count +1, when out of process, ptr automatic delete, p reference count -1.

##12_11
ptr = shared_ptr<int>(p.get()), the reference of ptr is 1, while out of process, ptr automatic delete, the memory of new int(42) free, p point to memory is undefined.


##12_12

(a) legal;

(b) illegal. shared_ptr is explicit;

(c) illegal. shared_ptr is explicit;

(d) legal, but when out of process, the memory which p point to will be free.


##12_13

sp point to memory is undefined.

##12_14
[ex12_14](https://github.com/suisuihan/cpp-primer/blob/master/chapter12/ex12_14.cpp)

##12_15
[ex12_15](https://github.com/suisuihan/cpp-primer/blob/master/chapter12/ex12_15.cpp)

##12_16
[ex12_16](https://github.com/suisuihan/cpp-primer/blob/master/chapter12/ex12_16.cpp)

~~~
zhaoyf@ubuntu:/opt/app/git/cpp-primer/chapter12$ g++ -std=c++11 -Wall -o a.out ex12_16.cpp 
ex12_16.cpp: In function ‘int main()’:
ex12_16.cpp:7:26: error: use of deleted function ‘std::unique_ptr<_Tp, _Dp>::unique_ptr(const std::unique_ptr<_Tp, _Dp>&) [with _Tp = int; _Dp = std::default_delete<int>]’
     unique_ptr<int> p2 = p1;
                          ^
In file included from /usr/include/c++/5/memory:81:0,
                 from ex12_16.cpp:2:
/usr/include/c++/5/bits/unique_ptr.h:356:7: note: declared here
       unique_ptr(const unique_ptr&) = delete;
       ^
ex12_16.cpp:8:26: error: use of deleted function ‘std::unique_ptr<_Tp, _Dp>::unique_ptr(const std::unique_ptr<_Tp, _Dp>&) [with _Tp = int; _Dp = std::default_delete<int>]’
     unique_ptr<int> p3(p1);
                          ^
In file included from /usr/include/c++/5/memory:81:0,
                 from ex12_16.cpp:2:
/usr/include/c++/5/bits/unique_ptr.h:356:7: note: declared here
       unique_ptr(const unique_ptr&) = delete;
       ^
~~~




































