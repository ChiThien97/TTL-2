#include "header.h"

int Hieu()
{
	int a= random();
	int b= random();
	int x;
	cout<<"Hieu cua "<< a <<"-"<< b<<" la bao nhieu?"<<endl;
	cin>>x;
	if(x==(a-b)) cout<<"Ket qua dung!!!"<<endl;
	else cout<<"SAi!!!"<<endl;
	return 0;
}