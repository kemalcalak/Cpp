#include "upcastingDowncasting.h"

int main()
{

    //UPCASTING

    Employee* emp1, * emp2;
    Manager mng("Ogun", "Birinci", 3500, "Software");
    Employee emp3("Duygu", "Keydal", 4000);

    emp1 = &mng;
    emp2 = &emp3;
    emp1->displayInformation();
    emp2->displayInformation();

    mng.displayInformation();


    //DOWNCASTING
    cout << "-----------------------------------" << endl;
    Employee emp("Duygu", "Keydal", 3900);
    Employee* emp2 = &emp;

    Manager* mng2 = (Manager*)(emp1);

    Manager* mng3 = (Manager*)(emp2);
    cout << mng3->mngDepartment << endl;

    cout << "---------------------------------" << endl;
    emp1->displayInformation();
    mng2->displayInformation();

    return 0;
}

