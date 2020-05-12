#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>

using namespace std; 

const int MAX =99999;

class Sort
{
//atributos privados
private:
    int vetor[MAX];
//atributos publicos
public: 
    //builder 
    Sort(){}
    //seter 
    void setVetor(int n, int key)
    {
        this->vetor[key]=n;
    } 
    //geter 
    int getVetor(int key){
        return this->vetor[key];
    }
    
    //buble Sort
    void BubleSort()
    {
        int swap=0;
        time_t begin,end;
        double secunds;
        time(&begin);
        for(int n=0;n<MAX-1;n++)
        {
            for(int m=0;m<MAX-n-1;m++)
            {
                if(this->vetor[m]>this->vetor[m+1])
                {
                    swap=this->vetor[m];
                    this->vetor[m]=this->vetor[m+1];
                    this->vetor[m+1]=swap;
                }
            }
        }
        time(&end);
        secunds=difftime(end,begin);
        cout<<"segundos :"<<secunds<<endl;
    }    
};
int main(int argv, char * argc[])
{   
    int random;
    Sort s; 
    Sort *sort=&s;
    srand (time(NULL));
    
    random=rand()%100+1;
    for(int i=0; i<MAX;i++)
    {
        random=rand()%100+1;
        sort->setVetor(random,i);
    }
    s.BubleSort();
    for(int i=0; i<MAX;i++)
    {
        cout<<s.getVetor(i)<<endl;
    }
    return 0;
}

