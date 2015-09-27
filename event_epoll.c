#include <stdlib.h>
#include <stdio.h>

int
func()
{
    return 0;
}

int main()
{
    int a;
    a += 1;
    func();
    a += 2;
    return 0;
}

int fin()
{
    return func();
}
