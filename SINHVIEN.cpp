#include<iostream>
#include<stdio.h>
using namespace std; 
 struct sinhvien
{
	string HoTen;
	int NamSinh;
	double DTB;
};
void nhap(sinhvien a[],int &i){
	i=0;
	
	while(cin>>a[i].HoTen){
		fflush(stdin); 
		
	 	cin>>a[i].NamSinh;
	 	
	 	cin>>a[i].DTB; 
 		 
	 	i++; 
	}
	
}
void xuatmax(sinhvien a[],int i){
	cout<<"Diem cao nhat lop:"<<"\n";
	// tim max  
	double max=a[0].DTB;
	for(int k=1;k<i;k++){
		if(max<a[k].DTB)
			max=a[k].DTB;
	}
	// in max 
	int r=1; 
	for(int n=0;n<i;n++){ 
		if(a[n].DTB==max){
			cout<<"#"<<r<<"\n"; 
			cout<<a[n].HoTen<<" "<<a[n].NamSinh<<" "<<a[n].DTB<<"\n";
			r++; 
		}
	}
}
void xuatmin(sinhvien a[],int i){
	cout<<"Diem thap nhat lop:"<<"\n";
	// tim min  
	double min=a[0].DTB;
	for(int k=1;k<i;k++){
		if(min>a[k].DTB)
			min=a[k].DTB;
	}
	// in min 
	int r=1; 
	for(int n=0;n<i;n++){ 
		if(a[n].DTB==min){
			cout<<"#"<<r<<"\n"; 
			cout<<a[n].HoTen<<" "<<a[n].NamSinh<<" "<<a[n].DTB<<"\n";
			r++; 
		}
	}
}
int main(){
	sinhvien a[100];
	int i; 
	nhap(a,i);
	xuatmax(a,i);
	xuatmin(a,i);
	return 0;
}