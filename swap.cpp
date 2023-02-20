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

    queue<int>que;
    que.push(5);
    que.push(9);
    que.push(87);
    que.push(363);
    que.push(45);

    swap(que,q);

   while(!q.empty())
   {
      cout<<q.front()<< " ";
      q.pop();
   }
   cout<<endl;

   while(!que.empty())
   {
     cout<<que.front()<< " ";
     que.pop();
   }
   cout<<endl;

}