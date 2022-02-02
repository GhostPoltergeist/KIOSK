#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define p printf
#define g gotoxy
#define s sleep

/**< GLOBAL VARIABLE FOR RECEIPT
 / [FOODS]//[PRICING]
*/
float price;
int cal = 763;
int dragon = 916;
int edamame = 250;
int gyoza= 250;
int harumaki = 250;
int takoyaki = 302;
int salad = 302;
int chicken = 609;
int katsu = 609;
int yakiniku = 660;
int spicy = 660;
int prawn = 660;
int salmon = 763;
char e;
static int f;
static int cash1;
int ini;
static int quan1;

/**< GLOBAL VARIABLE FOR RECEIPT
 / [BEVERAGES]//[PRICING]
*/

float ttl;
static int drinks;
char e;
int ini;
static int quan;
static int cash;
int fruitjuice, cocacola, fanta, drpepper, minutemaid, aquarius, pocarisweat, georgia, lohas, milktea, rootbeer, gatorade, sunkist, mountaindew, lipton, royal, pepsi, redbull, ooiocha, swissmiss;
cocacola = 20;
fanta = 23;
drpepper = 25;
minutemaid = 30;
aquarius = 20;
pocarisweat = 35;
georgia = 27;
lohas = 28;
milktea = 34;
rootbeer = 15;
gatorade = 40;
sunkist = 20;
mountaindew = 16;
lipton = 18;
royal = 15;
pepsi = 15;
redbull = 30;
ooiocha = 17;
swissmiss = 28;
fruitjuice = 24;

/**< GLOBAL VARIABLE FOR RECEIPT
 / [DESERTS]//[PRICING]
*/

static int order;
int ini1;
float price1;
static int quan2;
static int cash2;
/**< BREAK */

/**< ICE-CREAM PRODUCTS */
int beerice = 50;
int heaven = 50;
int browbread = 50;
int bluemoon = 50;

/**< CHOCOLATE PRODUCTS */
int chocolatewhip = 50;
int milkchocolate = 50;
int maple = 50;
int marshmallowfudge = 50;

/**< CAKE PRODUCTS */
int blackforest = 50;
int pineapple = 50;
int eggless = 50;
int fudgy = 50;

/**< MILKSHAKE PRODUCTS */
int chocomilkshake = 50;
int bananamilkshake = 50;
int cookies = 50;
int strawberry = 50;

COORD co = {0,0};


void gotoxy (int x, int y)
{
 co.X=x;
 co.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), co);
}

