
#include "header.h"

int main(){
	//cau 1:
	float a, b;
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

	//cau 2:
	float i;
	cout<<"nhap canh i:";
	cin>>i;
	cout<<"chu vi hv" <<cvhv(i);
	cout << "dien tich hv" << dthv(i);
	
	
	//Cv-DtHCN
	float dai, rong;
	cout<<"Nhap dai: ";
	cin>>dai;
	cout << "Nhap rong: ";
	cin>>rong;
	cout<<"Ket qua chi vi HCN: "<<cvHCN(dai,rong)<<endl;
	cout<<"Ket qua dien tich HCN: "<<dtHCN(dai,rong);
	
	
	

	float r;
	cout<<"Nhap ban kinh hinh tron: ";
	cin>>r;
	cout<<"Dien tich la: "<<S_HinhTron(r)<<endl;
	cout<<"Chu vi la: "<<C_HinhTron(r)<<endl;

	system("pause");
	return 0;
}