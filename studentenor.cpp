#include "studentenor.h"
#include "StudentSummation.h"
//!ISTREAM

//first művelet felüldeviniálása
void StudentEnor::First()
{
    seqenor->First();
    Next();
}
//next művelet felüldefiniálása
void StudentEnor::Next()
{
    end = seqenor->End();
    if (end) return;
    current = seqenor->Current();
    StudentSummation sum(current); //átlag meghatározása
    sum.AddEnumerator(seqenor);
    sum.Run();
    current = sum.Result();
}
