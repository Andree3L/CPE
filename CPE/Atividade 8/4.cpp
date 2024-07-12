#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        
        int *ptr1 = &a1;
        int *ptr2 = &a2;
        int *ptr3 = &b1;
        int *ptr4 = &b2;

        if ((*ptr1 < *ptr3 && *ptr2 < *ptr4) || (*ptr1 < *ptr4 && *ptr2 < *ptr3)) {
            cout << "S" << endl;
        } else {
            cout << "N" << endl;
        }
    }
    
    return 0;
}