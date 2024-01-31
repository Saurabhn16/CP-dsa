#include <iostream>
#include <string>

using namespace std;

string missingFun(string str)
{
    int lng = str.length();
    if (lng == 0)
    {
        return "-1";
    }
    if (lng == 1)
    {
        return str;
    }
    int i = 0, j = lng - 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
          
            j--;
        }
        else
        {
         i++;
            j--;
        }
    }
    if (i == 0)
    {
        return "-1";
    }
    else
    {
        return str.substr(0, i);
    }
}

int main()
{
    string str;
    cin >> str;
    string substring = missingFun(str);
    cout << substring << endl;
    return 0;
}
