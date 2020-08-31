#include "Roster.h"
int
main ()
{

  const string studentData[] = {
    "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
      "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
      "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
      "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
      "A5,Erica,Thompson,ericathompsonsmiles@gmail.com,29, 30,60,90,SOFTWARE"
  };
  const int numStudents = 5;
  Roster roster;
  for (int i = 0; i < numStudents; i++)
    roster.parse (studentData[i]);
  cout << "Displaying all books: " << std::endl;
  roster.printAll ();
    cout << std::endl;
    
    for (int i = 0; i < 3; i++)
    {
        cout << "Displaying by degree type:: " << degreeTypeStrings[i] << std::endl;
        roster.printByDegreeType((DegreeType)i);
    }
   
    cout << "Displaying students with invalid IDs" << std::endl;
    roster.printInvalidIDs();
    cout << std::endl;
    
    cout << "Displaying days: " << std::endl; roster.printAverageDaysInCourse();
    
    cout << "Removig book with ID A1:" << std::endl; roster.removeStudentByID("A1");
    cout << std::endl;
    
    system("pause");
    return 0;
    
    
};


