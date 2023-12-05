#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stack>

using namespace std;

bool ValidateBrackets(string input)
{
    stack<char> st;
    char topElement;

    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == '{' || input[i] == '[' || input[i] == '(')
        {
            st.push(input[i]);
        }      
                               
        if (!st.empty())
        {
            switch (input[i])
            {
            case ')':

                topElement = st.top();
                st.pop();

                if (topElement == '{' || topElement == '[')
                {
                    return false;
                }

                break;

            case '}':

                topElement = st.top();
                st.pop();

                if (topElement == '(' || topElement == '[')
                {
                    return false;
                }

                break;

            case ']':

                topElement = st.top();
                st.pop();

                if (topElement == '(' || topElement == '{')
                {
                    return false;
                }

                break;
            }
        }
    }

    // If loop was able to complete execution it means brackets are in correct order
    return true;
}

int main()
{
    string fileName, ch;
    fstream file;

    string fileContent;

    cout << "Enter the Name of File: ";
    cin >> fileName;

    // Open file in read only mode
    file.open(fileName, fstream::in);

    // If no file is found terminate program
    if (!file)
    {
        cout << endl;
        cout << "Error Occurred!";

        return 0;
    }

    // Get each character in file (excluding spaces)
    while (file >> skipws >> ch)
    {
        fileContent += ch;
    }

    cout << "Brackets are: " << ValidateBrackets(fileName);

    // Close openened file
    file.close();

    return 0;
}