#include<iostream>
#include<stack>
using namespace std;

class browsingHisory
{
	stack <string> back;
	stack <string> forward;
	string current;
public:
	void visit(string url)
	{
		if (!(current.empty()))
			back.push(current);
		current = url;
		while (!(forward.empty()))
			forward.pop();
		cout << "Current URL: " <<current<<endl;
	}
	void 
};
int main()
{
	stack <string> back;
	stack <string> forward;
}