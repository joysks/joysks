#include <bits/stdc++.h>
using namespace std;

class StudyMaterial {
public:
//pure virtual function
    virtual void use() = 0;
};

class Pen : public StudyMaterial {
private:

    string color;

public:
//Encapsulation
    void setcolor(string c){

    color=c;


    }
    string getcolor(){
    return color;
 }

    void use(){
        cout << "Using a " << color << " pen to write notes." << endl;
    }
};
//Inheritance
class Book : public StudyMaterial {
private:
    string title;
public:
//Encapsulation
   void setBook(string t){
    title=t;
    }

    string getBook(){
    return title;

    }
//Polymorphism
    void use()  {
        cout << "Reading the book: " << title << endl;
    }
};
//Inheritance
class Notebook : public StudyMaterial {
public:
//Polymorphism
    void use() {
        cout << "Taking notes in the notebook." << endl;
    }
};
//Inheritance
class Laptop : public StudyMaterial {
public:
//Polymorphism
    void use() {
        cout << "Studying on the laptop." << endl;
    }
};

int main() {
    Pen p;

   string k;
    cout<<"Input Favarit color: "<<endl;

    cin>>k;
    p.setcolor(k);

    p.getcolor();


    Book c;
    string b;
    cout<<"Input Your Favarit Book: " <<endl;
    cin>>b;


   c.setBook(b);
   c.getBook();
   
    p.use();
    c.use();

    Notebook n;
    n.use();

    Laptop l;
    l.use();
    cout<<"\n"<<"*******"<<endl;
//call virtual function
// Abstraction
    StudyMaterial* s;
    s=&p;
    s->use();
    s=&c;
    s->use();


}
