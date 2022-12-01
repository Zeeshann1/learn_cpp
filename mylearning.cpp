#include <iostream>
using namespace std;
#include <cmath>

/////////////////////////////////////////////MATH LIB FUNCTION///////////////////////////////////////////////

  void mymath(string name){
  cout <<name << "\n"<<"Math fuction called successfully"<<"\n";
  cout<<"\n";
  cout <<"Square root of 64 is: "<<sqrt(64) << "\n";
  cout <<"round off of 2.6 is: "<<round(2.6) << "\n";
  cout <<"log of 2 is: "<< log(2) << "\n";
 }

/////////////////////////////////////////////MY IF ELSE CONDITION FUNCTION///////////////////////////////////////////////

void myifelse(string name){
  cout <<name << "\n"<<"If Else fuction called successfully"<<"\n";
 int time = 3;
 if (time > 3 ){
   cout << "Good Afternoon"; 
 }
   else if (time = 3){
   cout << "Good Evening";
   }
   else {
   cout << "Good Night";
   } 
 
}

/////////////////////////////////////////////MY SWITCH CONDITION FUNCTION///////////////////////////////////////////////

void myswitch(string name){
  cout <<"\n"<<name << "\n"<<"Switch Condition Fuction called successfully"<<"\n";

 int day =2;
 cout<<"Type day number\n";
 cin >> day;                 // taking user input
switch (day){

 case 6: {
    cout << "Today is Saturday";
    break;
 }
  case 7: {
    cout << "Today is Sunday";
    break;
  }
  default:
    cout << "Looking forward to the Weekend";
}
}

/////////////////////////////////////////////MY LOOPs FUNCTION///////////////////////////////////////////////////////////

void myloops(string name){


 // for loop
 cout <<name << "\n"<<"Loop fuction called successfully!"<<"\n";
 cout<<"\n";
 for (int i=0; i<6; i++)
 cout <<"For Loop Number: " << i <<"\n";
 cout<<"\n";

 // while loop
 int i = 0;
 while(i<5){
   cout<<"While loop number: "<<i <<"\n";
   i++;
 }
  cout<<"\n";

 // Do while loop
 int j=0;
 do {
   cout<<"Do while loop number: "<<j<<"\n";
   j++;
 }
 while(j<5);
 cout<<"\n";

  // loop break
  for (int i = 0; i < 10; i++) {
   if (i == 4) {
     break;
   }
   cout <<"Loop break at 4: " <<i << "\n";
  }

}

/////////////////////////////////////////////MY 1D ARRAY FUNCTION//////////////////////////////////////////////////////

void myarray1D(string name){

cout <<name << "\n"<<"1D Array function called successfully"<<"\n";
int arry[3];
arry[0]= 0;
arry[1]= 10;
arry[2]= 20;

for (int x =0; x<3 ; x++ )
cout << arry[x] <<"\n";

int arry_two[3]={30,40,50};
for(int i = 0; i<3 ; i++)
cout << arry_two[i] << "\n";

string my_cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
cout << my_cars[0]<<", is my car.\n";

string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
printf("These are my new cars: \n");
for (int i = 0; i < 5; i++)
  cout << i <<" = "<<cars[i] <<"\n";

//for-each loop array

printf("This is for-each loop array: \n");
int myNumbers[5] = {10, 20, 30, 40, 50};
int getArrayLength = sizeof(myNumbers) / sizeof(int);
cout <<"Length of array: "<<getArrayLength <<"\n";

for (int i : myNumbers) {
  cout << i << "\n";
 }

}

/////////////////////////////////////////////MY 2D ARRAY FUNCTION/////////////////////////////////////////////////////

void myarray2D(string name){

cout <<name << "\n"<<"2D Array function called successfully"<<"\n";

string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};
// number of elements in a array matrix = 2*4 = 8
for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 4; j++) {
    cout << letters[i][j] << "\n";
  }
}
}

/////////////////////////////////////////////MY 3D ARRAY FUNCTION//////////////////////////////////////////////////////////////

