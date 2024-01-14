
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Train
{
    int platform__number;
    int train__number;
    struct Train *next;
} node;

void input(node *head,int platform__number,int Train_Number)
{
    while(head->next != NULL)
    {
        head= head->next;
    }
    node *first=(node*)malloc(sizeof(node));

    first->platform__number  = platform__number ;
    first->train__number  = Train_Number;
    first->next = NULL;
    head->next = first;
    if(first->platform__number == 1)printf("\n\t\t\tPlatform number is: %d   \n\t\t\tLeft Train No: %d    \n\t\t\tTime : 10:00 AM",first->platform__number,first->train__number);
    else if(first->platform__number == 2)printf("\n\t\t\tPlatform number is: %d   \n\t\t\tLeft Train No: %d    \n\t\t\tTime : 09:00 AM",first->platform__number,first->train__number);
    else if(first->platform__number == 3)printf("\n\t\t\tPlatform number is: %d   \n\t\t\tLeft Train No: %d    \n\t\t\tTime : 04:00 PM",first->platform__number,first->train__number);
    else if(first->platform__number == 4)printf("\n\t\t\tPlatform number is: %d   \n\t\t\tLeft Train No: %d    \n\t\t\tTime : 11:00 AM",first->platform__number,first->train__number);
    else if(first->platform__number == 5)printf("\n\t\t\tPlatform number is: %d   \n\t\t\tLeft Train No: %d    \n\t\t\tTime : 01:00 PM",first->platform__number,first->train__number);
    else {

    }
}


void input1(node *head,int train_Number)
{

    while(head->next != NULL && head->next->train__number != NULL)
    {
        head= head->next;
    }

    if(head->next != NULL && head->next->train__number == NULL)
    {
        head->next->train__number  = train_Number ;
        if(head->next->platform__number == 1)printf("\n\n\t\t\tPlatform number: %d\n\t\t\tTrain number is :%d\n\t\t\tTime : 06:00 PM",head->next->platform__number,head->next->train__number);
        else if(head->next->platform__number == 2)printf("\n\n\t\t\tPlatform number: %d\n\t\t\tTrain number is :%d\n\t\t\tTime : 05:00 PM",head->next->platform__number,head->next->train__number);
        else if(head->next->platform__number == 3)printf("\n\n\t\t\tPlatform number: %d\n\t\t\tTrain number is :%d\n\t\t\tTime : 10:00 AM",head->next->platform__number,head->next->train__number);
        else if(head->next->platform__number == 4)printf("\n\n\t\t\tPlatform number: %d\n\t\t\tTrain number is :%d\n\t\t\tTime : 08:00 PM",head->next->platform__number,head->next->train__number);
        else printf("\n\n\t\t\tPlatform number: %d\n\t\t\tTrain number is :%d\n\t\t\tTime : 03:00 AM",head->next->platform__number,head->next->train__number);
    }

}


void out(node *head,int train__number)
{
    while(head->next != NULL && head->next->train__number != train__number)
    {
        head = head->next;
    }

    if(head->next != NULL && head->next->train__number == train__number)
    {
        if(head->next->platform__number == 1)printf("\n\t\t\tPlatform number is: %d   \n\t\t\tLeft Train No: %d    \n\t\t\tTime : 10:00 AM",head->next->platform__number,head->next->train__number);
        else if(head->next->platform__number == 2)printf("\n\t\t\tPlatform number is: %d   \n\t\t\tLeft Train No: %d    \n\t\t\tTime : 09:00 AM",head->next->platform__number,head->next->train__number);
        else if(head->next->platform__number == 3)printf("\n\t\t\tPlatform number is: %d   \n\t\t\tLeft Train No: %d    \n\t\t\tTime : 04:00 PM",head->next->platform__number,head->next->train__number);
        else if(head->next->platform__number == 4)printf("\n\t\t\tPlatform number is: %d   \n\t\t\tLeft Train No: %d    \n\t\t\tTime : 11:00 AM",head->next->platform__number,head->next->train__number);
        else printf("\n\t\t\tPlatform number is: %d   \n\t\t\tLeft Train No: %d    \n\t\t\tTime : 01:00 PM",head->next->platform__number,head->next->train__number);

        head->next->train__number = NULL;
    }

}

int display(node *head)
{

    if(head->next == NULL)
    {
        return;
    }
    else
    {
        if(head->next->train__number == NULL)
        {
            printf("\n\t\tPlatform number: %d      Train Left\n",head->next->platform__number);
        }
        else
        {
            printf("\n\t\tPlatform number: %d      Train number: %d\n",head->next->platform__number,head->next->train__number);
        }
    }
    display(head->next);

}

