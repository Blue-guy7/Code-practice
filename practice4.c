#include<stdio.h>
void push(char *a,int *stack,int *top, int count)
{
        *top+=1;
        *(stack+(*top))=(int)*(a+(count))-48;
}
void pop(char *a,int *stack, int *top, char op)
{
        if(op=='+')
        {
                int temp;
                temp=*(stack+(*top))+*(stack+(*top-1));
                *(stack+(*top))=0;
                *top-=1;
                *(stack+*top)=temp;
        }
        else if(op=='-')
        {
                int temp;
                temp=*(stack+(*top-1))-*(stack+(*top));
                *(stack+(*top))=0;
                *top-=1;
                *(stack+*top)=temp;
        }
        else if(op=='*')
        {
                int temp;
                temp=*(stack+(*top-1))**(stack+(*top));
                *(stack+(*top))=0;
                *top-=1;
                *(stack+*top)=temp;
        }
        else if(op=='/')
        {
                int temp;
                temp=*(stack+(*top-1)) / *(stack+(*top));
                *(stack+(*top))=0;
                *top-=1;
                *(stack+*top)=temp;
        }
        else
        {
                printf("a problem occured\n");
        }
}

int main()
{
    char a[50];int i=-1,top=-1, count;
    printf("Enter the postfix expression.\n");
    while(a[i]!='\n')
    {
            ++i;
            scanf("%c", &a[i]);
    }
    count=i;
    int stack[count];//declaring the postfix stack
    for(i=0;i<count;i++)
    {
        if(a[i]=='*'||a[i]=='/'||a[i]=='+'||a[i]=='-')
        {
            pop(a,stack,&top, a[i]);
        }
        else
        {
            push(a, stack, &top, i);
        }
    }
    printf("%d", stack[0]); 
    return 0;
}
