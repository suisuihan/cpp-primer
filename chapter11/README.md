#chapter11

##ex11_1

* map: key-value, key won't repeat.
* vector: value, can own multi same values;

##ex11_2

* list: 
* vector: dymatic array
* deque: 
* map: one to multi, dictionary
* set: get unique collection


##ex11_3

[ex11_3](https://github.com/suisuihan/cpp-primer/blob/master/chapter10/ex11_3.cpp)


##ex11_4

[ex11_4](https://github.com/suisuihan/cpp-primer/blob/master/chapter10/ex11_4.cpp)

##ex11_5
* map: key-value, key cannot repeat
* set: values, value cannot repeat

##ex11_6

* set:  values, value cannot repeat, sorted
* list: values, value can repeat, unsorted

##ex11_7

```
map<string, vector<string>> family;
```

##ex11_8

[ex11_8](https://github.com/suisuihan/cpp-primer/blob/master/chapter10/ex11_8.cpp)

##ex11_9

~~~
map<string, vector<int>> words;
~~~

##ex11_10

[ex11_10](https://github.com/suisuihan/cpp-primer/blob/master/chapter10/ex11_10.cpp)

##ex11_11
```
using cmp = bool (*)(Sales_data const&, Sales_data const&);
std::multiset<Sales_data, cmp> bookstore(cmp);
```

##ex11_12&&13

[ex11_12](https://github.com/suisuihan/cpp-primer/blob/master/chapter10/ex11_12.cpp)


##ex11_14
```
map<string, vector<pair<string, string>>> family;
```

##ex11_15
* mapped_type:  vector<int>
* key_type: const int
* pair<const key_type, vector<int>>


##ex11_16
[ex11_16](https://github.com/suisuihan/cpp-primer/blob/master/chapter10/ex11_16.cpp)

##ex11_17
back_inserter call a container.push_back() function, and set does not have push_back() function, so 
copy(v.begin(), v.end(), back_inserter(c)) is illegal.

##ex11_18

```
map<std::string, size_t>::const_iterator; //*iter type is pair<const string, size_t>
```

##ex11_19
using cmp = bool (*)(const Sales_data &lhs, const Sales_data &rhs);
std::multiset<Sales_data, cmp> bookstore(cmp);
std::multiset<Sales_data, cmp>::iterator c_it = bookstore.begin();


##ex11_20

[ex11_20](https://github.com/suisuihan/cpp-primer/blob/master/chapter10/ex11_20.cpp)


##ex11_21

count how many words read in.

##ex11_22

assume the variable is mymap:
```
pair<map<string, vector<int>>::const_iterator, bool> ret = mymap.insert(pair<"test", vector<int>{1}>);
```

##ex11_23
~~~
multimap<string, vector<string>> family;
family.insert("Jack", vector<string>{"ma", "wang"});
family.insert("Jack", vector<string>{"zhang", "li"});
~~~ 

##ex11_24

if map does not have a key 0, add pair<0, 1>, else change the value of key 0 with 1.

##ex11_25

the first element of v is 1; if v is empty, the expression is illegal.

##ex11_26

[ex11_26](https://github.com/suisuihan/cpp-primer/blob/master/chapter10/ex11_26.cpp)

##ex11_27

* count: check how many the same key in container;
* find: where the key is in container.

##ex11_28

~~~
string s;
map<string, vector<int>> mymap;
map<string, vector<int>>::iterator iter = mymap.find(s);
~~~

##ex11_29
* lower_bound, upper_bound: point to the position where the interator could insert;
* equal_range: the first and second of pair point to to the position where the interator could insert;

##ex11_30
pos is a pair<iteratorBegin, iteratorEnd>, pos.first is the iterator of multimap, and pos.first->second is value of the key.


##ex11_31

[ex11_31](https://github.com/suisuihan/cpp-primer/blob/master/chapter10/ex11_31.cpp)


##ex11_32

[ex11_32](https://github.com/suisuihan/cpp-primer/blob/master/chapter10/ex11_32.cpp)


##ex11_33

[ex11_33](https://github.com/suisuihan/cpp-primer/blob/master/chapter10/ex11_33.cpp)

##ex11_34

word may be not in map, and subscript operator will insert into the map with a default value.

##ex11_35

subscript operator insert or update a key-value;

c.insert() insert a key-value, and do nothing while the key in map;

##ex11_36

core dump!
```
terminate called after throwing an instance of 'std::runtime_error'
  what():  no rule for k
Aborted (core dumped)
```






































































































