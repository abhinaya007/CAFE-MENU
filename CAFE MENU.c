#include<stdio.h>
void main()
{
    int choice;
    printf("-----MENU-----\n1.PIZZA : 239 Rs\n2.BURGER : 129 Rs\n3.PASTA : 179 Rs\n4.FRENCH FRIES : 99 Rs\n5.SANDWICH : 149 Rs");
    printf("\n\nWHAT DO YOU WANT TO ORDER ?\nENTER THE NUMBER PLEASE :  ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1 : printf("\nFOOD ITEM : PIZZA\nPRICE : 239 Rs");
                 break;
        case 2 : printf("\nFOOD ITEM : BURGER\nPRICE : 129 Rs");
                 break;
        case 3 : printf("\nFOOD ITEM : PASTA\nPRICE : 179 Rs");
                 break;
        case 4 : printf("\nFOOD ITEM : FRENCH FRIES\nPRICE : 99 Rs");
                 break;
        case 5 : printf("\nFOOD ITEM : SANDWICH\nPRICE : 149 Rs");
                 break;
        default : printf("\nSORRY !\nTRY AGAIN !");
                 break;
    }
}
