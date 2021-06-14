#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "FloatList.cpp"

using namespace std;

int main() {
    cout << "Running..." << endl;
    srand(time(NULL));
    FloatList list;
    for (int i = 0; i < 10; i++) {
        float number = i;
        cout << "Inserting " << number << " into " << i << endl;
        list.insert(i, number);
        list.print();
    }
    list.print();
    list.insert(0, 3.14);
    list.print();
    return 0;
}
