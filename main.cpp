#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main() {
    while (true){
        system("cls");
        int choice;
        cout << "Please select: " << endl
        << "    1: Hexadecimal to Denary." << endl
        << "    2: Hexadecimal to Binary." << endl
        << "    3: Denary to Hexadecimal." << endl
        << "    4: Denary to Binary" << endl
        << "    5: Binary to Denary" << endl
        << "    6: Binary to Hexadecimal" << endl;
        cin >> choice;

        switch (choice){
            case 1:{
                system("cls");
                int num;
                cout << "Enter your Hexadecimal value (prefix with 0x): ";
                cin >> hex >> num;

                cout << num << endl;
                system("pause");

                break;
            }

            case 2:{
                system("cls");
                int num;
                cout << "Enter your Hexadecimal value (prefix with 0x): ";
                cin >> hex >> num;

                string s = bitset<64>(num).to_string();
                while (s[0] == '0'){
                    s.erase(0, 1);
                }

                cout << s << endl;
                system("pause");

                break;
            }
        }
    }
}
