#include <iostream>
using namespace std;

extern int i = 0;//定义外部变量i
static int j = 0;//同样可以定义j说明static有隐藏特性，防止在模块外被使用
