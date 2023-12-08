#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> stiva;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int cer;
        cin >> cer;
        if (cer == 0)
        {
            int val;
            cin >> val;
            stiva.push(val);
        }
        else if (cer == 1)
        {
            cout << stiva.top() << '\n';
        }
        else if (cer == 2)
        {
            stiva.pop();
        }
        else
        {
            cout << stiva.empty() << '\n';
        }
    }
    return 0;
}