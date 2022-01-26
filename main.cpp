#include <iostream> // input/output stream
#include "new/myheader.h" // use " " instead of < > so the compiler knows that it's a local header file

using namespace std;
float a,b,c;
void data(float *a, float *b, float *c )
{
    cout<< "enter your principle : ";
    cin>>*a;
    cout<< "enter your time : ";
    cin>>*b;
    cout<< "enter your rate : ";
    cin>>*c;

}
int main()
{
    int x;
    f:cout<<"welcome to simple and compound interest calculator\n"
        <<"select option\n"
        <<"1)Simple interest\n"
        <<"2)Compound Interest\n";
    cin>>x;\
    switch (x)
    {
        case 1:
        data(&a, &b, &c);
        cout<< "your intrest is : " <<simpleinterest(a,b,c)<<"\n";
        goto f;
        case 2:
         data(&a, &b, &c);
        cout<< "your c intrest is : " <<compoundinterest(a,b,c)<<"\n";
        goto f;
        default:
        cout<< "enter correct option\n";
        goto f;


    }

    

    return 0;

}
