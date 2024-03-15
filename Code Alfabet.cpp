#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string input;
    cout << "Masukkan Abjad yang ingin diurutkan: ";
    getline(cin, input); // Menggunakan getline untuk membaca seluruh baris termasuk spasi

  cout << endl;

    // Menggunakan fungsi sort dari library algorithm untuk mengurutkan string
    sort(input.begin(), input.end());
    cout << "Abjad yang sudah diurutkan: " << input << endl;

    return 0;
}
