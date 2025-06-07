#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Chiều rộng và chiều cao của hình trái tim
    const int width = 30;
    const int height = 15;

    for (int y = height; y >= -height; y--)
    {
        for (int x = -width; x <= width; x++)
        {
            // Công thức tạo hình trái tim 3D
            float part1 = pow(x * 0.05, 2) + pow(y * 0.1, 2) - 1;
            float heartShape = part1 * part1 * part1 - x * x * y * y * y * 0.0001;

            // In ký tự khác nhau cho hiệu ứng 3D
            if (heartShape <= 0.0)
            {
                cout << (heartShape > -0.1 ? "*" : "#");
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
