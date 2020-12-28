////Program to push and pop ,2 different arrays given as per the user choice 
#include<stdio.h>
#include<stdlib.h>
int stack[15],choice,n,top,x,i;
void push1(void);
void pop1(void);
void push2(void);
void pop2(void);
int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
int arr2[5] = {11,12,13,14,15};
//void display(void);
int n1 =10;
int n2 =5;
int main()
{
    
    top=-1;
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH1\n\t 2.POP1\n\t are for push & pop operations of array1");
	printf("\n\t 3.PUSH2\n\t 4.POP2\n\t are for push & pop operations of array2");
	printf("\n\t 5.Exit is for exit option");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push1();
                break;
            }
            case 2:
            {
                pop1();
                break;
            }
            case 3:
			{
				push2();
				break;
			}
			case 4:
			{
				pop2();
				break;
			}
			case 5:
			{
				printf("\n\t EXIT POINT ");
                break;
			}
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3)");
            }
                
        }
    }
    while(choice!=5);
    return 0;
}
void push1()
{
    if(top>=n1-1)
    {
        printf("\n\tSTACK is over flow");
        
    }
    else
    {
		for(i=0;i<n1;i++)
		{
        top++;
        stack[top]=arr1[i];
		printf("the pushed element is %d\n",stack[top]);
		}
    }
}
void pop1()
{
    if(top<=-1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
		for(i=n1-1;i>=0;i--)
		{
		stack[top]=arr1[i];	
        printf("\n\t The popped element is %d\n",stack[top]);
        top--;
        }
    }
}
void push2()
{
    if(top>=n2-1)
    {
        printf("\n\tSTACK is over flow");
        
    }
    else
    {
		for(i=0;i<n2;i++)
		{
        top++;
        stack[top]=arr2[i];
		printf("the pushed element is %d\n",stack[top]);
		}
    }
}
void pop2()
{
    if(top<=-1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
		for(i=n2-1;i>=0;i--)
		{
		stack[top]=arr2[i];	
        printf("\n\t The popped element is %d\n",stack[top]);
        top--;
        }
    }
}


