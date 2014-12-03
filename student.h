#ifndef STUDENT_H_
#define STUDENT_H_
#include <string>

//definiáljuk a diákok típusát
//ezt két féle képpen használjuk:
//1. amikor beolvassuk a fájlból az adatokat (ekkor a jegyátlag csak jegy (nem átlag)és egy neptun kód többször is szerepel)
//2. amikor meghatározzuk a neptunkódokhoz tartozó átlagot
struct Student
{
    std::string neptun; //neptun kód
    int summark; //adott neptunkódhoz tartozó jegy, a StudentSummation::Add(const Student &x) lefutása után jegyek összege.
    int pcs; //ugyanaz a neptunkód hányszor szerepel
    double average; //átlag

    //Amikor lefut a Student konstruktora, mindent nullára illetve üresre állít.

    Student(std::string _neptun="", int _summark=0, int _pcs=0,double _average=0.0)
    {
        neptun = _neptun;
        summark = _summark;
        pcs = _pcs;
        average = _average;
    }
    //Beolvasás    
    friend std::istream& operator>>(std::istream& f, Student &x);
};

#endif // STUDENT_H_
