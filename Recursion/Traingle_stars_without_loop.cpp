#include<bits/stdc++.h>
using namespace std;

void print_row(int n)
{
    if(n>0)
    {
        cout<<"*";
        print_row(n-1);
    }
    else
    {
        cout<<endl;
    }
}

void print_pattern(int n)
{
    if(n>0)
    {
        print_row(n-1);
        print_pattern(n-1);

    }

}

int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    print_pattern(n+1);
    return 0;
}