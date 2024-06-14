#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int row = 1;
    while (row <= N)
    {
        int col = 1;
        while (col <= row)
        {
            if (row % 2 == 1)
            {
                cout << "1";
                col += 1;
            }
            else if (row % 2 == 0)
            {
                if (col == 1 || col == row)
                {
                    cout << "1";
                    col += 1;
                }
                else
                {
                    cout << "0";
                    col += 1;
                }
            }
        }
        cout << "\n";
        row += 1;
    }
    return (0);
}
