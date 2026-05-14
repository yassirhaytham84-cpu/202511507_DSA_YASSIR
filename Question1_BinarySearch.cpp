#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string name[100];
    int age[100];
    string key;
    bool found = false;
    
    cout<<"==================================="<<endl;
    cout<<" ==== binary search algorithm ==="<<endl;
    cout<<"==================================="<<endl;

    cout << "Enter number of family members: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter name of member " << i + 1 << ": ";
        cin >> name[i];
        cout << "Enter age of member " << i + 1 << ": ";
        cin >> age[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (name[j] > name[j + 1]) {
                string tempName = name[j];
                name[j] = name[j + 1];
                name[j + 1] = tempName;

                int tempAge = age[j];
                age[j] = age[j + 1];
                age[j + 1] = tempAge;
            }
        }
    }

    cout << "Enter key name to search: ";
    cin >> key;

    cout << "====================================" << endl;

    // Binary search
    
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (name[mid] == key) {
            cout << name[mid] << " was found and is aged " << age[mid] << endl;
            found = true;
            break;
        } else if (name[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found) {
        cout << "Not found" << endl;
    }

    return 0;
}
