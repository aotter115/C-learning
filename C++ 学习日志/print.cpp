#include <iostream>
using namespace std;


int fun();
static int j;
void main(){
	extern  int i;
	cout << i << endl;
	int j=fun();
	cout << i << j << endl;
	system("pause");
}


int fun() {
	static int count = 10;
	return count--;
	cout << count << endl;
}