#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	int N;

	cin >> n1 >> n2;
	cin >> N;


	for (size_t i = 0; i < N; i++)
	{
		if (i%2==0)
		{
			cout<<n1<<" ";
			n1=n1+n2;
		}else if (i%2==1)
		{
			cout<<n2<<" ";
			n2=n2+n1;
		}
	}
}
