#include <bits/stdc++.h>
using namespace std;

vector<int> rotate(vector<int> k,int p)
{
    reverse(k.begin(),k.end());
    reverse(k.begin(),k.begin()+p);
    reverse(k.begin()+p,k.end());

    return k;
}

void print(vector<int> f)
{
    for(int i=0;i<f.size();i++)
    {
        cout<<f[i]<<" ";
    }

    cout<<endl;
}

int main()
{
      int n;
      cout<<"Enter the size of Array:";
      cin>>n;

      vector<int> k(n);
      for(int i=0;i<n;i++)
      {
        cin>>k[i];
      }

      cout<<"How many rotations you want to make?:";
      int p;
      cin>>p;


      cout<<"The old array:";
      print(k);

      k=rotate(k,p);

      cout<<"The new array:";
      print(k);
}
