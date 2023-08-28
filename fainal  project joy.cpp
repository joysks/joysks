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

   /*Pen(string c) {
    color=c;
    }*/

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
public:
    string title;

    Book(string t){
    title=t;
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
    p.setcolor("red");
    p.setcolor("Blue");
    p.getcolor();
    p.use();

    Book c("C++");
    c.use();

    Notebook n;
    n.use();

    Laptop l;
    l.use();
    cout<<"\n"<<"**********"<<endl;

    StudyMaterial* s;
    s=&p;
    s->use();
    //
    s=&c;
    s->use();


}
