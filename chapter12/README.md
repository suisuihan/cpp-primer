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

