#include <bits/stdc++.h>
using namespace std;

class StudyMaterial {
public:
    virtual void use() = 0;
};

class Pen : public StudyMaterial {
public:

    string color;

    Pen(string c) {
    color=c;
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
   //string color = "blue";
    Pen p("blue");
    p.use();

    //string bookTitle = "C++";
    Book c("C++");
    c.use();

    Notebook n;
    n.use();

    Laptop l;
    l.use();
    cout<<"#########"<<endl;

    StudyMaterial* s;
    s=&p;
    s->use();
    //
    s=&c;
    s->use();
     //{&p, &c, &n, &l};

//for (StudyMaterial* material : materials) {
    //material->use();
   // }

    return 0;
}
