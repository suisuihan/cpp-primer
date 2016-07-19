#chapter3


##3.1

chapter 1.4.1 code is [1.9](https://github.com/suisuihan/cpp-primer/blob/master/chapter3/ex3_1_1.9.cpp),
[1.10](https://github.com/suisuihan/cpp-primer/blob/master/chapter3/ex3_1_1.10.cpp),[1.11](https://github.com/suisuihan/cpp-primer/blob/master/chapter3/ex3_1_1.11.cpp)

chapter 2.6.2 skip out  ^_^

##3.2

get input line by line [ex3_2_1.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter3/ex3_2_1.cpp)  
get input string word by word [ex3_2_2.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter3/ex3_2_2.cpp)

##3.3

* for code like *is>>s*, the string s is seprated by whitespace, and is get the first word;
* for code like getline(is, s), the is get the whole line.
~~~
for example:

cin >> s;
input "  my godness  "
s is "my"

getline(cin, s);
input "  my godness  "
s is "  my godness  "
~~~
the example is exercise3_2.

##3.4

[ex3_4.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter3/ex3_4.cpp)

##3.5

the code files are
[ex3_5_1.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter3/ex3_5_1.cpp)
[ex3_5_2.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter3/ex3_5_2.cpp)

##3.6

[ex3_6.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter3/ex3_6.cpp)

##3.7
if loop control variable is char instead of reference char, for code like:

```
for(auto c: s)
    c = 'X';
```

c is a copy of the character in string, and c = 'X' has nothing relationship with string s.

##3.8

[ex3_8_1.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter3/ex3_8_1.cpp)
[ex3_8_2.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter3/ex3_8_2.cpp)

I like the range for expression, it looks more simple than others;

##3.9

the code attends to print the first character in s. While s is empty, the behavior is undefined.

##3.10
[ex3_10.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter3/ex3_10.cpp)

##3.11
it depends what the function body wants to do. If it tries to change c, it is illegal.

c is const char reference;

##3.12

~~~
vector<vector<int>> ivec;         // legal, type is vector<int>;
vector<string> svec = ivec;       // illegal, tpye ivec is not string;
vector<string> svec(10, "null");  // legal, svec has 10 string, initialize by string "null". 
~~~

##3.13

~~~
(a) v1 has 0 item;
(b) v2 has 10 items, each is 0;
(c) v3 has 10 items, each is 42;
(d) v4 has 1 items, each is 10;
(e) v5 has 2 items, first is 10, second is 42;
(f) v6 has 10 strings, each is "";
(g) v7 has 10 strings, each is "hi".
~~~

##3.14

[ex3_14.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter3/ex3_14.cpp)

##3.15

[ex3_15.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter3/ex3_15.cpp)

##3.16

[ex3_16.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter3/ex3_16.cpp)

##3.17

[ex3_17.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter3/ex3_17.cpp)

##3.18

Illegal. Vector does not define capacity.
~~~
vector<int> ivec{42};
~~~

##3.19

~~~
* vector<int> vec{42,42,42,42,42,42,42,42,42,42};
* vector<int> vec(10, 42);
* vector<int> vec;
  for(int i(0); i< 10;i++)
      vec.push_back(42);
~~~
I like second.

##3.20

[ex3_20.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter3/ex3_20.cpp)


##3.21

[ex3_21.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter3/ex3_21.cpp)

##3.22

~~~
for(auto &s: text){
    for(auto &c: s){
        if(isalpha(c))
            c = toupper(c);
    }
    cout << s << " ";
}
~~~

##3.23

[ex3_23.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter3/ex3_23.cpp)


##3.24


[ex3_24.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter3/ex3_24.cpp)

##3.25

[ex3_25.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter3/ex3_25.cpp)


##3.26

because the is no a syntax like iterator +/- iterator.


#3.27

(a)illegal, buf_size should be const expression. (c) illegal, the return value type should bi constexpr. (d) illegal, the size should be 12.

#3.28

* array sa's value is empty. The global object uses default-initialized;
* array ia's value is zero. The global basic variable uses default-initialized;
* array sa2's value is empty. The local object used default-initialized;
* array ia2's value is zero. The local basic variable is undefined.

##3.29

* array's length is fixed.
* array's operations are less than vector's.

##3.30

when ix = 10, the ia[10] is undefined.

##3.31

~~~
int ia[10];
for(size_t index=0; index<10; index++)
    ia[index] = index;
~~~

##3.32


[ex3_32.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter3/ex3_32.cpp)


##3.33

if scores is undefined, it's value may not be zero.

#3.34 

p1 and p2 point to the same address. Any value is legal.

##3.35

[ex3_35.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter3/ex3_35.cpp)

##3.36


[ex3_36.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter3/ex3_36.cpp)


##3.37 

ca does not contain '\0', so the while(*p) would not stop until it meets another '\0' .

##3.38

when point a plus point b, b will turn to an number, no one know where the result will point to.

##3.39

[ex3_39.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter3/ex3_39.cpp)

##3.40
[ex3_40.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter3/ex3_40.cpp)



##3.41
[ex3_41.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter3/ex3_41.cpp)


##3.42
[ex3_42.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter3/ex3_42.cpp)




