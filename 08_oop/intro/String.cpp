#include "String.h"

using namespace std;

String::String(const char* input)
{
    data = (char*)malloc(strlen(input));
    if (data)
        strcpy(data, input);
}


unsigned int String::get_length()
{
    int lenght = strlen(data);
    return lenght;
}


const char* String::c_str() { return data; }


String String::operator+(String rv)
{
    auto d = (char*)malloc(this->get_length());
    if (data)
        strcpy(d, data);
    if (d + rv.get_length())
        strcpy(d + rv.get_length(), rv.c_str());
    const char* res = d;
    const char* res2 = d + rv.get_length();
    int len = strlen(res2) + strlen(res);
    char* r1 = new char[len];
    for (int i = 0; i < strlen(res) + 1; i++)
    {
        if (res[i] != '\0')
            r1[i] = res[i];
        else
            break;
    }
    for (int i = 0; i < len; i++)
    {
        if (res2[i] != '\0')
            r1[i + strlen(res)] = res2[i];
        else
            break;
    }
    r1[len] = '\0';
    const char* r2 = r1;
    return String(r2);
}


ostream& operator<<(ostream& out, String& S)
{
    out << S.c_str();
    return out;
}


String::~String() = default;