#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    q.push(1);
    q.push(4);
    q.push(2);
    q.push(5);
    q.push(5);
    q.push(7);

    cout<<q.size()<<endl;
    

   while(!q.empty())
   {
      cout<<q.front()<< " ";
      q.pop();
   }

}