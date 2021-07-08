#include <iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int sumeven=0,sumodd=0,s=0;
	for( int i=1;i<=a;i++)
	{
		if(i%2==0)
		{
			sumeven=sumeven+i;		
		}
		if(i%2!=0)
		{
			sumodd=sumodd+i;
		}
		s=s+i;
		//cout<<i<<endl;		
	}
	cout<<"sum of even numbers is:"<<sumeven<<endl;
	cout<<"sum of odd numbers is:"<<sumodd<<endl;
	cout<<" total sum:"<<s<<endl;
	return 0;
}

