#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int item;
    struct node *link;
};

main()
{
    struct node *start,*list;
    int i;
    start = (struct node *)malloc(sizeof(struct node));
    list = start;
    start->link = NULL;
    for(i=0;i<10;i++)
    {
        list->item = i;
    list->link = (struct node *)malloc(sizeof(struct node));
    }
    list->link = NULL;
    while(start != NULL)
    {
        printf("%d\n",start->item);
    start = start->link;
    }
}
