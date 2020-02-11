#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    seed(time(NULL));
    int a= - 100 + rand()%100;
    printf("%d",a);
}
