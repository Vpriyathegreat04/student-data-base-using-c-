#include<fstream>
#include<bits/stdc++.h>
#include<string>
#include<conio.h>
#include<iostream>
using namespace std;
//add data
void adddata();
int main(){
 adddata();
    getch();
    return 0;
    
}
void adddata()
{//open file
    fstream file("data.csv",ios::out| ios::app);
   //check of the file is open or not
    if(!file)
    {
        cout<<"failed to open the file";
    }
    else{
        cout<<"enter the data";
    }
    //declare variables
    string name,college,branch;
    int rollno,attendance,physics,che,maths;
    //enter the  values
    cout <<"\n enter the name of the student : ";
    cin>>name;
    file<<name<<" , ";
    cout<<"\n enter the college name: ";
    cin>>college;
    file<<college<<",";

cout<<"\n enter the branch: ";
    cin>>branch;
    file<<branch<<",";
    cout<<"\n enter the rollno : ";
    cin>>rollno;
    file<<rollno<<",";
    cout<<"\n enter the attendance percentage: "; 
    cin>>attendance;
    file<<attendance<<",";
    cout<<"\n enter the physics mark: ";
    cin>>physics;
    file<<physics<<",";
    cout<<"\n enter the maths mark: ";
    cin>>maths;
    file<<maths<<",";
    cout<<"\n enter the chemistry mark: ";
    cin>>che;
    file<<che<<",";
    //close file
    file.close();
    //options to add the missed out data
    cout<<"\n add missed out data? (YES/NOOO) : ";
    string option;
    cin>>option;
    if(option=="YES")
    {//back to adddata function
        adddata();
    }
    else if(option=="NOOO")
    {//back to the main menu
       // admindata();
    }
}
void viewdata()
{
    fstream file("data.csv");//open the file
    //check if such file exists or not
    if(!file)
    {
        cout<<"no such file in existence";
    }
    cout<<endl;
    cout<<endl;
    cout<<"Roll \t Name \t\t\t College \t branch \t Attendance \t Physics \t Chemistry \t Maths";
    cout<<endl;
    cout<<endl;
    string rollno,name,college,branch,attendance,phy,che,maths;
    //upload all the data from the file
    while(!file.eof())
    {
        getline(file,rollno,',' );
         getline(file, name, ',');
        getline(file, college, ',');
        getline(file, branch, ' ');
        getline(file, attendance, ' ');
        getline(file, phy, ' ');
        getline(file, che, ' ');
        getline(file, maths, '\n');
        cout << rollno << " \t " << name << "\t\t\t" << college << " \t\t" << branch << " \t\t" << attendance << " \t\t" << phy << " \t\t" << che << " \t\t" << maths << endl;
        cout << endl;
    }
    cout<<endl;
    file.close();
    }
