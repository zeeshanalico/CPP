#include<iostream>
#include<stack>
using namespace std;

int precedence(char c){
	if(c=='*' || c=='/') 
	return 2;
	else if(c=='+' || c=='-')
	return 1;
	else
	return -1;	
}

string getPostfix(string s)//function to convert infix to postfix
{
	string postfixStr;  // converted string
    stack<char> st;  // stack for operators
    
    for(int i=0;i<s.length();i++)
    {
    	if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
    		postfixStr+=s[i];
		}
		else if(s[i]=='(' ){
			st.push(s[i]);
		}
		else if(s[i]==')'){
			while(!st.empty() && st.top()!='(' ){
				postfixStr+=st.top();
				st.pop();
			}
			if(!st.empty()){
				st.pop();
			}
		}
		else{
			while(!st.empty() && precedence(st.top()) > precedence(s[i])){
				postfixStr+=st.top();
				st.pop();
			}
			st.push(s[i]);
		}
	}
	while(!st.empty()){
		postfixStr+=st.top();
		st.pop();
	}
	
	return postfixStr;
	
}
int main(){
//	string infixString;
//	cout<<"Enter the Infix string: "; 
//	getline(cin,infixString);
	
	cout<<"The postfix of given infix expression is : "<<getPostfix("(a-b/c)*(a/k-l)");
	
	
	
}