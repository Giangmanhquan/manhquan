#include <iostream>
using namespace std;

int main()
{
    int n = 9; // Kích thước của trái tim, bạn có thể thay đổi giá trị này để thay đổi kích thước

    // In phần trên của trái tim
    for (int i = n / 2; i <= n; i += 2)
    {
        // In khoảng trắng trước trái tim bên trái
        for (int j = 1; j < n - i; j += 2)
        {
            cout << " ";
        }

        // In phần trái của trái tim
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // In khoảng trắng giữa hai nửa trái tim
        for (size_t i = 0; i < count; i++)
        {
            /* code */
        }
        (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // In phần phải của trái tim
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // In phần dưới của trái tim
    for (int i = n; i >= 1; i--)
    {
        // In khoảng trắng trước phần dưới của trái tim
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }

        // In phần dưới của trái tim
        for (int j = 1; j <= (i * 2) - 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
