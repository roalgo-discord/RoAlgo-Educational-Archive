#include <iostream>

using namespace std;

const int nmax = 1e4;
int stiva[nmax], lungime_stiva;

void push(int val)
{
    stiva[lungime_stiva] = val;
    lungime_stiva++;
}

int top()
{
    return stiva[lungime_stiva - 1];
}

void pop()
{
    lungime_stiva--;
}

bool empty()
{
    if (lungime_stiva == 0)
    {
        return 1;
    }
    return 0;
}

int main()
{
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
            push(val);
        }
        else if (cer == 1)
        {
            cout << top() << '\n';
        }
        else if (cer == 2)
        {
            pop();
        }
        else
        {
            cout << empty() << '\n';
        }
    }
    return 0;
}