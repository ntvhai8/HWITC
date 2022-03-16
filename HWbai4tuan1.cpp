//Viet chuong trình ve tam giac sao co chieu cao n.
//Ví du: n=4
//****
//***
//**
//*
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int n;
	cout<<"\nNhap n = ";
    cin>> n;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			cout<< j ;	
		}
	cout<<"\n";
	}
	return 0;
}