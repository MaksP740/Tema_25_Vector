
#include "MyVector.h"
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>


int main() {

    /*MyVector<int> a(3, 0); // [0, 0, 0]
    MyVector<string> b; // size = 0, arr = []


    a.push_back(45);
    b.push_back("Diana");
    b.push_back("Dmytro");
    b.push_back("Volodumur");

    a.print();
    b.print();

    a[0] = -99;
    b[0] = "Danulo";

    a.print();
    b.print();
*/

    vector<int> v1;
    for (int i = 0; i < 10; i++) {
        v1.push_back(rand()%10 - 10);
    }

    cout << "Size: " << v1.size() << endl; // 10 element

    //=============================================

    //Способи роботи з елементами вектору
    vector<int>::iterator it; //Альтернатива покажчика
    for (it = v1.begin(); it != v1.end(); it++) {
        cout << *it << endl;
    }
    cout << endl;
    //=============================================
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;
    //=============================================
    for (int a: v1) { // get
        cout << a << " ";
    }
    cout << endl;
    //=============================================
    for (int &a: v1) { // get + set
        cout << a << " ";
    }
    cout << endl;
    //=============================================
    for (auto& a: v1) {
        cout << a << " ";
    }
    cout << endl;
    //=============================================




    return 0;
}
