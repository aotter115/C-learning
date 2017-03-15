#include <iostream>
using namespace std;


int fun();
static int j;//静态全局变量

static void fn();//声明静态函数
void main()
{
	fn();
}
void fn()//定义静态函数
{
	int n = 10;
	cout << n << endl;
}

void main(){
	extern  int i;//声明B.cpp中的i
	cout << i << endl;
	int j=fun();
	cout << i << j << endl;
	system("pause");
}


int fun() {
	static int count = 10;//静态局部变量
	return count--;
	cout << count << endl;
}


class Myclass
{
public:
	Myclass(int a, int b, int c);
	void GetSum();
private:
	int a, b, c;
	static int Sum;//声明静态数据成员
	static void GetSum(); //声明静态成员函数
};