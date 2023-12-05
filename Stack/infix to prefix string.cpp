#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
//infix to prefix
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
    reverse(s.begin(),s.end());
    for(int i=0;i<s.length();i++)
    {
    	if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
    		postfixStr+=s[i];
		}
		else if(s[i]==')' ){
			st.push(s[i]);
		}
		else if(s[i]=='('){
			while(!st.empty() && st.top()!=')' ){
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
	reverse(s.begin(),s.end());
	return postfixStr;
	
}
int main(){	
	cout<<"The prefix of given infix expression is : "<<reverse()getPostfix("(a-b/c)*(a/k-l)");
	
	
	return 0;
}