#include "stadfx.h"

int main() {

    Circle C1(1.0);
    C1.display();

    Square S1(2.0);
    S1.display();

    //定义shape指针
    const int ptrnum=2;
    Shape* ptr[ptrnum];
    ptr[0]=&C1;
    ptr[1]=&S1;
    for(int i=0;i<ptrnum;i++)
    {
        ptr[i]->display();
    }



    return 0;
}
