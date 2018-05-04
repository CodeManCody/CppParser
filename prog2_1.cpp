#include "prog2_1.hpp"
#include <queue>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include <stdexcept>

using namespace std;

bool checkDigits(string token);

Tokenizer::Tokenizer(){}
Tokenizer::~Tokenizer(){}

void Tokenizer::Tokenize(string input)
{
    vector<string> subTokens;

    stringstream check1(input);
     
    string intermediate;

    while(getline(check1, intermediate, ' '))
    {
        subTokens.push_back(intermediate);
    }
    
    bool pushReady = true;

    for(int i = 0; i < subTokens.size(); i++)
    {
        if(subTokens[i] == "push" || subTokens[i] == "pop" || subTokens[i] == "add" ||
            subTokens[i] == "sub" || subTokens[i] == "mul" || subTokens[i] == "div" ||
            subTokens[i] == "mod" || subTokens[i] == "skip"|| subTokens[i] == "save"||
            subTokens[i] == "get" || checkDigits(subTokens[i]))
        {
            continue;
        }

        throw runtime_error("Unexpected token: " + subTokens[i]); 
        pushReady = false;
        break;
    }
    
    if(pushReady)
        data.push(subTokens);
}

vector<string> Tokenizer::GetTokens()
{
    if(data.empty())
        throw runtime_error("No tokens");

    vector<string> front = data.front();
    data.pop();
    return front;
}

bool checkDigits(string token)
{
    for(int i=0; i < token.size(); i++)
    {
        if(token[i] < 48 || token[i] > 57)
            return false;
    }
    
    return true;
}

