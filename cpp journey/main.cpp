#include <iostream>

using namespace std;

int main()



{
    int score;
   cout<<"Enter your score:";
   cin>> score;


    if(score>=70)
        cout<<"you had a grade A";


     else if(score>=60)
     cout<<"you had a grade B";


    else if(score>=50)
        cout<<"you had a grade C";


    else if(score>=40)
        cout<<"you had a grade D";


    else
        cout<<"you failed";
return 0;
}


