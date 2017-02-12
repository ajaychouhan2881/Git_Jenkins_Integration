#include <stdio.h>
#include "example_dll.h"

__stdcall void hello(const char *s)
{
        printf("Vedanti again %s\n", s);
}
int Double(int x)
{
        return 3 * x;
}
void CppFunc(void)
{
        puts("CppFunc");
}
void MyClass::func(void)
{
        puts("MyClass.func()");
}