#include <iostream>
#include <cstring>

class String
{
	unsigned int length = 0;
	char* data;
public:
	String(const char* s);
	unsigned int get_length();
	const char* c_str();
	String operator+(String rv);
	friend std::ostream& operator<<(std::ostream& out, String& S);
	~String();
};