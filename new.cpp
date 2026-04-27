#include<iostream>
using namespace std;    
class Student 
{
    public :
    int roll;
    string name;
    Student(int r, string n) 
    {
        roll = r;
        name = n;
    };
};
class College 
{
     public:
     int collegeid;
     string collegename;
     College(int cid, string cn):collegeid(cid), collegename(cn) 
     {
     } 
    };     
class Book 
{
    public:
    int bookid;
    string bookname;
    int numberofpages;
    double price;
    Book(int bid, string bname, int pages, double amount):bookid(bid), bookname(bname), numberofpages(pages), price(amount)
    {
    }

};
int main()
{
    Student id(0047,"Stutu");
    College c1(101,"Gniot");
    Book b1(54,"My Experiences",300,499.99);
    cout<<"All code loaded successfully in stack memory"<<endl; 

}