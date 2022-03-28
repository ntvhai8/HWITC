// Viet chuong trình tính tính tích P=2*4*6*...*2n.
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int n;
	int P=1;
	cout<<"\nNhap n = ";
	cin>>n;
	for(int i = 1; i <= n; i++)
	{
	    	P = P * 2 * i;	    	
	}
	cout<<"\nKet qua cua tich P = "<<P<<endl;
	return 0;
}