//MINIGAME7:RANK
#include<iostream>
#include<math.h>

using namespace std ;

int main()
{
    int a , b , c , d , e , g ,cach,t1 , t2 ;
    cin>>a>>b>>c>>d>>e>>g ;
    cin>>cach ;
    t1=a+b+c;
    t2=d+e+g;
    if (cach==1)
  {
      if (t1>t2) {cout<<"VN" ;}
      else
        if(t1<t2) {cout<<"TL";}
      else
      cout<<"TIE" ;
  }
   if (cach==2)
   {
       if ((a>d)||(a==d&&b>e)||(a==d && b==e && c>g))
        {cout<<"VN";}
      if ((a<d)||(a==d&&b<e)||(a==d && b==e&& c<g))
        {cout<<"TL";}
       if (a==d && b==e&& c==g)
        {cout<<"TIE";}
   }
}