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




















