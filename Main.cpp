#include "Header.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	double x, y, z;
	cout << "������� ���������� ������� :" << endl;
	cout << "x : " ;
	cin >> x;
	cout << "y : " ;
	cin >> y;
	cout << "z : " ;
	cin >> z;
	Vector a(x,y,z);
	a.Print();
	double R;
	string color;
	cout << "������� ������ ����� : ";
	cin >> R;
	cout << "������� ���� �����(�� ����������) :";
	cin >> color;
	Circle b(R , color);
	b.Print();
	double re, im;
	cout << "Enter re and im : " << endl;
	cin >> re >> im;
	Complex h(re, im);
	h.Print(h);
}
