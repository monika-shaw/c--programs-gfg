//
// Created by shawm on 20-06-2022.
//

#include <iostream>

using namespace std;

template<class T>  T add(T &a, T &b)
{
    T result;
    result = a+b;
    return result;
}

int main()
{
    int a =10, b =20;
    float x = 10, y =20.5;
    cout<<add(x,y)<<endl;
    cout<<add(a,b)<<endl;

}