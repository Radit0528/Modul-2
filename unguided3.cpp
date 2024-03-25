#include <iostream>
using namespace std;

int main() {
    int n_2311102013, pilihan, i = 0;

    cout << "Masukkan ukuran array: ";
    cin >> n_2311102013;

    int array[n_2311102013];

    cout << "Masukkan nilai-nilai array:" << endl;
    for (i = 0; i < n_2311102013; i++)
    {
        cout << "Array ke-" << (i) << ": ";
        cin >> array[i];
    }

    cout << "\nMenu Operasi:" << endl;
    cout << "1. Cari nilai maksimum" << endl;
    cout << "2. Cari nilai minimum" << endl;
    cout << "3. Cari nilai rata-rata" << endl;
    cout << "Pilih operasi (1/2/3): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1: {
            int max = array[0];
            int lokasiMax = 0;
            for (int i = 1; i < n_2311102013; ++i) {
                if (array[i] > max) {
                    max = array[i];
                    lokasiMax = i;
                }
            }
            cout << "Nilai maksimum: " << max << " berada di array ke- " << lokasiMax << endl;
            break;
        }
        case 2: {
            int min = array[0];
            int lokasiMin = 0;
            for (int i = 1; i < n_2311102013; ++i) {
                if (array[i] < min) {
                    min = array[i];
                    lokasiMin = i;
                }
            }
            cout << "Nilai minimum: " << min << " berada di array ke- " << lokasiMin <<  endl;
            break;
        }
        case 3: {
            double sum = 0;
            for (int i = 0; i < n_2311102013; ++i) {
                sum += array[i];
            }
            double average = sum / n_2311102013;
            cout << "Nilai rata-rata: " << average << endl;
            break;
        }
        default:
            cout << "Pilihan tidak valid." << endl;
            break;
    }
    return 0;
}
