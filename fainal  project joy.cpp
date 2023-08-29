#include <bits/stdc++.h>
using namespace std;

class StudyMaterial {
public:
    virtual void use() = 0;
};

class Pen : public StudyMaterial {
private:

    string color;

public:

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

class Book : public StudyMaterial {
private:
    string title;
public:
   void setBook(string t){
    title=t;
    }

    string getBook(){
    return title;

    }

    void use()  {
        cout << "Reading the book: " << title << endl;
    }
};

class Notebook : public StudyMaterial {
public:
    void use() {
        cout << "Taking notes in the notebook." << endl;
    }
};

class Laptop : public StudyMaterial {
public:
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

    StudyMaterial* s;
    s=&p;
    s->use();
    s=&c;
    s->use();


}
