#include <iostream>
 using namespace::std;
main()
{int a[100],n,i,j,d;
 cout<<"Array size: ";
    cin>>%d,&n;
        cout<<"Elements: "
 for(i=0;i<n;i++)
    {cin>>%d,&a[i];}
	for (int i = 0; i < n; i++)
	{for (int j = 0; j < n; j++)
    {if (a[j] > a[i])
    {
        int tmp = a[i];
	a[i] = a[j];
	a[j] = tmp;}}}
        cout<<"\n\nDiscending : ";
	for (int i = 0; i < n; i++)
	{cout<<" %d ", a[i]);}
	for (int i = 0; i < n; i++)
	{for (int j = 0; j < n; j++)
	{if (a[j] < a[i])
    {
        int tmp = a[i];
	a[i] = a[j];
	a[j] = tmp}}}
		cout<<" %d ", a[i];
	}
	return 0;
}



