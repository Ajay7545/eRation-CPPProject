#include<iostream>
#include<fstream>
using namespace std;



struct person
{
    string   name;
    int age;
    int nooffamily;
    double  aincome;
    int food;
};

person detail(class person p)
{
cout<<"Enter name";
cin>>p.name;
cout<<"enter age";
cin>>p.age;
cout<<"enter no of family Members";
cin>>p.nooffamily;
cout<<"Enter annual Income";
cin>>p.aincome;
cout<<"Enter the food he recieved in kgs:";
cin>>p.food;
return p;
}


int main()
{

    int y,z,n;
    int kgs;
    int initial=25;


    cout<<"Enter the no of people are there who are appliyng for (BPL) Below Poverty Line :";
    cin>>n;
    struct  person per[n];
    struct person temp[n];
    ofstream fwt;
    fwt.open("data.txt");
    cout<<"The Details Of "<<n<<" peoples in Kgs"<<endl;


for(int i=0;i<n;i++)
    {
      temp[i]=detail(per[i]);
      if(temp[i].aincome<100000)
      {
          fwt<<temp[i].food<<endl;

      }
      else
        cout<<"Mr"<<temp[i].name<<" is not under Below Povety Line \n\n";
    }

    ifstream fd; //read
    fd.open("da.txt");

    while(fd>>kgs)
    {
        cout<<"The food recieved in Kgs is "<<kgs<<endl;
        cout<<"the remaning food in Kgs is left  "<<(initial-kgs)<<"\n\n\n\n";
    }


    return 0;
}
