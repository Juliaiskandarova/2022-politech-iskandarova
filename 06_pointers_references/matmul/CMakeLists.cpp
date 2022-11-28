#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cassert>

using namespace std;

const char* mul(const char* a, const char* b) {
	char* str = new char[length(a) + length(b)];
	_itoa(atof(a) * atof(b), str, 10);
	return str;
}
int main() {
	assert(*mul("2", "3") == *"6");
	return 0;
}