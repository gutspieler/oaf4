#include <iostream>
#include "student.h"
#include "studentenor.h"
#include "studentdecide.h"
#include "StudentSummation.h"

using namespace std;

int main()
{
    Student res;
    StudentDecide decide;
    StudentEnor studentenor("input.txt");
    bool istrue=false;

    decide.AddEnumerator(&studentenor);
    decide.Run();
    cout<<"Eredmeny: ";
    if (decide.Found())
    {
        cout<<"hamis"<<endl;
    }
    else
    {
        cout<<"igaz"<<endl;
    }

    return 0;
}
