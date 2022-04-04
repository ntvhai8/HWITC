#include <iostream>
#include<string.h>
using namespace std;
class Khachhang{
	private:
		char ht[30];
		struct ngaysinh{
			int ngay;
			int thang;
			int nam;
		}NS;
		char cmt[10];
		char k[50];
	public:
		void nhap(){
			cout<<"\nNhap thong tin cua khach hang:"<<endl;
			cout<<"\nNhap ho ten: ";
			fflush(stdin);
			gets(ht);
			cout<<"\nNhap ngay sinh: "<<endl<<"Nhap ngay: ";
			cin>>NS.ngay;
			cout<<"\nNhap thang: ";
			cin>>NS.thang;
			cout<<"\nNhap nam: ";
			cin>>NS.nam;
			fflush(stdin);
			cout<<"\nNhap so chung minh nhan dan: ";
			gets(cmt);
			cout<<"\nNhap ho khau: ";
			gets(k);
			fflush(stdin);
		}
		void xuat(){
			cout<<"\nThong tin cua khach hang: \n";
			cout<<"\nHo ten: "<<ht<<endl;
			cout<<"\nNgay sinh: "<<NS.ngay<<"/"<<NS.thang<<"/"<<NS.nam<<endl;
			cout<<"\nSo chung minh thu: "<<cmt<<endl;
			cout<<"\nHo khau: "<<k<<endl;
		}
	int thang(){
		return NS.thang;
	}
	int lay(){
		return strlen(ht);
	}
	char layx(int i){
		return ht[i];
	}
};
int main(){
	int chon,n=1;
	Khachhang x[1000];
	do{
	cout<<" 1:Nhap 1 khach hang "<<endl;
	cout<<" 2:Nhap n khach hang "<<endl;
	cout<<" 3:Tim khach hang sinh thang 12 "<<endl;
	cout<<" 4:Sap xep theo ten"<<endl;
	cout<<" 5:Exit"<<endl;
	cin>>chon;
		if(chon==1){
    	    Khachhang y;
	        y.nhap();
	        y.xuat();}
	    else if(chon==2){
	        cout<<"\n Nhap so luong khach hang ";
	        cin>>n;
	        for(int i=0;i<n;i++){
	        cout<<"\nNhap khach hang thu "<<i+1<<endl;
	        x[i].nhap();
}
            system("cls");
            for(int i=0;i<n;i++){
            cout<<"_______________________________________________"<<endl;
	        x[i].xuat();}}
	    else if(chon==3){
	    	for(int i=0;i<n;i++){
			if(x[i].thang()==12){
				x[i].xuat();
			}
			}
		}
		else if(chon==4){
			for(int i=0;i<n;i++){
				for(int j=i+1;j<n;j++){
					for(int z=0;z<x[i].lay();z++){
						if(x[i].layx(z)>x[j].layx(z)){
							Khachhang temp=x[i];
							x[i]=x[j];
							x[j]=temp;
						}
					}
				}
			}
			for(int i=0;i<n;i++){
				x[i].xuat();
			}
		}
}while(chon!=5);
	return 0;
}
