#chapter02
##2.1
* int、long、long long 和 short 的不同他们的长度不同；
* 无符号和有符号的类型是有符号高位表示符号；
* float和double的不同在于第一精度不同，第二长度不同；

##2.2
建议用double类型。首先是double的精度更高，其次按照cpp primer 5th的说法，双精度和单精度浮点数的运算代价相差无几，在某些机器上甚至更快。

##2.3
读程序写结果：

```
unsigned u = 10, u2 = 42;
std::cout << u2 - u << std::endl;
std::cout << u - u2 << std::endl;
int i = 10, i2 = 42;
std::cout << i2 - i << std::endl;
std::cout << i - i2 << std::endl;
std::cout << i - u << std::endl;
std::cout << u - i << std::endl;
```
代码如下：
```
#include <iostream>
using namespace std;

int main(int argc, char** argv){

    unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl;
	std::cout << u - u2 << std::endl;
	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl;
	std::cout << i - i2 << std::endl;
	std::cout << i - u << std::endl;
	std::cout << u - i << std::endl;
}
```
输出结果如下（g++5.1）：
```
32
4294967264
32
-32
0
0
```
结果说明：
u2-u 结果本身为正数，正常；
u-u2 结果为负，强制转换后结果为正；
i2-i，i-i2 结果为int类型，正常输出；
i-u，u-i结果为unsigned int，无论哪种情况均可表示0.

##2.4
    见2.3
    
##2.5
(a)

* 'a'表示普通的字符
* L'a'表示用宽字符(wchar_t)存储的字符
* "a"表示字符串
* L"a"表示用宽字符存储的字符串

(b)

	* 10，整型字面值常量
	* 10u，无符号整型字面值常量
	* 10L，long类型字面值常量
	* 10uL，unsigned long类型字面值常量
	* 012，八进制整型常量
	* 0xC，十六进制整型常量

(C)

	* 3.14, 浮点数
	* 3.14f, 单精度浮点数
	* 3.14L，long double浮点数

(d)

	* 10, 整型
	* 10u, 无符号整型
	* 10., 浮点型
	* 10e-2, 科学记数法浮点型
注意：浮点型字面值默认是double

##2.6
		两者之间不同，一个使用十进制，一个使用八进制，同时09属于非法字符，因为八进制没有9

##2.7
	（a）中\145表示'e'，\012表示换行符。字符串中的'\'后面的数字默认是八进制，除非是'\x'开始；
（b）中3.14e1L表示long double类型浮点数；1024f表示float类型浮点数；3.14L表示long double类型浮点数。

##2.8

see ex2_8.cpp.

##2.9

* (a) 错，cin 后面直接跟变量，而不是声明变量。修改为：

```
    int input_value;
    std::cin >> input_value;
```
* (b) 错，{}表示列表初始化，在c++11中，如果列表初始化时初始值存在丢失的风险时，编译器会报错，修改为：
```
int i = 3.14;
或者
int i(3.14);
```
* (c) 错，wage必须先声明；
* (d) 对，最终i值为3。

##2.10

```
#include <iostream>
using namespace std;

std::string global_str;
int global_int;
int main(int argc, char** argv){
    int local_int;
	std::string local_str;
	cout << "global_str = " << global_str << endl;
	cout << "global_int = " << global_int << endl;
	cout << "local_str = " << local_str << endl;
	cout << "local_int = " << local_int << endl;
}
```
输出结果为：
```
global_str =
global_int = 0
local_str =
local_int = 0
```
解释：
* global_str 为全局对象变量，使用默认初始化值，string默认初始化为空字符串；
* global_int 为全局内置变量，初始化为0；
* local_str 在函数体内，是局部对象变量，使用默认初始化值，string默认初始化为空字符串；
* local_int 在函数体内，是局部内置变量，**不被初始化，值不确定**。

实际上，如果g++开启 -Wall 参数，就会看到warning：
```
$ g++ -Wall -o ex2_10 ex2_10.cpp
ex2_10.cpp: In function ‘int main(int, char**)’:
ex2_10.cpp:12:28: warning: ‘local_int’ may be used uninitialized in this function [-Wmaybe-uninitialized]
  cout << "local_int = " << local_int << endl;
                              ^
```
**未经初始化的内置类型可能会引发运行时故障**

##2.11  
(a) 定义；  
(b) 定义；  
(c) 声明；    

##2.12
* (a) 非法，double为关键字
* (b) 合法
* (c) 非法，c++标识符只能由字母、数字和下划线组成
* (d) 非法，不能以数字开头
* (e) 合法  

