#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string str1, str2, Nome;
int C;

int main() {

    cin >> C;
    cin.ignore();

    for (int i = 0; i < C; i++) {
        getline(cin, str1);
        getline(cin, str2);
        while (str1.length() >= 2 && str2.length() >= 2) {
            Nome += str1.substr(0, 2);
            Nome += str2.substr(0, 2);
            str1 = str1.substr(2);
            str2 = str2.substr(2);
        }
        
        Nome += str1.substr(0, 2);
        Nome += str2.substr(0, 2);
        cout << Nome << endl;
        
        Nome = "";
        str1 = "";
        str2 = "";
    }

    return 0;
}