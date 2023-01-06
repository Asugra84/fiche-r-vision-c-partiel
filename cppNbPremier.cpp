using namespace std;
#include<iostream>
#include<stdlib.h>

int main()
{
    int nb,r=0;
    cout<<"Entrez un nombre : ";cin>>nb;
    
    for(int i = 1 ; i <= nb ; i++ )
    {
        if(nb % i == 0)
        {
           r++;
        }         
    }
    
    if(r>2)
       cout<<nb<<" n'est pas un nombre premier"<<endl;
    else
       cout<<nb<<" est un nombre premier"<<endl;
    system("pause");
}
