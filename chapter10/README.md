#chapter10

##ex10_1
[ex10_1](https://github.com/suisuihan/cpp-primer/blob/master/chapter10/ex10_1.cpp)

##ex10_2
[ex10_2](https://github.com/suisuihan/cpp-primer/blob/master/chapter10/ex10_2.cpp)

##ex10_3
[ex10_3](https://github.com/suisuihan/cpp-primer/blob/master/chapter10/ex10_3.cpp)


##ex10_4

[ex10_4](https://github.com/suisuihan/cpp-primer/blob/master/chapter10/ex10_4.cpp)
each element of vector<double> will convert to int.


##ex10_5
container<char *>'s element is a pointer which point to a char * array, so the equal() function compare the points are the same or not.

##ex10_6
[ex10_6](https://github.com/suisuihan/cpp-primer/blob/master/chapter10/ex10_6.cpp)

##ex10_7

(a) illegal. vec's size if zero, while copy function requires the third argument's size is large enough

(b) illegal. reserve pre alloc the space, but not change container.size().

[ex10_7](https://github.com/suisuihan/cpp-primer/blob/master/chapter10/ex10_7.cpp)

##ex10_8

the alogrithm operator iterator, and the back_inserter() return an iterator which could change the size of vontainer.