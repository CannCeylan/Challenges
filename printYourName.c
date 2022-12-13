// your name surname and age from user
#include <stdio.h>

int main()
{
    char name[30], surname[30];
    int age;
    
    printf("please enter your name\n");
    scanf("%s",name);
    printf("please enter your surname\n");
    scanf("%s",surname);
    printf("please enter your age\n");
    scanf("%d",&age);
    
    printf("your name is %s %s and you are %d years old",name,surname,age);

    return 0;
}
