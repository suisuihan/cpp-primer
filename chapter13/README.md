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