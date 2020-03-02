#include<iostream>
#include<fstream>
#include<string>
#include <bits/stdc++.h>

using namespace std;

void p1detail();
void disp();

int i,y,z,n,sel;
int wheatq,riceq,sugarq,keroseneq,saltq;

class person
{   public:
    char name[50];
    int age;
    long int aincome;
    int nof;
    long int ano;
    int bplid;
    int cid;
};

class items
{
    public:
    string name;
    int price;
}th[5];


class person_details
{
    long int aadhar_no;
    int bpl_id;
    unordered_map <string, int> umap;
    public:
    person_details(int a_no,int b_id,int no_of_persons)
    {
        aadhar_no=a_no;
        bpl_id=b_id;
        umap["wheat"]=5*no_of_persons;
        umap["rice"] = 2.5*no_of_persons;
        umap["sugar"] = 2*no_of_persons;
        umap["kerosene_oil"] = 4*no_of_persons;
        umap["salt"] = 4*no_of_persons;
    }

     void buy(int w_quantity,int r_quantity,int sugar_quantity,int k_quantity,int salt_quantity)
    {
        if(umap["wheat"]=umap["wheat"]-w_quantity>=0)
            umap["wheat"]=umap["wheat"]-w_quantity;
        else cout<<"Your monthly quota for wheat is over\n";
        if(umap["rice"]=umap["rice"]-r_quantity>=0)
            umap["rice"]=umap["rice"]-r_quantity;
        else cout<<"Your monthly quota for rice is over\n";
        if(umap["sugar"]=umap["sugar"]-sugar_quantity>=0)
            umap["sugar"]=umap["sugar"]-sugar_quantity;
        else cout<<"Your monthly quota for sugar is over\n";
        if(umap["kerosene_oil"]=umap["kerosene_oil"]-k_quantity>=0)
            umap["kerosene_oil"]=umap["kerosene_oil"]-k_quantity;
        else cout<<"Your monthly quota for kerosene oil is over\n";
        if(umap["salt"]=umap["salt"]-salt_quantity>=0)
            umap["salt"]=umap["salt"]-salt_quantity;
        else cout<<"Your monthly quota for salt is over\n";
    }
};


int main()
{   person p;
    struct  person per;
	    cout<<"\n*********************************************";
			    cout<<"\n         RATION CARD                  ";
			    cout<<"\n*********************************************";
			    cout<<"\nFOR ENTRY OF PERSON PRESS 1:                      "<<endl;
			    cout<<"\nFOR DETAILS OF PERSON PRESS 2:                    "<<endl;
			    cout<<"\nAMOUNT OF  RATION OF PERSON BUYING 3:            "<<endl;
			    cout<<"\nFOR ENTRY OF PERSON WHO ARE NOT UNDER BPL PRESS 4:"<<endl;
                cout<<"\nFOR EXIT PRESS 5:"<<endl;
			    cout<<"\n*********************************************\n";
    cin>>sel;
    if(sel==1)
    {
        p1detail();
    }
    else if(sel==2)
    {
        disp();
    }
   else if(sel==3)
   {

    int wheatq,riceq,sugarq,keroseneq,saltq;
    //person_details pd;
   int bplid;
   int tempnof;
   double salary;
       cout<<"Enter Bpl Id: \n";
       cin>>bplid;
       string name;
    int age,fmem,sal,adno,bid;
    string result;
    ifstream thefile("data.txt");
    while(thefile>>name>>age>>fmem>>sal>>adno>>bid>>result)
    {
        if(bid==bplid)
        {
cout<<name<<","<<age<<","<<fmem<<","<<sal<<","<<adno<<","<<bid<<","<<result;

 cout<<"\n Enter Quantity Of Wheat:\n";
 cin>>wheatq;
 cout<<"Enter Quantity Of Rice:\n";
 cin>>riceq;
 cout<<"Enter Quantity Of Sugar:\n";
 cin>>sugarq;
 cout<<"Enter Quantity Of Kerosene Oil:\n";
 cin>>keroseneq;
 cout<<"Enter Quantity Of Salt:\n";
 cin>>saltq;
 fstream wrt;
    wrt.open("data.txt", ios::out | ios::in | ios::app );

wrt<<wheatq<<endl;
wrt<<riceq<<endl;
wrt<<sugarq<<endl;
wrt<<keroseneq<<endl;
wrt<<saltq<<endl;

//pd.buy(wheatq,riceq,sugarq,keroseneq,saltq);
        }
    }


}
else if(sel==5)
    exit(1);


    return 0;

}

