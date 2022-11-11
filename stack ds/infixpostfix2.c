#include<stdio.h>
#include<stdlib.h>         
#include<string.h>
#include<ctype.h>
#define SIZE 100

char stack[SIZE];
int top = -1;
void push(char item)
{
	if(top >= SIZE-1)
	{
		printf("no space\n");
	}
	else
	{
		top = top+1;
		stack[top] = item;
	}
}

char pop()
{
	char item ;

	if(top <0)
	{
		printf("invalid infix expression");
		
	}
	else
	{
		item = stack[top];
		top = top-1;
		return item;
	}
}
int operator(char symbol)
{
	if(symbol == '^' || symbol == '*' || symbol == '/' || symbol == '+' || symbol =='-')
	{
		return 1;
	}
	else
	{
	return 0;
	}
}
int priority(char symbol)
{
	if(symbol == '^')
	{
		return 3;
	}
	else if(symbol == '*' || symbol == '/')
	{
		return 2;
	}
	else if(symbol == '+' || symbol == '-') 
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void InfixtoPostfix(char infix[], char postfix[])
{ 
	int i, j;
	char item;
	char x;

	push('(');                               
	strcat(infix,")");                  

	i=0;
	j=0;
	item=infix[i];         

	while(item != '\0')  
    {      
		if(item == '(')
		{
			push(item);
		}
		else if( isdigit(item) || isalpha(item))
		{
			postfix[j] = item;              
			j++;
		}
		else if(operator(item) == 1)        
		{
			x=pop();
			while(operator(x) == 1 && priority(x)>= priority(item))
			{
				postfix[j] = x;                  
				j++;
				x = pop();                       
			}
			push(x);
			

			push(item);                 
		}
		else if(item == ')')         
		{
			x = pop();                   
			while(x != '(')               
			{
				postfix[j] = x;
				j++;
				x = pop();
			}
		}
		else
		{
			printf("\nInvalid infix Expression.\n");
			exit (1);
		}
		i++;


		item = infix[i]; 
	} 
	if(top>0)
	{
		printf("\nInvalid infix Expression.\n");        
		
		exit (1);
	}
	if(top>0)
	{
		printf("\nInvalid infix Expression.\n");       
		
		exit (1);
	}


	postfix[j] = '\0'; 
	

}
int main()
{
	char infix[SIZE], postfix[SIZE]; 
    printf("\nEnter Infix expression : ");
	scanf("%s",infix);

    InfixtoPostfix(infix,postfix);                   
	printf("Postfix Expression: ");
	printf("%s",postfix);                    

	return 0;
}