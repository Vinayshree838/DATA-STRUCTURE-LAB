#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct node * addatbeg(struct node *);
struct node * addatend(struct node *);
void display(struct node *);
struct node * deleteatbeg(struct node *);
struct node * deleteatend(struct node *);
struct node * addatpos(struct node *,int pos);
struct node * deleteatpos(struct node *,int pos);
struct node * getnode();
main()
{
    int ch,pos;
    struct node * head=NULL;
    while(1)
    {
        printf("enter 1:add at beg\n 2:add at end\n 3:display\n 4:delete at beg\n 5:delete at end\n 6:add at pos\n 7:delete at pos\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:head=addatbeg(head);
              break;
            case 2:head=addatend(head);
              break;
            case 3:display(head);
              break;
            case 4:if(head==NULL)
               {
                   printf("list is empty\n");
               }
               else
               head=deleteatbeg(head);
              break;
            case 5:if(head==NULL)
               {
                   printf("list is empty\n");
               }
               else
               head=deleteatend(head);
              break;
            case 6:if(head==NULL)
               {
                   printf("list is empty\n");
               }
               else
               {
                   printf("enter the position\n");
                   scanf("%d",&pos);
                   head=addatpos(head,pos);
                   break;
               }
             break;
            case 7:if(head==NULL)
               {
                   printf("list is empty\n");
               }
                else
               {
                   printf("enter the position\n");
                   scanf("%d",&pos);
                   head=deleteatpos(head,pos);
                   break;
               }
            break;


        }
    }
}
struct node * getnode()
{
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data\n");
    scanf("%d",&newnode->data);
    newnode->next=newnode;
    return newnode;

}
struct node * addatbeg(struct node * head)
{
   struct node * newnode =getnode() ;
   if(head=NULL)
   {
       head=newnode;
       return head;
   }
   else
   newnode->next=head;
   head=newnode;
   return head;
}
struct node * addatend(struct node * head)
{
    struct node * cur,*newnode =getnode() ;
   if(head=NULL)
   {
       head=newnode;
       return head;
   }
   else
   {
    cur=head;
    while(cur->next!=NULL)
    {
        cur=cur->next;
    }
    cur->next=newnode;
    return head;
   }
}
void display(struct node* head)
{
    struct node* cur;
    cur=head;
    while(cur!=NULL)
    {
        printf("%d\n",cur->data);
        cur=cur->next;
    }
}
struct node * deleteatbeg(struct node * head)
{
    struct node* cur;
    cur=head;
    head=head->next;
    printf("deleted information is %d",cur->data);
    free(cur);
    return head;

}
struct node * deleteatend(struct node * head)
{
    struct node*cur,*pre;
    cur=head;
    while(cur->next!=NULL)
    {
        pre=cur;
        cur=cur->next;
    }
    if(pre!=NULL)
    {
        pre->next=NULL;
    }
    else
    {
        head=NULL;
    }
    printf("Deleted information =%d",cur->data);
    free(cur);
    return head;
}
struct node * addatpos(struct node * head,int pos)
{
   struct node *newnode=getnode() ;
   struct node *cur =head;
   int i;
   if(pos<=0||head==NULL)
   {
       newnode->next=head;
       head=newnode;
       return head;
   }
   for(i=0;i<pos-1&&cur->next!=NULL;i++)
   {
       cur=cur->next;
   }
   newnode->next=cur->next;
   cur->next=newnode;
   return head;
}
struct node * deleteatpos(struct node * head,int pos)
{
    struct node* cur=head,*p=NULL;
    int i,j;
    if(pos<=0||head->next==NULL)
    {
        head=head->next;
        printf("deleted info is %d",&cur->data);
        free(cur);
        return head;

    }
    for(i=0;i<pos&&cur->next!=NULL;i++)
    {
        p=cur;
        cur=cur->next;
    }
    p->next=cur->next;
    printf("deleted information is %d",cur->data);
    free(cur);
    return head;
}
