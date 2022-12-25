//add data
void adddata()
{//open file
    fstream file("data.csv",ios::out| ios::app)
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
    cout<<"\n add missed out data? (YES/NOOO) : "
    string option;
    cin>>option;
    if(option==YES)
    {//back to adddata function
        adddata();
    }
    else if(option==NOOO)
    {//back to the main menu
        admindata();
    }
}





}
