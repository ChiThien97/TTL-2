
#include <header.h>

int main(){
	//cau 1:
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
	int a;
	cout<<"nhap canh a va b:";
	cin>>a;
	cvhv(a);
	dthv(a);
	return 0;
	
	float r;
	cout<<"Nhap ban kinh hinh tron: ";
	cin>>r;
	cout<<"Dien tich la: <<S_HinhTron(r)<<endl;
	cout<<"Chu vi la: <<C_HinhTron(r)<<endl;
}