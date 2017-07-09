#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cctype>
#include<cmath>
#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <vector>
#include <set>
#include <stdio.h>
#include <stdlib.h>
#include <string>
long long amout_money;
using namespace std;
int rand_num(){
    return rand()%10 + 1;
}
int main()
{
    cout << "           Enter Deposit amount to play game : $";
    cin>>amout_money;
    while(true){
        long long betting_amount;
         if(amout_money==0){
            cout<<"sorry you are lose all your money you balance now is 0 "<<endl;
            return 0;
        }
        cout<<"enter bitting amount"<<endl;
        cin>>betting_amount;
        if(betting_amount>amout_money){
            cout<<"you dont have enogh money "<<endl;
            continue ;
        }

        cout<<"guess one :- " ;
        int n;
        cin>>n;
        if(n>10||n<=0){
            cout<<"wrong number ,try again"<<endl;
            continue ;
        }
        else{
            int r=rand_num();
            if(r==n){
                amout_money=amout_money+(betting_amount*10);
                cout<<"winner . \n your balance now is "<<amout_money<<endl;
            }else{
                amout_money=amout_money-betting_amount;
                cout<<"loser . \n your balance now is "<<amout_money<<endl;
            }
        }
    }


    return 0;
}
