#include <iostream>
using namespace std;

//this program is designed to convert from roman to arabic numbers
int main() {
    string romanNum, choice, user;
    int sum = 0;
//taking the input from the user
    cout << "Welcome to Roman Numerals to Arabic converter\n" << "Press any key to use the program and quit to exit\n" << ">> ";
    cin >> choice;

//converting from roman to arabic
    while ( choice != "quit"){

        cout << "Enter the roman number: ";
        cin >> romanNum;
        for (int i = 0; i < romanNum.size(); i++){
            switch (romanNum[i]) {
                case 'I':
                    sum += 1;
                    break;
                case 'V':
                    sum += 5;
                    break;
                case 'X':
                    sum += 10;
                    break;
                case 'L':
                    sum += 50;
                    break;
                case 'C':
                    sum += 100;
                    break;
                case 'D':
                    sum += 500;
                    break;
                case 'M':
                    sum += 1000;
                    break;
                default:
                    cout << "Invalid Input";
            }
        }

//subtracting if needed
        for (int i = 0; i < romanNum.size(); ++i) {
            if ((romanNum[i] == 'V' || romanNum[i] == 'X') && romanNum[i - 1] == 'I')
                sum -= 1 + 1;
            else if ((romanNum[i] == 'L' || romanNum[i] == 'C') && romanNum[i - 1] == 'X')
                sum -= 10 + 10;
            else if ((romanNum[i] == 'D' || romanNum[i] == 'M') && romanNum[i - 1] == 'C')
                sum -= 50 + 50;
        }
//printing the final output and ask the user if he/she would like to use the program again
        cout <<"Arabic number: " << sum << "\n------------------------------------------" << endl;
        cout << "press any key to continue\n" << "Enter quit to exist\n" << ">>";
        cin >> choice;

    }



    return 0;
}
