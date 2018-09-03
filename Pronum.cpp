/*
Program for challenge Pronic numbers:

Pronic number is a number which is the product
of two consecutive integers, that is, n=x*(x+1). 
Write a program which, for a given input n,
detect if the number is pronic or not. 

Some Examples: 
6: True 
42: True 
132: True 
2550: True 
10100: True 
4: False 
66: False 
133: False 
1666: False 
17289: False 

*/

#include <iostream>
#include <cmath>

using namespace std;

bool chk_pronic(int z,int &k,int &c)
{
    int y=k*(k+1);
    if(y==z) {c=k; return true;}
    else
    {
        if(k-1>=2) chk_pronic(z,--k,c);
        else return false;
    }
}

int main()
{
    int z, count=0;
    int n;
    cin >> n;
    for(z=4;z<n;z++)
        for(int y=3;y<z;y++)
        {
        if((y*(y-1))==z) 
            {
                cout<<"#"<<++count;
                cout<<". "<<z;
                cout<<"="<<y;
                cout<<"*"<<y-1<<endl;
                break;
            }
        }

    int a, x, c=0;
    
    cin>>a;
    x=sqrt(a);
    
    if(chk_pronic(a,x,c)) cout<<"Number "<<a<<" = "<<c<<" * "<<c+1<<" is Pronic."<<endl;
    else cout<<"Number "<<a<<" is not Pronic!"<<endl;
    return 0;
}