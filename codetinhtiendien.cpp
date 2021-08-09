#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	const int gia1=600 ;
	const int gia2=700 ;
	const int gia3=900 ;
	const int gia4=1100 ;
	int KWh;
	cout<<"Tinh tien dien\n";
	cout<<"Nhap so KWh: ";
	cin>>KWh;
	int tientra;
	if (KWh<=100)
	{
		tientra= KWh*gia1;
	}
	else if(KWh<=150)
	{
		tientra= gia1*100+(KWh-100)*gia2;	
	}
       	else if(KWh<=200)
       	{
       		tientra= 100*gia1+50*gia2+(KWh-150)*gia3;
		}
       	     else  tientra= 100*gia1+50*gia2+50*gia3+(KWh-200);
       	     cout<<"Tien phai tra: "<<tientra<<".vnd";
	return 0;
}
