//---------------------------------------------------------
//
//                     �º���
//            
//           ��C++�У�ͨ����һ��������������������ķ���
//                    ʹ��һ���������������һ����ͨ����
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
	void operator()(const T &x)          //�������������
	{
		cout << x << "";
	}
};
int main()
{
	int ia[] = { 1,2,3,4,5 };
	for_each(ia, ia + 5, display<int>());       //for_each():��ָ���Ĺ��ܶ�����һ��˳��Ӧ���ڷ�Χ�ڵ�ÿ��Ԫ�أ������ظù��ܶ���
	system("pause");
	return 0;
}

