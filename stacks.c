#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int e[5];
    int top;
};
void init(struct stack *);
void push(struct stack*);
void pop(struct stack*);
void display(struct stack*);
int peak(struct stack*);
int size(struct stack*);
int isempty(struct stack*);
int isFull(struct stack*);
main()
{
    struct stack s;
    init(&s);
    int ch,ele;
    int si;
    while(1)
    {
        printf("enter 1:to push\n 2:to pop\n:3:to peak value\n 4:to display\n 5:to find size of the stack\n 6:to exit);
        scanf("%d",&ch);
        switch(ch)
        {
            case '1':if(isFull(&s))
                {
                    printf("stack is full\n");
                }
                else
                {
                    scanf("%d",&ele);
                    push(&s,ele);
                }
                break;
            case '2':if(isempty(&s))
                   {
                    printf("stack is empty\n");

                   }
                   else
                   {
                    ele=pop(&s);
                   }
                break;
            case '3':if(isempty(&s))
                   {
                    printf("stack is empty\n");

                   }
                   else
                   {
                    ele=peak(&s);
                    printf("peak value is %d",ele);
                   }
                break;
            case '4':display(&s);
                 break;
            case '5':si=size(&s);
                 break;
            case '6':break;
        }
    }
}
void init(struct stack*s)
{
    s->top=-1;
}
void push(struct stack *s,int ele)
{
    s->top++;
    s->e[s->top]=ele;
}
int pop(struct stack*s)
{
    int ele;
    ele=s->e[s->top];
    s->top--;
    return ele;

}
void display(struct stack*s)
{
    int i;
    for(i=0;s->top;i>=0;i++)
    {
        printf("%d",s->e[i]);
    }
}
int peak(struct stack*s)
{
    if(top==-1)
    {
        prinf("")
    }

}
