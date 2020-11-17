#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string X,Y;
	cout<<"ENTER TWO STRINGS ";
	cin>>X>>Y;
	int m, n;
	if ((m = Y.length()) > (n = X.length()))
		cout<<"NOT POSSIBLE";
	for (int i = 0; i <= n - m; i++)
	{
		if (is_permutation(X.begin() + i, X.begin() + i + m, Y.begin()))
		{
			cout << "substring " << X.substr(i, m) <<
					" present at index " << i << '\n';
		}
	}
	return 0;
}
