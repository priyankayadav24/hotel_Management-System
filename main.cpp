#include <iostream>
using namespace std;
int main() {
int quant;
  int choice;
  //Quantity
  int Qrooms=0,Qpasta= 0, Qnoodles=0, Qshake=0, Qpizza =0;
  //food intems sold
  int Srooms =0, Spasta =0,Snoodles =0 ,Sshake =0,Spizza =0;
  //total proce of item
  int Total_rooms =0,Total_pasta=0,Total_noodles=0,Total_shake=0,Total_pizza = 0;

  cout<<"\n\t\t\t********Quantity of Items we have*********";
  cout<<"\n Rooms avaliable: ";
  cin>>Qrooms;
  cout<<"\n Quantity of Pasta: ";
  cin>>Qpasta;
  cout<<"\n Quantity of Noodles: ";
  cin>>Qnoodles;
  cout<<"\n Quantity of Shake: ";
  cin>>Qshake; 
  cout<<"\n Quantity of Pizza : ";
  cin>>Qpizza;
  m:
  cout<<"\n\t\t\t *********Please select from the menu options********** ";
  cout<<"\n1) Rooms";
  cout<<"\n2) Pasta";
  cout<<"\n3) Noodles";
  cout<<"\n4) Shake";
  cout<<"\n5) Pizza";
  cout<<"\n6) Information regarding sales and collection";
  cout<<"\n7) Exit";
  cout<<"\n\n Please Enter Your choice!";
  cin>>choice;
  switch(choice){
    case 1:
    cout<<"\n\n Enter the number of rooms you want: ";
    cin>>quant;
    if(Qrooms-Srooms>= quant){
      Srooms=Srooms+quant;
    Total_rooms =Total_rooms+quant*1200;
      cout<<"\n\n\n\t"<<quant<<"\tRoom/Rooms have been alloated to you!";
    }
    else{
      cout<<"\n\nOnly"<<Qrooms-Srooms<<"Rooms remaing in hotel";
      }
    break;
    case 2:
    cout<<"\n\n Enter pasta quantity: ";
    cin>>quant;
    if(Qpasta-Spasta >= quant){
      Spasta=Spasta+quant;
    Total_pasta =Total_pasta+quant*250;
      cout<<"\n\n\nt\t"<<quant<<"Pasta is the order!";
    }else{
      cout<<"\n\nOnly"<<Qpasta-Spasta<<"Pasta remaining in hotel!";
      }
     break;
    
    case 3:
    cout<<"\n\n Enter Noodles Quantity";
    cin>>quant;
    if(Qnoodles-Snoodles >= quant){
      Snoodles=Snoodles+quant;
    Total_noodles=Total_noodles+quant*120;
      cout<<"\n\n\nt\t"<<quant<<"Noodle is the order!";
    }else{
      cout<<"\n\nOnly"<<Qnoodles-Snoodles<<"Noodles remaining in hotel!";}
      break;
    
    case 4:
    cout<<"\n\n Enter Shake Quantity";
    cin>>quant;
    if(Qshake-Sshake >= quant){
      Sshake=Sshake+quant;
    Total_shake=Total_shake+quant*120;
      cout<<"\n\n\nt\t"<<quant<<"Shake is the order!";
    }else{
      cout<<"\n\nOnly"<<Qshake-Sshake<<"Shake remaining in hotel!";}
      break;
    
    case 5:
    cout<<"\n\n Enter Pizza Quantity";
    cin>>quant;
    if(Qpizza-Spizza >= quant){
      Spizza=Spizza+quant;
    Total_pizza=Total_pizza+quant*120;
      cout<<"\n\n\nt\t"<<quant<<"Noodle is the order!";
    }else{
      cout<<"\n\nOnly"<<Qpizza-Spizza<<"Pizza remaining in hotel!";}
      break;
    
    case 6:
    cout<<"\n\t\tDetails of sales and collection" ;
    cout<<"\n\n Number of rooms we had: "<<Qrooms;
    cout<<"\n\n Number of rooms we gave for rent: "<<Srooms;
    cout<<"\n\n Remaining rooms: "<<Qrooms-Srooms;
    cout<<"\n\n Total rooms collecton for the day: "<<Total_rooms;


    cout<<"\n\n Number of Pasta we had: "<<Qpasta;
    cout<<"\n\n Number of Pasta we gave for rent: "<<Spasta;
    cout<<"\n\n Remaining Pasta: "<<Qpasta-Spasta;
    cout<<"\n\n Total Pasta collecton for the day: "<<Total_pasta;

    cout<<"\n\n Number of noodles we had: "<<Qnoodles;
    cout<<"\n\n Number of noodles we gave for rent: "<<Snoodles;
    cout<<"\n\n Remaining noodles: "<<Qnoodles-Snoodles;
    cout<<"\n\n Total noodles collecton for the day: "<<Total_noodles;

    cout<<"\n\n Number of Shake we had: "<<Qshake;
    cout<<"\n\n Number of Shake we gave for rent: "<<Sshake;
    cout<<"\n\n Remaining Shake: "<<Qshake-Sshake;
    cout<<"\n\n Total Shake collecton for the day: " <<Total_shake;
      
    cout<<"\n\n Number of Pizza we had: "<<Qpizza;
    cout<<"\n\n Number of Pizza we gave for rent: "<<Spizza;
    cout<<"\n\n Remaining Pizza: "<<Qpizza-Spizza;
    cout<<"\n\n Total pizza collecton for the day: "<<Total_pizza;

    cout<<"\n\n\n Total Collection of the day: "<<Total_rooms+Total_pasta+Total_noodles+Total_shake+Total_pizza;
    break;
    case 7:
    exit(0);
    default:cout<<"\n Please select the numbers mention above! "; 
  }
  goto m;
}
