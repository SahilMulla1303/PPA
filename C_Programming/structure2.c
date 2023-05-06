#include<stdio.h>

struct Demo
{
    int i;
    float f;
    int j;
};

int main()
{
    struct Demo obj1 = {11,90.90,51};

    struct Demo * ptr = &obj1;

    obj1.i = 11;    // . Direct member access operator
    ptr->j = 51;    // -> Indirect member access operator
    ptr->f = 90.90;

    printf("%d\n",ptr->i);
    printf("%d\n",ptr->j);
    printf("%f\n",ptr->f);
    
    return 0;
}