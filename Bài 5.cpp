#include<iostream>
using namespace std;
int main()
{
	int x,y,ucln,bcnn;
	cout << " nhap x va y:";
	cin >> x >> y;
	int min = x;
	if(x>y) min = y;
	for(int i=min;i>=1;i--)
	{
		if(x%i==0&&y%i==0)
		{
			ucln = i;
			break;
		}
	}
	cout<<"ucln la: "<<ucln;
	return 0;
}
