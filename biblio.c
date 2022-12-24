#include "biblio.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

bool verif3(char c[100]) //verifie si le nombre est sous la forme de la base 16
{ bool v3;
int l,i,s;
s=0;
l=strlen(c);
for(i=l-1;i>=0;i--)
{

  if ((c[i]>='A' && c[i]<='F' ) || (c[i]>='a' && c[i]<='f') || (c[i]>='0' && c[i]<='9')){
        s=s+1;}}
        if(s==l){
        v3=true;}
        else{v3=false;}
        return (v3);

}

//------------------------//

 bool verif2(int x) //verifie si la base est parmi(2,8,10,16)
 { bool v2;
 if (x==2 || x==10 || x==8 || x==16)
 {
    v2=true;
 }else{
 v2=false;}
 return (v2);
 }

//------------------------------//



    bool verif(int k, int nbr) //verifie si le nombre est sous la forme de la base 2,8,10
{ bool v;
int r;

do{
    r=nbr%10;
    if(r<k)
    {
        v=true;

    }else{v=false;}
    nbr=nbr/10;
   }while(nbr!=0 && v==true);
    return (v);}

//----------------------------------------------------//

   int b2versb10(int n2)//n2 nombre base 2 (2-->10)
  {
  int r,base,n10;//n10 nombre base 10
  base=1;
  n10=0;

  do
  {
  r=n2%10;
  n10=n10+r*base;
  n2=n2/10;
  base=base*2;
  }while(n2!=0);
  return (n10);}



//-------------------------------------------------//


   int b10versb2(int n10)//10-->2
  {int n2,mult,r;
  mult=1;
  n2=0;
  do
  {
  r=n10%2;//0=12%2//0=6%2//1//1
  n2=n2+r*mult;//n=0//n=0//n=100/n=1100
  mult=mult*10;//mult=10//mult=100//mult=1000
  n10=n10/2;//n10=6//n10=3//n10=1
  } while(n10!=0);
  return (n2);

  }

//------------------------------------------------------//

  int b2versb8(int n2)//2-->8
  {int n8,mult,r,n10;
  n10=b2versb10(n2);
  mult=1;
  n8=0;
  do
  {
  r=n10%8;
  n8=n8+r*mult;
  mult=mult*10;
  n10=n10/8;
  }while(n10!=0);
  return(n8);

  }



//---------------------------------------------------------//


  int b10versb8(int n10)//10-->8
  {int n8,r,mult;
  mult=1;
  n8=0;
  do
  {
  r=n10%8;
  n8=n8+r*mult;
  mult=mult*10;
  n10=n10/8;
  }while(n10!=0);
  return (n8);
  }

//------------------------------------------------------//


  int b8versb10(n8) //8-->10
  {
  int n10,r,base;
  base=1;
  n10=0;
  do
  {
  r=n8%10;
  n10=n10+r*base;
  n8=n8/10;
  base=base*8;
  }while(n8!=0);
  return (n10);
  }

//------------------------------------------------------------------//


  int b8versb2(s8) //8-->2
  {
   int s10,s2,r,mult;
   s10=b8versb10(s8);
   mult=1;
   s2=0;
  do
  {
   r=s10%2;
   s2=s2+r*mult;
   mult=mult*10;
   s10=s10/2;
  }while(s10!=0);
  return(s2);
  }

//-------------------------------------------------------//

  void b10versb16(int n10) //10-->16
 {char hex[100];
 int i=0;
 while(n10!=0)
 {
     int r = n10 % 16;
     if (r<10)
     {
         hex[i]=r+'0';
     }else{
         hex[i]=(r-10)+'A';
         }
         n10=n10/16;
         i++;

 }
 hex[i]='\0';
 printf("sa valeur hexadecimal est : \n");
 for (int j = i-1;j>=0;j--)
{
    printf("%c",hex[j]);

}}
//------------------------------------------------------//


    void b2versb16(n2) //2-->16

    {
     int n10;
     n10=b2versb10(n2);
     b10versb16(n10);}

/////////////////////////////////
    void b8versb16(n8)
    { int n10;
    n10=b8versb10(n8);
    b10versb16(n10);

    }

//-------------------------------------------------------------//

    void b16versb10 (char hex[100]) //16-->10
  {
      int l,base,i,n10;
      base=1;
      l=strlen(hex);
      for (i=l-1;i>=0;i--)
      {
          if (hex[i]>='0' && hex [i]<='9')
          {
              n10+=(hex[i]-48)*base;
             base *=16;
          }
          else if (hex[i]>= 'A' && hex[i]<='F')
          {n10+=(hex[i]-55)*base;
          base *=16;

          }
          else if (hex[i]>= 'a' && hex[i]<='f')
          {
            n10+=(hex[i]-87)*base;
            base *=16;
          }



      }printf("sa valeur decimal est %d",n10);}


      //---------------------------------------------//
      void b16versb2(char hex[100]) // 16-->2
      { int l,base,i,n10;
      base=1;
      l=strlen(hex);
      for (i=l-1;i>=0;i--)
      {
          if (hex[i]>='0' && hex [i]<='9')
          {
              n10+=(hex[i]-48)*base;
             base *=16;
          }
          else if (hex[i]>= 'A' && hex[i]<='F')
          {n10+=(hex[i]-55)*base;
          base *=16;

          }
          else if (hex[i]>= 'a' && hex[i]<='f')
          {
            n10+=(hex[i]-87)*base;
            base *=16;
          }

      }
      printf("sa valeur binaire est %d",b10versb2(n10));}


      //------------------------------------------------//
      void b16versb8 (char hex[100]) //16-->8
      { int l,base,i,n10;
      base=1;
      l=strlen(hex);
      for (i=l-1;i>=0;i--)
      {
          if (hex[i]>='0' && hex [i]<='9')
          {
              n10+=(hex[i]-48)*base;
             base *=16;
          }
          else if (hex[i]>= 'A' && hex[i]<='F')
          {n10+=(hex[i]-55)*base;
          base *=16;

          }
          else if (hex[i]>= 'a' && hex[i]<='f')
          {
            n10+=(hex[i]-87)*base;
            base *=16;
          }}
          printf("sa valeur octal est %d",b10versb8(n10));

      }
