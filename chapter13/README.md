#chapter13

##1
* use '=' operator;
* pass a object to a function's parameter as a non-reference type;
* return a object as a non-reference type;
* use '{}' to initialize the element of an array or the member of aggregate class;
* when container using insert ot push function to add an element;

##2

copy constructor's parameter must be reference type, otherwise the constructor will call is self in the loop which never stop.

##3

* when copy StrBlob, the shared_ptr's reference count will add 1;
* when copy StrBlobStr, the reference count of shared_ptr of weak_ptr won't change,  curr will copy derictly.

##4
~~~
Point global;
Point foo_bar(Point arg) // Point arg
{
    Point local = arg, *heap = new Point(global); // local = arg, *heap = new Point(global)
    *heap = local;
    Point pa[ 4 ] = { local, *heap }; // Point pa[ 4 ] = { local, *heap }
    return *heap; // return *heap
}
~~~

##5
~~~
HasPtr(HasPtr &hp):ps(new std::string(*hp.ps)), i(hp.i) { }
~~~

##6
* copy-assignment operator is operator=;
* synthesized copy-assignment operator will assign right object no-static member to the left;
* if a class does not define it's copy-assignment operator, the complier will create a synthesized copy-assignment opreator;

##7
* when StrBlob a = b, the data of b reference count +1;
* when StrBlobPtr a = b, the a.wptr point to the b's wptr, a.curr = b.curr.

##8
~~~
HasPtr& operator=(HasPtr &hp){
    if(this != &hp){
        auto newPtr = new string(*hp.ps);
        delete ps;
        ps = newPtr;
        i = hp.i;
    }
    return *this;
} 
~~~

##9

* destructor is a function vith a prefix "~"
* usually use to release the resoure of the object, sometime is empty;
* when a class don't define it's destructor.

##10

* when StrBlob is destoried, the reference cout of data -1;
* when StrBlobPtr is destoried, the object of weak_ptr point to will not be free.

##11

~~~
~HasPtr(){
    if(ps != nullptr)
        delete ps;
}
~~~
[ex13_11.h](https://github.com/suisuihan/cpp-primer/blob/master/chapter13/ex13_11.h)
##12

accum/item1/item2

##13

[ex13_13.h](https://github.com/suisuihan/cpp-primer/blob/master/chapter13/ex13_13.h)
[ex13_13.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter13/ex13_13.cpp)

##14

three a.mysn


##15
yes. While not init, an object  use opterator "=" will call  copy constructor.

##16
three a.mysn, because class not define copy constructor.

##17

[ex13_17_14.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter13/ex13_17_14.cpp)

[ex13_17_15.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter13/ex13_17_15.cpp)

[ex13_17_16.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter13/ex13_17_16.cpp)





















































