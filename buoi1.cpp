#include <iostream>
#include <string>

using namespace std;

int main() {

  int id;         // ma so
  string address; // dia chi

  cout << "Hello word" << endl;
  cout << "Codegym C++" << endl;

  cout << "Moi nhap ma so: " << endl;

  cin >> id;

  cin.ignore();

  cout << "Moi nhap dia chi cua ban: " << endl;

  getline(cin, address);

  cout << "ID: " << id << " - Address: " << address << endl;

  return 0;
}
