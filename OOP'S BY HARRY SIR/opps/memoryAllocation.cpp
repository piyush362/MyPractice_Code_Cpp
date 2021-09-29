#include<iostream>
using namespace std;
class shop{
        int itemID[100];
        int itemprice[100];
        int counter;

        public:
        void initcounter(void) {counter = 0; }

        void setprice(void);
        void displayprice(); 
};
void shop ::setprice(void){
    cout<<"Enter the ID of you item number "<< counter +1 << " :";
    cin>>itemID[counter];
    cout<<"Enter the price of your item :";
    cin>> itemprice[counter];
    cout<<endl;
    counter++;
    
}
void shop ::displayprice(void){
    for(int i = 0 ; i < counter ; i++){
        cout<<"Price of ID number "<<itemID[i]<<"is "<<itemprice[i]<<endl;
    }
}
int main()
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
    return 0;
}