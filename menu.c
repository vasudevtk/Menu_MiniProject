#include <stdio.h>
int main(){
  int option,s_num,mc_num,dnk_num,dsrt_num;
  int total=0;
  //Item count variables
  int s1=0,s2=0,s3=0,s4=0,s5=0,s6=0;
  int m1=0,m2=0,m3=0,m4=0,m5=0,m6=0;
  int d1=0,d2=0,d3=0,d4=0,d5=0,d6=0;
  int dsrt1=0,dsrt2=0,dsrt3=0,dsrt4=0,dsrt5=0,dsrt6=0;

  //Welcome
  printf("\t\t\t Welcome Vasco cafe\n\n");

  printf("\t\tMenu\n\n");//Menu Starting


  //starters
  printf("\t\tStarters...\n");
  printf("Veg\n");
  printf("1.Crispy Chilli Paneer     => 290/-\n");
  printf("2.Corn & Cheese Balls      => 275/-\n");
  printf("3.Spinach Dip & Pita       => 310/-\n\n");
  printf("Non-Veg\n");
  printf("4.Chicken Satay Skewers    => 350/-\n");
  printf("5.Lamb Seekh Kebab         => 380/-\n");
  printf("6.Fish Tacos               => 410/-\n");

  do
  {
    printf("Would you like to add more? Choose a dish, or enter 7 to move on to Main Course.\n\n");
    printf("Enter the dish Number : ");
    scanf("%d",&s_num); 
    //invalid starter
    if(s_num==7)
    {
      break;
    }
    if(s_num<1 || s_num>6)
    {
      printf("Invalid input\n");
      continue;
    }
    switch(s_num)
    {
      case 1:
      s1++;
      printf("Your Veg starter Crispy Chilli Paneer confirmed\n");
      break;
      case 2:
      s2++;
      printf("Your Veg starter Corn & Cheese Balls confirmed\n");
      break;
      case 3:
      printf("Your Veg starter Spinach Dip & Pita confirmed\n");
      s3++;
      break;
      case 4:
      printf("Your Non Veg starter Chicken Satay Skewers confirmed\n");
      s4++;
      break;
      case 5:
      printf("Your Non Veg starter Lamb Seekh Kebab confirmed\n");
      s5++;
      break;
      case 6:
      printf("Your Non Veg starter Fish Tacos confirmed\n");
      s6++;
      break;
      
    }
  }while(s_num!=7);
    printf("-------------------------------------------\n\n\n");

  //Main Course

   printf("\t\tMain Course...\n");
  printf("Veg\n");
  printf("1.Wild Mushroom Risotto    => 560/-\n");
  printf("2.Palak Paneer With Nan    => 490/-\n");
  printf("3.Veggie Pad Thai          => 520/-\n\n");
  printf("Non-Veg\n");
  printf("4.Butter Chicken With Nan  => 620/-\n");
  printf("5.Grilled salmon With Rice => 750/-\n");
  printf("6.Mutton Rogan Josh        => 680/-\n\n");

  do
  {
    printf("Would you like to add more? Choose a dish, or Enter 7 to move on to Drinks.\n\n"); 
    printf("Enter the dish Number : ");
    scanf("%d",&mc_num);
    //Exit
    if(mc_num==7)
    {
      break;
    }
    //Invalid Main Course
    if(mc_num<1 || mc_num>6)
    {
      printf("Invalid input\n");
      continue;
      }
    switch(mc_num)
    {
      case 1:
      printf("Your Veg Main Wild Mushroom Risotto confirmed\n");
      m1++;
      break;
      case 2:
      printf("Your Veg Main Course Palak Paneer With Nan confirmed\n");
      m2++;
      break;
      case 3:
      printf("Your Veg Main Course Veggie Pad Thai confirmed\n");
      m3++;
      break;
      case 4:
      printf("Your Non Veg Main Course Butter Chicken With Nan confirmed\n");
      m4++;
      break;
      case 5:
      printf("Your Non Veg Main Course Grilled salmon With Rice confirmed\n");
      m5++;
      break;
      case 6:
      printf("Your Non Veg Main Course Mutton Rogan Josh confirmed\n");
      m6++;
      break;
    }
  }while(mc_num!=7);
    printf("-------------------------------------------\n\n\n");


  //Drinks

  printf("\t\tDrinks...\n");
  printf("Cocktails\n");
  printf("1.Classic Mojito           => 420/-\n");
  printf("2.Old Fashioned            => 490/-\n");
  printf("3.Spicy Mango Margarita    => 450/-\n\n");
  printf("Moktails\n");
  printf("4.Virgin Colada            => 290/-\n");
  printf("5.Elderflower Lemonade     => 270/-\n");
  printf("6.Sweet Sunrise            => 280/-\n\n");
  do
  {
    printf("Would you like to add more? Choose a drink, or Enter 7 to move on to Desserts.\n\n");
    printf("Enter the dish Number : ");
    scanf("%d",&dnk_num);
    printf("\n");
    //Exit
    if(dnk_num==7)
    {
      break;
    }
    //Invalid Drink
    printf("\n");
    if(dnk_num<1 || dnk_num>6)
    {
      printf("Invalid input\n");
      continue;
    } 
  
    switch(dnk_num)
    {
      case 1:
      printf("Your Cocktail Classic Mojito confirmed\n");
      d1++;
      break;
      case 2:
      printf("Your Cocktail Old Fashioned confirmed\n");
      d2++;
      break;
      case 3:
      printf("Your Cocktail Spicy Mango Margarita confirmed\n");
      d3++;
      break;
      case 4:
      printf("Your Mocktail Virgin Colada confirmed\n");
      d4++;
      break;
      case 5:
      printf("Your Mocktail Elderflower Lemonade confirmed\n");
      d5++;
      break;
      case 6:
      printf("Your Mocktail Sweet Sunrise confirmed\n");
      d6++;
      break;
    }
  }while(dnk_num!=7);
  printf("-------------------------------------------\n\n\n");
  //Desserts
    printf("\t\tDesserts...\n");
    printf("1.Chocolate Cheescake      => 180/-\n");
    printf("2.Sicky Toffee Pudding     => 200/-\n");
    printf("3.Chocolate Lava Cake      => 160/-\n");
    printf("4.Mango Cheescake          => 190/-\n");
    printf("5.Rum Cake                 => 300/-\n");
    printf("6.Brownie Galato           => 210/-\n\n");
  do
  {
    printf("Would you like to add more? Choose a dish, or Enter 7 to exit the Menu.\n\n");
    printf("Enter the dish Number : ");
    scanf("%d",&dsrt_num);
    //Exit
    if(dsrt_num==7)
    {
      break;
    }
    printf("\n");
    //Invalid  Entry
    if(dsrt_num<1 || dsrt_num>6)
      {
      printf("Invalid input\n");
      continue;
      }
    switch(dsrt_num)
    {
      case 1:
      printf("Your Dessert Chocolate Cheesecake confirmed\n");
      dsrt1++;
      break;
      case 2:
      printf("Your Dessert Sicky Toffee Pudding confirmed\n");
      dsrt2++;
      break;
      case 3:
      printf("Your Dessert Chocolate Lava Cake confirmed\n");
      dsrt3++;
      break;
      case 4:
      printf("Your Dessert Mango Cheescake confirmed\n");
      dsrt4++;
      break;
      case 5:
      printf("Your Dessert Rum Cake confirmed\n");
      dsrt5++;  
      break;
      case 6:
      printf("Your Dessert Brownie Galato confirmed\n");
      dsrt6++;
      break;
    }
  }while(dsrt_num!=7);
  printf("-------------------------------------------\n\n\n");

// Bill Calculation
  printf("\t\tYour Total Bill...\n\n");
  
  if(s1>0)
  {
    printf("Crispy Chilli Paneer     %d    %d   %d\n",s1,290,s1*290);
    total+=s1*290;
  }
  if(s2>0)
  {
    printf("Paneer Tikka             %d    %d   %d\n",s2,320,s2*320);
    total+=s2*320;
  }
  if(s3>0)
  { 
    printf("Malai Kofta              %d    %d   %d\n",s3,280,s3*280);
    total+=s3*280;
  }
  if(s4>0)
  {
    printf("Aloo Gobi                %d    %d   %d\n",s4,260,s4*260);
    total+=s4*260;
  }
  if(s5>0)
  {
    printf("Palak Paneer             %d    %d   %d\n",s5,300,s5*300);
    total+=s5*300;
  }
  if(s6>0)
  {
    printf("Shahi Paneer             %d    %d   %d\n",s6,350,s6*350);
    total+=s6*350;
  }
  if(m1>0)
  {
    printf("Wild Mushroom Risotto    %d    %d   %d\n",m1,560,m1*560);
    total+=m1*560;
  }
  if(m2>0)
  {
    printf("Palak Paneer With Nan    %d    %d   %d\n",m2,490,m2*490);
    total+=m2*490;
  }
  if(m3>0)
  {
    printf("Veggie Pad Thai          %d    %d   %d\n",m3,520,m3*520);
    total+=m3*520;
  }
  if(m4>0)
  {
    printf("Butter Chicken With Nan  %d    %d   %d\n",m4,620,m4*620);
    total+=m4*620;
  }
  if(m5>0)
  {
    printf("Grilled salmon With Rice %d    %d   %d\n",m5,750,m5*750);
    total+=m5*750;
  }
  if(m6>0)
  {
    printf("Mutton Rogan Josh        %d    %d   %d\n",m6,680,m6*680);
    total+=m6*680;
  }
  if(d1>0)
  {
    printf("Classic Mojito           %d    %d   %d\n",d1,420,d1*420);
    total+=d1*420;
  }
  if(d2>0)
  {
    printf("Old Fashioned            %d    %d   %d\n",d2,490,d2*490);
    total+=d2*490;
  }
  if(d3>0)
  {
    printf("Spicy Mango Margarita    %d    %d   %d\n",d3,450,d3*450);
    total+=d3*450;
  }
  if(d4>0)
  {
    printf("Virgin Colada            %d    %d   %d\n",d4,290,d4*290);
    total+=d4*290;
  }
  if(d5>0)
  {
    printf("Elderflower Lemonade     %d    %d   %d\n",d5,270,d5*270);
    total+=d5*270;
  }
  if(d6>0)
  {
    printf("Sweet Sunrise            %d    %d   %d\n",d6,280,d6*280);
    total+=d6*280;
  }
  if(dsrt1>0)
  {
    printf("Chocolate Cheescake      %d    %d   %d\n",dsrt1,180,dsrt1*180);
    total+=dsrt1*180;
  }
  if(dsrt2>0)
  {
    printf("Sticky Toffee Pudding    %d    %d   %d\n",dsrt2,200,dsrt2*200);
    total+=dsrt2*200;
  }
  if(dsrt3>0)
  {
    printf("Chocolate Lava Cake      %d    %d   %d\n",dsrt3,160,dsrt3*160);
    total+=dsrt3*160;
  }
  if(dsrt4>0)
  {
    printf("Mango Cheescake          %d    %d   %d\n",dsrt4,190,dsrt4*190);
    total+=dsrt4*190;
  }
  if(dsrt5>0)
  {
    printf("Rum Cake                 %d    %d   %d\n",dsrt5,300,dsrt5*300);
    total+=dsrt5*300;
  }
  if(dsrt6>0)
  {
    printf("Brownie Galato           %d    %d   %d\n",dsrt6,210,dsrt6*210);
    total+=dsrt6*210;
  }

  printf("--------------------------------------------\n");
  
  printf("Sub Total                         = %d Rs\n",total);
  printf("GST(18%%)                          = %g Rs\n",(float)total*0.18);
  printf("Service tax(2%%)                   = %g Rs\n",(float)total*0.02);
  printf("---------------------------------------------\n");
  printf("Total Bill                        = %g Rs\n",(float)total+(total*0.18)+(total*0.02));
  printf("---------------------------------------------\n\n ");


  //Payment method
  do{
    printf("\t\tPayment Method...\n\n");
    printf("1.Cash\n");
    printf("2.Card\n");
    printf("3.UPI\n");
    printf("Enter the payment method : ");
    scanf("%d",&option);
    switch(option)
    {
      case 1:
      printf("Your payment method is Cash.\n");
      break;
      case 2:
      printf("Your payment method is Card.\n");
      break;
      case 3:
      printf("Your payment method is UPI.\n");
      break;
      default:
      printf("Invalid Payment Method.\n");
    }
}while(option<1 || option>3);
  printf("Payment Received.........\n\n");
       
  printf("\t\tThank you for visiting Vasco cafe\n");

  return 0;

}
