#pragma once
#include <cmath>


struct Vectr {
	int x;
	int y;

	Vectr(int xex, int yex) {
		x = xex;
		y = yex;
	}

	Vectr() {
		x = 0;
		y = 0;
	}

	bool operator==(Vectr sec) { // ������������ ������� equal, ��� ���� �� ������� ��� ��� ���������
		if (x == sec.x and y == sec.y) {
			return true;
		}
		return false;
	}

	double distance_to(Vectr sec) {
		return sqrt(pow(x - sec.x, 2) + pow(y - sec.y, 2));
	}


	static int angle(Vectr shared, Vectr fi, Vectr sec) { //� ��� ������� ��� ��� ������� ������, �� � ����������� ������ ���� ����� �� �����������
		// � �� ����� ����������, � � ��������� ������ �� �����
	}

	// � ���������� ��������� �� �������: ��� ����� ������ ������ ��� �����?
	// ����� ��������� ������� ��� �����, ��������� ��� �������� 
};