
#include "MyVector.h"
#include "Medicine.h"
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
    /*
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
    */

    vector<Medicine> med; //size = 0, Medicine* arr = nullptr

    med.push_back(Medicine ("Nurofen", "pills", 70.43));
    // size = 1 , arr[0] = {"Nurofen", "pills", 70.43}

    med.push_back(Medicine ("Dr Mom", "syrope", 120.78));
    // size= 2, arr[1] = {"Dr Mom", "syrope", 120.78}

    med.push_back( Medicine("Aspiryn", "capsules", 45.78));
    // size= 3, arr[2] = {"Aspiryn", "capsules", 45.78}

    for(int i = 0; i < med.size(); i++){
        med[i].showInfo();
    }
    cout << "=========================================" << endl;

    string name = "Nurofen";
    auto find = find_if (med.begin(), med.end(),[name](Medicine a) {return a.getTitle() == name;});

    if (find == med.end()) {
        cout << name << " Not found!" << endl;
    }
    else {
        med.erase(find);
    }

    for(int i = 0; i < med.size(); i++){
        med[i].showInfo();
    }

    cout << "=========================================" << endl;

    for_each(med.begin(), med.end(), [](Medicine &a) {a.setPrice(a.getPrice() * 1.15);});

    for(int i = 0; i < med.size(); i++){
        med[i].showInfo();
    }
    return 0;
}
