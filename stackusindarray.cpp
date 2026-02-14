#include<stdio.h>
#define MAX 5

int stack[MAX];
int top=-1;

//push operation
void push()
{
	int item;
	if(top==MAX-1)
	{
		printf("stack overflow!\n");
		return;
	}
	    printf("Enter element to push:");
	    scanf("%d",&item);
	    stack[++top]=item;
	    printf("element pushed successfully.\n");
}
    //pop operation
    void pop()
    {
    	if(top==-1)
    	{
    		printf("stack underflow!\n");
    		return;
		}
	    printf("popped element:%d\n",stack[top--]);
	}
	    //display stack elements
	    void display()
	{
		int i;
		if(top==-1)
		{
			printf("stack is empty.\n");
			return;
		}
		    printf("stack elements:\n");
	        for (i=top;i>=0;i--)
		    printf("%d\n",stack[i]);
      	} 
	        int main()
	    {
	    	int choice;
	    	
	    	
	    	do
		    {
		    	printf("\n---Stack Menu---\n");
		    	printf("1.push\n2.pop\n3.display\n4.exit\n");
		    	printf("enter your choice:");
		    	scanf("%d",&choice);
		    	
		    	switch(choice)
		    	{
		    		case1:
		    			push();
		    			break;
		    	    case2:
		    	    	pop();
		    	    	break;
		    	    case3:
					    display();
						break;
					case4:
					    printf("exiting program.\n");
						break;
						default:
						printf("invalid choice!\n");
					}
				}       while (choice!=4);
				        
				        return 0;
				    
				}
			
		
