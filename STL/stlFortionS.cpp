//----------------------------------------------------------------------------------------------------
//                            算术类仿函数
//--------------------------------------------------------------------------------------------------------
#include <iostream>
#include <numeric>
#include <functional>
#include <vector>

using namespace std;

int main()
{
	int ia[] = { 1,2,3,4,5 };
	vector<int> iv(ia, ia + 4);
	cout << accumulate(iv.begin(), iv.end(), 1, multiplies<int>()) << endl;      //乘：multiplies<T>
	cout << multiplies<int>()(3, 5) << endl;
	cout << accumulate(iv.begin(), iv.end(), 1, divides<int>()) << endl;         //除：divides<T>
	cout << divides<int>()(4,2) << endl;
	cout << accumulate(iv.begin(), iv.end(), 3, minus<int>()) << endl;           //减：minus<T>
	cout << minus<int>()(2, 4) << endl;
	modulus<int> modulusObj;                                                     //模取：modulus<T>
	cout << modulusObj(3, 5) << endl;

	//cout << divides<4, 2> << endl;
	return 0;
}
