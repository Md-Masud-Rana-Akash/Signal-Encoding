#include<iostream>
#include<windows.h>
#include<conio.h>
//#include<akash>

using namespace std;

int main(){

int i,a,b,j,p,c,e,s,n,d,r,ch;


for(;;){

    cout<<"\n\n\n                     Please Enter your Choice: ";

    cout<<"\n\n\n1. Unipolar Encoding\n";
    cout<<"2. NRZL Encoding\n";
    cout<<"3. NRZI Encoding\n";
    cout<<"4. Manchester Encoding\n";

    cin>>ch;



if(ch==1){

          for(int z=0;z<1;z++){
            for(int p=0;p<35;p++){
            cout<<" ";
                }
               cout<<">>> UNIPOLAR Encoding <<< \n\n\n\n";
              }


        cout<<"\nInput the total number of bits= ?";
        cin>>n;
        cout<<"\nPlease enter the bit either 0 or 1 one by one and press enter...\n";
        int x[n];
        c=0;
        for(i=0;i<n;i++){
            cin>>x[i];
        }

        cout<<"\n\n\n";

        for(i=0;i<n;i++){

         if(x[i]==1){
                if(c==0){
                cout<<"|```````";
                Sleep(500);
                c=0;
                }
                else if(c==1){
                cout<<"|```````";
                Sleep(500);
                c=0;
                }
                else cout<<"checkk the code";

         }

         else if(x[i]==0){
               if(c==0){
               cout<<"|_______";
               Sleep(500);
               c=1;
               }
               else if(c==1){
                  cout<<"|_______";
                  Sleep(500);
                  c=1;
               }
               else cout<<"chk the code";

         }
         else{
            cout<<"Sorrrrry enter either 0 or 1n\n\n";

         }

        }

        cout<<"\n";
        cout<<"   ";

         for(i=0;i<n;i++){
                cout<<x[i];
         for(int p=0;p<7;p++){
                cout<<" ";
          }


        }
    }


else if(ch==2){


              for(int z=0;z<1;z++){
                for(int p=0;p<35;p++){
                cout<<" ";
               }
               cout<<">>> NRZ-L Encoding <<< \n\n\n\n";
              }


            cout<<"\nInput the total number of bits= ?";
            cin>>n;
            cout<<"\nPlease enter the bit either 0 or 1 one by one and press enter...\n";
            int x[n];
            c=0;
            for(i=0;i<n;i++){
                cin>>x[i];
            }

            cout<<"\n\n\n";

            for(i=0;i<n;i++){

             if(x[i]==0){
                    if(c==0){
                    cout<<"|```````";
                    Sleep(500);
                    c=0;
                    }
                    else if(c==1){
                    cout<<"|```````";
                    Sleep(500);
                    c=0;
                    }
                    else cout<<"checkk the code";

             }

             else if(x[i]==1){
                   if(c==0){
                   cout<<"|_______";
                   Sleep(500);
                   c=1;
                   }
                   else if(c==1){
                      cout<<"|_______";
                      Sleep(500);
                      c=1;
                   }
                   else cout<<"chk the code";

             }
             else{
                cout<<"Sorrrrry enter either 0 or 1n\n\n";

             }

            }

            cout<<"\n";
            cout<<"   ";

             for(i=0;i<n;i++){
                    cout<<x[i];
             for(int p=0;p<7;p++){
                    cout<<" ";
              }


            }
    }



else if(ch==3){


             for(int z=0;z<1;z++){
                for(int p=0;p<35;p++){
                cout<<" ";
               }
               cout<<">>> NRZ-I Encoding <<< \n\n\n\n";
              }


            cout<<"\nInput the total number of bits= ?";
            cin>>n;
            cout<<"\nPlease enter the bit either 0 or 1 one by one and press enter...\n";
            int x[n];
            c=0;
            d=0;
            r=5;


            for(i=0;i<n;i++){
                cin>>x[i];
            }

            cout<<"\n\n\n";

            for(i=0;i<n;i++){

             if(x[i]==0 && i==0){
                    if(c==0){
                    cout<<"|_______";
                    Sleep(500);
                    c=0;
                    r=10;

                    }
                    else if(c==1){
                    cout<<"|_______";
                    Sleep(500);
                    c=0;
                    r=5;

                    }
                    else cout<<"checkk the code";

             }


             else if(x[i]==0 && i!=0){
                    if(c==1 && d==5){
                    cout<<"|```````";
                    Sleep(500);
                    c=0;
                    r=5;

                    }
                    else if(c==1 && d==10){
                    cout<<"|_______";
                    Sleep(500);
                    c=0;
                    r=10;

                    }
                    else if(c==0 && r==5){
                    cout<<"|```````";
                    Sleep(500);
                    c=0;
                    r=5;

                    }

                     else if(c==0 && r==10){
                    cout<<"|_______";
                    Sleep(500);
                    c=0;
                    r=10;

                    }


                    else cout<<"check the code";

                 }




              else if(x[i]==1){
                    if(c==0 && r==10){
                    cout<<"|```````";
                    Sleep(500);
                    c=1;
                    d=5;
                    r=10;

                    }
                    else if(c==0 && r==5){
                    cout<<"|_______";
                    Sleep(500);
                    c=1;
                    d=10;
                    r=10;
                    }


                   else if(c==1 && r==10){
                        cout<<"|```````";
                        Sleep(500);
                        c=1;
                        d=5;
                        r=5;
                        }

                     else if(c==1 && r==5){
                        cout<<"|_______";
                        Sleep(500);
                        c=1;
                        d=10;
                        r=5;
                        }



                    else cout<<"checkthe code";

             }



             else{
                cout<<"Sorrrrry enter either 0 or 1n\n\n";

             }
            }


            cout<<"\n";
            cout<<"   ";

             for(i=0;i<n;i++){
                    cout<<x[i];
             for(int p=0;p<7;p++){
                    cout<<" ";
              }


            }
    }

else if(ch==4){

             for(int z=0;z<1;z++){
                for(int p=0;p<35;p++){
                cout<<" ";
               }
               cout<<">>> MANCHESTER Encoding <<< \n\n\n\n";
              }


            cout<<"\nInput the total number of bits= ?";
            cin>>n;
            cout<<"\nPlease enter the bit either 0 or 1 one by one and press enter...\n";
            int x[n];
            c=0;
            for(i=0;i<n;i++){
                cin>>x[i];
            }

            cout<<"\n\n\n";

            for(i=0;i<n;i++){

             if(x[i]==0){
                    if(c==0){
                    cout<<"|```:___";
                    Sleep(500);
                    c=0;
                    }
                    else if(c==1){
                    cout<<"|```:___";
                    Sleep(500);
                    c=0;
                    }
                    else cout<<"checkk the code";
                    }




             else if(x[i]==1){
                   if(c==0){
                   cout<<"|___:```";
                   Sleep(500);
                   c=1;
                   }
                   else if(c==1){
                      cout<<"|___:```";
                      Sleep(500);
                      c=1;
                   }
                   else cout<<"chk the code";

             }
             else{
                cout<<"Sorrrrry enter either 0 or 1n\n\n";

             }
            }



            cout<<"\n";
            cout<<"     ";

             for(i=0;i<n;i++){
                    cout<<x[i];
             for(int p=0;p<7;p++){
                    cout<<" ";
              }


            }
        }


else
    cout<<"Please input correctly...";
getch();
}

getch();
   return 0;
}

