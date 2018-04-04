#include <iostream>
#include<sstream>
#include<cstdlib>
using namespace std;

#include "Stack.h"

int evalExpression(char operator_, int operand1, int operand2)
{
	switch(operator_)
	{
	// your code here
	case '+':
		return(operand1 + operand2);
	case '*':
		return(operand1 * operand2);
	case '-':
		return(operand2 - operand1);
	case '/':
		return(operand2 / operand1);
	case '%':
		return(operand2 % operand1);
	break;
	}
}

void handleOperand(stringstream& strStream, Stack& rpnStack)
{
	// your code here
	int operand;
	strStream >> operand;
	rpnStack.push(operand);
}

void handleOperator(stringstream& strStream, Stack& rpnStack)
{
	// your code here
	//2 pops
	int operand1;
	int operand2;
	operand1 = rpnStack.top();
	rpnStack.pop();
	operand2 = rpnStack.top();
	rpnStack.pop();
	
	char operator_;
	strStream >> operator_;
	int result = evalExpression(operator_, operand1, operand2);
}

int main()
{
	Stack rpnStack;
	cout<<"Enter a postfix expression"<<endl;
	string expStr;
	getline(cin,expStr,'\n');
	stringstream strStream(expStr);
	while(!strStream.eof())
	{
		int ch = strStream.peek();
		if(std::isspace(ch))
		{
		  strStream.ignore(1);
		  continue;
		}
		else
		if(std::isdigit(ch))
		{
			handleOperand(strStream, rpnStack);
		}
		else
		if(std::isgraph(ch))
		{
			handleOperator(strStream, rpnStack);
		}
	}

	// end of expression
	cout<<"The evaluated expression is: "<<rpnStack.top()<<endl;
}
