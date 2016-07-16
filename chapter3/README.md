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

[ex3_4.cpp](https://github.com/suisuihan/cpp-primer/blob/master/chapter3/ex3_3.cpp)

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

