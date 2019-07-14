#include<bits/stdc++.h>
using namespace std;

struct str
{
    int v;
    int k;
};

void display(struct str[],int S);

int main()
{
    int S,temp;

    cout<<"Enter a size of the table: ";
    cin>>S;

    struct str hash_table[S];
    cout<<"Enter the element: ";

    for(int i=0; i<S; i++)
    {
        cin>>temp;
        hash_table[temp%S].v=temp;
        hash_table[temp%S].k=temp%S;
    }
    cout<<endl;
    display(hash_table,S);

}

void display(struct str arr[],int S)
{
    cout<<"value"<<" "<<"key"<<endl;

    for(int i=0; i<S; i++)
    {
        cout<<arr[i].v<<" "<<arr[i].k<<endl;
    }
}





