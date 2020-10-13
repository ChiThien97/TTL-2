#include "header.h"

int tong()
{
	int a= random();
	int b= random();
	int x;
	cout<<"Tong cua "<< a <<"+"<< b<<" la bao nhieu?"<<endl;
	cin>>x;
	if(x==(a+b)) cout<<"Ket qua dung!!!"<<endl;
	else cout<<"SAi!!!"<<endl;
	return 0;
}