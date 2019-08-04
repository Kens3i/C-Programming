#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* link;
}s;
s *root = NULL;
int len;

void Append(void);
void AddAtBegin(void);
void AddAtAfter(void);
int Length(void);
void Display(void);
void Delete(void);


int main()
{
    int choice;
    while(1)
    {
        printf("Single Linked List Operation:");
        printf("\n1.Append , 2.AddAtBegin , 3.AddAtAfter , 4.Length , 5.Display , 6.Delete , 7.Quit ");

        printf("\nEnter Your Choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: Append();
            break;
            case 2: AddAtBegin();
            break;
            case 3: AddAtAfter();
            break;
            case 4: len=Length();
            printf("Length:%d\n",len);
            break;
            case 5: Display();
            break;
            case 6: Delete();
            break;
            case 7: exit(1);
            default: printf("Invalid Input!!\n\n");

        }

    }
    return 0;
}

void Append()
{
    s *temp;
    temp=(s*)malloc(sizeof(s));
    printf("Enter The node Data:");
    scanf("%d",&temp->data);
    temp->link=NULL;

    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        s *p;
        p=root;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;
    }
}

int Length()
{
    int count=0;
    s *temp;
    temp=(s*)malloc(sizeof(s));
    temp=root;
    while(temp!=NULL)
    {
        count++;
        temp=temp->link;
    }
    return count;
}

void Display()
{
 s *temp;
 temp=(s*)malloc(sizeof(s));
 temp=root;
 if(temp==NULL)
 {
     printf("The List is NULL!\n\n ");
 }
 else
    while(temp!=NULL)
 {
     printf("--> %d",temp->data);
     temp=temp->link;
 }
 printf("\n\n");
}

void AddAtBegin()
{
    s *temp;
    temp=(s*)malloc(sizeof(s));
    printf("Enter Node Data:");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        temp->link=root;
        root=temp;
    }

}

void AddAtAfter()
{
    s *temp,*p;
    int loc,len,i=1;
    printf("Enter Location:");
    scanf("%d",&loc);
    printf("Enter Node Data:");
    temp=(s*)malloc(sizeof(s));
    scanf("%d",&temp->data);
    len=Length();
    if(loc>len)
    {
        printf("Invalid Location!!");
    }
    else
    {
        p=root;
        while(i<loc)
        {
            p=p->link;
            i++;
        }
        temp->link = p->link;
        p->link = temp;
    }
}


void Delete()
{
 s *temp;
    int loc;
    printf("Enter location to be deleted:");
    scanf("%d",&loc);
    if(loc>Length())
    {
        printf("Invalid Location/n:");
    }
    else if(loc==1)
    {
        temp=root;
        root=temp->link;
        temp->link=NULL;
        free(temp);
    }
    else
    {
        s *p=root,*q;
        int i=1;
        while(i<loc-1)
        {
            p=p->link;
            i++;
        }
        q=p->link;
        p->link=q->link;
        q->link=NULL;
        free(q);
    }
}
