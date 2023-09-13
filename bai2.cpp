#include<iostream>
#include<iomanip>

using namespace std;
class Diem
{
	public:
	double x, y;
	void Nhapdiem()
	{
		cin >> x >> y;
	}
};
class Duong
{
	public:
	double a, b; //phap tuyen cua AB
	void ptdt(Diem A, Diem B)
	{
		a = (A.y - B.y) / (A.x - B.x ) ;
		b = B.y - a * B.x;
	}

};
int main()
{
	double u, v;
    Diem A,B,C,D;
    A.Nhapdiem();
    B.Nhapdiem();
    C.Nhapdiem();
    D.Nhapdiem();
    Duong AB,CD;
    AB.ptdt(A, B);
    CD.ptdt(C, D);
    if(AB.a == CD.a && AB.b == CD.b)
	{
		cout << "MANY";
	}
	else if(AB.a == CD.a && AB.b != CD.b )
	{
		cout << "NO";
	}
	else 
	{
		u = (CD.b - AB.b) / (AB.a - CD.a);
		v = AB.a * u + AB.b;
		cout << setprecision(2) << fixed << u << " " << v;
	}

    return 0;
}
