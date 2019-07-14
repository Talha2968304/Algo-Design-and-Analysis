#include <bits/stdc++.h>
using namespace std;

int a[2000];
int main ()
{
    int x;
    string str;

    getline(cin, str);

    cout << "Enter a Number: ";

    cin >> x;

    int n = str.length(),sum=0;
    int p = 0, y = 0;

    for(int i=0; i<n; i++)
    {

        if(str[i] != ' ' && str[i] != '.' && str[i] != ',' && str[i] != ';')
        {
            p += str[i] * pow(x, y);
            y++;
        }
        else
        {
            p %= 10;
            a[p] = 1;
            p = 0;
            y= 0;
        }
    }

    for(int i=0; i<2000; i++)
    {
        if(a[i])
            sum++;
    }

    cout << "Unique word: " << sum+1 <<endl;

}
