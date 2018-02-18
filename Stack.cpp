/*Implement a program that will use a stack structure to calculate the value of arithmetic postfix expressions. 
Assume that only one digit numbers will be used. 
Programmar: Bradley Stillings */
#include<iostream>
#include<string>
#define size 20
using namespace std;

struct stack{
int numbers[size];
int top_stack;
};

int pop_Function(stack*pointer){
  if ( pointer->top_stack > 0){
    pointer->top_stack--;
    return pointer->numbers[pointer->top_stack];
  }
}

void push_Function( stack*pointer, int t){
  if ( pointer->top_stack < 20) {
    pointer->numbers[pointer->top_stack]=t;
    pointer->top_stack++;
  }
}

int operation(char c, int numero1, int numero2){
  switch (c){
    case '+': return (numero1+numero2);break;
    case '-':return (numero1-numero2);break;
    case '*':return (numero1*numero2);break;
    case '/':return (numero1/numero2);break;
    default: cout<<"no can do \n";
}

  return 0;
}

int main() {
int operand;
int numero2;  
int numero1;
int answer;
char input;
stack *pointer;
pointer= new stack;
pointer->top_stack=0;
cout<<"Please Enter a Postfix Expression to Calculate \n\n";
cin>>input;
while ( input != '.') {
if ( input == '+' || input == '-' || 
input == '*' || input == '/')
{
numero1=pop_Function(pointer);
numero2=pop_Function(pointer);
   
answer=operation(input,numero1,numero2);
push_Function(pointer,answer);
}
else {
     if ( input == '9') operand = 9;
else if ( input == '8') operand = 8;
else if ( input == '7') operand = 7;
else if ( input == '6') operand = 6;
else if ( input == '5') operand = 5;
else if ( input == '4') operand = 4;
else if ( input == '3') operand = 3;
else if ( input == '2') operand = 2;
else if ( input == '1') operand = 1;
else if ( input == '0') operand = 0;
push_Function(pointer,operand);
  }
cin>>input;
 }
answer=pop_Function(pointer);
cout<<"The expression is: \n" <<answer <<endl;
return 0;
}
