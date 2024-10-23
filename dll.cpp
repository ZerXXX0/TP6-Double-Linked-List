#include <iostream>
#include "dll.h"

using namespace std;

bool isEmpty(List L){
    if (first(L) == NULL) {
        return true;
    } else {
        return false;
    }
}
void createList(List &L){
    first(L) = NULL;
}
address createNewElmt(infotype X, address P){
    P = new elmtlist;
    info(P) = X;
    next(P) = NULL;
    if (X.judul == "" && X.artist == "") {
        P = NULL;
    }
    return P;
}
void insertFirst(List &L, address P){
    if (isEmpty(L)) {
        last(L) = P;

    } else {
        next(P) = first(L);
        prev(first(L)) = P;
    }
    first(L) = P;
}
void insertAfter(List &L, address &Prec, address P) {
    next(P) = next(Prec);
    prev(P) = Prec;
    if (next(Prec) == NULL) {
        last(L) = P;
    } else {
        prev(next(Prec)) = P;
    }
    next(Prec) = P;
}
void insertLast(List &L, address P) {
    if(isEmpty(L)) {
        first(L) = P;
        last(L) = P;
    } else {
        prev(P) = last(L);
        next(last(L)) = P;
        last(L) = P;
    }
}
void deleteFirst(List &L, address P) {
    P = first(L);
    if (first(L) != last(L)) {
        first(L) = next(P);
        next(P) = NULL;
        prev(first(L)) = NULL;
    } else {
        first(L) = NULL;
        last(L) = NULL;
    }
}
void deleteAfter(List &L, address &Prec, address P) {
    if (Prec == NULL) {
        cout << "not found" << endl;
    } else {
        P = next(Prec);
        next(Prec) = next(P);
        prev(next(P)) = Prec;
        prev(P) = NULL;
        next(P) = NULL;
    }

}
void deleteLast(List &L, address P) {
    P = last(L);
    last(L) = prev(last(L));
    prev(P) = NULL;
    next(last(L)) = NULL;
}
void concat(List L1, List L2, List &L3){
    address P, Q, R;
    P = first(L3);
    Q = first(L1);
    R = first(L2);
    while (Q != NULL) {
        insertLast(L3, Q);
        Q = next(Q);
    }
    while (R != NULL) {
        insertLast(L3, R);
        R = next(R);
    }
}
address findLagu(string Judul, List &L){
    address P, addy;
    P = first(L);
    addy = NULL;
    while (P != NULL) {
        song lagu = info(P);
        if (lagu.judul == Judul) {
            addy = P;
        }
        P = next(P);
    }
    return addy;
}
void removeLagu(string Judul, List &L){
    address P = findLagu(Judul, L);
    if (P != NULL) {
        if (P == first(L)) {
            deleteFirst(L, P);
        } else if (P == last(L)) {
            deleteLast(L,P);
        } else {
            address Prec = prev(P);
            deleteAfter(L, Prec, P);
        }
    }
}
void printData(List L){
    address P = first(L);
    while (P != NULL) {
        song lagu = info(P);
        cout << lagu.judul << "-" << lagu.artist << ", ";
        P = next(P);
    }
    cout << endl;
}
