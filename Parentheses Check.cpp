/* Implement a program that will use a stack structure to check for correct placement of parentheses 
in an algebraic expression. 
Allow the use of   ( ) [ ] { } characters as grouping symbols. 
Make sure that an error is reported for an expression of a form (...]. 
In addition report other possible parentheses related errors (too many levels, 
too many right paren., too many left paren.). Make sure to use 'silent error reporting' 
(and report any possible errors outside the main scanner loop). 
//while (/*not the last character and not error)
//do{
	//ix++ // first character 
	// something with parentheses and stack 
   // end while
//}
// if ( push onto stack
// if ) pop the stack
// insert push,del pop, isEmpty,isFull
//if()
//{
else cout << "These Parenthesis are not balanced " << endl;
//} 
Programmar: Bradley Stillings */

#include <iostream>
#include <string>
#include <cstring>
#define MAX 25

using namespace std;

class stack{
	char numbers[MAX];
	int top;
public:
	stack()
	{
		top = -1;
	}
bool push_Function(char character)
	{
		if(top < MAX-1)
		{
			top++;
			numbers[top] = character;
			return true;	
		}
		return false;
	}
	char pop_Function()
	{
		if(top>=0)
		{
			char character = numbers[top];
			top--;
			return character;
		}
		return NULL;
	}
	bool isFull()
	{
		if(top >= MAX-1)
		return true;
		return false;
	}
	bool isEmpty()
	{
		if(top < 0)
		return true;
		return false;
	}
};

bool check_match(char character1,char character2)
{
	bool answer = false;
	if( (character1 == ')' && character2 == '(') || (character1 == '}' && character2 == '{' ) 
	|| (character1 == ']' && character2 == '[') )
	answer = true;
	return answer;
}

bool check_Balance(char expression[])
{
	int length = strlen(expression);
	bool answer = true;
	stack implement;
	for(int i=0; i<length;i++)
	{
		if( (expression[i] == '{') || (expression[i] == '(') || (expression[i] == '[')  ) 
		{
			implement.push_Function(expression[i]);
		}
		else if((expression[i] == ']') || 
		(expression[i] == '}') || (expression[i] == ')') )
		{
			if(check_match(expression[i],implement.pop_Function()) == false)
			{
				answer = false;
				break;
			}
		}
	}	
if(implement.isEmpty() == false)
answer = false;

return answer;
}
int main(int argc, char* argv[])
{
	char implement[MAX];
	cout << "Enter the expression you want to check :" << endl;
	cin >> implement;
	if(check_Balance(implement) == true)
	cout << "These Parenthesis are balanced" << endl;
	else
	cout << "These Parenthesis are not balanced " << endl;
	
	return 0;
}


