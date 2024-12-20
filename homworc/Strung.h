#pragma once
#include <iostream>

struct String {
	char* text;
	int size = 0;

	String(const char* intro) {
		int cnt = 0;
		*text = *intro;
		char inter = ' ';
		while (inter != '\0') {
			inter = intro[cnt];


			size++;
			cnt++;
		}
	}

	void print() {
		for (int i = 0; i < size; i ++ ) {
			std::cout << text[i];
		}
		std::cout << "\n";
	}

	~String() {
		delete text;
	}
};