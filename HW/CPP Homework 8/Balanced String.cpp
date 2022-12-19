// Balanced String.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stack>
#include <string>

bool IsBalanced(std::string word)
{
    std::stack<char> OpenBrackets;
    for (int i = 0; i < word.length(); i++) // Moves on the whole string word
    {
        if (word[i]== '(' || word[i] == '{' || word[i] == '[') // if an Open
        { 
            OpenBrackets.push(word[i]);
        }
        else if (word[i]==')' || word[i]=='}' || word[i] == ']') // if an end
        {
            if ((OpenBrackets.top() == '(' && word[i] == ')') // if the end fits with the last Open
                || (OpenBrackets.top() == '{' && word[i] == '}')
                || (OpenBrackets.top() == '[' && word[i] == ']'))
            {
                OpenBrackets.pop(); // close brackets
            }
            else  // if ending doesnt fit with the last opening then its already not balanced
            {
                return false; 
            }
        }
    }
    if (OpenBrackets.empty()) //after the for loop ends... there should be no remaining opened brackets 
    {
        return true;
    }
    return false;
}

int main()
{
    std::string word;
    std::getline(std::cin, word);
    if (IsBalanced(word)) 
    {
        std::cout << word + " is balanced";
    }
    else
    {
        std::cout << word + " is not balanced";
    }
}