void myarray3D(string name){

cout<< name<< "3D array called sucessfully \n";

string letters[2][2][2] = {
{
  {"A", "B"},
  {"C","D"}
},
{
  {"E", "F"},
  {"G","H"}
}
};
/// number of elements in an array: 2*2*2 = 8

for(int i=0; i<2; i++){
 for(int j=0; j<2; j++){
    for(int k=0; k<2; k++){

        cout<<i<<j<<k<<" = "<<letters[i][j][k]<<"\n";
    }
  }
}

}

///////////////////////////////////////////// Creating STRUCTURE named "student"////////////////////////////////////////////////////

struct student
{
  string name;
  int age;
  int ID;
  int score; 
};

/////////////////////////////////////////////MY STRUCTURE FUNCTION/////////////////////////////////////////////////////////////////

void mystructure(string name){
cout <<name << "\n"<<"Structure function called successfully"<<"\n";
cout<<"\n"<<"Information of Student 01:  \n";
      student mystudent1;
	    mystudent1.name = "Jazzy";
	    mystudent1.age = 27;
      mystudent1.ID = 564;
      mystudent1.score = 12;
	    cout << "Student Name: " << mystudent1.name << endl;
	    cout << "Age: " << mystudent1.age << endl;
      cout << "ID: " << mystudent1.ID << endl;
      cout << "Score: " <<mystudent1.ID << endl;

cout<<"\n"<<"Information of Student 02:  \n";
      student mystudent2;
	    mystudent2.name = "Jeff";
	    mystudent2.age = 30;
      mystudent2.ID = 868;
      mystudent2.score = 15;
	    cout <<"Student Name: " << mystudent2.name << endl;
	    cout << "Age: " << mystudent2.age << endl;
      cout << "ID: " << mystudent2.ID << endl;
      cout << "Score: " <<mystudent2.ID << endl;

}

/////////////////////////////////////////////MY RERERENCE FUNCTION/////////////////////////////////////////////////////////////////

void myreference(string name){

cout<<name<<"/n"<<"Reference function called Sucessfully."<<endl;
string food = "Pizza";     // food variable
string &meal = food;    // reference to food

cout<< food << endl;       // output pizza
cout<< meal << endl;      // output pizza    
cout<< &food << endl;    // memory of food
}

/////////////////////////////////////////////MY POINTER FUNCTION///////////////////////////////////////////////////////////////

void mypointer(string name){

cout <<name << "\n"<<"Pointer fuction called successfully"<<"\n";
string food = "Pizza";  // A food variable of type string
string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food
cout <<"This is the memory address of food:  "<< &food << "\n";  // Output the memory address of food
cout <<"This is the memory address of food again:  "<< ptr << "\n";    // Output the memory address of food with the pointer 
cout <<"Name of the food:  "<< food << "\n";   // Output the value of food (Pizza)
cout <<"Name of the food again :  "<< *ptr << "\n";    // Output the name of food with the pointer 


*ptr = "Hamburger";             // Change the value of the pointer
cout << "New value of the pointer:   "<<*ptr << "\n";          // // Output the new value of the pointer (Hamburger)
cout << "New food name:  "<<food << "\n";         // Output the new value of the food variable (Hamburger)


int* num;      // This is prefered way to create pointer
int * num1;
int *num2;
cout <<"\n"<<"This is number's address:  "<<num <<"\n";
cout <<"This is number one's address:  "<<num1 <<"\n";
cout <<"This is number two's address:  "<<num2 <<"\n";

}

/////////////////////////////////////////////MAIN FUNCTION//////////////////////////////////////

int main() 
{
    std::cout <<"\n"<<"Hello! This is a C++ program."<<"\n";
    cout<<"\n";

    //mymath("Calling MATH fuction.... ");
    //myifelse("Calling If Else loop fuction.... ");
    //myswitch("Calling Switch Condition fuction.... ");
    //myloops("Calling the loop fuction.... ");
    //myarray1D("Calling 1D Array function...");
    //myarray2D("Calling 2D Array function...");
    //myarray3D("Calling 3D Array function...");
    //mystructure("Calling Structure function...");
    //myreference("Calling Reference function...");
    //mypointer("Calling the pointer fuction...");
    

    return 0;
}


