#include <iostream>
#include "dll.h"

using namespace std;

int main()
{
    List L, L1, L2;
    address P, Prec, q;
    string Judul;
    infotype X;

    if (isEmpty(L)) {
        cout << "List ini empty" << endl;
    } else {
        cout << "List ini tidak empty" << endl;
    }

    createList(L);

    cout << "masukkan lagu ke first: " << endl;
    cin >> X.judul >> X.artist;
    P = createNewElmt(X, P);
    insertFirst(L, P);

    cout << "masukkan lagu ke first: " << endl;
    cin >> X.judul >> X.artist;
    P = createNewElmt(X, P);
    insertFirst(L, P);

    cout << "masukkan lagu ke last" << endl;
    cin >> X.judul >> X.artist;
    P = createNewElmt(X, P);
    insertLast(L, P);

    cout << "masukkan lagu ke last" << endl;
    cin >> X.judul >> X.artist;
    P = createNewElmt(X, P);
    insertLast(L, P);

    printData(L);
    cout << "========================================" << endl;

    cout << "masukkan lagu ke after" << endl;
    cin >> X.judul >> X.artist;
    P = createNewElmt(X, P);
    cout << "masukkan prec" << endl;
    cin >> X.judul;
    Prec = findLagu(X.judul, L);
    insertAfter(L, Prec, P);

    printData(L);
    cout << "========================================" << endl;

    cout << "delete lagu first" << endl;
    deleteFirst(L, P);

    printData(L);
    cout << "========================================" << endl;

    cout << "delete lagu after" << endl;
    cin >> X.judul;
    Prec = findLagu(X.judul, L);
    deleteAfter(L, Prec, P);

    printData(L);
    cout << "========================================" << endl;

    cout << "delete lagu last" << endl;
    deleteLast(L, P);

    printData(L);
    cout << "========================================" << endl;


    cout << "Lagu yang diremove: " << endl;
    cin >> Judul;
    removeLagu(Judul, L);

    printData(L);
    cout << "========================================" << endl;



    //List L1
    createList(L1);
    cout << "masukkan lagu ke first: " << endl;
    cin >> X.judul >> X.artist;
    P = createNewElmt(X, P);
    insertFirst(L1, P);

    cout << "masukkan lagu ke first: " << endl;
    cin >> X.judul >> X.artist;
    P = createNewElmt(X, P);
    insertFirst(L1, P);

    cout << "masukkan lagu ke last" << endl;
    cin >> X.judul >> X.artist;
    P = createNewElmt(X, P);
    insertLast(L1, P);

    cout << "masukkan lagu ke last" << endl;
    cin >> X.judul >> X.artist;
    P = createNewElmt(X, P);
    insertLast(L1, P);

    printData(L1);
    cout << "========================================" << endl;

    cout << "masukkan lagu ke after" << endl;
    cin >> X.judul >> X.artist;
    P = createNewElmt(X, P);
    cout << "masukkan prec" << endl;
    cin >> X.judul;
    Prec = findLagu(X.judul, L1);
    insertAfter(L1, Prec, P);

    printData(L1);
    cout << "========================================" << endl;

    cout << "delete lagu first" << endl;
    deleteFirst(L1, P);

    printData(L1);
    cout << "========================================" << endl;

    cout << "delete lagu after" << endl;
    cin >> X.judul;
    Prec = findLagu(X.judul, L1);
    deleteAfter(L1, Prec, P);

    printData(L1);
    cout << "========================================" << endl;

    cout << "delete lagu last" << endl;
    deleteLast(L1, P);

    printData(L1);
    cout << "========================================" << endl;

    cout << "Lagu yang diremove: " << endl;
    cin >> Judul;
    removeLagu(Judul, L1);

    printData(L1);
    cout << "========================================" << endl;


    //concatenating 2 playlist
    cout << "Concat 2 playlist" << endl;
    concat(L, L1, L2);
    printData(L2);
    cout << "========================================" << endl;
    return 0;
}
