#include <iostream>
using namespace std;

int SetA[100];
int SetB[100];
int nA, nB, i, j, k, PosTemp;
int restart;

void Header() {

    //Header Of the Application
    cout << "\n\n\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
    cout << "\n\t\t@@                                              @@";
    cout << "\n\t\t@@                                              @@";
    cout << "\n\t\t@@          Sets Operations Software            @@";
    cout << "\n\t\t@@           Union & Intersecction              @@";
    cout << "\n\t\t@@             By Daniel Martinez               @@";
    cout << "\n\t\t@@                                              @@";
    cout << "\n\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
}

void Sets() {

    cout << "\n\n\t\tWelcome, This software calculates the Union and Intersection of two sets" << endl;
    //Input of data set A

    cout << "\n\n\t\tHow many elements will have the SET A" << endl;
    cout << "\t\t"; cin >> nA;
    cout << "\n\n\t\tPlease insert the values of the elements of SetA" << endl;
    for (i = 0; i < nA; i++) {
        cout << "\n\t\tValue " << i + 1 << " of SetA: "; cin >> SetA[i];
    }
    cout << "\n\n\t\t==========================================================" << endl;

    //Input of data set B

    cout << "\n\n\t\tHow many elements will have the SET B" << endl;
    cout << "\t\t"; cin >> nB;
    cout << "\n\n\t\tPlease insert the values of the elements of SetA" << endl;
    for (j = 0; j < nB; j++) {
        cout << "\n\t\tValue " << j + 1 << " of SetB: "; cin >> SetB[j];
    }
    cout << "\n\n\t\t==========================================================" << endl;
    cout << "\n\n\t\tThe values rergistered in the sets are: " << endl;

    //Print SetA
    cout << "\n\n\t\tSet A = [";
    for (i = 0; i < nA; i++) {
        cout << SetA[i] << " ";
    }
    cout << "]";

    //Print SetB
    cout << "\n\n\t\tSet B = [";
    for (j = 0; j < nB; j++) {
        cout << SetB[j] << " ";
    }
    cout << "]";
    cout << "\n\n\t\t==========================================================" << endl;
}

int main()
{
    do{
        system("cls");
        Header();
        Sets();
        
        cout << "\n\n\t\tTo continue please press 1, or press 0 to exit:  "; cin >> restart;
    } while (restart==1);
    exit(0);
    return 0;
}
