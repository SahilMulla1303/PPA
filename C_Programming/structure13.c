#include<stdio.h>

struct Demo1
{
    //16 Byte
    int no;
    char ch;
    float f;
    int i;
};

struct Demo2
{
    //16 Byte
    int no;
    char ch1;
    char ch2;
    float f;
    int i;
};

struct Demo3
{
    //20 Byte
    int no;
    char ch1;
    float f;
    char ch2;
    int i;
};

int main()
{
    struct Demo1 obj1;
    struct Demo2 obj2;
    struct Demo3 obj3;

    printf("%d\n",sizeof(obj1));
    printf("%d\n",sizeof(obj2));
    printf("%d\n",sizeof(obj3));

    return 0;
}