void foods()
{
/**<
  / PRICES
  /  FOR CALCULATION PURPOSES
 */
//BREAK
system("COLOR 70");
p("\n");
p(" 8888888888 .d88888b.   .d88888b.  8888888b.   .d8888b.  \n");
p(" 888       d88P   Y88b d88P   Y88b 888   Y88b d88P  Y88b \n");
p(" 888       888     888 888     888 888    888 Y88b.      \n");
p(" 8888888   888     888 888     888 888    888   Y888b.   \n");
p(" 888       888     888 888     888 888    888      Y88b. \n");
p(" 888       888     888 888     888 888    888        888 \n");
p(" 888       Y88b. .d88P Y88b. .d88P 888  .d88P Y88b  d88P \n");
p(" 888         Y88888P     Y88888P   8888888P     Y8888P   \n");
p("\n");
p(">> FOOD MENU SELECTION // PLEASE INDICATE YOUR ORDER BY 'NUMBER' << \n");
p("         | JAPANESE ROLL SUSHI LARGE SIZE (8pcs)\n");
g(1, 10);p(">> [1]CALIFORNIA ROLL-|763.04php| [2]DRAGON ROLL-|916.67php| \n");
g(9, 11);p("| COMMON SNACKS (8pcs)\n");
g(1, 12);p(">> [3]EDAMAME-|250.93php| [4]GYOZA-|250.93php| [5]HARUMAKI-|250.93php| [6]TAKOYAKI-|302.14php| \n");
g(1, 13);p("   [7]SEAWEED SALAD-|302.14php| \n");
g(9, 14);p("| DONBURI \n");
g(1, 15);p(">> [8]CHICKEN TERIYAKI-|609.40php| [9]KATSU-|609.40php| [10]YAKINIKU-|660.62php| [11]SPICY PORK-|660.62php|                [12]PRAWN KATSU-|660.62php| [13]SALMON SASHIMI-|763.04php| \n\n");

p("ORDER >>: ");
scanf("%d", &f);
switch(f)
{
case 1:
    p("[CATEGORY]: JAPANESE ROLL SUSHI LARGE SIZE \n");
    p("[763php]: CALIFORNIA ROLL \n");
    p("[QUANTITY]: ");
    scanf("%d", &quan1);
    p("[CASH]: ");
    scanf("%d", &cash1);
    /**
    * \START
    */
    ini = (quan1 * cal);
    price = (cash1 - ini);
    if(cash1<ini){
     p("[PLEASE SATISFY THE BILLS TO COMPLETE THE ORDER] ");
    }
    else if(cash1>=ini){
     p("[YOUR CHANGE IS]: %.2f \n", price);
    }
    /**
    * \END
    */
break;
case 2:
    p("[CATEGORY]: JAPANESE ROLL SUSHI LARGE SIZE \n");
    p("[916php]: DRAGON ROLL \n");
    p("[QUANTITY]: ");
    scanf("%d", &quan1);
    p("[CASH]: ");
    scanf("%d", &cash1);
    /**
    * \START
    */
    ini = (quan1 * dragon);
    price = (cash1 - ini);
    if(cash1<ini){
     p("[PLEASE SATISFY THE BILLS TO COMPLETE THE ORDER] ");
    }
    else if(cash1>=ini){
     p("[YOUR CHANGE IS]: %.2f \n", price);
    }
    /**
    * \END
    */
break;
case 3:
    p("[CATEGORY]: COMMON SNACKS \n");
    p("[250php]: EDAMAME \n");
    p("[QUANTITY]: ");
    scanf("%d", &quan1);
    p("[CASH]: ");
    scanf("%d", &cash1);
    /**
    * \START
    */
    ini = (quan1 * edamame);
    price = (cash1 - ini);
    if(cash1<ini){
     p("[PLEASE SATISFY THE BILLS TO COMPLETE THE ORDER] ");
    }
    else if(cash1>=ini){
     p("[YOUR CHANGE IS]: %.2f \n", price);
    }
    /**
    * \END
    */
break;
case 4:
    p("[CATEGORY]: COMMON SNACKS \n");
    p("[250php]: GYOZA \n");
    p("[QUANTITY]: ");
    scanf("%d", &quan1);
    p("[CASH]: ");
    scanf("%d", &cash1);
    /**
    * \START
    */
    ini = (quan1 * gyoza);
    price = (cash1 - ini);
    if(cash1<ini){
     p("[PLEASE SATISFY THE BILLS TO COMPLETE THE ORDER] ");
    }
    else if(cash1>=ini){
     p("[YOUR CHANGE IS]: %.2f \n", price);
    }
    /**
    * \END
    */
break;
case 5:
    p("[CATEGORY]: COMMON SNACKS \n");
    p("[250php]: HARUMAKI \n");
    p("[QUANTITY]: ");
    scanf("%d", &quan1);
    p("[CASH]: ");
    scanf("%d", &cash1);
    /**
    * \START
    */
    ini = (quan1 * harumaki);
    price = (cash1 - ini);
    if(cash1<ini){
     p("[PLEASE SATISFY THE BILLS TO COMPLETE THE ORDER] ");
    }
    else if(cash1>=ini){
     p("[YOUR CHANGE IS]: %.2f \n", price);
    }
    /**
    * \END
    */
break;
case 6:
    p("[CATEGORY]: COMMON SNACKS \n");
    p("[302php]: TAKOYAKI \n");
    p("[QUANTITY]: ");
    scanf("%d", &quan1);
    p("[CASH]: ");
    scanf("%d", &cash1);
    /**
    * \START
    */
    ini = (quan1 * takoyaki);
    price = (cash1 - ini);
    if(cash1<ini){
     p("[PLEASE SATISFY THE BILLS TO COMPLETE THE ORDER] ");
    }
    else if(cash1>=ini){
     p("[YOUR CHANGE IS]: %.2f \n", price);
    }
    /**
    * \END
    */
break;
case 7:
    p("[CATEGORY]: COMMON SNACKS \n");
    p("[302php]: SEAWEED SALAD \n");
    p("[QUANTITY]: ");
    scanf("%d", &quan1);
    p("[CASH]: ");
    scanf("%d", &cash1);
    /**
    * \START
    */
    ini = (quan1 * salad);
    price = (cash1 - ini);
    if(cash1<ini){
     p("[PLEASE SATISFY THE BILLS TO COMPLETE THE ORDER] ");
    }
    else if(cash1>=ini){
     p("[YOUR CHANGE IS]: %.2f \n", price);
    }
    /**
    * \END
    */
break;
case 8:
    p("[CATEGORY]: DONBURI \n");
    p("[609php]: CHICKEN TERIYAKI \n");
    p("[QUANTITY]: ");
    scanf("%d", &quan1);
    p("[CASH]: ");
    scanf("%d", &cash1);
    /**
    * \START
    */
    ini = (quan1 * chicken);
    price = (cash1 - ini);
    if(cash1<ini){
     p("[PLEASE SATISFY THE BILLS TO COMPLETE THE ORDER] ");
    }
    else if(cash1>=ini){
     p("[YOUR CHANGE IS]: %.2f \n", price);
    }
    /**
    * \END
    */
break;
case 9:
    p("[CATEGORY]: DONBURI \n");
    p("[609php]: KATSU \n");
    p("[QUANTITY]: ");
    scanf("%d", &quan1);
    p("[CASH]: ");
    scanf("%d", &cash1);
    /**
    * \START
    */
    ini = (quan1 * katsu);
    price = (cash1 - ini);
    if(cash1<ini){
     p("[PLEASE SATISFY THE BILLS TO COMPLETE THE ORDER] ");
    }
    else if(cash1>=ini){
     p("[YOUR CHANGE IS]: %.2f \n", price);
    }
    /**
    * \END
    */
break;
case 10:
    p("[CATEGORY]: DONBURI \n");
    p("[660php]: YAKINIKU \n");
    p("[QUANTITY]: ");
    scanf("%d", &quan1);
    p("[CASH]: ");
    scanf("%d", &cash1);
    /**
    * \START
    */
    ini = (quan1 * yakiniku);
    price = (cash1 - ini);
    if(cash1<ini){
     p("[PLEASE SATISFY THE BILLS TO COMPLETE THE ORDER] ");
    }
    else if(cash1>=ini){
     p("[YOUR CHANGE IS]: %.2f \n", price);
    }
    /**
    * \END
    */
break;
case 11:
    p("[CATEGORY]: DONBURI \n");
    p("[660php]: SPICY PORK \n");
    p("[QUANTITY]: ");
    scanf("%d", &quan1);
    p("[CASH]: ");
    scanf("%d", &cash1);
    /**
    * \START
    */
    ini = (quan1 * spicy);
    price = (cash1 - ini);
    if(cash1<ini){
     p("[PLEASE SATISFY THE BILLS TO COMPLETE THE ORDER] ");
    }
    else if(cash1>=ini){
     p("[YOUR CHANGE IS]: %.2f \n", price);
    }
    /**
    * \END
    */
break;
case 12:
    p("[CATEGORY]: DONBURI \n");
    p("[660php]: PRAWN KATSU \n");
    p("[QUANTITY]: ");
    scanf("%d", &quan1);
    p("[CASH]: ");
    scanf("%d", &cash1);
    /**
    * \START
    */
    ini = (quan1 * prawn);
    price = (cash1 - ini);
    if(cash1<ini){
     p("[PLEASE SATISFY THE BILLS TO COMPLETE THE ORDER] ");
    }
    else if(cash1>=ini){
     p("[YOUR CHANGE IS]: %.2f \n", price);
    }
    /**
    * \END
    */
break;
case 13:
    p("[CATEGORY]: DONBURI \n");
    p("[763php]: SALMON SASHIMI \n");
    p("[QUANTITY]: ");
    scanf("%d", &quan1);
    p("[CASH]: ");
    scanf("%d", &cash1);
    /**
    * \START
    */
    ini = (quan1 * salmon);
    price = (cash1 - ini);
    if(cash1<ini){
     p("[PLEASE SATISFY THE BILLS TO COMPLETE THE ORDER] ");
    }
    else if(cash1>=ini){
     p("[YOUR CHANGE IS]: %.2f \n", price);
    }
    /**
    * \END
    */
break;

 default:
    p("\n");
    p(" [SYS]Please Indicate Your Order by 1-13 <<");
    p("\n");

}
   p("\n");
   p("\n");
   p("            >>    CONFIRMATION     << \n");
   p("  >> ORDER AGAIN[1] GO BACK[2] BEVERAGES[3] DONE[4]<<: ");
   scanf("%s", &e);
   switch(e)
   {
   case '1':
    system("cls");
    foods();
    break;
   case '2':
    system("cls");
    return main();
    break;
   case '3':
    system("cls");
    beverages();
    break;
   case '4':
    system("cls");
    receipt();
    break;
}
}

