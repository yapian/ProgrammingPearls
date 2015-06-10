#include <iostream>
#include <bitset>
#include <string>
using namespace std;
const unsigned int MAX = 20;
int main()
{
	int arr[10] = { 5, 1, 2, 13, 7, 10, 0, 20, 16, 9 };
	bitset<MAX+1> bit;

	for (int i = 0; i < 10; i++)
	{
		bit.set(arr[i]); // 或 bit.flip(arr[i]) 也可
	}
	for (int i = 0; i < MAX+1; i++)
	{
		if (bit.test(i))
			cout << i << " ";
	}
	cout << endl;
	cout << sizeof(bit) << endl;
	cout << bit << endl;
}
