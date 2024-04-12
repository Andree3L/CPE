#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3, n4, n5;
    string s1, s2, s3, s4, s5;

    cout << "Digite 5 numeros de 1 a 30" << endl;
    cin >> n1 >> n2 >> n3;
    cin >> n4 >> n5;

    for(int i = 1; i <= n1; ++i){
        s1 += "*";
    }
    for(int i = 1; i <= n2; ++i){
        s2 += "*";
    } 
    for(int i = 1; i <= n3; ++i){
        s3 += "*";
    }
    for(int i = 1; i <= n4; ++i){
        s4 += "*";
    } 
    for(int i = 1; i <= n5; ++i){
        s5 += "*";
    } 

    cout << s1 << " " << s2 << " " << s3 << " " << s4 << " " << s5;

    return 0;
}