#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int so;
	cout<<"Chuong trinh chuyen doi so sang chu\n";
	cout<<"nhap vao so co 2 chu so: ";
	cin>>so;
if (so==5)
{
	cout<<"Nam";
}
else if (so>=0 && so<=99)
{

	int hangchuc= so / 10;
	int hangdonvi= so % 10;
switch(hangchuc)
{
	case 1: cout<<"Muoi";break;
	case 2: cout<<"Hai muoi";break;
	case 3: cout<<"Ba muoi";break;
	case 4: cout<<"Bon muoi";break;
	case 5: cout<<"Nam muoi";break;
	case 6: cout<<"Sau muoi";break;
	case 7: cout<<"Bay muoi";break;
	case 8: cout<<"Tam muoi";break;
	case 9: cout<<"Chin muoi";break;
}
switch(hangdonvi)
{
    case 0: cout<<" khong";break;
    case 1: cout<<" mot";break;
    case 2: cout<<" hai";break;
    case 3: cout<<" ba";break;
    case 4: cout<<" bon";break;
    case 5: cout<<" lam";break;
    case 6: cout<<" sau";break;
    case 7: cout<<" bay";break;
    case 8: cout<<" tam";break;
    case 9: cout<<" chin";break;
    
}
}

else cout<<"doc lai yeu cau de bai";
	return 0;
}
