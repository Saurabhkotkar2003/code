#include<iostream>
#include<cstdlib>
using namespace std;
int Nquen(int r,int n);
int place(int r,int c );
int print(int n);
int x[20],count;
int place(int r,int c)
{
    for(int i=1;i<=r-1;i++)
    {
        if(x[i]==c)
        {
            return 0;

        }
        else
        {
            if(abs(x[i]-c)==abs(i-r))
            {
                return 0;
            }

        }

    }
    return 1;
}
int print(int n)
{
    cout<<"\n Enter ";
    for(int i=1;i<=n;i++)
    {
        cout<<"\t"<<i;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<"\n"<<i;
        for(int j=1;j<=n;j++)
        {
            if(x[i]==j)
            {
                cout<<"\tQ";
            }
            else{
                cout<<"\t -";
            }
        }
    }
    return 0;



}
int Nqueen(int r,int n)
{
    cout<<"nQueen";
    for(int c=1;c<=n-1;c++)
    {
        
        if(place(r,c))
        {
            x[r]=c;
            if(r==n)
        {
            print(n);
        }
        else{
            Nqueen(r+1,n);
        }

        }

        
    }
}


int main()
{
    int n;
    cout<<"\n enter the queen";
    cin>>n;
    Nqueen(1,n);

}