/*
string x;
ifstream file ( "data.txt" );
ofstream ofile ( "data.txt" );
while (!file.eof())
{
    getline(file,x);
    if (x == "ajay")
    {
        ofile << "25" << endl;
    }
}
file.close();
ofile.close();
remove("data.txt");
}*/

person p2detail(class person p)
{
    int generateid;

    fstream wrt;
    wrt.open("data.txt", ios::out | ios::in | ios::app );


cout<<"Enter name";
cin>>p.name;
wrt<<p.name<<endl;
cout<<"enter age";
cin>>p.age;
wrt<<p.age<<endl;
cout<<"enter no of family Members";
cin>>p.nof;
wrt<<p.nof<<endl;
cout<<"Enter annual Income";
cin>>p.aincome;
wrt<<p.aincome<<endl;
cout<<"Enter AdharNo";
cin>>p.ano;
wrt<<p.ano<<endl;

if(p.aincome<100000)
{

cout<<"Enter BPLId:";
cin>>p.bplid;
wrt<<p.bplid<<endl;
wrt<<"Under_Below_P2ovety_Line\n\n"<<endl;

}
else
{cout<<"Enter CUTID:";
cin>>p.cid;
wrt<<p.cid<<endl;
wrt<<"Not_Under_Below_Povety_Line\n\n"<<endl;
}


wrt>>p.name;
cout<<"Name:"<<p.name<<endl;
wrt>>p.age;
cout<<"Age:"<<p.age<<endl;
wrt>>p.nof;
cout<<"No Of Family Menber:"<<p.nof<<endl;
wrt>>p.aincome;
cout<<"Anual Income"<<p.aincome<<endl;
wrt>>p.ano;
cout<<"Adhar Card Number:"<<p.ano<<"\n"<<endl;
//wrt>>"Under Below Povety Line";
//cout<<"Under under Below Povety Line \n"<<endl;
wrt.close();
return p;
}

void  p1detail()
{
    fstream wrt;
    wrt.open("data.txt", ios::out | ios::in | ios::app );

    cout<<"Enter the no of people are there who are appliyng for (BPL) Below Poverty Line :";
    cin>>n;
    struct person per[n];
    struct person temp[n];
    int generateid;
    int tx;
    cout<<"Enter the Details Of "<<n<<" peoples :"<<endl;
    cout<<"Write data to be written on file:"<<endl;
    for(int i=0;i<n;i++)
    {
      p2detail(per[i]);

    }
/*for(int i=0;i<n;i++)
    {
    disp(person temp[i]);
    }
*/
cout<<"For Main Menu Press 1: \n For Exit Press 2: \n"<<endl;
cin>>tx;
if(tx==1)
    main();
}


 void disp()
 {
     cout<<"Press 1 For All Person Details:\n Press 2 Details BY Name:\n Press Details By AdharNo:\n ";
     person p;
     fstream wrt;
     string str;
     int i,tx;
    wrt.open("data.txt", ios::in  | ios::out | ios::app);
while(!wrt.eof())
{
getline(wrt,str);
 cout<<str<<endl;
 i++;
}
 /*   wrt>>p.name;
cout<<"Name:"<<p.name<<endl;
wrt>>p.age;
cout<<"Age:"<<p.age<<endl;
wrt>>p.nof;
cout<<"No Of Family Menber:"<<p.nof<<endl;
wrt>>p.aincome;
cout<<"Anual Income"<<p.aincome<<endl;
wrt>>p.ano;
cout<<"Adhar Card Number:"<<p.ano<<"\n"<<endl;
wrt.close();
*/
cout<<"For Main Menu Press 1: \n For Exit Press 2: \n"<<endl;
cin>>tx;
if(tx==1)
    main();
}



 void showdetail()
 {
   person p;

cout<<p.name;
cout<<p.age;
cout<<p.nof;
cout<<p.aincome;
cout<<p.ano;
 }
