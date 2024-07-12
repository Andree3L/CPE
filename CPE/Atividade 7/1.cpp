#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int contador_i, contador_b = 0;

    while (getline(cin, str)) {

        
        for (int i = 0; i < str.length(); ++i) {
            if (str[i] == '_') {
                ++contador_i;
                if (contador_i % 2 != 0) {
                    str.replace(i, 1, "<i>");

                } else {
                    str.replace(i, 1, "</i>");

                }
            } else if (str[i] == '*') {
                ++contador_b;
                if (contador_b % 2 != 0) {
                    str.replace(i, 1, "<b>");

                } else {
                    str.replace(i, 1, "</b>");

                }
            }
        }
        
        cout << str << endl;
    }
    
    return 0;
}
 