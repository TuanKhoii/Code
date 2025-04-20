#include<iostream>
using namespace std;
int pr[300005];

int find(int x)
{
    if(pr[x] > 300000)
        return x;
    pr[x] = find(pr[x]);
    return pr[x];
}
void hop(int x, int y)
{
    int u = find(x);
    int v = find(y);
    if(u != v)
    {
        pr[u] = v;
    }
}
struct node
{
   int a;
   node *lk;
   node (int _a = 0)
   {
       a = _a;
       lk = NULL;
   }
};
struct List
{
   node *head, *tail;
   List()
   {
       head = tail = NULL;
   }
   void add(int x)
   {
       node *p = new node(x);
       if(head ==  NULL)
       {
           head = tail = p;
       }
       else
       {
           tail ->lk = p;
           tail = p;
       }
   }
   void clear()
   {
       head = tail = NULL;
   }
   bool Nempty()
   {
       return head != NULL;
   }
};
List mp[300005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q,k,x,v,sl = 1;
    cin>>q;
    for(int z = 0; z < q; ++z)
    {
        cin>>k>>x;
        if(k == 1)
        {
            if(mp[x].Nempty())
            {
                pr[sl] = find(mp[x].head->a);
            }
            else
                pr[sl] = x + 300000;
            mp[x].add(sl);
            ++sl;
            
        }
        else
        {
            if(k == 2)
            {
                cin>>v;
                int d = x + v;
               
                if(mp[x].Nempty())
                {
                    if(mp[d].Nempty())
                    {
                        mp[d].tail->lk = mp[x].head;
                        mp[d].tail = mp[x].tail;
                       
                        hop(mp[x].head->a,mp[d].head->a);
                    }
                    else
                    {
                        
                        mp[d] = mp[x];
                        pr[find(mp[x].head->a)] = d + 300000;
                    }
                }
                mp[x].clear();
            }
            else
            {
                cout <<pr[find(x)] - 300000 <<'\n';
            }
        }
        
    }
   
    return 0;
}
