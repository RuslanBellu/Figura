#include <iostream>
#include <windows.h>
using namespace std;
class Math
{
public:
	float root;
	float root1;
	float root2;
	Math(float t, float t1, float t2)
	{
		root = t;
		root1 = t1;
		root2 = t2;
	}
	virtual void Print() = 0;
};

class rectangle : public Math
{
public:
	rectangle(float root, float root1) : Math(root, root1, root2)
	{};
	virtual void Print()
	{
		float w;
		w = root * root1;
		cout << "\n\n";
		cout << "������� �������������� �� ��������� " << root << " � " << root1 << " = " << w << "\n";
		cout << "\n\n";
	}
};

class circle : public Math
{
public:
	circle(float root2) : Math(root, root1, root2)
	{};
	virtual void Print()
	{
		float e;
		e = 3.14*root2*root2;
		cout << "\n\n";
		cout << "������� ����� � �������� " << root2 << " = " << e << "\n";
		cout << "\n\n";
	}
};

class right_triangle : public Math
{
public:
	right_triangle(float root, float root1) : Math(root, root1, root2)
	{};
	virtual void Print()
	{
		cout << "\n\n";
		float o;
		o = root * root1 / 2;
		cout << "������� �������������� ������������ � �������� " << root << " � " << root1 << " = " << o << "\n";
		cout << "\n\n";
	}
};

class Trapeze : public Math
{
public:
	Trapeze(float root, float root1, float root2) : Math(root, root1, root2)
	{};
	virtual void Print()
	{
		cout << "\n\n";
		float g;
		g = (root + root1) / 2 * root2;
		cout << "������� �������� �� ����������� " << root << " � " << root1 << " = " << g << "\n";
		cout << "\n\n";
	}
};

void main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "������� ����������� ������� ����� � ����������� �������� - �������. ������� \n";
	cout << "����������� ������: �������������, ����, ������������� �����������, \n";
	cout << "�������� �� ������ ��������� �������. ��� �������� ���������� ������\n";
	cout << "������ �� ����������� �����, ������� ������������� ������ ��������� \n";
	cout << "��������. \n";
	system("pause");
	system("cls");
	float a, a1, b, c, c1, d, d1, d2;

	cout << "��������� ������ ��������������\n";
	cout << "������� 1 �������\n";
	cin >> a;
	cout << "������� 2 �������\n";
	cin >> a1;

	cout << "��������� ������ �����\n";
	cout << "������� ������ �����\n";
	cin >> b;

	cout << "��������� ������ �������������� ������������\n";
	cout << "������� 1 �����\n";
	cin >> c;
	cout << "������� 2 �����\n";
	cin >> c1;

	cout << "��������� ������ ��������\n";
	cout << "������� 1 ���������\n";
	cin >> d;
	cout << "������� 2 ���������\n";
	cin >> d1;
	cout << "������� ������ ��������\n";
	cin >> d2;
	Math* equation[4] = { new rectangle(a,a1), new circle(b),new right_triangle(c,c1),new Trapeze(d,d1,d2) };
	for (int k = 0; k < 4; k++)
		equation[k]->Print();
	system("pause");
}