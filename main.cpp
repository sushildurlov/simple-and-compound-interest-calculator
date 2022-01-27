#include <iostream> // input/output stream
#include "new/myheader.h" 
using namespace std;
int main()
{
    int x;
    f:cout<<"welcome to simple and compound interest calculator\n"
        <<"select option\n"
        <<"1)Simple interest\n"
        <<"2)Compound Interest\n";
        
    cin>>x;
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
