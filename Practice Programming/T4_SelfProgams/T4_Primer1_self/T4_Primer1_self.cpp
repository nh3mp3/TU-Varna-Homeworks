// ������������ �� �������� � �������
//
// ������� ��������� �� ��������� �� ���� ������ ��������� �� �����������,
// �������� � ���������, ����� � ���� ����� ���� � � ���������� int
// 
// ��������: ������ �������� ��������
// ��. � 61662148
// ��. ��� 2�

#include <iostream>

using std::cout;
using std::endl;

// �������� �� ��������� ������ ��������� �� �������� �� ������������
struct Integer {
	// ���������� �� �������
	int value;

	// ������������
	Integer(int i):
		value(i) { }

	Integer():
		value(0) { }

	// �������� �� ������� �� ���������� �� ������
	inline int operator()() const {
		return this->value;
	}

	// ��������� �� �������� �� ��� ������ ��� ����� � ���������� int (��������� � � ��� �����)
	inline friend Integer operator+(Integer const &a, Integer const &b) {
		return Integer(a.value + b.value);
	}

	inline friend Integer operator+(Integer const &a, int const &b) {
		return Integer(a.value + b);
	}

	// ��������� �� ��������� �� ��� ������ ��� ����� � ���������� int (��������� � � ��� �����)
	inline friend Integer operator-(Integer const &a, Integer const &b) {
		return Integer(a.value - b.value);
	}

	inline friend Integer operator-(Integer const &a, int const &b) {
		return Integer(a.value - b);
	}

	// ��������� �� �������� �� ��� ������ ��� ����� � ���������� int (���� �� ������� ������� �����)
	inline Integer& operator+=(Integer const &a) {
		this->value += a.value;
		return *this;
	}

	inline Integer& operator+=(int const &a) {
		this->value += a;
		return *this;
	}

	// ��������� �� ��������� �� ��� ������ ��� ����� � ���������� int (���� �� ������� ������� �����)
	inline Integer& operator-=(Integer const &a) {
		this->value -= a.value;
		return *this;
	}

	inline Integer& operator-=(int const &a) {
		this->value -= a;
		return *this;
	}

	// ��������� �� ����������� �� (���������� ��) ���� ����� ��� �� ���������� int
	inline Integer& operator=(int const &a) {
		this->value = a;
		return *this;
	}

	inline Integer& operator=(Integer const &a) {
		this->value = a.value;
		return *this;
	}
};

int main() {
	// �������
	
	// �� ������������, ���������� � 0
	Integer i;
	cout << "Integer i" << endl;
	cout << "i() = " << i() << endl << endl;

	// �������� � �����������
	i += 10;
	cout << "i += 10" << endl;
	cout << "i() = " << i() << endl << endl;

	// ��������� � �����������
	i -= 9;
	cout << "i -= 9" << endl;
	cout << "i() = " << i() << endl << endl;

	// �����������
	i = 8;
	cout << "i = 8" << endl;
	cout << "i() = " << i() << endl << endl;

	// �������� �� ��� ������ � ����������� �� ��������� ����
	i = Integer(10) + Integer(3);
	cout << "i = Integer(10) + Integer(3)" << endl;
	cout << "i() = " << i() << endl << endl;

	// �������� �� ����� � ���������� int � ����������� �� ��������� ����
	i = 8 + Integer(3);
	cout << "i = 8 + Integer(3)" << endl;
	cout << "i() = " << i() << endl << endl;

	// ��������� �� ����� � ���������� int � ����������� �� ��������� ����
	i = 6 - Integer(4);
	cout << "i = 6 - Integer(4)" << endl;
	cout << "i() = " << i() << endl << endl;

	return 0;
}
