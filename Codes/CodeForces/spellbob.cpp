/*                                           When Panda is Life !
 
                              _,add8ba,
                            ,d888888888b,
                           d8888888888888b                        _,ad8ba,_
                          d888888888888888)                     ,d888888888b,
                          I8888888888888888 _________          ,8888888888888b
                __________`Y88888888888888P"""""""""""baaa,__ ,888888888888888,
            ,adP"""""""""""9888888888P""^                 ^""Y8888888888888888I
         ,a8"^           ,d888P"888P^                           ^"Y8888888888P'
       ,a8^            ,d8888'                                     ^Y8888888P'
      a88'           ,d8888P'                                        I88P"^
    ,d88'           d88888P'                                          "b,
   ,d88'           d888888'                                            `b,
  ,d88'           d888888I                                              `b,
  d88I           ,8888888'            ___                                `b,
 ,888'           d8888888          ,d88888b,              ____            `b,
 d888           ,8888888I         d88888888b,           ,d8888b,           `b
,8888           I8888888I        d8888888888I          ,88888888b           8,
I8888           88888888b       d88888888888'          8888888888b          8I
d8886           888888888       Y888888888P'           Y8888888888,        ,8b
88888b          I88888888b      `Y8888888^             `Y888888888I        d88,
Y88888b         `888888888b,      `""""^                `Y8888888P'       d888I
`888888b         88888888888b,                           `Y8888P^        d88888
 Y888888b       ,8888888888888ba,_          _______        `""^        ,d888888
 I8888888b,    ,888888888888888888ba,_     d88888888b               ,ad8888888I
 `888888888b,  I8888888888888888888888b,    ^"Y888P"^      ____.,ad88888888888I
  88888888888b,`888888888888888888888888b,     ""      ad888888888888888888888'
  8888888888888698888888888888888888888888b_,ad88ba,_,d88888888888888888888888
  88888888888888888888888888888888888888888b,`"""^ d8888888888888888888888888I
  8888888888888888888888888888888888888888888baaad888888888888888888888888888'
  Y8888888888888888888888888888888888888888888888888888888888888888888888888P
  I888888888888888888888888888888888888888888888P^  ^Y8888888888888888888888'
  `Y88888888888888888P88888888888888888888888888'     ^88888888888888888888I
   `Y8888888888888888 `8888888888888888888888888       8888888888888888888P'
    `Y888888888888888  `888888888888888888888888,     ,888888888888888888P'
     `Y88888888888888b  `88888888888888888888888I     I888888888888888888'
       "Y8888888888888b  `8888888888888888888888I     I88888888888888888'
         "Y88888888888P   `888888888888888888888b     d8888888888888888'
            ^""""""""^     `Y88888888888888888888,    888888888888888P'
                             "8888888888888888888b,   Y888888888888P^
                              `Y888888888888888888b   `Y8888888P"^
                                "Y8888888888888888P     `""""^
                                  `"YY88888888888P'
                                       ^""""""""'
  */


#include <bits/stdc++.h>
using namespace std;

#define si(x) scanf("%d",&x)
#define sf(x) scanf("%f",&x)

#define pi(x) printf("%d\n",x)
#define pf(x) printf("%.4f\n",x)

#define ll long long int

#define sll(x) scanf("%I64d",&x);
#define pll(x) printf("%-I64d\n",x);

class Soln{
private:
    
public:
    Soln(){}
    ~Soln(){}
};

