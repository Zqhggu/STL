#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;

template <class T>
class display
{
public:
	void operator()(const T &x)
	{
		cout << x << "";
	}
};
int main()
{
	int ia[] = { 1,5,4,3,2 };
	vector<int> iv(ia, ia + 5);
	sort(iv.begin(), iv.end(), less<int>());
	for_each(iv.begin(), iv.end(), display<int>());
	return 0;
}