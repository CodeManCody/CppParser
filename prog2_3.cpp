#include "prog2_3.hpp"
#include "prog2_1.hpp"
#include <vector>
#include <string>

using namespace std;

bool checkDigits(string token);

Parser::Parser(){}
Parser::~Parser(){}

bool Parser::Parse(vector<string> line)
{
    if(line[0] == "pop" || line[0] == "add" || line[0] == "sub" || line[0] == "mul" ||
       line[0] == "div" || line[0] == "mod" || line[0] == "skip")
    {
        if(line.size() == 1)
            return true;

        return false;
    }

    if(line[0] == "push" || line[0] == "save" || line[0] == "get")
    {
        if((line.size() == 2) && checkDigits(line[1]))
            return true;

        return false;
    }

    return false;
}
