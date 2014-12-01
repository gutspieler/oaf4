#ifndef STUDENT_ENOR_H_
#define STUDENT_ENOR_H_
#include <iostream>
#include "enumerator.hpp"
#include "seqinfileenumerator.hpp"
#include "StudentSummation.h"

class StudentEnor : public Enumerator<Student>
{
protected:
    SeqInFileEnumerator<Student> *seqenor;
    Student current;
    bool end;

public:
    StudentEnor(const std::string& neptun)
    {
        try
        {
            seqenor = new SeqInFileEnumerator<Student>(neptun);
        }
        catch (SeqInFileEnumerator<std::string>::Exceptions ex)
        {
            std::cout << "Hibas inputfile!\n";
            
        }
    }
    ~StudentEnor() { delete seqenor; }
    void First();
    void Next();
    bool End() const { return end; }
    Student Current() const { return current; }

};

#endif // SUDENT_ENOR_H_