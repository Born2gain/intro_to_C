#include<stdio.h>
int main(void) 
{
    printf("Hello World \n");
    int age;
    printf("please enter your age: \n", &age);
    scanf("%d",&age);
    printf("your age is: %d", age);
    return 0;
}