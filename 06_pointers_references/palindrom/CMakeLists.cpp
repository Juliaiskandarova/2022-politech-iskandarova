#include <iostream>
#include <string>
#include <cassert>
#include <Windows.h>

using namespace std;

bool IsSymbol(const char c) {
	int ch = int(c);
	return ((ch > -65 && ch < 0) || ch == -88 || ch == -72 || (ch > 64 && ch < 91) || (ch > 96 && ch < 123));
}
bool IsPalindrome(const char* str) {
	string s = "";
	for (int i = 0; str[i] != '\0'; i++) {
		if (IsSymbol(str[i])) {
			s += tolower(str[i]);
		}
	}
	if (str == "" || str == nullptr) {
		return false;
	}
	size_t size = s.size();
	for (int i = 0; i < size / 2; i++) {
		if (s[i] != s[size - 1 - i]) {
			return false;
		}
	}
	return true;

}

int main() {
	setlocale(LC_CTYPE, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	assert(IsPalindrome("level") == 1);
	assert(IsPalindrome("UFO tofu") == 1);
	assert(IsPalindrome("Borrow or rob?") == 1);
	assert(IsPalindrome("Never odd or even.") == 1);
	assert(IsPalindrome("Julia") == 0);
	return 0;
}