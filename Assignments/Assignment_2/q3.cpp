#include<iostream>

using namespace std;

void Display(bool *,char);

int main()
{
    char choise = 'd',saet,seatno;
    int row;
    bool seat[13][6];
    for (int i = 0; i < 13 ; i++)
        for (int j = 0; j < 6; j++)
            seat[i][j] = true;                                          //Initiliatizing every seat as available
    cout << "'*' Means Available and 'X' Means Occopied: ";
    Display(&seat[0][0],choise);
    do
    {
        cout << "\n\nPress 'F' for First Class, Press 'B' for Buisness Class, Press E for Economy Class, Orr press 0 to exit: \n";
        cout << "Your Preference: ";
        cin >> choise;
        if (choise == '0')
            continue;
        if (choise != 'F' && choise != 'f' && choise != 'B' && choise != 'b'&& choise != 'E' && choise != 'e'){
            cout << "Invalid Input\n\n";
            continue;
        }
        Display(&seat[0][0],choise);
        cout << "Enter Row: ";
        cin >> row;
        if (row < 1 || row >13){
            cout << "Invalid Input\n\n";
            continue;
        }
        cout << "Enter Seat: ";
        cin >> saet;
        switch (saet)
        {
        case 'A':
        case 'a':
            seatno = 0;
            break;
        case 'B':
        case 'b':
            seatno = 1;
            break;
        case 'C':
        case 'c':
            seatno = 2;
            break;
        case 'D':
        case 'd':
            seatno = 3;
            break;
        case 'E':
        case 'e':
            seatno = 4;
            break;
        case 'F':
        case 'f':
            seatno = 5;
            break;
        default:
            cout << "Invalid input\n\n";
            break;
        }
        if(!seat[row-1][seatno]){
            cout << "Sorry!!! THe seat is occopied";
            Display(&seat[0][0],'d');
            continue;
        }
        seat[row-1][seatno] = false;
        cout << "\n\n'*' Means Available and 'X' Means Occopied: ";
        Display(&seat[0][0],'d');
    } 
    while (choise != '0');
    return 0;
}

void Display(bool * seat,char choise)
{
    if (choise == 'd'){
        cout << "\n\n        A B C D E F" << endl;
        for (int i = 0; i < 13; i++){
            if (i >= 9)
                cout << "Row " << i + 1 << "  ";
            else
                cout << "Row " << i + 1 << "   ";
            for (int j = 0; j < 6; j++){
                if (*(seat + (6 * i) +j))
                    cout << "* ";
                else 
                    cout << "X ";
            }
            cout << endl;
        }
    }
    else if (choise == 'f' || choise == 'F'){
        cout << "\n\n        A B C D E F" << endl;
        for (int i = 0; i < 2; i++){
            if (i >= 9)
                cout << "Row " << i + 1 << "  ";
            else
                cout << "Row " << i +1 << "   ";
            for (int j = 0; j < 6; j++){
                if (*(seat + (6 * i) +j))
                    cout << "* ";
                else 
                    cout << "X ";
            }
            cout << endl;
        }
    }
    else if (choise == 'b' || choise == 'B'){
        cout << "\n\n        A B C D E F" << endl;
        for (int i = 2; i < 7; i++){
            if (i >= 9)
                cout << "Row " << i + 1 << "  ";
            else
                cout << "Row " << i + 1 << "   ";
            for (int j = 0; j < 6; j++){
                if (*(seat + (6 * i) +j))
                    cout << "* ";
                else 
                    cout << "X ";
            }
            cout << endl;
        }
    }
    else if (choise == 'e' || choise == 'E'){
        cout << "\n\n        A B C D E F" << endl;
        for (int i = 7; i < 13; i++){
            if (i >= 9)
                cout << "Row " << i + 1 << "  ";
            else
                cout << "Row " << i + 1 << "   ";
            for (int j = 0; j < 6; j++){
                if (*(seat + (6 * i) +j))
                    cout << "* ";
                else 
                    cout << "X ";
            }
            cout << endl;
        }
    }
}