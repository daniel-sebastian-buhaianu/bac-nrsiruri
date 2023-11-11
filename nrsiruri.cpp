#include <fstream>
#include <iostream>
using namespace std;
ifstream fin("bac.txt");
int fa[100], fb[100];
int main()
{
	int n, m, i, x, nrs=1000000;
	fin >> n >> m;
	for (i = 0; i < n; i++)
	{
		fin >> x;
		fa[x]++;
	}
	for (i = 0; i < m; i++)
	{
		fin >> x;
		fb[x]++;
	}
	fin.close();
	for (i = 0; i < 100; i++)
		if (fb[i])
			if (fa[i]/fb[i] < nrs)
				nrs = fa[i]/fb[i];
	cout << nrs;
	return 0;
}
