#include <iostream>
using namespace std;

const int MAX =100;

void ordena(int *n)
{

    //cout<<n[99];
    int h=0, i, j, value=0; 
    while(h<MAX)
    {
        h=h*3+1;
    }      
    while(h>0)
    {
        for(i=h;i<MAX;i++)
        {   
            j=i;
            value=n[i];
            while(j>h-i && value<=n[j-h])
            {
                n[j]=n[j-h];
                j=j-h;
            }
            n[j]=value;
        }
        h=h/3;           
    } 
}
int main(int argc, char *argv[])
{
    int n[MAX];

    for(int x=0;x<MAX;x++)
    {
        cin>>n[x];
    }
    ordena(n);
    return 0;
}
