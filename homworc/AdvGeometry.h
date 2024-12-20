#pragma once
#include "Geometry.h"
#include <vector>

#define PI = 3.14159265359

struct Rectangle {
	Vectr left;
	Vectr right;

	Rectangle(Vectr rt, Vectr lf) {
		left = lf;
		right = rt;
	}

	bool is_valide(){
		if (left.x == right.x or left.y == right.y) {
			return false;
		}
		return true;
	}

	static Rectangle creato(Vectr un, Vectr nu) {
		return Rectangle(un, nu);
	}

	double area() {
		return abs(left.x - right.x) * abs(left.y - right.y);
	}

	double perimeter() {
		return abs((left.x - right.x) + abs(left.y - right.y)*2);
	}

};

struct Tri {
	Vectr pointA;
	Vectr pointB;
	Vectr pointC;

	int sideA;
	int sideB;
	int sideC;

	Tri(Vectr a, Vectr b, Vectr c) {
		pointA = a;
		pointB = b;
		pointC = c;

		int sideA = a.distance_to(b);
		int sideB = b.distance_to(c);
		int sideC = c.distance_to(a);
	}


	bool is_valido() {
		int cheating[3] = {sideA, sideB, sideC};
		for (int i = 0; i < 3; i++) {
			if (cheating[i] >= cheating[i + 1 >= 3 ? i + 1 - 3 : i + 1] + cheating[i + 2 >= 3 ? i + 2 - 3 : i + 2]) {
				return false;
			}
		}
		return true;
		
	}

	static Tri creato(Vectr a, Vectr b, Vectr c) {
		return Tri(a, b, c);
	}

	int permeter() {
		return sideA + sideB + sideC;
	}

	double areal() {
		int per = permeter();
		return sqrt((per / 2) * (per - sideA) * (per - sideB) * (per - sideC));
	}
};

struct circa {
	Vectr poi;
	double radus;

	circa(Vectr p, double r) {
		poi = p;
		radus = r;
	}

	bool is_valve() {
		if (radus != 0) {
			return true;
		}
		return false;
	}

	static circa crate(Vectr p, double r) {
		return circa(p, r);
	}

	double area() {
		return 3.14159265359 * pow(radus , 2);
	}

	double peri() {
		return 3.14159265359 * radus * 2;
	}

};

struct Square { // Уточнений небыло, так что считается
	Vectr left;
	Vectr right;

	Square(Vectr rt, Vectr lf) {
		left = lf;
		right = rt;
	}

	bool is_valide() {
		if ((left.x == right.x or left.y == right.y) and (abs(left.x - right.x) == abs(left.y - right.y))) {
			return false;
		}
		return true;
	}

	static Square creato(Vectr un, Vectr nu) {
		return Square(un, nu);
	}

	double area() {
		return abs(left.x - right.x) * abs(left.y - right.y);
	}

	double perimeter() {
		return abs((left.x - right.x) + abs(left.y - right.y) * 2);
	}

};