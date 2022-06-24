/*
//
// Created by shawm on 20-06-2022.
//
#include <iostream>
using namespace std;
class Overload
{
public:
    int n;
    Overload();
    void show();
    void operator ++();

};

Overload::Overload() {
    n = 10;
}
void Overload::show() {
    cout<<n<<endl;
}

void Overload::operator++() {
    ++n;
}

int main()
{
    Overload overload;
    overload.show();
    ++overload;
    overload.show();
}
*/


//
// Created by shawm on 20-06-2022.
//
/*#include <iostream>
using namespace std;
class Unary
{
public:
    int n1;
    Unary();
    void show();
    void operator ++(int);

};

Unary::Unary() {
    n1 = 10;
}
void Unary::show() {
    cout<<n1<<endl;
}

void Unary::operator++(int) {
   n1=n1+9;
}

int main()
{
   Unary unary;
   unary.show();
   unary++;
   unary.show();

}*/



/*#include <iostream>
using namespace std;
class Unary
{
public:
    int n1;
    Unary();
    void show();
    Unary operator ++();

};

Unary::Unary() {
    n1 = 10;
}
void Unary::show() {
    cout<<n1<<endl;
}

Unary Unary::operator++() {
    Unary temp;
   temp.n1 = ++n1;
    return temp;

}

int main()
{
    Unary unary,result;
    unary.show();
    result = ++unary;
   result.show();

}*/
/*

#include <iostream>

using namespace std;

class Unary
{
public:
    int a;
    Unary(int n);
    void show();
    int operator+(int value);
};

Unary::Unary(int n) {
    a=n;
}

void Unary::show() {
    cout<<a<<endl;
}

int Unary::operator+(int value) {
    int temp;
    temp = a+value;
    return temp;

}

int main()
{
    int temp;
    Unary unary(20);
    Unary b=unary+9;
    b.show();


}*/


#include <iostream>

using namespace std;

class Unary
{
public:
    int a;
    void set(int n);
    void show();
    Unary operator+(Unary val1);

};

void Unary::set(int n) {
    a=n;
}

void Unary::show() {
    cout<<a<<endl;
}

Unary Unary::operator+(Unary val1) {
    Unary temp;
    temp.a = a+val1.a;
    return temp;
}

int main()
{
   Unary a, b ,c;
   a.set(10);
   b.set(20);
   c=a+b;
   c.show();
}