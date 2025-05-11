#include<iostream>
using namespace std;
int main()
{
	char str[20];
	cin.getline(str, 20);
    for (int i = 0; i<strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
    cout << "Toggled string: " << str;
}