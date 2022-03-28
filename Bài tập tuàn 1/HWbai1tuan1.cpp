#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int n;
	do{
		cout<<"\n Please enter number:";cin>>n;
	}while(0>=n||n>=8);		
    if(n==1){
    	cout<<"\n This is Monday"<<endl;
    }else if(n==2){
    	cout<<"\n This is Tuesday"<<endl;
    }else if(n==3){
    	cout<<"\n This is Wednesday"<<endl;
    }else if(n==4){
    	cout<<"\n This is Thursday"<<endl;
    }else if(n==5){
    	cout<<"\n This is Friday"<<endl;	    		    
    }else if(n==6){
   	    cout<<"\n This is Saturday"<<endl;
    }else{
    	cout<<"\n This is Sunday"<<endl;
    }
	return 0;
}