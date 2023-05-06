#include<stdio.h>

struct Demo
{
    int i;
    int j;
    int *ip;
    float *fp;
};

int main()
{
    struct Demo obj;
    int no = 90;
    float f = 90.67;

    obj.i = 11;
    obj.j = 21;
    obj.ip = &no;
    obj.fp = &f;

    printf("%d\n",obj.i);
    printf("%d\n",obj.j);
    printf("%d\n",*(obj.ip));
    printf("%f\n",*(obj.fp));

    return 0;
}