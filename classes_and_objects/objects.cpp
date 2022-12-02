#include <iostream>
using namespace std;

class students{

  public: 
    int age;
    int score;
    string surname;
    string city;

};

int main() {

   students Alex;            // Create 1st object of the class

   Alex.surname = "Costa";
   Alex.age = 28;
   Alex.city = "shanghai";
   Alex.score = 15;


   cout<< "Information of Alex... \n";
   cout<< "Surname: " << Alex.surname << "\n";
   cout<< "Age: " << Alex.age << "\n";
   cout<< "City: " << Alex.city << "\n";
   cout<< "Score: " << Alex.score << "\n";


   students Jeff;            // Create 2st object of the class

   Jeff.surname = "Bill";
   Jeff.age = 30;
   Jeff.city = "Xian";
   Jeff.score = 13;


   cout<< "Information of Jeff... \n";
   cout<< "Surname: " << Jeff.surname << "\n";
   cout<< "Age: " << Jeff.age << "\n";
   cout<< "City: " << Jeff.city << "\n";
   cout<< "Score: " << Jeff.score << "\n";



    return 0;
}