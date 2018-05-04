#include "prog2_3.hpp"
#include "prog2_1.hpp"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
    ifstream file(argv[1]);
    string line;
    int lineNumber = 1;
    Tokenizer* test = new Tokenizer;
    Parser* pTest = new Parser;
    
    while(getline(file, line))
    {
        try
        {
            test->Tokenize(line);
            vector<string> yes = test->GetTokens();
        }
        catch(const exception& e)
        {
            cout << "Error on line " << lineNumber << ": " << e.what() << endl;
            return 0;
        }
        
        lineNumber++;
    }

    file.clear();
    file.seekg(0, file.beg);
    lineNumber = 1;

    while(getline(file, line))
    {
        test->Tokenize(line);
        vector<string> yes = test->GetTokens();

        if(!pTest->Parse(yes))
        {
            cout << "Parse error on line " << lineNumber << ": ";

            for(int i=0; i < (yes.size()-1); i++)
                cout << yes[i] << " ";

            cout << yes[yes.size()-1] << endl;

            return 0;
        }

        lineNumber++;
    }

    file.clear();
    file.seekg(0, file.beg);

    while(getline(file, line))
    {
        test->Tokenize(line);
        vector<string> yes = test->GetTokens();
        
        for(int i=0; i < (yes.size()-1); i++)
            cout << yes[i] << ",";

        cout << yes[yes.size()-1] << endl;
    }

    delete test;
    delete pTest;

    return 0;
}
