#include <iostream>
using namespace std;


int fun();
static int j;//��̬ȫ�ֱ���

static void fn();//������̬����
void main()
{
	fn();
}
void fn()//���徲̬����
{
	int n = 10;
	cout << n << endl;
}

void main(){
	extern  int i;//����B.cpp�е�i
	cout << i << endl;
	int j=fun();
	cout << i << j << endl;
	system("pause");
}


int fun() {
	static int count = 10;//��̬�ֲ�����
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
	static int Sum;//������̬���ݳ�Ա
	static void GetSum(); //������̬��Ա����
};