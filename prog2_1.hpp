#include <queue>
#include <vector>
#include <string>

using namespace std;

class Tokenizer
{
    private:
        queue< vector<string> > data;
        
    public:
        Tokenizer();
        ~Tokenizer();
        void Tokenize(string input);
        vector<string> GetTokens();
};


