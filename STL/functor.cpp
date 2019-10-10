//---------------------------------------------------------
//
//                     仿函数
//            
//           在C++中，通过在一个类中重载括号运算符的方法
//                    使用一个函数对象而不是一个普通函数
//
//
//---------------------------------------------------------
#include <iostream>
#include <algorithm>

using namespace std;

template<typename T>
class display
{
public:
	void operator()(const T &x)          //重载括号运算符
	{
		cout << x << "";
	}
};
int main()
{
	int ia[] = { 1,2,3,4,5 };
	for_each(ia, ia + 5, display<int>());       //for_each():将指定的功能对象以一定顺序应用于范围内的每个元素，并返回该功能对象。
	system("pause");
	return 0;
}

