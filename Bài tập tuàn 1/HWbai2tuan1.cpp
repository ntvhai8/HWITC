#include <iostream.h>
using namespace std;
int main(int argc, char *argv[])
{
	int n,giadien ;
	do{
	cout<<"\n Moi ban nhap so KW dien tieu thu : ";
	cin>>n;
	}while(n<0);
	if(0 <= n && n <= 100){
		giadien = n*2000;
		cout<<"\n Tien dien cua ban la :"<<giadien<<endl;
	}else if(101 <= n && n <= 200){
		giadien = 100*2000+(n-100)*2500;
	 	cout<<"\n Tien dien cua ban la :"<<giadien<<endl;
	}else if(201 <= n && n <= 300){
		giadien = 100*(2000+2500)+(n-200)*3000;
		cout<<"\n Tien dien cua ban la :"<<giadien<<endl;
	}else{
		giadien = 100*(2000+2500+3000)+ (n-300)*5000;
		cout<<"\n Tien dien cua ban la :"<<giadien<<endl;
	}
	return 0;
}