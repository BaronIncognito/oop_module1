#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> list;
    while (true) {
        int buf;
        cin >> buf;
        if (buf < 0) {
            break;
        }
        if (buf < 10) {
            list.push_back(buf);
        }
    }
    int max = 0;
    int sum = 0;
    for (int i = 0; i < list.size(); i++) {
        if (list[i] > max) {
            max = list[i];
        }
        sum += list[i];
    }
    cout << "Max: " << max << endl;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << sum / list.size() << endl;
}


