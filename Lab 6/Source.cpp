//���-6. �������������� ������� ���������
#include <iostream>

using namespace std;

class Vector
{
	private:
		int x, y, z;
	public:
		Vector() : x(0), y(0), z(0) {};
		Vector(int xx, int yy, int zz): x(xx), y(yy), z(zz) {};
		Vector operator+(Vector &p);
		Vector operator+(int a);
		friend ostream& operator<<(ostream& os,Vector &p);
		friend istream& operator>>(istream& is, Vector &p);
};

Vector Vector::operator+(Vector &p)
{
	Vector temp;
	temp.x = x + p.x;
	temp.y = y + p.y;
	temp.z = z + p.z;
	return temp;
}

Vector Vector::operator+(int a)
{
	Vector temp;
	temp.x = x + a;
	temp.y = y + a;
	temp.z = z + a;
	return temp;
}

Vector operator+(int a, Vector p)
{
	return p + a;
}

ostream& operator<<(ostream& os,Vector &p)
{
	cout << "(" << p.x << ";" << p.y << ";" << p.z << ")";
	return os;
}

istream& operator>>(istream& is, Vector &p)
{
	cin >> p.x >> p.y >> p.z;
	return is;
}

int main()
{
	system("color f0");
	Vector vek1,vek2,vek3;

	cout << "Input vek1(x,y,z): ";
	cin >> vek1;
	cout << "Input vek2(x,y,z): ";
	cin >> vek2;

	vek3 = vek1 + vek2;
	cout << endl << "The sum of two vectors: " << vek3 << endl;

	vek3 = vek1 + 4;
	cout << endl << "(vek1 + 4) = " << vek3 << endl;

	vek3 = 2 + vek2;
	cout << endl << "(2 + vek2) = " << vek3 << endl;

	system("pause");
	return 0;
}