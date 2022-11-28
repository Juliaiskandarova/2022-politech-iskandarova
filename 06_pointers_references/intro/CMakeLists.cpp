#include <cassert>

using namespace std;

unsigned int length(const char* str)
{
    if (str == nullptr) { return 0; }
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

int main()
{
    assert(length("a") == 1);
    assert(length("ab") == 2);
    assert(length("") == 0);
    assert(length("hello world") == 11);
    assert(length(nullptr) == 0);
    assert(length(NULL) == 0);
    return 0;
}