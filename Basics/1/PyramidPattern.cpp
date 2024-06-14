#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    for(int row = 1; row <= N; row++)
    {
        for(int space = 1; space <= (N - row); space++)
        {
            cout<< " ";
        }

        int value = row;
        for(int col = 1; col <= row; col++)
        {
            cout << value;
            value++;
        }

        value = value - 2;
        for(int col = 1; col <= row - 1; col++)
        {
            cout << value;
            value--;
        }

        cout<<"\n";
    }

    return (0);
}