#include <iostream>
using namespace std;

int main(){
	
	cout<<"Nhap lan luot a va b";
	cin>>a;
	cin>>b;
	cout<<"Ket qua cong "<<a+b<<endl;
	cout<<"Ket qua tru "<<a-b<<endl;
	cout<<"Ket qua nhan "<<a*b<<endl;
	if(b>0){
		cout<<"Ket qua chia "<<a/b<<endl;
	}
	else cout<<"Khong the chia cho 0"<<endl;
	
	//Cv-DtHCN
	float dai, rong;
	cout<<"Nhap dai: ";
	cin>>dai;
	cout<<"Nhap rong: "
	cin>>rong;
	cout<<"Ket qua chi vi HCN: "<<cvHCN(dai,rong)<<endl;
	cout<<"Ket qua dien tich HCN: "<<dtHCN(dai,rong);
	
	return 0;
	
	
}