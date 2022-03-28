#include <stdio.h>

void main()
{
    char id[15], password[15];
    printf("Enter username: ");
    scanf("%s", id);
    printf("\nEnter password: ");
    scanf("%s", password);
    if(id == 'kanishk' && password == 'myname')
    {
        printf("\nYou are logged in.");
    }
    else
    {
        printf("\nWrong id or password!");
    }
}