void beverages()
{
p(" 888888b.   8888888888 888     888 8888888888 8888888b.         d8888  .d8888b.  8888888888 .d8888b.  \n");
p(" 888   88b  888        888     888 888        888   Y88b       d88888 d88P  Y88b 888       d88P  Y88b \n");
p(" 888  .88P  888        888     888 888        888    888      d88P888 888    888 888       Y88b.      \n");
p(" 8888888K.  8888888    Y88b   d88P 8888888    888   d88P     d88P 888 888        8888888     Y888b.   \n");
p(" 888   Y88b 888         Y88b d88P  888        8888888P      d88P  888 888  88888 888            Y88b. \n");
p(" 888    888 888          Y88o88P   888        888 T88b     d88P   888 888    888 888              888 \n");
p(" 888   d88P 888           Y888P    888        888  T88b   d8888888888 Y88b  d88P 888       Y88b  d88P \n");
p(" 8888888P   8888888888     Y8P     8888888888 888   T88b d88P     888   Y8888P88 8888888888  Y8888P   \n");
p("\n");
system("COLOR 70");

p(" [VM]>> HELLO, PLEASE SPECIFY YOUR DRINKS, CHOOSE YOUR DRINKS BELOW\n");

/**< VARIABLE DECLARATION */

/**< SWITCH FUNCTIONS >> FOR THE OUTPUT OF VENDING MACHINE SYSTEM */

p("\n\n");
p(" [AVAIL. BEVERAGES]>[INDICATE YOUR DRINKS BY ALPHABET] \n [1]CocaCola, [2]Fanta, [3]Dr. Pepper, [4]MinuteMaid, [5]Aquarius, [6]PocariSweat, [7]Georgia, \n [8]Lohas, [9]Milktea, [10]RootBeer, [11]gatorade, [12]swissmiss, \n [13]FruitJuice, [14]sunkist, [15]mountaindew, [16]lipton, [17]royal, [18]pepsi, [19]redbull, [20]ooiocha \n\n >>: ", &drinks);
scanf("%d", &drinks);
switch(drinks)
{
 case 1:
 p(" [VM]>>You Purchase CocaCola<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * cocacola);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

 case 2:
 p(" [VM]>>You Purchase Fanta<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * fanta);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

  case 3:
 p(" [VM]>>You Purchase Dr.Pepper<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * drpepper);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

   case 4:
 p(" [VM]>>You Purchase MinuteMaid<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * minutemaid);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

   case 5:
 p(" [VM]>>You Purchase Aquarias<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * aquarius);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

   case 6:
 p(" [VM]>>You Purchase PocariSweat<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * pocarisweat);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

   case 7:
 p(" [VM]>>You Purchase Georgia<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * georgia);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

   case 8:
 p(" [VM]>>You Purchase Lohas<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * lohas);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

    case 9:
 p(" [VM]>>You Purchase Lohas<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * milktea);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

    case 10:
 p(" [VM]>>You Purchase Rootbeer<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * rootbeer);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

    case 11:
 p(" [VM]>>You Purchase Gatorade<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * gatorade);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

    case 12:
 p(" [VM]>>You Purchase SwissMiss<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * swissmiss);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

    case 13:
 p(" [VM]>>You Purchase FruitJuice<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * fruitjuice);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

    case 14:
 p(" [VM]>>You Purchase Sunkist<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * sunkist);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

    case 15:
 p(" [VM]>>You Purchase MountainDew<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * mountaindew);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

    case 16:
 p(" [VM]>>You Purchase Lipton<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * lipton);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

    case 17:
 p(" [VM]>>You Purchase Royal<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * royal);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

    case 18:
 p(" [VM]>>You Purchase Pepsi<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * pepsi);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

    case 19:
 p(" [VM]>>You Purchase RedBull<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * redbull);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

    case 20:
 p(" [VM]>>You Purchase Ooiocha<<\n");
 s(2);
 p(" [$]Quantity>>: ");
 scanf("%d", &quan);
 s(2);
 p(" [VM]>> PROCESSING <<\n");
 s(1);
 p(" [$]Indicate your Cash>>: ");
 scanf("%d", &cash);
 ini = (quan * ooiocha);
 ttl = (cash - ini);
 p("\n");
 p(" [VM]Your Change Is>>: %.2f", ttl);
 p("\n");
 break;

 default:
    p("\n");
    p(" [VM]Please Indicate Your Drinks By 1-20 <<");
    p("\n");
}
   p("\n");
   p("\n");
   p("            >>    CONFIRMATION     << \n");
   p("  >> ORDER AGAIN[1] GO BACK[2] DESERTS[3] DONE[4]<<: ");
   scanf("%s", &e);
   switch(e)
   {
   case '1':
    system("cls");
    beverages();
    break;
   case '2':
    system("cls");
    foods();
    break;
   case '3':
    system("cls");
    deserts();
    break;
   case '4':
    system("cls");
    receipt();
    break;
}
}


void deserts ()
{
system("COLOR 70");

p(" 8888888b.  8888888888 .d8888b.  8888888888 8888888b. 88888888888 .d8888b.  \n");
p(" 888   Y88b 888       d88P  Y88b 888        888   Y88b    888    d88P  Y88b \n");
p(" 888    888 888       Y88b.      888        888    888    888    Y88b.      \n");
p(" 888    888 8888888     Y888b.   8888888    888   d88P    888      Y888b.   \n");
p(" 888    888 888            Y88b. 888        8888888P      888         Y88b. \n");
p(" 888    888 888              888 888        888 T88b      888           888 \n");
p(" 888  .d88P 888       Y88b  d88P 888        888  T88b     888    Y88b  d88P \n");
p(" 8888888P   8888888888  Y8888P   8888888888 888   T88b    888      Y8888P   \n");
p("\n");
p(" [SYS]>: ALL DESERTS ARE IN LOW/SAME PRICES :> \n");
p("  [ICE CREAM PRODUCTS] \n");
p("   [1]BeerIceCream | [2]BlueHeaven | [3]BrownBread | [4]BlueMoon \n");
p("  [CHOCOLATE PRODUCTS] \n");
p("   [5]ChocolateWhip | [6]MilkChocolate | [7]MapleFondentAcros | [8]MarshmallowFudge \n");
p("  [CAKE PRODUCTS] \n");
p("   [9]BlackForestGateau | [10]PineAppleCake | [11]EgglessTruffleCake | [12]FudgyChocolate \n");
p("  [MILKSHAKES] \n");
p("   [13]ChocolateMilkshake | [14]BananaMilkshake | [15]Cookies&Creams | [16]StrawberryMilkshake \n");
p("\n");
p("ORDER >>: ");
scanf("%d", &order);
switch(order)
{
case 1:
    p("[CATEGORY]: ICE CREAM PRODUCTS \n");
    p("[50php]: BEER ICE CREAM \n");
    p("[QUANTITY]: ");
    scanf("%d", &quan2);
    p("[CASH]: ");
    scanf("%d", &cash2);
    /**
    * \START
    */
    ini1 = (quan2 * beerice);
    price1 = (cash2 - ini1);
    if(cash2<ini1){
     p("[PLEASE SATISFY THE BILLS TO COMPLETE THE ORDER] ");
    }
    else if(cash2>=ini1){
     p("[YOUR CHANGE IS]: %.2f \n", price1);
    }
    /**
    * \END
    */
break;
case 2:
    p("[CATEGORY]: ICE CREAM PRODUCTS \n");
    p("[50php]: BLUE HEAVEN \n");
    p("[QUANTITY]: ");
    scanf("%d", &quan2);
    p("[CASH]: ");
    scanf("%d", &cash2);
    /**
    * \START
    */
    ini1 = (quan2 * heaven);
    price1 = (cash2 - ini1);
    if(cash2<ini1){
     p("[PLEASE SATISFY THE BILLS TO COMPLETE THE ORDER] ");
    }
    else if(cash2>=ini1){
     p("[YOUR CHANGE IS]: %.2f \n", price1);
    }
    /**
    * \END
    */
break;
case 3:
    p("[CATEGORY]: ICE CREAM PRODUCTS \n");
    p("[50php]: BROWN BREAD\n");
    p("[QUANTITY]: ");
    scanf("%d", &quan2);
    p("[CASH]: ");
    scanf("%d", &cash2);
    /**
    * \START
    */
    ini1 = (quan2 * browbread);
    price1 = (cash2 - ini1);
    if(cash2<ini1){
     p("[PLEASE SATISFY THE BILLS TO COMPLETE THE ORDER] ");
    }
    else if(cash2>=ini1){
     p("[YOUR CHANGE IS]: %.2f \n", price1);
    }
    /**
    * \END
    */
break;
case 4:
    p("[CATEGORY]: ICE CREAM PRODUCTS \n");
    p("[50php]: BLUE MOON ICE CREAM \n");
    p("[QUANTITY]: ");
    scanf("%d", &quan2);
    p("[CASH]: ");
    scanf("%d", &cash2);
    /**
    * \START
    */
    ini1 = (quan2 * bluemoon);
    price1 = (cash2 - ini1);
    if(cash2<ini1){
     p("[PLEASE SATISFY THE BILLS TO COMPLETE THE ORDER] ");
    }
    else if(cash2>=ini1){
     p("[YOUR CHANGE IS]: %.2f \n", price1);
    }
    /**
    * \END
    */
break;
case 5:
    p("[CATEGORY]: CHOCOLATE PRODUCTS \n");
    p("[50php]: CHOCOLATE WHIP \n");
    p("[QUANTITY]: ");
    scanf("%d", &quan2);
    p("[CASH]: ");
    scanf("%d", &cash2);
    /**
    * \START
    */
    ini1 = (quan2 * chocolatewhip);
    price1 = (cash2 - ini1);
    if(cash2<ini1){
     p("[PLEASE SATISFY THE BILLS TO COMPLETE THE ORDER] ");
    }
    else if(cash2>=ini1){
     p("[YOUR CHANGE IS]: %.2f \n", price1);
    }
    /**
    * \END
    */
break;
case 6:
    p("[CATEGORY]: CHOCOLATE PRODUCTS \n");
    p("[50php]: MILK CHOCOLATE \n");
    p("[QUANTITY]: ");
    scanf("%d", &quan2);
    p("[CASH]: ");
    scanf("%d", &cash2);
    /**
    * \START
    */
    ini1 = (quan2 * milkchocolate);
    price1 = (cash2 - ini1);
    if(cash2<ini1){
     p("[PLEASE SATISFY THE BILLS TO COMPLETE THE ORDER] ");
    }
    else if(cash2>=ini1){
     p("[YOUR CHANGE IS]: %.2f \n", price1);
    }
    /**
    * \END
    */
break;
case 7:
    p("[CATEGORY]: CHOCOLATE PRODUCTS \n");
    p("[50php]: MAPLE FONDENT ACROS \n");
    p("[QUANTITY]: ");
    scanf("%d", &quan2);
    p("[CASH]: ");
    scanf("%d", &cash2);
    /**
    * \START
    */
    ini1 = (quan2 * maple);
    price1 = (cash2 - ini1);
    if(cash2<ini1){
     p("[PLEASE SATISFY THE BILLS TO COMPLETE THE ORDER] ");
    }
    else if(cash2>=ini1){
     p("[YOUR CHANGE IS]: %.2f \n", price1);
    }
    /**
    * \END
    */
break;
case 8:
    p("[CATEGORY]: CHOCOLATE PRODUCTS \n");
    p("[50php]: MARSHMALLOW FUDGE \n");
    p("[QUANTITY]: ");
    scanf("%d", &quan2);
    p("[CASH]: ");
    scanf("%d", &cash2);
    /**
    * \START
    */
    ini1 = (quan2 * marshmallowfudge);
    price1 = (cash2 - ini1);
    if(cash2<ini1){
     p("[PLEASE SATISFY THE BILLS TO COMPLETE THE ORDER] ");
    }
    else if(cash2>=ini1){
     p("[YOUR CHANGE IS]: %.2f \n", price1);
    }
    /**
    * \END
    */
break;
case 9:
    p("[CATEGORY]: CAKE PRODUCTS \n");
    p("[50php]: BLACK FOREST GATEAU \n");
    p("[QUANTITY]: ");
    scanf("%d", &quan2);
    p("[CASH]: ");
    scanf("%d", &cash2);
    /**
    * \START
    */
    ini1 = (quan2 * blackforest);
    price1 = (cash2 - ini1);
    if(cash2<ini1){
     p("[PLEASE SATISFY THE BILLS TO COMPLETE THE ORDER] ");
    }
    else if(cash2>=ini1){
     p("[YOUR CHANGE IS]: %.2f \n", price1);
    }
    /**
    * \END
    */
break;
case 10:
    p("[CATEGORY]: CAKE PRODUCTS \n");
    p("[50php]: PINEAPPLE CAKE \n");
    p("[QUANTITY]: ");
    scanf("%d", &quan2);
    p("[CASH]: ");
    scanf("%d", &cash2);
    /**
    * \START
    */
    ini1 = (quan2 * beerice);
    price1 = (cash2 - ini1);
    if(cash2<ini1){
     p("[PLEASE SATISFY THE BILLS TO COMPLETE THE ORDER] ");
    }
    else if(cash2>=ini1){
     p("[YOUR CHANGE IS]: %.2f \n", price1);
    }
    /**
    * \END
    */
break;
case 11:
    p("[CATEGORY]: CAKE PRODUCTS \n");
    p("[50php]: EGGLESS TRUFFLE CAKE \n");
    p("[QUANTITY]: ");
    scanf("%d", &quan2);
    p("[CASH]: ");
    scanf("%d", &cash2);
    /**
    * \START
    */
    ini1 = (quan2 * eggless);
    price1 = (cash2 - ini1);
    if(cash2<ini1){
     p("[PLEASE SATISFY THE BILLS TO COMPLETE THE ORDER] ");
    }
    else if(cash2>=ini1){
     p("[YOUR CHANGE IS]: %.2f \n", price1);
    }
    /**
    * \END
    */
break;
case 12:
    p("[CATEGORY]: CAKE PRODUCTS \n");
    p("[50php]: FUDGY CHOCOLATE \n");
    p("[QUANTITY]: ");
    scanf("%d", &quan2);
    p("[CASH]: ");
    scanf("%d", &cash2);
    /**
    * \START
    */
    ini1 = (quan2 * beerice);
    price1 = (cash2 - ini1);
    if(cash2<ini1){
     p("[PLEASE SATISFY THE BILLS TO COMPLETE THE ORDER] ");
    }
    else if(cash2>=ini1){
     p("[YOUR CHANGE IS]: %.2f \n", price1);
    }
    /**
    * \END
    */
break;
case 13:
    p("[CATEGORY]: MILKSHAKES PRODUCTS \n");
    p("[50php]: CHOCOLATE MILKSHAKE\n");
    p("[QUANTITY]: ");
    scanf("%d", &quan2);
    p("[CASH]: ");
    scanf("%d", &cash2);
    /**
    * \START
    */
    ini1 = (quan2 * chocomilkshake);
    price1 = (cash2 - ini1);
    if(cash2<ini1){
     p("[PLEASE SATISFY THE BILLS TO COMPLETE THE ORDER] ");
    }
    else if(cash2>=ini1){
     p("[YOUR CHANGE IS]: %.2f \n", price1);
    }
    /**
    * \END
    */
break;
case 14:
    p("[CATEGORY]: MILKSHAKE PRODUCTS \n");
    p("[50php]: BANANA MILKSHAKE \n");
    p("[QUANTITY]: ");
    scanf("%d", &quan2);
    p("[CASH]: ");
    scanf("%d", &cash2);
    /**
    * \START
    */
    ini1 = (quan2 * bananamilkshake);
    price1 = (cash2 - ini1);
    if(cash2<ini1){
     p("[PLEASE SATISFY THE BILLS TO COMPLETE THE ORDER] ");
    }
    else if(cash2>=ini1){
     p("[YOUR CHANGE IS]: %.2f \n", price1);
    }
    /**
    * \END
    */
break;
case 15:
    p("[CATEGORY]:   MILKSHAKE PRODUCTS \n");
    p("[50php]: COOKIES & CREAM \n");
    p("[QUANTITY]: ");
    scanf("%d", &quan2);
    p("[CASH]: ");
    scanf("%d", &cash2);
    /**
    * \START
    */
    ini1 = (quan2 * cookies);
    price1 = (cash2 - ini1);
    if(cash2<ini1){
     p("[PLEASE SATISFY THE BILLS TO COMPLETE THE ORDER] ");
    }
    else if(cash2>=ini1){
     p("[YOUR CHANGE IS]: %.2f \n", price1);
    }
    /**
    * \END
    */
break;
case 16:
    p("[CATEGORY]: MILKSHAKE PRODUCTS \n");
    p("[50php]: STRAWBERRY MILSHAKE \n");
    p("[QUANTITY]: ");
    scanf("%d", &quan2);
    p("[CASH]: ");
    scanf("%d", &cash2);
    /**
    * \START
    */
    ini1 = (quan2 * strawberry);
    price1 = (cash2 - ini1);
    if(cash2<ini1){
     p("[PLEASE SATISFY THE BILLS TO COMPLETE THE ORDER] ");
    }
    else if(cash2>=ini1){
     p("[YOUR CHANGE IS]: %.2f \n", price1);
    }
    /**
    * \END
    */
break;
}
   p("\n");
   p("\n");
   p("         >>    CONFIRMATION     << \n");
   p("  >> ORDER AGAIN[1] GO BACK[2] DONE[3]<<: ");
   scanf("%s", &e);
   switch(e)
   {
   case '1':
    system("cls");
    deserts();
    break;
   case '2':
    system("cls");
    beverages();
    break;
   case '3':
    system("cls");
    receipt();
    break;
}
}

void receipt()
{
 system("COLOR 70");
 s(3);
 p(" [SYS]>> GENERATING RECEIPT FOR YOUR ORDER \n");
 s(2);
 p(" [NOTICE]>> PLEASE TAKE THE RECEIPT THEN PROCEED TO YOUR TABLE \n");
 s(5);
 p("\n");
        p("[SYS]        _____PROCESSING_____       \n");
        p("         ____RECEIPT IS GENERATED____       \n");
        p("       ____  _____________________  ____    \n");
        p("      |      PLEASE ENJOY {H A N D}     |   \n");
        p("      |______THANK YOU  FOR COMING______|   \n");
        p("       FOOD NO.: %d                           \n", f);
        p("       FOOD QUANTITY: %d                      \n", quan1);
        p("       F-CASH-P: php%d                        \n", cash1);
        p("       BEVERAGE NO.: %d                       \n", drinks);
        p("       BEVERAGE QUANTITY: %d                  \n", quan);
        p("       B-CASH-P: php%d                        \n", cash);
        p("       DESERT NO.: %d                         \n", order);
        p("       DESERT QUANTITY: %d                    \n", quan2);
        p("       D-CASH-P: php%d                        \n", cash2);
        p("      |_________________________________|   \n");
        p("             DATE : %s                      \n", __DATE__);
        p("             TIME : %s                      \n", __TIME__);
        p("      |_________________________________|   \n");
        p("      |  THE RECEIPT HAS BEEN RELEASED  |   \n");
        p("      |CHECK THE NEXT PROCESS TO PROCEED|   \n");
        p("      |  RECEIPT IS REQUIRED TO CASHIER |   \n");
        p("      |_________________________________|   \n");
        p("       _________________________________     \n");
        p("      |      ::::::::   :::::::::       |      \n");
        p("      |     :+:    :+:  :+:    :+:      |      \n");
        p("      |     +:+    +:+  +:+    +:+      |      \n");
        p("      |     #+     +:+  +#++:++#:       |      \n");
        p("      |     +#+    #+#  ++#+   +#+      |      \n");
        p("      |     #+#    +#+  #+#     #+#     |      \n");
        p("      |       ######### ###      ###    |      \n");
        p("      | G H 0 S T P O L T E R G E I S T |      \n");
        p("      |    T H A N K   Y O U   F O R    |      \n");
        p("      |      T R U S T I N G   U S      |      \n");
        p("      |_________________________________|      \n");
        g(6,37);p("[SYS]");
        g(11,37);system("pause");
}

int main(void)
{
 system("COLOR 70");
 char w;
 char q;
 //s(3);
 g(35, 1);p(">> FOODS|F| - BEVERAGES|B| - DESSERTS|D| <<: ");
 scanf("%s", &q);
 switch (q){
  case 'F':
      system("cls");
      foods();
      break;
  case 'B':
      system("cls");
      beverages();
      break;
  case 'D':
      system("cls");
      deserts();
      break;
  default:
   g(35, 2);p(">> PLEASE SPECIFY YOUR ORDER BY ALPHABET << ");
   g(35, 3);p("  >>    CONTINUE[1]   OR    EXIT[2]    <<: ");
   scanf("%s", &w);
   switch(w)
   {
   case '1':
    system("cls");
    return main();
    break;
   case '2':
    system("cls");
    return EXIT_SUCCESS;
    break;
   }
 }
}
