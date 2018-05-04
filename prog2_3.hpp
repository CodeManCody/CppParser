#include <vector>
#include <string>

using namespace std;

class Parser
{
    public:
        Parser();
        ~Parser();
        bool Parse(vector<string> line);
};
