#include <iostream>
#include <string>

using namespace std;

  void welcome(string names) {
      cout << "Welcome, User " << names << "!" << endl;
  
  }
    int main() {
    string names;
    cout << "Enter your name: ";
    cin >> names;
  
    welcome(names);
    return 0;
}