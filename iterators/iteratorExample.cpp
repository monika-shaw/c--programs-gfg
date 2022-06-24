//
// Created by shawm on 21-06-2022.
//

/*
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;
int main()
{
    vector<int> a = {1,2,3,4,5};

    vector<int>::iterator ptr;

    cout<<"Elements are :"<<endl;

    for (ptr = a.begin(); ptr<a.end();ptr++)
    {
        cout<<*ptr<<endl;
    }
}*/

#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> a = {1,2,3,4};

    vector<int>::iterator ptr = a.begin();

    advance(ptr,3);
    cout<<*ptr;
}