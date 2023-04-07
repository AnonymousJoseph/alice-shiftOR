#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // 1. Dosyanın içeriğini oku
    ifstream file("alice_in_wonderland.txt");
    string text((istreambuf_iterator<char>(file)), istreambuf_iterator<char>());

    // 2. Kelimeleri bir vektöre yükle
    vector<string> keywords = {"upon,sigh,Dormouse,jury-box,swim"};

    // 3. Shift-OR algoritması ile kelime tekrar sayısı bulma
    for (const string& keyword : keywords) {
        int count = 0;
        int n = keyword.length();
        vector<int> mask(n);
        vector<int> bitarray(n, 0);
        for (int i = 0; i < n; i++) {
            mask[i] = 1 << (n - i - 1);
        }
        for (const char& c : text) {
            bitarray.erase(bitarray.begin());
            bitarray.push_back(0);
            for (int i = 0; i < n; i++) {
                bitarray[n-1] |= ((c == keyword[i]) << (n - i - 1));
            }
            if (bitarray[n-1] & mask[0]) {
                count++;
            }
        }
        cout << keyword << ": " << count << endl;
    }
    return 0;
}
