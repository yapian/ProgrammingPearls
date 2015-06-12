#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

const int RAND_MAXNUM = 100;

int bigRand()
{
	return RAND_MAXNUM*rand() + rand();
}

int randIn(int l, int u)
{
	return l + bigRand() % (u - l + 1);
}

void genshuf(int m, int n)
{
	vector<int> vec(n);
	for (int i = 0; i < vec.size(); i++)
		vec[i] = i;
	for (int i = 0; i < m; i++)
	{
		int j = randIn(i, n - 1);
		swap(vec[j], vec[i]);
	}
	sort(vec.begin(), vec.begin() + m);
	for (int i = 0; i < m; i++)
		cout << vec[i] << ' ';
	cout << endl;
}

int main()
{
	genshuf(22, 100);
}
