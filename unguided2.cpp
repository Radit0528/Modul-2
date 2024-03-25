#include <iostream>
using namespace std;

int main()
{
    int x_2311102103, y_2311102103, z_2311102103;

    cout << "Masukkan ukuran dimensi x: ";
    cin >> x_2311102103;
    cout << "Masukkan ukuran dimensi y: ";
    cin >> y_2311102103;
    cout << "Masukkan ukuran dimensi z: ";
    cin >> z_2311102103;

    int arr[x_2311102103][y_2311102103][z_2311102103];

    cout << "Masukkan nilai untuk array 3 dimensi:" << endl;
    for (int x = 0; x < x_2311102103; ++x)
    {
        for (int y = 0; y < y_2311102103; ++y)
        {
            for (int z = 0; z < z_2311102103; ++z)
            {
                cout << "Masukkan nilai array[" << x << "][" << y << "][" << z << "]: ";
                cin >> arr[x][y][z];
            }
        }
    }

    // Tampilan array
    cout << "\nTampilan Array:\n";
    for (int x = 0; x < x_2311102103; x++)
    {
        for (int y = 0; y < y_2311102103; y++)
        {
            for (int z = 0; z < z_2311102103; z++)
            {
                cout << arr[x][y][z] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
