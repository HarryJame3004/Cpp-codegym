#include <iostream>
#include <string>
using namespace std;

#define BASIC_SALARY 300

int main() {
  string full_nam = "Tran NGoc Minh Khoi";
  int my_age = 20;
  string my_address = "Thu Dau Mot";
  bool checking = true;
  char letter = 'A';
  float my_point = 8.9;
  double my_money = 100.533;

  cout << full_nam << endl;
  cout << my_money << endl;
  const double PI = 3.14;
  cout << "Luong co ban :" << BASIC_SALARY << endl;
  cout << "Gia tri cua so PI ;" << PI << endl;

  int number1 = 4;
  int number2 = 9;

  int result =
      number2 % number1; // phep chia lay phan du (chi ap dung cho so nguyen)
  cout << result << endl;

  cout << (number1 + number2) << endl; // phep cong
  cout << (number2 - number1) << endl; // phep tru

  // = : phep gan gia tri
  // == : phep so sanh
  bool kiem_tra =
      number1 == number2;   // so sanh so number1 co bang so number2 ko?
  cout << kiem_tra << endl; // 0 - false : bang nhau la sai

  bool kiem_tra2 = number1 != number2; //
  cout << kiem_tra2 << endl;           // 1 - true : dung la khong bang nhau

  int number3 = 9;
  int number4 = 10;

  bool kiem_tra3 = (number1 > number2) && (number3 < number4); // AND
  bool kiem_tra4 = (number1 > number2) || (number3 < number4); // OR

  cout << kiemtra_3 << endl;
  cout << kiem_tra4 << endl;

  return 0;
}
