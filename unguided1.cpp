#include <iostream>
using namespace std;

int main() {
    int arr_2311102013[10];

    cout << "Masukkan Data ke dalam Array:\n";
    for (int i = 0; i < 10; ++i) {
        cin >> arr_2311102013[i];
    }

    cout << "Data Array:";
    for (int i = 0; i < 10; ++i) {
        cout << arr_2311102013[i] << " ";
    }
    cout << endl;

    cout << "Bilangan Ganjil: ";
    for (int i = 0; i < 10; ++i) {
        if (arr_2311102013[i] % 2 != 0)
            cout << arr_2311102013[i] << ", ";
    }
    cout << endl;

    cout << "Bilangan Genap: ";
    for (int i = 0; i < 10; ++i) {
        if (arr_2311102013[i] % 2 == 0)
            cout << arr_2311102013[i] << ", ";
    }
    cout << endl;

    return 0;
}
