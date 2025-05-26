#include <iostream>
#include <string>

using namespace std;
using std::string;

//36

const int MaxStudents=100;
string  Name[MaxStudents];
int Roll[MaxStudents];
string Marks[MaxStudents*3]; 

int pos=0; 

//Why Global Variables huh? Because we are making a kinda loop type function which will restart again and again

int main() {


cout<<"This is a student Database Which Can Store Max "<<MaxStudents <<" Students Name,Roll And Marks (Bengali,English,Math)"<<endl;




again:

int option;
cout<< "What Do You Want To Do : Input 1 , 2 , 3 or 4" <<endl;
cout<< "1.Add Student" <<endl;
cout<< "2.Edit Student" <<endl;
cout<< "3.Check Student Data" <<endl;
cout<< "4.Exit" <<endl;
cin>>option;



if (option == 1){

int tempRoll;
cout<< "Enter Roll: " <<endl;
cin>>tempRoll;


//***************************************** 
//To Make sure that the roll already Not Exist
for (int i=0; i<MaxStudents ; i++){

if (Roll[i] == tempRoll){
tempRoll =-1;

}
}
if (tempRoll== -1){
cout<<"Roll Already Exist. You Can Edit Existed Roll By Choosing Option 2"<<endl;
goto again;

}
//***************************************** 

Roll[pos] = tempRoll;

cin.ignore();  //To Clear The new line left in the input buffer

cout << "Enter Name: " << endl;
getline(cin, Name[pos]);  //To  Read The Full string including spaces 

cout<< "Enter Bangla Marks: " <<endl;
cin>>Marks[pos*3];

cout<< "Enter English Marks: " <<endl;
cin>>Marks[((pos*3)+1)];

cout<< "Enter Math Marks: " <<endl;
cin>>Marks[((pos*3)+2)];

pos++;
goto again;

}
if (option == 2){

int tempRoll;
int temp;
cout<< "Enter Roll: " <<endl;
cin>>tempRoll;


//***************************************** 
//To Make sure that the roll already Exist
for (int i=0; i<MaxStudents ; i++){

if (Roll[i] == tempRoll){

temp=1;
    break;

}
else{
temp =-1;
}
}
if (temp == -1){
cout<<"Roll Not Found. You Can Add Roll By Choosing Option 1"<<endl;
goto again;

}
//***************************************** 

Roll[pos] = tempRoll;


cin.ignore();  

cout << "Enter Name: " << endl;
getline(cin, Name[pos]);  

cout<< "Enter Bangla Marks: " <<endl;
cin>>Marks[pos*3];

cout<< "Enter English Marks: " <<endl;
cin>>Marks[((pos*3)+1)];

cout<< "Enter Math Marks: " <<endl;
cin>>Marks[((pos*3)+2)];


goto again;

}
else if(option == 3){

int checker;
int position=-1;

cout<< "Enter Roll: " <<endl;
cin>>checker;



for (int i=0; i<MaxStudents ; i++){

if (Roll[i] == checker){
position =i;

}


}

if (position == -1){
cout<<"We didn't find the roll u entered"<<endl;
goto again;

}

else{

cout<<"Showing Data Of Student Roll: "<<Roll[position]<<endl;   
cout<<"Name: "<<Name[position]<<endl;
cout<<"Bangla Marks: "<<Marks[((position*3))]<<endl;
cout<<"English Marks: "<<Marks[((position*3)+1)]<<endl;
cout<<"Math Marks: "<<Marks[((position*3)+2)]<<endl;


cout<<"Database Summery: "<<endl;
cout<<"Total Students: "<<pos<<endl;

goto again;
}

}
else if(option == 4){
cout<< "We Ended The Program" <<endl;
exit(0);   
}
else{

cout<< "Enter 1 to 4 Bro" <<endl;
goto again;    
}
    return 0;
}