int main(int argc, char const *argv[])
{
	/* code */
  /* Soln soln */
	int n, T, b_count, o_count, bo_count;
    char s1[3+1], s2[3+1];
    si(T);
    while(T--){
        b_count=0; o_count=0; bo_count=0;
        scanf("%s",s1);
        scanf("%s",s2);
        s1[3]='\0'; s2[3]='\0';
        for(int i=0; i<3; i++){
            if(s1[i]=='b' || s2[i]=='b'){   b_count++;  }
            else if(s1[i]=='o' || s2[i]=='o'){   o_count++;  }
            if( ( (s1[i]=='b') && (s2[i]=='o')) || ( (s2[i]=='b') && (s1[i]=='o') ) ){
                bo_count++;
            }
        }

        if(b_count==3 && o_count==3){   printf("yes\n");    }
        else if(b_count>=2 && o_count>=1 && bo_count==0){   printf("yes\n");    }
        
    }
    return 0;
}



		// ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ 
		// ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_______________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ 
		// ¶¶¶¶¶¶¶¶¶¶¶_____¶¶¶¶___¶¶¶¶¶¶_____¶¶¶¶¶¶¶¶¶¶¶ 
		// ¶¶¶¶¶¶¶¶¶___¶¶¶¶¶¶¶______¶¶¶¶¶¶¶¶___¶¶¶¶¶¶¶¶¶ 
		// ¶¶¶¶¶¶¶___¶¶¶¶¶¶¶¶______¶¶¶_¶¶¶¶¶¶¶¶__¶¶¶¶¶¶¶ 
		// ¶¶¶¶¶___¶¶¶¶¶¶¶¶¶_______________________¶¶¶¶¶ 
		// ¶¶¶¶__¶¶¶¶¶¶¶¶¶_________¶¶________¶¶¶¶¶__¶¶¶¶ 
		// ¶¶¶__¶¶¶¶¶¶¶¶¶¶_________________¶¶¶¶¶¶¶¶__¶¶¶ 
		// ¶¶__¶¶¶¶¶¶¶¶¶¶¶_____________¶¶¶__¶¶¶¶¶¶¶¶__¶¶ 
		// ¶¶_¶¶¶¶¶¶¶¶¶¶¶_________¶¶¶¶¶¶¶¶¶_¶¶¶¶¶¶¶¶¶_¶¶ 
		// ¶__¶¶¶¶¶¶¶¶¶¶¶_________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶__¶ 
		// ¶_¶¶¶¶¶¶¶¶¶¶¶¶________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_¶ 
		// ¶_¶¶¶¶¶¶¶¶¶¶¶¶_________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_¶ 
		// ¶_¶¶¶¶¶¶¶¶¶¶¶¶___________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_¶ 
		// ¶_¶¶¶¶¶¶¶¶¶¶¶_____________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_¶ 
		// ¶_¶¶¶¶¶¶¶¶¶¶¶_____¶¶______¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_¶ 
		// ¶__¶¶¶¶¶¶¶¶¶______¶¶¶______¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶__¶ 
		// ¶¶_¶¶¶¶¶¶¶¶¶_____¶¶¶¶¶¶_____¶¶¶¶¶¶¶¶¶¶¶¶¶¶_¶¶ 
		// ¶¶__¶¶¶¶¶¶¶_____¶¶¶¶¶¶¶¶____¶¶¶¶¶¶¶¶¶¶¶¶¶__¶¶ 
		// ¶¶¶__¶¶¶¶_______¶¶¶¶¶¶¶¶¶____¶¶¶¶¶¶¶¶¶¶¶__¶¶¶ 
		// ¶¶¶¶__¶¶_______¶¶¶¶¶¶¶¶¶¶____¶¶¶¶¶¶¶¶¶¶__¶¶¶¶ 
		// ¶¶¶¶¶__¶______¶¶¶¶¶¶¶¶¶¶¶¶___¶¶¶¶¶¶¶¶¶__¶¶¶¶¶ 
		// ¶¶¶¶¶¶¶_____¶¶¶¶¶¶¶¶¶¶¶¶¶¶____¶¶¶¶¶¶__¶¶¶¶¶¶¶ 
		// ¶¶¶¶¶¶¶¶¶__¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶______¶¶___¶¶¶¶¶¶¶¶ 
		// ¶¶¶¶¶¶¶¶¶¶¶____¶¶¶¶¶¶¶¶¶¶¶¶¶¶_____¶¶¶¶¶¶¶¶¶¶¶ 
		// ¶¶¶¶¶¶¶¶¶¶¶¶¶¶________________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ 
		// ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶
 
 