int main()
{
    system("COLOR 0C");
    node *head=(node*)malloc(sizeof(node));
    head->next=NULL;

    printf("\n\t\t\t\t\tWELCOME TO OUR PROJECT\n");
    printf("\n\t\t\tOUR PROJECT'S TOPIC IS :   A RAILWAT STATION SYSTEM\n\n");

    printf("\n\t\t## About Me:\n");
    printf("\n\t\t[]******************************************************************[]\n\t\t[]                                                                  []\n");
    printf("\t\t[]\tNAME: Md. Mehedi Hasan            ID: 201-15-13997          []\n\t\t[]                                                                  []\n");
    printf("\t\t[]******************************************************************[]\n");

    printf("\n\n\t\tPRESS ENTER KEY TO GO HOME PAGE:  ");
    getch();
    system("cls");

    printf("\n\t\t\t\t*****WELCOME TO KAMLAPUR RAILWAY STATION*****\n\n");

    printf("\n\t\t\t\t\t*****Train left Time table*****\n");
    printf("\n\t\t[]******************************************************************[]\n\t\t[]                                                                  []\n");
    printf("\t\t[]\tPlatform number:                     Left Time:             []\n\t\t[]                                                                  []\n");
    printf("\t\t[]\tPlatform number: 1                   10:00 AM               []\n\t\t[]                                                                  []\n");
    printf("\t\t[]\tPlatform number: 2                   09:00 AM               []\n\t\t[]                                                                  []\n");
    printf("\t\t[]\tPlatform number: 3                   04:00 PM               []\n\t\t[]                                                                  []\n");
    printf("\t\t[]\tPlatform number: 4                   11:00 AM               []\n\t\t[]                                                                  []\n");
    printf("\t\t[]\tPlatform number: 5                   01:00 PM               []\n\t\t[]                                                                  []\n");
    printf("\t\t[]                                                                  []\n\t\t[]******************************************************************[]\n");

    printf("\n\n\t\tPRESS ENTER KEY TO GO HOME PAGE:  ");
    getch();
    system("cls");
    int i = 1;
    while (1)
    {
        int n,train_Number;
        printf("\n\t\t\t\t\t*****WELCOME TO KAMLAPUR RAILWAY STATION*****\n\n");
        printf("\n\n\t\t 1. Enter Train in platform \n\t\t 2. Left train by train number \n\t\t 3. Entry Train by train number \n\t\t 4. Display train details \n\t\t 5. exit\n\n");
        printf("\t\tEnter a number: ");
        scanf("%d",&n);
        system("cls");
        switch(n)
        {
        case 1:
            printf("\n\n\n\t[]**********************************************[]");
            printf("\n\n\n\t\t\tEnter Train number: ");
            scanf("%d",&train_Number);
            input(head,i,train_Number);
            i++;
            printf("\n\n\t[]**********************************************[]");
            printf("\n\n\t\tPRESS ENTER KEY TO GO HOME PAGE:  ");
            getch();
            system("cls");
            break;
        case 4:

            printf("\n\n\n\t[]**********************************************[]");
            printf("\n\n\n\t\tTotal Train in Platform\n");
            display(head);
            printf("\n\n\n\t[]**********************************************[]");
            printf("\n\n\t\tPRESS ENTER KEY TO GO HOME PAGE:  ");
            getch();
            system("cls");
            break;
        case 2:
            printf("\n\n\n\t[]**********************************************[]");
            printf("\n\n\n\t\t\tEnter Train number: ");
            scanf("%d",&train_Number);
            out(head,train_Number);
            printf("\n\n\n\t[]**********************************************[]");
            printf("\n\n\t\tPRESS ENTER KEY TO GO HOME PAGE:  ");
            getch();
            system("cls");
            break;
        case 3:
            printf("\n\n\n\t[]**********************************************[]");
            printf("\n\n\n\t\t\tEnter Train number: ");
            scanf("%d",&train_Number);
            input1(head,train_Number);
            printf("\n\n\t[]**********************************************[]");
            printf("\n\n\t\tPRESS ENTER KEY TO GO HOME PAGE:  ");
            getch();
            system("cls");
            break;
        case 5:
            printf("\n\n\n\t[]*****************************************[]");
            printf("\n\t[]                                         []\n\t[]\t\tTHANK YOU                  []\n\t[]                                         []\n\t");
            printf("[]*****************************************[]");
            getch();
            return 0;
        default :
            printf("\n\n\n\t\tWrong Input\n");
            printf("\n\n\t\tPRESS ENTER KEY TO GO HOME PAGE:  ");
            getch();
            system("cls");

        }
    }

}