##2.13
__首先注意使用"::"表示使用全局变量，覆盖默认的作用域规则__，但建议不要定义可能重名的局部变量。
i在函数体内定义，覆盖全局变量，此时i=100
```
j=100
```

##2.14
合法，输出：
```
100 45
```
for 循环中的i为局部变量；sum一直为全局变量

##2.15
(b)不合法，引用不能绑定在字面值上；(d)不合法，引用必须在定义的时候初始化。
##2.16
* (a) 合法，r2为d的引用，结果d=3.14169；
* (b) 合法，结果d=0；
* (c) 合法，但有从double到int的强制转换，转换过程中精度损失；
* (d) 合法， 但有从double到int的强制转换，转换过程中精度损失。

##2.17
```
10 10
```
ri 为 i 的引用，ri 值被修改即是 i 的值被修改。

##2.18

**指针有几个知识点需要注意：**
* C++11 有一个新的标准，可以使用nullptr，可以用其初始化指针；
* 之前可以用NULL的预处理变量来初始化指针，现在的程序尽量用nullptr；
* 建议初始化所有指针，不确定的情况下初始化为nullptr；
* void*是一种特殊的指针，可用于存放任意对象的地址。可以用来和别的指针比较、作为函数的输入或输出、或者赋给另外一个void*指针。不能直接操作void*指针所指向的对象，
因为并不知道该对象是什么类型。

对于2.18章节来说，示例代码如下：
```
#include <iostream>
using namespace std;

int main(int argc, char** argv){
	int local_int=0;
	int *ptr_int=&local_int;
	int &ref_int=local_int;
	*ptr_int = 1;
	cout << "*ptr_int=" << *ptr_int << " &ref_int=" << ref_int << endl;
	ref_int = 2;
	cout << "*ptr_int=" << *ptr_int << " &ref_int=" << ref_int << endl;
}
```
输出如下：
```
*ptr_int=1 &ref_int=1
*ptr_int=2 &ref_int=2
```

##2.19
主要区别：
* 指针指向的是一个对象的地址，可以采用解引用的方式读取改地址存储的数据；
* 引用是变量的别名；指针可以只声明不初始化，引用必须初始化；
* 指针可以修改指向其他地址，引用初始化后不能重新引向另一个变量。

##2.20
这段代码是求i的平方（42*42）

##2.21
(a)非法，指针类型和指向对象类型必须相同；  
(b)合法，但不是作者本意，这样ip被初始化为0，而不是i的地址；  
(c)合法。

#2.22
if(p) 判断p指针本身是否是空指针，不指向任何对象；  
if(*p) 判断p指针指向的int是否为0。

##2.23
不能判定指针是否指向一个合法对象。

##2.24
p指向int类型，lp指向long类型，而i为int类型，所以p合法，lp不合法。

##2.25
(a)ip 为 in类型指针，i为int类型变量，r为i的引用；  
(b)i为int类型变量， ip为int类型空指针；
(c)ip1为int类型指针，ip2为int类型变量。

##2.26#

(a) 非法，未初始化；  
(b) 合法；  
(c) 合法；  
(d) 非法，sz为const类型，不能改变值。

##2.27

(a) 非法，r需要绑定一个对象；  
(b) 合法；  
(c) 合法，r为const类型应用，可以绑定字面值；  
(d) 合法，常量指针指向常量；  
(e) 合法；  
(f) 非法，常量引用只有const int &r=object的写法；
(g) 合法。

##2.28  

(a) 非法，cp需要初始化；  
(b) 非法，p2需要初始化；  
(c) 非法，ic为const int，需要初始化；  
(d) 非法，常量指针需要初始化；  
(e) 合法，p是指向常量的指针；

##2.29

(a) 合法，i为变量，可以被const int赋值；  
(b) 非法，p3为一个指针，指向const int；  
(c) 非法，ic为const int，p1需要和ic类型保持一致；  
(d) 合法；  
(e) 非法，p1未初始化；  
(f) 非法，ic为const int，不能修改。

##2.30

v2为顶层const，p2为底层const，p3 既是顶层const也是底层const，r2为底层const。

##2.31

* r1 = v2 合法，r1为v1的引用，修改后v1=0；
* p1 = p2 非法，p2为底层const，p1不是；p2 = p1，合法，可以将int* 转换为const int*；
* p1 = p3 非法，p3为底层const，p1不是；p2 = p3，合法，p2为底层const；
















