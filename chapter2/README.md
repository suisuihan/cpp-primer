apter02
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

