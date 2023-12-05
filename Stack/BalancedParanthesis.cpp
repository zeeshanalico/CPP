#include<iostream>
#include<Stack>
using namespace std;
bool isValid(string s){
    int size=s.size();
    bool ans=true;
    stack<char> st;
    for(int i=0;i<size;i++)
    {
        if(s[i]=='(' || s[i]=='{'|| s[i]=='['){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(!st.empty() && st.top()=='('){
                st.pop();
            }
            else
            ans=false;
            break;
        }
         else if(s[i]==']'){
            if(!st.empty() && st.top()=='['){
                st.pop();
            }
            else
            ans=false;
            break;
        }
         else if(s[i]=='}'){
            if(!st.empty() && st.top()=='{'){
                st.pop();
            }
            else
            ans=false;
            break;
        }
    }
    if(!st.empty()){
        return false;
        return ans;
    }
}
int main(){
    string s="{([])}";
    if(isValid(s)){
        cout<<"Valid String "<<endl;
    }
    else{
        cout<<"inValid String"<<endl;
    }
    return 0;
}