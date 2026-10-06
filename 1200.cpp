#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	int d1 = 1, d2 = 1;
	for (int i = 0; i < s1.length(); i++)
	{
		s1[i] -= 64;
		d1 *= s1[i];
	}
	for (int i = 0; i < s2.length(); i++)
	{
		s2[i] -= 64;
		d2 *= s2[i];
	}
	if (d1 % 47 == d2 % 47)
		cout << "GO";
	else
		cout << "STAY";

	return 0;
}
