// #include <stdio.h>

// int main(void)

// {
// float weight;
// float value;

// printf("Do you want to know your weight in platinum equivalent?\n");
// printf("Do you want to know your weight in platinum equivalent?. \n");
// printf("Do you want to know your weight in platinum equivalent?: ");

//  scanf("%f", &weight);

// value = 1700.0 * weight * 14.5833;
// printf("Do you want to know your weight in platinum equivalent? $%.2f.\n", value);

// getchar();
// return 0;

// }
// 100
// #include <stdio.h>

// int main(void)
// {
//     float weight;
//     float value;

//     // ������� ������ ������������
//     printf("Do you want to know your weight in platinum equivalent? (Enter your weight in kg): ");

//     // ��������� ���� ������������
//     if (scanf("%f", &weight) != 1) {
//         printf("Invalid input. Please enter a numeric value.\n");
//         return 1; // ��������� ��������� � ����� ������
//     }

//     // ��������� ���������� � �������
//     value = 1700.0 * weight * 14.5833;

//     // ������� ���������
//     printf("Your weight in platinum equivalent is: $%.2f.\n", value);

//     // ������� ������� ������� ����� �����������
//     printf("Press Enter to exit...");

//     getchar(); // ��������� ������ ����� ������, ���������� � ������
//     getchar(); // ������� ������� �������

//     return 0;
// }
// 100

// #include <stdio.h>

// int main() {
//     char c ;
//     printf("vdeite simvol:  ");
//     printf("sss");
//     return 0;
// }

// #include <stdio.h>

// void jolly();
// int deny();

// int main()
// {
//     printf("123%s\n", deny());
//      deny();
//     jolly();

//     return 0;
// }

// int deny()

// {
//    int s = 1;
//      printf("e");
//      return 0;
// }

// void jolly()
// {
//     printf("sosat");
// }
// gcc test.c -o test.exe
//.\test

// bases.c - ������� ����� 100 � ����������, ������������ � ����������������� �����
//  #include <stdio.h>

// int main(void)
// {
//     int x = 100;
//     printf("penis = %d; vosem = %o; shesnadsat = %x\n", x, x, x);
//         printf("penis = %d; vosem = %#o; shesnadsat = %#x\n", x, x, x);
//         // getchar();
//         return 0;
// }

// toobig.c - ���������� ����������� ���������� �������� int � �������
// #include <stdio.h>
// int main (void)

// {
//     int i = 2147483647;
//     unsigned int j = 4294967295;

//     printf("%d %d %d\n", i, i+1, i+2);
//     printf("%u %u %u\n", j, j+1, j+2);

//     return 0;
// }

// print2.c - �������������� �������� ������� printf()
//  #include <stdio.h>

// int main(void)

// {
//     unsigned int un = 3000000000; //������� � 32-������ ����� int
//     short end = 200;              // � 16-������ ����� short
//     long big = 65537;
//     long long verybig = 12345678908642;

//     printf("un =%u, no ne %d\n", un, un);
//     printf("end = %hd i %d\n", end, end);
//     printf("bi = %ld, no ne %hd\n", big, big);
//     printf("verybig = %lld, no ne %hd\n", verybig, verybig);

//     return 0;
// }

// #include <stdio.h>  //���������� ������� �������� �������

// int main(void)
// {
//      char ch;
//     printf("vvedite kakoi nit simvol.\n");
//     scanf("%c", &ch);
//     printf("kod simvola %c raven %d.\n", ch, ch);

//     return 0;
// }

/*altnames.c -- ����������� ����� ������������� �����.*/

// #include <stdio.h>
// #include <inttypes.h> //������������ ����������� ����
// int main(void)
// {
//     int32_t me32; //me32 -- ��� 32-������ ���������� �� ������
//     me32 = 45933945;
//     printf("Snachala predpolojim, chto int32_t yavlyaetsya int: ");
//     printf("me32 = %d\n", me32);
//     printf("DAlee ne budem delat nikakih predlojeniy.\n");
//     printf("Vmesto etoo vospolzuemsya \"makrasom\" iz faila inttypes.h ");
//     printf("me32 = %"PRId32"\n", me32);
//     return 0;
// }
/*showf_pt.c -- ���������� �������� ��� float ����� ���������*/

// #include <stdio.h>
// int main(void)

// {
//     float aboat = 32000.0;
//     double abet = 2.14e9;
//     long double dip = 5.32e-5;

//     printf("%f mojet bit zapisani kak %e\n", aboat, aboat);
//     //��� ������ ��������� ������ ��������� ���������,
//     //�������������� �99 ��� ����� ������� ��������

//     printf("I ego %a v shestandsaterichniy, predstavlyaushey stepeni 2, forme zapisi\n", aboat);
//     printf("%f mozjet zapisano kak %e\n", abet, abet);
//     printf("%Lf mojet bit zapisano kak %Le\n", dip, dip);

//     return 0;
// }

// #include <stdio.h>
// #include <float.h>

// int main(void) {
//     printf("������ long double: %zu ����\n", sizeof(long double));
//     printf("������������ �������� long double: %Lf\n", LDBL_MAX);
//     return 0;
// }

/*floatee.c -- ������������� ������ ����������*/
// #include <stdint.h>
// int main(void)
// {
//     float a,b;
//     b = 2.0e20 + 1.0;
//     a = b - 2.0e20;
//     printf("%f \n", a);
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     /*V standarte c99 dlya razmerov predusmotren specificator %zd*/
//     printf("Tip int imeet razmer %zd bait(ov).\n", sizeof(int));
//     printf("Tip char imeet razmer %zd bait(ov).\n", sizeof(char));
//     printf("Tip long imeet razmer %zd bait(ov).\n", sizeof(long));
//     printf("Tip long lon imeet razmer %zd bait(ov).\n", sizeof(long long));
//     printf("Tip double imeet razmer %zd bait(ov).\n", sizeof(double));
//     printf("Tip lon double imeet razmer %zd bait(ov).\n", sizeof(long double));

//     return 0;
// }

/* badcount.c -- ������������ ���������� ���������� */
// #include <stdio.h>
// int main (void)
// {
//     int n = 4;
//     int m = 5;
//     float f = 7.0f;
//     float g = 8.0f;

//     printf("%d\n", n, m);   //������� ����� ����������
//     printf("%d %d %d\n", n); //���������� ������������
//     printf("%d %d\n", f, g); //����������� ���� ��������

//     return 0;
// }

/* escape.c -- ������������ ���������� �������������������*/
// #include <stdio.h>
// int main(void)
// {
//     float salary;

//     printf("\a Vvedite jelaemuyu summu mesachnoi zarplati:"); //1
//     printf("$_______\b\b\b\b\b\b\b"); //2
//     scanf("%f", &salary);
//     printf("\n\t$%2f v mesyas sootvestvuet $%.2f v god.", salary, salary * 12.0); //3
//     printf("\rOro!\n"); //4
//     return 0;
// }

// talkback.c -- ��������� ������������� ���������

// #include <stdio.h>
// #include <string.h> //��� ��������� ������� strlen()
// #define DENSITY 62.4 // �������� ����� �������� � ������ �� ���������� ���

// int main()
// {
// float weight, volume;
// int size, letters;
// char name[40]; //name ������������ ���� ������ �� 40 ��������

// printf("Zdravsstvuite!! Kak vas zovut?\n");
// scanf("%s", name);
// printf("%s slolko vi vesite v funtah?\n", name);
// scanf("%f", &weight);
// size - sizeof name;
// letters = strlen(name);
// volume = weight / DENSITY;
// printf("Horosho, %s, vash obiom sostavlayaet %2.2f kubicheskih futov.\n", name, volume);
// printf("K tomy je vashe imya sostoit iz %d bukv,\n", letters);
// printf("i mi raspoloaem 40 baitami dlya ego sohranenia.\n", size);

// return 0;
// }
//  #include <stdio.h>
//  int main(void)
// {
//     int salary;
//      scanf("%d", &salary);
//      printf("suma:%d", salary);
//  scanf("%d", &salary);
//   return 0;
// }

//  �����������, ��� ch �������� ���������� ���� char. ��^^����, ��� ���������
// �� ������ �������� �������, ��������� ����������� ������������������, ����
//  ������ ��������, ������������ ���������� ��������� � �����������������
// ���������� ���������. (������������, ��� ����������� �������� ���� ASCII.)
// #include <stdio.h>

// int main()
// {
// char ch = '\n';
// printf("%c, %d, %o, %x ", ch, ch, ch, ch);
// return 0;
// }

// #include <stdio.h>

// int main (void)
// {

//        double big = 1e16;       // ����� ������� �����
//     double small = 1.0;      // ��������� �����

//     printf("big = %.0f\n", big);
//     printf("big + small = %.0f (����� ����� ��������)\n\n", big + small);

//     return 0;
// }
// #include <stdio.h>

// int main()

// {
//     int simvol;
//     scanf("%d", &simvol);
//     printf("%c", simvol);
//     return 0;

// }
// #include <stdio.h>

// int main()
// {
//     double chil = 64.25;
//     printf("%f, %e, %a", chil, chil, chil);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     double years;
//     double secondyear = 3.156e7;

//     scanf("%lf", &years);
//     printf("tvoi vozrast v second: %e", years * secondyear);
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     double quart;                           // ����� ���� � �������
//     double grams_per_quart = 950.0;         // ����� ����� ������ ���� (� �������)
//     double mass_molecule = 3.0e-23;         // ����� ����� �������� ���� (� �������)

//     printf("dsdsds: ");
//     scanf("%lf", &quart);

//     // double total_mass = quart * grams_per_quart;          // ����� ����� ����
//     // double molecules = total_mass / mass_molecule;        // ���������� �������

//     printf(" %.2f ddwdd %.3e dsdsd.\n", quart, quart * grams_per_quart / mass_molecule);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     double dum;
//     double sm;

//     scanf("%lf", &dum);
//     double dumvsm = dum * 2.54;
//     printf("tvoi rost v sm:%lf\n", dumvsm);
//     scanf("%lf", &sm);
//     double smvdum = sm / 2.54;
//     printf("tvoi rost v dum: %lf", smvdum);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     double dum;
//     scanf("%lf", &dum);
//     double dumvsm = dum * 2.54;
//     printf("tvoi rost v sm: %lf\n", dumvsm);

//     double sm;
//     scanf("%lf", &sm);
//     printf("tvoi rost v dum: %lf", sm / 2.54);

//     return 0;

// }

// #include <stdio.h>

// int main()
// {
//     double chaska;
//     scanf("%lf", &chaska);

//     double pinta =chaska / 2;
//     double unc = chaska * 8;
//     double stolovaya = unc * 2; // ��� chaska * 16
//     double chainaya = stolovaya * 3;

//     printf("ctolko chasek vi veli: %.2lf\n v pintah eto: %.2lf\n v unciyah eto: %.2lf\n v stolovih lozkah eto: %.2lf\n v chainih lozkah eto: %.2lf", chaska, pinta, unc, stolovaya, chainaya);

//     return 0;

// }

// praisel.c -- ���������� ��������� ������������� �����
//  #include <stdio.h>
//  #define PRAISE "Vi - vidaushisya lichnost."
//  int main(void)
//  {
//      char name[40];
//      printf("Kak vas zovut?");
//      scanf("%s", name);
//      printf("Zdravstvuite, %s. %s\n", name , PRAISE);
//      return 0;
//  }

// talkback.c -- ��������� ������������� ���������

// #include <stdio.h>
// #include <string.h> //��� ��������� ������� strlen()
// #define DENSITY 62.4 // �������� ����� �������� � ������ �� ���������� ���

// int main()
// {
// float weight, volume;
// int size, letters;
// char name[40]; //name ������������ ���� ������ �� 40 ��������

// printf("Zdravsstvuite!! Kak vas zovut?\n");
// scanf("%s", name);
// printf("%s slolko vi vesite v funtah?\n", name);
// scanf("%f", &weight);
// size = sizeof name;
// letters = strlen(name);
// volume = weight / DENSITY;
// printf("Horosho, %s, vash obiom sostavlayaet %2.2f kubicheskih futov.\n", name, volume);
// printf("K tomy je vashe imya sostoit iz %d bukv,\n", letters);
// printf("i mi raspoloaem %zu baitami dlya ego sohranenia.\n", size);

// return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #define PRAISE "vi krtutoi"

// int main (void)
// {
// char name[40];
// printf("napishi imya:");
// scanf("%s", name);
// printf("Zdorova: %s -  %s\n", name, PRAISE);
// printf("Vashe ima sostoit iz %zd simvolov i zanimaet %zd pamyati", strlen(name), sizeof(name));
// printf("hvalebnaya fraza sostoit iz %zd simvolov\n", strlen(PRAISE));
// printf("i zanimat %zd bayta", sizeof(PRAISE));

// return 0;
// }

// pizza -- �����
// #include <stdio.h>
// #include <limits.h>
// #define PI 3.14159

// int main(void)
// {
//     printf("%u max int\n", UINT_MAX);
//     float area, radius, circum;
//     printf("Kakov radis vasheu pizzi?\n");
//     scanf("%f", &radius);
//     area = PI * radius * radius;
//     circum = 2.0 * PI * radius;
//     printf("Parametri vashei pizzi\n");
//     printf("dlina okr = %1.2f, S = %1.2f", circum, area);

//     return 0;
// }

// defines.c -- ���������� ����������� ��������� �� ����� limit.h � �� float.

// #include <stdio.h>
// #include <limits.h>
// #include <float.h>

// int main(void)
// {
//     printf("Nekotorie predeli chisel dlya dannoy sistemi");
//     printf("\nNaibolshee znachenie tipa int: %d\n", INT_MAX);
//     printf("Naimenshee znachenia tipa long long: %lld\n",LLONG_MIN);
//     printf("V dannoi sistemy odim bait - %d bitov\n", CHAR_BIT);
//     printf("Naibolshee znachenya tipa double: %e\n", DBL_MAX);
//     printf("Naimenshee normalizirovannoe znachenia tipa float: %e\n", FLT_MIN);
//     printf("Tochnost znacheniy tipa float = %d znakov\n", FLT_DIG);
//     printf("RAznisa mejdu 1.00 i minimalnim znacheniem float, kotoroe bolse 1.00 = %e", FLT_EPSILON);

//     return 0;
// }

// #include <stdio.h>
// #define PI 3.141593

// int main(void)
// {
//     int number = 7;
//     float pies = 12.75;
//     int cost = 7800;

//     printf("%d uchastnikov sorevnovaniy sieli %f pirojkov s vishnyami. \n", number, pies);
//     printf("Znachenie pi ravno %f.\n", PI);
//     printf("Do svidaniya! Vashe iskustvo sliskom dorogo obhoditsya, \n");
//     printf("%c%d", '$', 2 * cost);

//     return 0;
// }

// #include <stdio.h>
// #define PAEGES 969

// int main (void)
// {
//     printf("*%d*\n", PAEGES);
//     printf("*%2d*\n",PAEGES);
//     printf("*%10d*\n",PAEGES);
//     printf("*%-10d*\n",PAEGES);
//     printf("*%-10.5d\n*",PAEGES);

//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
// const double RENT = 3852.99;
// printf("%f\n",RENT);
// printf("%e\n",RENT);
// printf("%4.2f\n",RENT);
//     printf("%3.1f\n",RENT);
//     printf("%10.3f\n",RENT);
//     printf("%10.3E\n",RENT);
//     printf("%+4.2f\n",RENT);
//     printf("%010.2f\n",RENT);
//     return 0;
// }

// #include <stdio.h>

// int main (void)
// {
// printf("%x, %X, %#x\n", 1111, 1111, 1111);
// printf("**%d**% d**% d**%    d\n",42, 42, -42, 42);
// printf("**%5d**%5.3d**%05d**%05.3d**\n",6, 6, 6, 6);
// return 0;
// }

// #include <stdio.h>
// #define PAGES 336
// #define WORDS 65618
// int main (void)
// {
// short num = PAGES;
// short mnum = -PAGES;
// printf("num kak type short and num unsined short; %hd %hu\n", num, num);
// printf("-num kak type short and unsigned short: %hd %hu\n", mnum, mnum);
// printf("num kak type imt i kak char: %d %c\n", num, num);
// printf("WORDS kak type int and short, char %d %hd %c", WORDS, WORDS, WORDS);

// return 0;

// }

// #include <stdio.h>

// int main (void)
// {
//     float n1 = 3.0;
//     double n2 = 3.0;
//     long n3 = 2000000000;
//     long n4 = 1234567890;

//     printf("%.1e %.1e %.1e %.1e\n",n1, n2, n3, n4);
//     printf("%lld %ld\n", n3, n4);
//     printf("%lld %lld %ld %ld\n", n1, n2, n3, n4);
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int bhop2 = 212;
//     int rv;
//     rv = printf("Voda zakipaet pri 222 radusah po faringetu\n", bhop2);
//     printf("Function printf() vivodit %d simvolov", rv);
//     return 0;
// }

// #include <stdio.h>

// int main (void)
// {
//     printf("1 sposob");
//     printf(" on takoi\n");

//     printf("Vtoroi sposob on\
// takoi\n");

//         printf("tretiy sposob on"
//         "takoi)");

//         return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int age;
//     float assets;
//     char pet[30];
//     char red[10] = "qwertyqwe";

//    printf("Vvedite vash vozrast, suma v banke i lubimoe zivotnoe:");
//     scanf("%d %f %s", &age, &assets, pet);
//     printf("%d $%.3f %s    %s", age, assets, pet, red);

//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
// int weight, prin;
// int hr = 126;
// double hh = 242.5;
// printf("vvedite shirinu polya\n");
// scanf("%d", &weight);
// printf("telo chela %*d\n", weight, hr);
// printf("teper vvedite shirinu i propusk zapytoi\n");
// scanf("%d %d", &weight, &prin);
// printf("%*.*f", weight, prin, hh);

// return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int tt;
//     printf("vvedite chislo");
//     scanf("%*d %*d %d", &tt);
// printf("Pslednee chislo bilo:%d", tt);

// return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #define DES 62.4

// int main (void)

// {
//     float weight, volume;
//     int size, letters;
//     char name[40];

//     printf("Vedite svoe ima lol:\n");
//     scanf("\n%s", name);
//     printf("vashe ima %s\
//     I skazite vas ves v funtah:\n", name);
//     scanf("%f", &weight);
//     scanf("%s", &name);
//      scanf("%f", &weight);
//     volume = weight / DES;
//     printf("horosho, %s, vash obiom %2.2f kub.\n",
//     name, volume);
//     size = sizeof name;
//     letters = strlen (name);
//     printf("vasje ima sostoit iz %d bukv\n", letters);
//     printf(" i mi raspologaem %zu baitami dkya rgo hranenia",size);

//          return 0;
// }

// printf("������ ��������� ����� \"%s\" ����� $%.2f.\n\
//  ��� %.0f%% �� ���� � �����-�����.", BOOK, cost, percent);

// #include <stdio.h>
// #define BOSS "Vvedite ima i familiy"

// int main(void){
//     char name[40];
//     char surname[30];
//     printf("%s\n", BOSS);
//     scanf("%s %s", name, surname);
//     printf("vashe familiya i imya:%s %s", surname, name);
// return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char name[40];
//     printf("VVedite imya");
//     scanf("%s", name);
//      printf("\"%s\"\n", name);
//     printf("\"%20s\"", name);
//     printf("\"%-20s\"", name);
//     int width = strlen(name) + 3;
//     printf("\"%*s\"\n", width, name);

//     return 0;
// }

// #include <stdio.h>
// int main(void){
//     double num;
//     printf("chislo\n");
//     scanf("%lf", &num);
//     printf("%.1f , %.1e", num, num);
//     printf("%+.3f, %.3e", num, num);
//     return 0;
// }

// #include <stdio.h>
// #define HHH 0.0833
// int main(void){

// float bum;
// char name[50];
//     printf("imya i rost d dumah\n");
//     scanf("%s %f",name, &bum);
// float fut = bum * HHH;
//     printf("%s, vash rost sostavit %.3f futah", name, fut);
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     float sbit, obait, sbait, time;
//     printf("Vvedite skrost v meabitah i onem mehabaitah\n");
//     scanf("%f %f", &sbit, &obait);
//     sbait = sbit / 8;
//     time = obait / sbait;
//     printf("pri skorosti zagruzki v %.2f meabitah v secundu fail razmerom %.2f mebaitah\
//         zaruzaetsya za %.2f second", sbit, obait, time);

//         return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char name[40], doublename[40];
//     scanf("%s %s", name, doublename);

//     printf("%s %s\n", name, doublename);
//     printf("%*d %*d\n", strlen(name), strlen(name), strlen(doublename), strlen(doublename));

//     printf("%s %s\n", name, doublename);
//     printf("%-*d %-*d\n", strlen(name), strlen(name), strlen(doublename), strlen(doublename));

//     return 0;

// }

// #include <stdio.h>
// #include <float.h>
// int main(void)
// {
//     double num1 = 1.0/0.3;
//     float num2 = 1.0/3.0;
//     double num3 = 1.0/0.0003;
//     printf("double:%.4f, %.12f, %.16f\nfloat: %.4f, %.12f ,%.16f", num1, num1, num1, num2, num2, num2);
//     printf("\nFLT_DIG %d and DBL_DIG %d",FLT_DIG, DBL_DIG);
//     printf("\n%f", num3);
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     const double milya;
//     const double galon;
//     printf("Vedite proidenie mili i potracheniy alon benzina\n");
//     scanf("%lf %lf", &milya, &galon);
//     const double m_g = milya / galon;
//     printf("%.1f mil na galon\n", m_g);

//    const double km = milya * 1.609;
//    const double litr = galon * 3.785;
//    const double k_l = km / litr;
//    const double l_100km = 100 / k_l;

//    printf("%.1f km na litr\n", k_l);
//     printf("%.1f litrov na 100km", l_100km);

//    return 0;
// }

// #include <stdio.h>
// #define ADJUST 7.31

// int main(void)
// {
//     const double SCALE = 0.333;
//     double shoe, foot;

//     printf("Razmer odezdi (muzkoi)   dlina stupni\n");

//     shoe = 3.0;

//     while(shoe < 18.5)
//     {
//         foot = SCALE * shoe + ADJUST;
//         printf("%10.2f %20.2f dumov\n",shoe, foot);
//         shoe = shoe + 1.0;
//     }

//     printf("Esli obuv podhodit nosite yeyo");

//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int ros, loc, lal;
//     lal = loc = ros = 33;
//     printf("%d %d %d", ros, loc + 1, lal);

//     return 0;
// }

// #include <stdio.h>
//  #define ADJUST 7.31
// int main(void){

//     const double SCALE = 0.333;
//     double shoe, foot;
//     shoe = 2.0;
//     printf("Razmer odezdi (muzkoi)   dlina stupni\n");

//     while (shoe++ <18.5)
//     {
//  foot = SCALE * shoe + ADJUST;
//  printf("%10.2f %20.2f dumov\n",shoe, foot);
//     }
//     printf("Razmer odezdi (muzkoi)  %f dlina stupni\n", shoe);

// }

/* post_pre.c � ����������� � ���������� ����� */
//  #include <stdio.h>
// int main(void)
//  {
//   int a = 1, b = 1;
// int a_post, pre_b;
// a_post = a+1;
//  a_post = 3*a++;
//  a_post = 3*++a; // �������� �++ �� ����� ����� ������������
// //a_post = a+1; // �������� ++� �� ����� ����� ������������
// // a_post = a++;
// // a_post = a++;
// // pre_b = ++b;
// // pre_b = ++b;
// // pre_b = ++b;
// // pre_b = ++b;
// printf("a a_post b pre_b \n");
// // printf("%ld %5d %5d %5d\n", a, a_post, b, pre_b);
//  printf("%ld %5d \n", a, a_post);
//  return 0;
//  }

// #include <stdio.h>
// void pound(int n);
// int main(void)
// {
// int times = 5;
// char ch = '!';
// float f = 6.0f;
// // pound(times);
// // pound(ch);
// pound(f);

// return 0;
// }

// void pound(int n)
// {
// while (n-- > 0)
// {
//   printf("#");
//   //printf("\n");
// }
// }

// #include <stdio.h>

// const int S_PER_M = 60;                        // ���������� ������ � ������
// const int S_PER_H = 3600;                      // ���������� ������ � ����
// const double M_PER_K = 0.62137;                // ���������� ���� � ���������

// int main(void)
// {
//  double distk, distm; // ��������� ������� � ���������� � �����
//  double rate; // ������� �������� � ����� � ���
//  int min, sec; // ����� ������� � ������� � ��������
//  int time; // ����� ������� ������ � ��������
//  double mtime;// ����� ������� ����� ���� � ��������
//  int mnin, msec; // ����� ������� ����� ���� � ������� � ��������

// printf("Eto proramma preobrazuet vremya probega  distanscii v metricheskoi sisteme\n");
// printf("Vo vremya probega odnoi mili i vichislyaet vsashu srednuu\n");
// printf("scorost v milyah v chas.\n");
// printf("Vvedite distanciuu probega v killometrah.\n");

// scanf("%lf", &distk); // %lf ��� ���� double
// printf("Vvedite vremya v secundah i minutah\n");
//  printf("Nachnite s voda v minutah.\n" ) ;
//  scanf("%d", &min);
//  printf("Teper vvedite v secundah.\n");
// scanf("%d" , &sec);
//  // ��������� ����� � �������
//  time = min * S_PER_M + sec;
// // ��������� ��������� � ����
// distm = distk * M_PER_K;
// // ��������� ���� � ������� �� ���������� ������ � ���� ���� ���������� ���� � ���
// rate = distm / time * S_PER_H;
//  // ������� ������� �� ���������� ���� ����� ������� ����� ����
//  mtime = (double) time / distm;
//  mnin = (int) mtime / S_PER_M; // ���������� ������� ���������� �����
// msec = (int) mtime % S_PER_M; // ���������� ������� � ��������
// printf("Vi probezali %1.2f km (%1.2f mili) za %d min, %d sek\n", distk, distm, min, sec) ;
//  printf("Takaya scorost sootvestviet probegu odnoi mili za %d min, ",
// mnin);
//  printf("%d sek\n Vasha sredyya skorost sostavila% 1.2f mil v secundu.\n", msec, rate);
//  return 0;

// }

// #include <stdio.h>

// #define HMI 60

// int main(void)
// {
//    double second, minute, left;
//     printf("Vvedite secundi i systema ihh perevedt v minuti i secundi\n");
//     scanf("%lf", &second);
//     printf("Vihod <0");
//     while (second > 0)

//     {
//         minute = (int)second / HMI;
//         left = (int)second % HMI;
//         printf("%f vot secundi sve, vot v minutah %.0fmin %dsec s ostatkom v secundah\n",second, minute, (int)left);
//         printf("vvedite vihod <0\n");
//         scanf("%lf", &second);
//         char bo[30];
//         scanf("%s", bo);

//     }
//     printf("spasibo poshki nahui");

//     return 0;
// }

// #include <stdio.h>
// int main(void)
//  {
// int a = 1, b = 1;
// int a_post, pre_b;
// a_post = a++;
// a_post = a; // �������� �++ �� ����� ����� ������������
// pre_b = ++b; // �������� ++� �� ����� ����� ������������
// while (a_post++<4)
// {
//     printf("fff\n");
// }

// printf("a a_post b pre_b \n");
// printf("%ld %5d %5d %5d\n", a, a_post, b, pre_b+1);
// printf("%ld %5d %5d %5d\n", a, a_post, b, pre_b);
//  return 0;
//  }

// #include <stdio.h>

// int main(void)
// {
//     int mace;
//     mace = 1.4 + 1.5+0.1;
//     printf("%d\n", mace);
//     mace = (int)1.5 + (int)1.6;
//     printf("%d", mace);

//     return 0;
// }

// #include <stdio.h>
// void table(int n);

// int main(void){

//     int loh = 5;
//     char vro ='!';
//     float kk = 6.0f;

//     table(5);
//     table(vro);
//     table(kk);

//     return 0;

// }

// void table(int n){
//     while (n-- >0)
//     {
//         printf("#");
//         printf("1");
//     }
//     printf("\n");
//     }

// #include <stdio.h>
//  long long pound(int n);
//  int main(void)

//  {
//  int times = 5;
//  char ch = '!' ;
// float f = 6.0f;
//  pound(times);
//  pound (ch) ;
//  pound(f);
// return 0;
//  }
//  long long pound(int n)
//  {
//  while (n-- > 0)
//  printf("#") ;
//  printf("1");
// printf("\n");
//  }

//  #include <stdio.h>
//  #define FORT "%s! o is cool!\n"
// int main (void)
//  {
//  int num = 10;
//  printf (FORT, FORT) ;
// printf("%d\n", ++num);
// printf("%d\n", num++) ;
// printf("%d\n", num--);
// printf("%d\n", num);
// return 0;
//  }

// #include <stdio.h>
// #define TEN 10

// int main(void)
// {
//     int n = 64;
//     while (++n < 72)

//         printf("%5c", n);
//         printf("\n");

//          return 0;

// }

// #include <stdio.h>
// #define CHAS 60

// int main(void)
// {
//     int min, left;
//     int chour;
//     printf("Vvedite potrachenie minuti\n");

//     scanf("%d", &min);
//     while (min>0)
//     {

//     chour = min/CHAS;
//     left = min%CHAS;
//     printf("Stolko chasov %d i %d minut vi potratili]\n", chour, left);
//      printf("esli hotite zaconchit vvedite znachenie ravnoe 0 ili menshe\n");
//      scanf("%d", &min);

// }

// printf("Spasibo poka");

//     return 0;

// }

// #include <stdio.h>

// int main(void){

//     int num, num2;
//     printf("Vvedite luboue schilo i nasha sistema dovedet eo do +10 znacheniya\n");
//     scanf("%d", &num);
//     printf("%10d\n", num);
//     num2 = num;
//     while (num++ <10+num2)
//     {
//         printf("%10d\n", num);
//     }
//     return 0;
// }

// #include <stdio.h>

// #define nedelya 7

// int main(void)
// {
//     int days, week, left;
//     printf("Vvedite kolichestvo dney i mi pokazem skolko eto v nedelyah i dhyah\n");
//     scanf("%d", &days);
//     while (days >0)
//     {
//         week = days / nedelya;
//         left = days % nedelya;
//         printf("nedel %d i dney %d\n", week, left);
//         printf("Escli hotete viyty to vvedite znachenue <=0\n");
//         scanf("%d", &days);
//     }
//     printf("poka poka");
//     return 0;

// }

// #include <stdio.h>
// #define FUT 30.48   // 1 ��� = 30.48 ��
// #define DUM 2.54    // 1 ���� = 2.54 ��

// int main(void)
// {
//     float cm, dum;
//     int fut;

//     printf("vvedite cm libo chtob vity <=0): \n");
//     scanf("%f", &cm);

//     while (cm > 0)
//     {
//         fut = (int)(cm / FUT);                // ����� ���������� �����
//         dum = (cm - fut * FUT) / DUM;         // ������� ��������� � �����

//         printf("%.1f cm = %d fut, %.1f dum\n", cm, fut, dum);

//         printf("vedite cm libo chtob vity <=0): ");
//         scanf("%f", &cm);
//     }

//     printf("gg!\n");
//     return 0;
// }

// #include <stdio.h>
// #define FUT 30.48   // 1 ��� = 30.48 ��
// #define DUM 2.54    // 1 ���� = 2.54 ��

// int main(void)
// {
// double cm, dum;
// double fut;
// printf("vvedite cm\n");
// scanf("%lf", &cm);
// while (cm > 0)
// {

//     fut = cm / FUT;

//      dum = (cm - (FUT * (int)fut)) / DUM;

//     printf("%.1f cm = %d futov, %.1f dumov\n", cm, (int)fut, dum);
//     printf("vvity <=0\n");
//     scanf("%lf", &cm);
// }
// printf("poka");
// return 0;

// }

// #include <stdio.h>

// int main(void){

//     int count, sum, pol, day;
// scanf("%d", &pol);
//     count = 0;
//     day = 0;
//     sum =0;
//     while (count++ <pol)
//     {
//         sum = sum * sum + count;
//         printf("%d den %d$\n", ++day, sum);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int count, limit, sum, days, count2;

//     printf("VVedite do kakoo chisla chitat summu kvadratov:\n ");
//     scanf("%d", &limit);

//     sum = count = 0;   // �������� � ���� // ��������� ����� ���� ����

//     while (count++ < limit)    { // ���� �� 1 �� limit
//         sum = sum + count * count;  // ���������� ������� �����
//         count2 = count * count;
//         printf("number:%-10d kvadrat:%-10d cummakvadrat%-10d\n",count,count2, sum );
//     }
//     printf("Cumma kvadratnih %d chisel = %d\n", limit, sum);

//     return 0;
// }

// #include <stdio.h>
// double cube(double n);

// int main(void){

// double bro;
// printf("VVedite chislo kotoroe navo vozvesti v kub:\n");

// scanf("%lf", &bro);

// cube(bro);
// return 0;

// }

// double cube(double n){
// double n2;
//     n2 = n*n*n;
//     printf("%.2f eto chilo v kube: %.2f", n, n2);
//     return 0;

// }

// #include <stdio.h>

// int main(void)
// {
//     int first, duo;
//     printf("VVedite vtoroi opperator kotorii budet delit po moduly\n");
//     scanf("%d", &duo);
//     printf("Teper vvedite perviy operot na kotori budut delit po muduly\n");
//     scanf("%d", &first);

//     while (first >0)
//     {
//         printf("%d %% %d budet ravno = %d\n", first, duo, first % duo);
//         printf("esli hotite prodolhit mojete vvesto new first opperand or quit =<0\n");
//         scanf("%d", &first);
//     }
//     printf("poka");
//     return 0;

// }

// #include <stdio.h>
// #define CEL 5.0 / 9.0
// #define SHIFT 32.0
// #define KELVIN 273.16
// double Temperatures(double n);

// int main(void)
// {
//     double far, kelvin, celcs;
//     printf("vvesti znachiya v farenetah:\n");
//     Temperatures(far);
// }

// double Temperatures(double n)
// {
//     while (scanf("%lf", &n) == 1)
//     {
//         double kelvin, celsius;
//         celsius = CEL * (n - SHIFT);
//         kelvin = celsius + KELVIN;
//         printf("%.2f farengeit, %.2f celsia, %.2f kelvin\n", n, celsius, kelvin);
//         printf("Chtob vviti napishie string\n");
//     }
//     printf("well");
//     return 0;
// }



// #include <stdio.h>
// #define CEL 5.0 / 9.0
// #define SHIFT 32.0
// #define KELVIN 273.16

// void Temperatures(double n); // ������� ������ �� ���������� (function returns nothing)

// int main(void)
// {
//     double far;

//     printf("Enter temperature in Fahrenheit (or q to quit):\n");

//     // ���� ������������, ���� scanf ������� ��������� ����� (loop continues while scanf successfully reads a number)
//     while (scanf("%lf", &far) == 1)
//     {
//         Temperatures(far);
//         printf("Enter next value (or q to quit):\n");
//     }

//     printf("Done!\n"); // ���������� ��������� (program finished)
//     return 0;
// }

// void Temperatures(double n)
// {
//     double celsius, kelvin;

//     celsius = CEL * (n - SHIFT);
//     kelvin = celsius + KELVIN;

//     printf("%.2f�F = %.2f�C = %.2fK\n", n, celsius, kelvin);
// }

 /* suiting.c -- ��������� ����� �����, ������� � ������������� ������ */
//  #include <stdio.h> 
// int main(void)
//  {
//  long num;
//  long surn = 0L; 
// /* ������������� ���������� surn ����� */
//  int status;
// //  printf("������� ����� ����� ��� ������������ ������������ "); 
// printf("(dadad) : ") ; 
// status = scanf("%ld", &num);
//  while (status == 1) /* == ���������� ��������� */
//  {
//     surn = surn + num;
//  printf("ffwfwfwfwf qqq: ") ; 
// status = scanf("%ld", &num);
// //scanf("%ld", &num);
//  }

//  printf ("dwdwdwd %ld.\n", surn);
//  return 0;
//  }

// #include <stdio.h>

// int main(void){
//     int num, sum;
//     printf("VVedi chislo,  a chtob viti = q\n");
//     _Bool input = (scanf("%d", &num) == 1);
//     sum = 0;
//     while (input)
//     {
//         sum = sum + num;
//         printf("VVedi chislo,  a chtob viti = q\n");
//         input = (scanf("%d", &num) == 1);

        
//     }
//     printf("vot suma vsaeh chisel:%d", sum);
//     return 0;
    
// }

// #include <stdio.h>

// int main(void){
// int num;

// for(num = 0; num <100; num++)
// printf("poka\n");

// return 0;
// }

// #include <stdio.h>

// int main(void){

//     const int FIRST_OZ = 46;
//     const int NEXT_OZ = 20;

//     int ounces, cost;

//     printf("uncii  tarif\n");

//     for(ounces = 1, cost = FIRST_OZ; ounces <= 16; ounces++ , cost += NEXT_OZ)
//     printf("%5d $%4.2f\n", ounces, cost / 100.0);

//     return 0;

    
// }



// #include <stdio.h> 
// int main(void)
//  {
//  const int FIRST_OZ = 46; // ����� 2013 ���� 
// const int NEXT_OZ = 20; // ����� 2013 ����
//  int ounces, cost;
//  printf (" dwdwddw");
//  for (ounces=1, cost=FIRST_OZ; ounces <= 16; ounces++, 
// cost += NEXT_OZ)
//  printf("%5d $%4.2f\n", ounces, cost/100.0); 
// return 0;
//  }

//  #include <stdio.h>

//  int main(void)
//  {
//     int t_ct; //�������
//     double time, power_of_2;
//     int limit;

//     printf("Vvedite zelaemoe kolizchwstvo elementow:");

//     scanf("%d", &limit);
//     for(time = 0, power_of_2 = 1, t_ct=1; t_ct <=limit; t_ct++, power_of_2 *= 2.0)
//     {
//         time += 1.0 / power_of_2;
//         printf("vremya = %f, koda kollichestvo elementow = %d. \n", time, t_ct);
//     }
//     return 0;
//  }

//#include <stdio.h>

// int main(void){

//     const int secret = 13;
//     int code;

//     do{
//         printf("chtobi voiti v club lechenuya trikdfobii,\n");
//         printf("pojaluista, vvedite secrentniy cod: ");

//         scanf("%d", &code);
//     }while (code != secret);
//     printf("pozdravlyaem\n");
    
//     return 0;
// }

// #include <stdio.h>
// #define ROWS 6
// #define CHARS 10
// int main(void)
// {
//     int row;
//     char ch;

//     for(row = 0; row < ROWS; row++)
//     {
//         for (ch ='A'; ch < ('A' + CHARS); ch++)
//         {
//             printf("%c", ch);
             
//         }
//         printf("%10d\n", row);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(void){
//  const int ROWS = 6;
//  const int CHARS = 6;
//     int row;
//     char ch;

//     for(row = 0; row < ROWS; row++)
//     {
//         for (ch ='A'+ row; ch < ('A' + CHARS); ch++)
//         {
//             printf("%c", ch);
             
//         }
//         printf("%*d\n", ROWS+row, row);
//     }
//     return 0;
// }


// #include <stdio.h>

// #define SIZE 10
// #define PAR 72

// int main(void)
// {
//     int index, score[SIZE];
//     int sum = 0;
//     float average;

//     printf("VVedire %d rezultatov igri v golf:\n", SIZE);

//     for(index = 0; index < SIZE; index++)
//     scanf("%d", &score[index]);

//     printf("Vvedeni sled rezultati:\n");

//     for (index = 0; index < SIZE; index++)
//     printf("%5d", score[index]);
//     printf("\n");
//     for(index = 0; index < SIZE; index ++)
//     sum+= score[index];
    
//     average = (float)sum / SIZE;

//     printf("SSUma rezultatovv = %d, sredne znachenie = %.2f\n", sum, average);
//     printf("Pollucheniy andikap raven %.0f.\n",average - PAR);


    
//      return 0;
// }


// #include <stdio.h>

// double power(double n, int p);

// int main(void)
// {
//     double x, xpow;
//     int exp;

//     printf("Vvedite chislo i polojitelnuu celuy stepen ");
//     printf("v kotorou\nchislo budey vozvedeno. Dlya zaversheniya programmi\
//  vvedite q.\n");

//          while (scanf("%lf %d", &x, &exp) == 2)
//          {
//             xpow = power(x, exp);
//             printf("%.3g v stepeni %d ravno %.5g\n", x, exp, xpow);
//             printf("VVedite sleduushuu paru chisel ili q dlya zaversheniya.\n");
//          }
//          printf("Nadeemsya, chto vi osenili eto upr -- poka\n");

//          return 0;
// }

// double power(double n, int p)
// {
//     double pow = 1;
//     int i;

//     for(i = 1; i <= p; i++)
//     pow *=n;

//     return pow;
// }

// #include <stdio.h>

// int main(void){

//     char d;
//     int i = 0;
//     int j;
//     for(j = 0; j<=8; j++)
//     {
//         for(d = '$'; i <= 8; i++)
//     {
//     printf("%c", d);
// }
//     printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(void){

//     char d;
//     int i = 0;
//     int j;
//     for(j = 0; j<=8; j++)
//     {
//         for(d = '$', i = 0; i <= 8; i++)
//     {
//     printf("%c", d);
// }
//     printf("\n");
//     }
//     return 0;
// }

//  #include <stdio.h>
//  int main(void)
//  {
//  int i ; 
// char ch;
//  for (i = 0, ch = 'A'; i < 4; i++, ch += 2 * i) 
// printf(" %c", ch) ; 
// return 0;
//  }
 

// #include <stdio.h>

// int main()
// {
//     int n = 10;
//     do
//     {
//         printf("%d", n);
    
//      } while (++n <13);
     


//     return 0;
// }


//  #include <stdio.h>
//  #define SIZE 8 
// int main(void)
//  {
 
//  int by_twos[SIZE]; 
// int index;
//   for(index = 0; index <= SIZE; index++) 
// by_twos[index] = 2 * index; 
// for(index = 0; index < SIZE; index++) 
// printf("%d ", by_twos[index]) ; 
// printf("\n") ; 
// return 0;
//  }

// #include <stdio.h>
// long bro (long n);
// int main(void)
// {
//     long  rr = 1234567891;

//     bro(rr);
//     long tt = bro(rr);
// printf("%ld", tt);
//     return 0;
// }

// long bro(long n){
//     long a = n / 2;
//     while (++n<1234567899)
//     {
//         printf("%ld = %zd baitov\n", a++, sizeof(a));
//     }
//     return a;
// }

// #include <stdio.h> 
// int main(void)
//  {
//  int k;
//  for(k = 1, printf("%d: Hi ! \n", k); printf("k = %d\n", k) , 
// k*k < 26; k+=2, printf ("Now k is %d\n", k) ) 
// printf("k is %d in the loop\n",k); 
// return 0;
// } 

// #include <stdio.h>

// int main(void){

//     int name[26];
//     char hh;
//     int index;
//     double n;


//     for(index = 0, hh = 'a', n = 1; index < 26; index++, hh++, n += 2){
//     printf("%*c\n",index/* n ������ index)*/, hh);
//     name[index] = hh;}

//     for(index = 0; index < 26; index++)
//     printf("%c ", name[index]);

//     return 0;
// }

// #include <stdio.h>

// int main(void)
// { 
//     int m, n;
//     for(m= 1; m <6; m++){
//     for ( n = 0; n <m; n++)
//     {
//         printf("$");
//     }
//     printf("\n");
// }
    
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// { 
//     int m, n;
//     char lol;
//     for(m= 1; m <7; m++){
//     for ( n = 0, lol = 'F'; n <m; n++, lol--)
//     {
//         printf("%c", lol);
//     }
//     printf("\n");
// }
    
//     return 0;
// }



// #include <stdio.h>

// int main(void)
// { 
//     int m, n;
//     char lol = 'A' ;
//     for(m= 1; m <7; m++){
//     for ( n = 0; n <m; n++, lol++)
//     {
//         printf("%c", lol);
//     }
//     printf("\n");
// }
    
//     return 0;
// }


// #include <stdio.h>

// int main(void)
// {
//     char letters[26];   // ������ ��� ���� ����������� ��������
//     int i, row, col;
//     char ch = 'A';

//     // ������� ��������� ������ �������
//     for (i = 0; i < 26; i++, ch++) {
//         letters[i] = ch;
//     }

//     int index = 0; // ����� ���� �� �������

//     // ������ �������� �� �������
//     for (row = 1; row <= 6; row++) {
//         for (col = 0; col < row; col++) {
//             printf("%c", letters[index]);
//             index++;  // ��������� � ��������� �����
//         }
//         printf("\n");
//     }

//     return 0;
// }


// #include <stdio.h>

// int main(void)
// { 
//     int m, n;
//     char lol;

//     for (m = 0; m < 6; m++) {           // ������
//         for (n = 0; n <= m; n++) {      // �������
//             lol = 'A' + (m * (m + 1)) / 2 + n; // ������� ��� ���������� �����
//             printf("%c", lol);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }


// #include <stdio.h>

// int main(void)
// {
//     char chi, rock;
//     int index, index2, index3, prok[5];

//     for(index = 0; index<5; index++){
// for(chi = 'A', index2 = 0; index2 < index+1; chi++, index2++){
// for(rock = 'E', index3 = 0; index3 < index2+1; rock--, rock--, index3++){
//     printf("%c", rock);
// }
//     printf("%c", chi);
// }

//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int row, index;
//     char tro, rock;


//     for(row = 0; row<5; row++){

//        for (index = 5 - row; index > 0; index--) printf(" ");
        


//         for(tro = 'A'; tro <'A'+row; tro++)
//         {
//             printf("%c", tro);
        
//         }
//          for(rock = 'A' +row; rock >='A'; rock--)
//         {
//             printf("%c", rock);
//         }
   

//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int num, num2;
    

//     for(scanf("%d %d" , &num, &num2);num<=num2; num++)
//     {
//         printf("%*d%*d%*d\n",num2 ,num, num2, num*num, num2, num*num*num);
//     }
//     return 0;
// }


// #include <stdio.h>

// int main(void)
// {

//     int pro;
//     scanf("%d", &pro);
//     char mm;
//     char name[pro+1]; //10
//     scanf("%s", name);
//     for(int index = 0; index<pro; index++)
//     {
//         scanf("%c",mm);
// name[index] = mm;



//     }
//     printf("%s", name);
//     return 0;
// }




// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     int pro;
//     printf("Vvedite dlinu slova: ");
//     scanf("%d", &pro);

//     char name[pro + 1]; // +1 ��� �������� ������� '\0'
//     char mm, hh;

//     printf("VVedite stroku %d simvolov:\n", pro);

//     for (int index = 0; index <= pro; index++)
//     {
//         scanf("%c", &mm);  // ������ ����� %c ���������� ��������� �������� ������
//         name[index] = mm;
//     }

//     name[pro] = '\0';  // ��������� ������

//        for (int index = strlen(name); index >= 0; index--)
//     {
        
//      hh[pro+1];
//      hh[index] =  name[--pro];
//     }
// hh[pro] = '\0';  // ��������� ������



//     printf("Vi viveli: %s\n", name);
//      printf("Vi viveli: %s\n", hh);

//     return 0;
// }




// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     int size;
//     printf("VVedite dlinu: ");
//     scanf("%d", &size);

//     char word[size + 1];  // +1 ����� ��� '\0'

//     printf("vvedite slovo: ");
//     scanf("%s", word);

//     int len = strlen(word);

//     printf("slova v obratnom poryadke: ");
//     for (int i = len - 1; i >= 0; i--)
//     {
//         printf("%c", word[i]);
//     }

//     printf("\n");

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main(void){

//     char name[40];
//     scanf("%s", name);
//     int rock = strlen(name); 
//     char lol[rock+1];
//     int num = 0;

//     for(int index = rock-1; /*char lol[rock+1], int num = 0*/ index>=0; index--, num++)
//     {
//         lol[num]= name[index];
//     }
// lol[rock] = '\0';
// printf("vi napechatali:%s, zadom napered eto budet:%s", name, lol);

// return 0;
// }


// #include <stdio.h>

// int main(void){

//     float num1, num2, num3;

//     printf("vvedite dva chisla c tochkoi, f esli hotite vity to simvol:");
//     int tt = scanf("%f %f", &num1, &num2);

//     for( ;tt == 2;){

// num3 = (num1 -num2) / (num1 * num2);
// printf("\n%f\n", num3);

// printf("vvedite dva chisla c tochkoi, f esli hotite vity to simvol:\n");
// tt = scanf("%f %f", &num1, &num2);

// }
// printf("pshol von");
// return 0;
// }

// #include <stdio.h>

// float calc(float a, float b);   // �������� �������

// int main(void)
// {
//     float num1, num2;

//     printf("������� ��� ����� (��� ����� ���������� ������ ��� ������): ");

//     // scanf ���������� 2, ���� ������� ��������� ��� �����
//     while (scanf("%f %f", &num1, &num2) == 2)
//     {
//         float result = calc(num1, num2);
//         printf("���������: %f\n\n", result);

//         printf("������� ��� ����� (��� ����� ���������� ������ ��� ������): ");
//     }

//     printf("����� �� ���������.\n");
//     return 0;
// }

// float calc(float a, float b)
// {
//     return (a - b) / (a * b);
// }

// #include <stdio.h>

// int main(void){

//     int num1, num2, num3, num4, num5, num6;
    
// printf("vvedite dva predely dvuh  chisla kotorie budut vozvedeni v suumu kvadratov");
//     num3 = scanf("%d %d", &num1, &num2);

//     for( ; num3 == 2 && num1 < num2;  )
     
//     {
//         for(num5 =0 , num6 =0, num4 = num1; num4<=num2; num4++){
//         num5 = num4*num4;
//         num6 = num6 + num5;
//         }
//         printf("\nssuma kvadratov chise: ot %d do %d ranva =%d\n", num1*num1, num2*num2, num6);
//         printf("vvedite kombinasiu predelov:");
//          num3 = scanf("%d %d", &num1, &num2);
//     }
// printf("poka poka");

// return 0;
    
// }


// #include <stdio.h>

// int main(void){

//     int num[8];
    

//     for(int index =0; index < 8; index++){
//         scanf("%d", &num[index]);
//     }

//     for(int index = 7; index >= 0; index-- )
//     {
//         printf("%d ", num[index]);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     float sum = 0.0;

//     for (float i = 1.0; i <= 100.0; i += 1.0) {
//         sum += 1.0 / i;
//         printf("%.4f  ", sum);
//     }


//     float sum1 = 0.0;
// printf("\n\n");
//     for (int i = 1; i <= 100; i++) {
//         float term = 1.0 / i;
//         if (i % 2 == 0)
//             term = -term;

//         sum1 += term;
//         printf("%.4f  ", sum1);
//     }

//     return 0;
// }


// #include <stdio.h>

// int main(void)
// {
//     int name[8];

//     for (int i = 0, x = 1; i < 8; i++, x *= 2)
//         name[i] = x;

//     int i = 0;
//     do {
//         printf("%d ", name[i]);
//         i++;
//     } while (i < 8);

//     return 0;
// }



// #include <stdio.h>

// int main(void)
// {
// double name1[8];
// double name2[8];
// double name3 = 0;

// for(int index = 0; index<8; index++)
// {
//     scanf("%lf", &name1[index]);
//      name3 += name1[index];
//      name2[index] = name3;

  


// }
// for(int i = 0; i < 8; i++)
//         printf("%10.3f ", name1[i]);

//     printf("\n");

//     // ������� ���� ������ name2
//     for(int i = 0; i < 8; i++)
//         printf("%10.3f ", name2[i]);
  

// return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char name[255];
//     scanf("%s", name);
//     int pro =strlen(name);

//     for(int index = pro - 1; index>=0; index--)
//     {
//         printf("%c", name[index]);
//     }
//     return 0;
// }


// #include <stdio.h>
// #include <string.h>
 
// int main(void)
// {
//     char name[255];
    
//     // scanf("%c", name);
//     // int pro =strlen(name);
// for(int index = 0; index <= 255; index++)
// scanf("%c", &name[index]);


// int pro =strlen(name);
//     for(int index = pro - 1; index>=0; index--)
//     {
//         printf("%c", name[index]);
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main(void){

// char name[255];
// char temp;

// int index = 0;

// for( ; index < 254 && scanf("%c", &temp) == 1 && temp != '\n'; index++){
// name[index] = temp;
// }
// name[index] = '\0';
// for(index = strlen(name)-1; index >= 0; index--){
//     printf("%c", name[index]);
// }
// printf("\n eto vse");
// return 0;
// }







// #include <stdio.h>

// int main(void)
// {
//     char name[255];
//     int index = 0;
//     char temp;

//     // ������ ����������� �� Enter
//     while (index < 254 && scanf("%c", &temp) == 1 && temp != '\n')
//     {
//         name[index] = temp;
//         index++;
//     }
//     name[index] = '\0'; // ��������� ������

//     // ����� � �������� �������
//     for (int i = index - 1; i >= 0; i--)
//     {
//         printf("%c", name[i]);
//     }

//     return 0;
// }


// #include <stdio.h>

// #define DAF 100

// int main(void){
// double dod = 100;
// double bob = 100;

// double rostdod = 0;
// double brok = 1000;
// int index;

//     for(index = 0; brok >= bob; bob*=1.05, index++){
//         rostdod +=dod*1.1-100;
//         brok = rostdod + dod;

//         printf("god %d      dod %.2f$       bob %.2f$\n", index, brok-10, bob);

//     }
//     printf("god %d      dod %.2f$       bob %.2f$\n", index, brok-10, bob);
//     printf("%d vot za stolko let bob pereomit dod", index);
//     return 0;
// }



//#include <stdio.h>

// int main(void)
// {
//     double daf = 100.0;
//     double dei = 100.0;
//     int years = 0;

//     for (; dei <= daf; years++)
//     {
//         daf += 10;        // ������� ��������
//         dei *= 1.05;      // ������� ��������

//         printf("god %d      dod %.2f$       bob %.2f$\n",
//                years, daf, dei);
//     }

//     printf("\nBob pereognal Dafnu cherez %d let.\n", years);

//     return 0;
// }





// #include <stdio.h>

// int main(void)
// {
//     double daf0 = 10000.0;   // ��������� ����� �����
//     double dei = 10000.0;    // ��������� ����� ������
//     int years;

//     // ���� ������������, ���� daf(years) >= dei
//     for (years = 0; daf0 * (1.0 + 0.10 * years) >= dei; years++)
//     {
//         double daf = daf0 * (1.0 + 0.10 * years); // ������� �������� ����� ���������
//         printf("god %2d   daf = %.2f$   dei = %.2f$\n", years, daf, dei);

//         // ��������� ������ �� ��������� ��� (������� �������)
//         dei *= 1.05;
//     }

//     // ����� ������ �� ����� years � ������ ���, � �������dei > daf(years)
//     double daf_final = daf0 * (1.0 + 0.10 * years);
//     printf("\n result: cheres %d let\n", years);
//     printf("dafna = %.2f$\n", daf_final);
//     printf("deidra = %.2f$\n", dei);

//     return 0;
// }

// #include <stdio.h>

// int main(void){

//     double chakiLaki = 1000000;
//     double zabral = 100000;
//     double years =0;

//     while (chakiLaki > 0)
//     {
//         printf(" %.2f$ Vot takoi shet y laki v takom godu %.0f\n", chakiLaki, years);
//         chakiLaki*=1.08;
//         chakiLaki-= zabral;
//         ++years;
//     }
//     printf("Vse on bankrot");

//     return 0;
// }

// #include <stdio.h>
// #define SUMA 100000
// int main(void)
// {
//     double chakiBank = 1000000;
//     double procent = chakiBank*0.08;
  

//     for(int years = 0; chakiBank>=0; years++)
//     {
        
//         printf("%f vot takaya suma v talom godu %d y chaki\n", chakiBank, years);
//          chakiBank += procent;
//         chakiBank -= SUMA;
        
//     }
//     printf("Ha teper om bomj");
//     return 0;
// }


#include <stdio.h>

// int main(void)
// {
//     int friendRob = 5;
//     int vislho = 0; 
//     int zashlo = 0;

//     for (int week = 0; friendRob <=150; week++)
//     {
//         printf("%d stolko druzei u Rob, stolko vishlo %d i stolko dobavilos %d na takoi nedele%d\n",
//              friendRob, vislho, zashlo, week);

//              vislho = ++vislho;
//              friendRob -= vislho;
//              zashlo =  friendRob * 2 - friendRob;
//              friendRob += zashlo;

//     }
//     printf("stolko teper u nego druzei: %d\n",friendRob);
//     printf("vse poka");

//     return 0;
    
// }

// #include <stdio.h>

// int main (void)
// {
//     const int secres_code = 13;
//     int code_entered;
//     int rom;

//     do
//     {
//         printf("Chobi voiti v klub ,,,.\n");
//         printf("pozaza, vvedite secretniy_code");
//         rom = scanf("%d", &code_entered);
        
//     } while (code_entered != secres_code && rom ==1);

//     printf("pozdravlyaem");

//     return 0;
    
// }

// #include <stdio.h>

// int main(void){

//    int const NAME = 46;
//   int const DUO = 20;
//   int lol, dod;

//   for(lol = NAME, dod = 1; dod <= 10; dod++, lol+= DUO)
//   printf("%d unciya za $%.2f\n", dod, (double)lol / 100.0);

//   return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int t_ct;
//     double time, power_of_2;
//     int limit;

//     printf("VVedtite zwlaemoe kolichestvo elementvov posledovatelnosti: ");
//     scanf("%d", &limit);

//     for(time = 0, power_of_2 =1, t_ct = 1; t_ct <= limit; t_ct++, power_of_2 *= 2.0)
//     {
//         time += 1.0 / power_of_2;
//         printf("vremya = %f, kogda kolichestvo elemntov = %d.\n",time, t_ct);
//     }
// return 0;
// }

// #include <stdio.h>
// #define ROWS 6
// #define CHARS 6
// int main(void)
// {
//     int row;
//     char ch;

//     for(row = 0; row < ROWS; row++)
//     {
//         for(ch = 'A' + row; ch < ('A' + CHARS); ch++)
//         printf("%c", ch);
//         printf("\n");
//     }
        
// return 0;
// }

// #include <stdio.h>
// #define SIZE 10
// #define PAR 72

// int main(void)
// {
//     int index, score[SIZE];
//     int sum = 0;
//     float average;
    

    
//     printf("Vvedite %d resultatov igri v golf:\n", SIZE);
//     for(index = 0; index < SIZE; index++)
//     {
//         scanf("%d", &score[index]);
//     }
//     printf("Vvedeni sleduushie resultati:\n");
//     for(index = 0; index < SIZE; index++)
//     printf("%5d", score[index]);
//     printf("\n");
//     for(index = 0; index < SIZE; index++)
//     sum += score[index];
//     average = (float)sum / SIZE;
//     printf("Suma resultatov = %d, sredde znachie = %.2f\n", sum, average);
//     printf("Polucheniy handikap raven%.0f.\n", average - PAR);

  
//     return 0;
    

// }

// #include <stdio.h>
// double power(double n, int p);
// int main(void)
// {
//     double x, xpow;
//     int exp;

//     printf("VVedite chislo i polozitelnuu stepen,");
//     printf("v kotoruu\nchislo budet vozvedeno. Dlya zaversheniya prorammi");
//     printf(" vved q.\n");

//     while (scanf("%lf%d", &x, &exp) == 2)
//     {
//         xpow = power(x, exp);
//         printf("%.3g v stepeni %d ravno %.5g\n", x, exp, xpow);
//         printf("vvedite sledushuu paru chisel ili q dlya zaversheniya.\n");
//     }
//     printf("nadeemsya, chto vi oswnili eto epraznenie -- poka!\n");

//     return 0;
// }

// double power(double n, int p)
// {
//     double pow = 1;
//     int i;

//     for(i = 1; i <=p; i++)
//     pow *= n;

//     return pow;
// }


// #include <stdio.h>

// int main(void)
// {
//     int i, j, list[10];

//     for(i = 1; i <= 10; i++)
//     {
//         list[i] = 2*i +3;
//         for (j = 1; j <= i; j++)
//         printf("  %d", list[j]);
//         printf("\n");
        
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int index = 0;
//     int i;

//     for( ; index < 4; index++)
//     {
//         for (i = 0; i <= 8; i++)
//         {
//             printf("$");
//         }
//         printf("\n");
        
//     }
//     return 0;
// }


// #include <stdio.h>
//  int main(void)
//  {
//  int i ; 
// char ch;
//  for (i = 0, ch = 'A'; i < 4; i++, ch += 2 * i) 
// printf(" %c", ch) ; 
// return 0;
//  }



// #include <stdio.h> 
// int main(void)
//  {
//  int n, m; 
// n = 30;
//  while (++n <= 33) 
// printf("%d l", n) ; 
// n = 30;
//  do
//  printf("%d l", n); 
// while ( ++n <= 33) ;
//  printf("\n***\n");
//  for (n = 1; n*n < 200; n += 4) 
// printf("%d\n", n);
//  printf("\n***\n");
//  for (n =2, m =6; n < m; n *= 2, m+= 2) 
// printf ("%d %d\n", n, m) ;
//  printf("\n***\n"); 
// for (n =5; n >= 0; n--)
//  {
//  for (m = 0; m <= n; m++) 
// printf("="); 
// printf("\n");
//  }
//  return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int name[26];
//     for(int A = 65, index = 0; index < 26; index++, A++){
//     name[index] = A;
//     printf("%c ", name[index]);}
//     // for(int lol = 25; lol>=0; lol--)
//     // printf("%c ", name[lol]);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char name[26+1];
//     char  A = 'A';
//     for(int index = 0; index < 26; index++, A++){
//     name[index] = A;
//     printf("%c ", name[index]);}
//     name[26] = '\0';
//     printf("%s", name);

//     return 0;
//     }

// #include <stdio.h>

// int main(void)
// {   
//     int kek = 0;

//     for(int index = 0; index < 6; index++)
//     {
//         for(char lol = 'F', kek = 0; kek<= index; kek++,lol--)
//         printf("%c", lol);
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {   
//     for (int index = 0; index < 6; index++)
//     {
//         for (char lol = 'F'; lol >= 'F' - index; lol--)
//             printf("%c", lol);

//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     char lol = 'A';
//     for(int index = 0; index < 6; index++)
//     {
//         for(int kek = 0; kek<=index; kek++, lol++)
//         printf("%c", lol);
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     char name = 'A';
//     for(int index = 0; index <  5; index++){
//         for(int i = 0; i < index)
//         printf("\n");
//     }
// }

// #include <stdio.h>

// int main(void)
// {
//     int index;
//     // char lol;

//     for(index = 0; index < 6; index++)
//     {
//         for(int num = index; num<=4; num++)
//         {
//             printf(" ");
//         }
//         for (char lol = 'A'; lol < index + 'A'; lol++)
//         {
//             printf("%c", lol);
//         }
//         for (char lol = 'A' + index - 2; lol >= 'A'; lol--)
//             printf("%c", lol);
  
        
//         printf("\n");
//     }

//     return 0;
// }




// #include <stdio.h>

// int main(void)
// {
//     char last;

//     printf("������� ��������� �����: ");
//     scanf("%c", &last);

//     int rows = last - 'A' + 1;

//     for (int index = 0; index < rows; index++)
//     {
//         /* 1. ������� */
//         for (int s = 0; s < rows - index - 1; s++)
//             printf(" ");

//         /* 2. ������������ ������������������ */
//         for (char c = 'A'; c <= 'A' + index; c++)
//             printf("%c", c);

//         /* 3. ��������� ������������������ */
//         for (char c = 'A' + index - 1; c >= 'A'; c--)
//             printf("%c", c);

//         printf("\n");
//     }

//     return 0;
// }


// #include <stdio.h>

// int main(void)
// {
//     char name;

//     scanf("%c", &name);

//     for(int index1 = name - 'A', index = 0; index <= index1; index++)
//     {
//         for(int probel = 0; probel < index1 - index; probel++)
//         {
//             printf(" ");
//         }

//         for(char lol = 'A'; lol <= index + 'A';  lol++)
//         printf("%c", lol);

//         for(char lol = 'A' + index - 1; lol >= 'A'; lol--)
//         printf("%c", lol);
//         printf("\n");
//     }
// }

// #include <stdio.h>
// int main(void)
// {
//     const int FREEZING = 0;
//     float temperature;
//     int cold_days = 0;
//     int all_days = 0;
//     printf("VVedite spisok minimalnih dnevnih temperatur.\n");
//     printf("Ispolzuite skalu Selsia; dlya zaversheniya vvedite q.\n");
//     while(scanf("%f", &temperature) == 1)
//     {
//         all_days++;
//         if(temperature < FREEZING)
//         cold_days++;
//     }
//     if(all_days != 0)

//     printf("%d - obshee kolichestvo dney %.1f%% s temperaturoi nize nulya.\n", all_days, 100.0 * (float) cold_days / all_days);
//     if (all_days == 0)
//     printf("Dannie ne vvedeni! \n");
//     return 0;
// }

// #include <stdio.h>
// #define SPACE ' '
// int main(void)
// {
//     char ch;
//     ch = getchar();
//     while(ch != '\n')
//     {
//         if(ch == SPACE)
//         putchar(ch);                         //while((ch == getchar()) != '\n'{       }
//         putchar(ch+1);
//         ch = getchar();
//     }
//     putchar(ch);
//     return 0;

// }

// while(
//     (ch = getchar()) //��������� �������� ���������� ch
//     != '\n')  // �������� ch c \n

// #include <stdio.h>
// #include <ctype.h>

// int main(void)
// {
//     char ch;
//     while ((ch = getchar()) != 'n')
//     {
//         if (isalpha(ch))
//         putchar(ch + 1);
//         else
//         putchar(ch);
//     }
//     putchar(ch);
//     return 0;
// }

//electic.c -- ������������ ����� ��� ����� �� ��������������
// #include <stdio.h>
// #define RATE1 0.13230           //����� �� ������ 360 ���/�
// #define RATE2 0.15040          //����� �� ��������� 108 ���/�
// #define RATE3 0.30025         //����� �� ��������� 252 ���/�
// #define RATE4 0.34025         // �����, ����� ������ ��������� 720 ���/�
// #define BREAK1 360.0              //����� ����� ������� �������
// #define BREAK2 468.0              //������ ����� ������� �������
// #define BREAK3 720.0             //������� ����� ������� �������
// #define BASE1 (RATE1 * BREAK1)
// //��������� 360 ���/�
// #define BASE2 (BASE1 + (RATE2 * (BREAK2-BREAK1)))
// //��������� 468 ���/�
// #define BASE3 (BASE1 + BASE2 + (RATE3 * (BREAK3 - BREAK2)))
// //��������� 720 ���/�

// int main(void)
// {
//     double kwh;
//     double bill;

//     printf("Vvrdite pbiom izrachodovannoi elektoenergii v ���/�. \n");
//     scanf("%lf", &kwh);
//     if(kwh <= BREAK1)
//     bill = RATE1 * kwh;
//     else if(kwh <= BREAK2)
//     bill = BASE1 + (RATE2 * (kwh - BREAK1));
//     else if(kwh <= BREAK3)
//     bill = BASE2 + (RATE3 * (kwh - BREAK2));
//     else
//     bill = BASE3 + (RATE4 * (kwh - BREAK3));

//     printf("Cumma k oplate za %.1f ���/� sosotovlyaet $%1.2f. \n", kwh, bill);

//     return 0;
// }

// #include <stdio.h>
// int main(void){
// int num;
// scanf("%d", &num);
// for (int div = 2; (div * div) <= num; div++)
// {
//     if (num % div == 0)
//     {
//         if(div * div != num)
//         printf("%d delitsya na %d I %d. \n", num, div, num / div);
        
//         else
//         printf("%d delitsya na %d. \n", num, div);
//     }

// }

//return 0;
// }


//divisors.c -- ��������� ��������� if ����������� �������� �����

// #include <stdio.h>
// #include <stdbool.h>

// int main(void)
// {
//     unsigned long num;
//     unsigned long div;
//     bool isPrime;
//     printf("Vvedite celoe chislo dlya analiza; ");
//     printf("Dlya zaversheniya vvedite q. \n");
    
//     while (scanf("%lu", &num) == 1)
// {
//     for(div = 2, isPrime = true; (div * div) <= num; div++)
//     {
//         if(num % div == 0)
//         {
//             if((div * div) != num)
//             printf("%lu delitcya na %lu i %lu. \n", num, div, num / div);
//             else
//             printf("%lu delitcya na %lu. \n", num, div);
//             isPrime = false;
//         }
//     }
//     if (isPrime)
//     printf("%lu yavvlyaetsya prostim chislom.\n", num);
//     printf("Vvedite sleduushie chislo dlya analiza; ");
//     printf(" Dlya zaversheniya vvedite q. \n");
// }
// printf("Do svidaniya");
// return 0;
// }

// #include <stdio.h>
// #include <iso646.h>
// #define PERIOD '.'

// int main()
// {
// char ch;
// int charcount = 0;

// while ((ch = getchar()) != PERIOD)
// {
//     if(ch != '"' && ch != '\'')
//     charcount++;
// }
// printf("Zdes imeetsya %d simvolov, otlichnih ot kavschek.\n",charcount);

// return 0;
// }

// #include <stdio.h>
// #include <ctype.h>
// #include <stdbool.h>
// #define STOP '|'

// int main(void)
// {
//     char c;
//     char prev;
//     long n_chars = 0L;
//     int n_lines = 0;
//     int n_words = 0;
//     int p_lines = 0;
//     bool inword = false;
    
//     printf("Vvedite text dlya analiza (| dlya zaverseniya) : \n");
//     prev = '\n';
    
//     while ((c = getchar()) != STOP)
//     {
//         n_chars++;
//         if(c == '\n')
//         n_lines++;
//         if(!isspace(c) && !inword)
//         {
//             inword = true;
//             n_words++;
//         }
//         if (isspace(c) && inword)
//         inword = false;
//         prev = c;
//     }

//     if(prev != '\n')
//       p_lines = 1;
//     printf("simvolov = %ld, slov = %d, strok = %d, ", n_chars, n_words, n_lines);
//     printf("nepolnih strok = %d\n", p_lines);
//     return 0;
// }

// #include <stdio.h>

// int main(void)
//  {
//     int x, y;
//     y = 10;
//     if(y<0) //x = (y < 0) ? -y: y;
//     x = -y;
//     else
//     x = y;
//  }

//paint.c -- ������������� �������� �������� 
// #include <stdio.h>
// #define COVERAGE 350

// int main(void)
// {
//     int sq_feet;
//     int cans;

//     printf("Vvedite kolichestvo kvadratnoh futov, kotorie neobhodimo pokrasit:\n");

//     while(scanf("%d", &sq_feet) == 1)
//     {
//         cans = sq_feet / COVERAGE;
//         cans += ((sq_feet % COVERAGE == 0)) ? 0 : 1;
//         printf("dlya etogo potrebuetsya %d %s kraski.\n", cans, cans == 1 ? "Banka" : "Banki");

//         printf("Vvedite sledd znachenie ili q dlya vihoda:\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     const float MIN = 0.0f;
//     const float MAX = 100.0f;
//     float score;
//     float total = 0.0f;
//     int n = 0;
//     float min = MAX;
//     float max = MIN;
//     printf("Vvedote resultat pervoi igri ili q dlya zaverseniya: ");
//     while (scanf("%f", &score) == 1)
//     {
//         if(score < MIN || score > MAX)
//         {
//             printf("%0.1f - nedopustimie znacheniye. Povtorete popitku: ", score);
//             continue; 
//         }
//         printf("Accepting %0.1f:\n", score);
//         min = (score < min) ? score: min;
//         max = (score > max) ? score: max;
//         total += score;
//         n++;
//         printf("VVedite resultat sleduushiy igri iil q dlya vihoda : ");
//     }
//     if(n > 0)
//     {
//         printf("Srednee znachenie %d resultatov ravno %0.1f. \n", n, total / n);
//         printf("Minimalnoe = %0.1f, maximalnoe = %0.1f\n" , min, max);
//     }
//     else
//     printf("Ne bilo vvedeno ni odnogo dopustimogo resultata.\n");

//     return 0;
    
// }

//break.c -- ispolzovanie operator break dlya vihoda iz cikla
// #include <stdio.h>

// int main(void)
// {
//     float length, width;

//     printf("Vvedite dlunnu pryamougolnika: \n");
//     while(scanf("%f", &length) == 1)
//     {
//         printf("Dlina = %0.2f:\n", length);
//         printf("Vvedite shirinu pramouolnika:\n");

//         if(scanf("%f", &width) != 1)
//         break;
//         printf("Shirina = %0.2f:\n", width);
//         printf("Ploshad = %0.2f:\n", length * width);
//         printf("Vvedite dlinu pryamougolnika: \n");
//     }
//     printf("Programma zaversena.\n");

//     return 0;
// }


// #include <stdio.h>

// int main(void)
// {
//     int p, q;
//     scanf("%d", &p);
//     while(p > 0)
//     {
//    printf("%d\n", p);
//    scanf("%d", &q);
//        while(q > 0)
//        {
//         printf("%d\n", p * q);
//         if(q > 100)
//         break;;
//         scanf("%d", &q);
//        }
//        if(q > 100)
//        break;
//        scanf("%d", &p);
        
//     }
//     return 0;
    
// }

//animals.c -- ������������� ��������� switch
// #include <stdio.h>
// #include <ctype.h>

// int main(void)
// {
//     char ch;

//     printf("Daite mne bukvu alfavita, i ya ykazu vam ");
//     printf("nazvane zivotnogo, \nnachinaesheysya s etoi bukvi.\n");
//     printf("Vvedite bukvu ili # dlya zaverseniya. \n");

//     while ((ch = getchar()) != '#')
//     {
//         if('\n' == ch)
//         continue;
//         if(islower(ch)) // ������ �������� �����
//         switch ( (ch))
//         {
//         case 'a':
//             printf("arhar, dikiy orniy aziatckiy baran\n");
//             break;
//             case 'b':
//             printf("babirussa, dikaya malaiskaya svinia\n");
//             break;
//             case 'k':
//             printf("koati, nosuha obiknovennaya\n");
//             break;
//             case 'v':
//             printf("vihuhol, vodoplavayshee suchestvo\n");
//             break;
//             case 'e':
//             printf("ehidna, igolchatiy muravied\n");
//             break;
//             case 'p':
//             printf("Ribolov, svetlo-korichevaya kunisa\n");
//             break;
            
        
//         default:
//         printf("Vopros ozadachil!\n"); // ����� ��������� ������
//         }
//         else
//         printf("Raspoznaytsya tolko ctrochnie bukvi.\n");
//         while(getchar() != '\n')
//         continue;   //��������� ���������� ����� ������� ������
//         printf("Vvedite cledushuu bukvu ili # dlya zaversheniya.\n");
//     } //����� ����� while
//     printf("do cvidaniya.\n");
//     return 0;
// }

//vowels.c -- ������������� ��������� �����
// #include <stdio.h>

// int main(void)
// {
//     char ch;
//     int a_ct, e_ct, i_ct, o_ct, u_ct;

//     a_ct = e_ct = i_ct = o_ct = u_ct = 0;

//     printf("Vvedite text ili # dlya zaverseniya programmi.\n");

//     while ((ch = getchar()) != '#')
//     {
//         switch (ch)
//         {

//         case 'a':
//         case 'A': a_ct++;
//         break;

//         case 'e':
//         case 'E': e_ct++;
//         break;

//         case 'i':
//         case 'I': i_ct++;
//         break;

//         case 'o' :
//         case 'O' : o_ct++;
//         break;
        
//         case 'u' :
//         case 'U' : u_ct++;
//         break;
        
        
//         default:
//             break;
//         }
        
//     }

//     printf("Kolichestvo glasnih: A   E   I   O   U\n");
//     printf("                  %4d%4d%4d%4d%4d\n", a_ct, e_ct, i_ct, o_ct, u_ct);
    
//     return 0;
    
// }


// #include <stdio.h>
// #include <ctype.h>

// int main(void)
// {
//     char ch;
//     int a_ct, e_ct, i_ct, o_ct, u_ct;

//     a_ct = e_ct = i_ct = o_ct = u_ct = 0;

//     printf("Vvedite text ili # dlya zaverseniya programmi.\n");

//     while ((ch = getchar()) != '#')
//     {
//         ch = toupper(ch);
//         switch (ch)
//         {

//         // case 'a':
//         case 'A': a_ct++;
//         break;

//         // case 'e':
//         case 'E': e_ct++;
//         break;

//         // case 'i':
//         case 'I': i_ct++;
//         break;

//         //case 'o' :
//         case 'O' : o_ct++;
//         break;
        
//         // case 'u' :
//         case 'U' : u_ct++;
//         break;
        
        
//         default:
//             break;
//         }
        
//     }

//     printf("Kolichestvo glasnih: A   E   I   O   U\n");
//     printf("                  %4d%4d%4d%4d%4d\n", a_ct, e_ct, i_ct, o_ct, u_ct);
    
//     return 0;
    
// }

// #include <stdio.h>
// int main(void)
// {
//     int weight, height;

//     scanf("%d %d", &weight, &height);
//     if(weight < 100 && height > 64){
//      if(height >= 72)
//     printf("VAsh ves sliskom mal dlya vashego rosta.\n");
//       else if(height < 72 && height > 64)
//     printf("Vash ves mal dlya vashego rosta.\n");
//     }
//       else if(weight > 300 && height < 48){
//     printf("Vash rost mal dlya vashego vesa.\n");}
//        else
//     printf("U vas idealniy ves.\n");

//     return 0;
// }


// #include <stdio.h>

// int main(void)
// {
//     int weight, height;

//     scanf("%d %d", &weight, &height);

//     if(weight < 100 && height > 64)
//      {

//         if(height >= 72)
//             printf("VAsh ves sliskom mal dlya vashego rosta.\n");

//         else if(height < 72 && height > 64)
//             printf("Vash ves mal dlya vashego rosta.\n");

//     } 
     
//     else if(weight > 300 && height < 48) 
//       {

//         if(!(height >= 48))
//             printf("Vash rost mal dlya vashego vesa.\n");

//       } 
//     else 
//     {
//         printf("U vas idealniy ves.\n");
//     }

//     return 0;
// }




// #include <stdio.h>

// int main(void)
// {
//     int weight, height;

//     scanf("%d %d", &weight, &height);

//     if(weight < 100 && height > 64) 
//     {

//         if(height >= 72)
//             printf("VAsh ves sliskom mal dlya vashego rosta.\n");
//         else if(height < 72)
//             printf("Vash ves mal dlya vashego rosta.\n");

//     } 
//     else if(weight > 300 && height < 48) 
//     {

//         if(height < 48)
//             printf("Vash rost mal dlya vashego vesa.\n");

//     } 
//     else {
//         printf("U vas idealniy ves.\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int num;
//     for(num = 1; num <= 11; num++)
//     {
//         if (num % 3 == 0)
//         putchar('$');
//         else
//         putchar('*');
//         putchar('#');
//         putchar('%');
//     }
//     putchar('\n');
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int i = 0;
//     while(i < 3)
//     {
//         switch (i++)
//         {
//         case 0 : printf("fat ");
//         case 1 : printf("hat ");
//         case 2 : printf("cat ");
//            break;
        
//         default:
//             printf("Oh no!");
//         }
//         putchar('\n');
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     char ch;
//     int lc = 0;  // ������� �������� ��������
//     int uc = 0;  // ������� ��������� ��������
//     int oc = 0;  // ������� ������ ��������

//     while ((ch = getchar()) != '#')
//     {
//         if('a' <= ch && ch <= 'z')
//         lc++;

//         else if(!(ch <= 'A'-1) && !(ch >= 'Z'+1))
//         uc++;
//          else 
//         oc++;
//     }
//     printf("%d ctrochnih, %d propisnih, %d drugih", lc, uc, oc);
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     char ch;

//     while ((ch = getchar()) != '#')
//     {
//         if(ch != '\n')
//         {
//         // continue;
//         printf("Shag 1\n");
//         if(ch == 'c'){

//         }
//         // continue;
//         else if(ch == 'b')
//         break;
//         else if (ch == 'h')
//         printf("Shag 3\n");

//         else
//         {
//             printf("Shag 2\n");
//             printf("Shag 3\n");
//         // goto laststep;
//         // printf("Shag 2\n");
//         // laststep:  printf("Shag 3\n");
    
//     }
// }
//  }
//     printf("Gotovo\n");
//     return 0;
// }


// #include <stdio.h>

// int main(void)
// {
//     char ch;

//     while ((ch = getchar()) != '#')
//     {
//         /* ���������� ������� ������ */
//         if (ch != '\n')
//         {
//             printf("Shag 1\n");

//             /* ���� 'c' � ���������� Shag 2 � Shag 3 */
//             if (ch == 'c')
//             {
//                 /* ������ ������ �� ������ */
//             }
//             /* ���� 'b' � ������� �� ����� */
//             else if (ch == 'b')
//             {
//                 break;
//             }
//             /* ���� 'h' � ������� ������ Shag 3 */
//             else if (ch == 'h')
//             {
//                 printf("Shag 3\n");
//             }
//             /* ����� � Shag 2 � Shag 3 */
//             else
//             {
//                 printf("Shag 2\n");
//                 printf("Shag 3\n");
//             }
//         }
//     }

//     printf("Gotovo\n");
//     return 0;
// }


// #include <stdio.h> 

// int main()
// {
//     char ch;
//     int numprob,numsim,numenter;
//     numprob = 0;
//     numsim = 0;
//     numenter = 0;
// printf("Vveditr # esli hotite vity\n");
//     while ((ch = getchar()) != '#')
//     {
//         if(ch == ' '){
//         numprob++;
//         continue;}
//         if(ch == '\n')
//         numenter++;
//         else {
//             numsim++;
//         }
// printf("Vveditr # esli hotite vity\n");
//     }

// printf("probelov: %d\nenterov: %d\nsimvolov otlichnih: %d\n",numprob, numenter, numsim);

// return 0;
    
// }


// #include <stdio.h>

// int main(void)
// {
//     char ch;
//     int numprob = 0;   // �������
//     int numenter = 0;  // �������� ������
//     int numsim = 0;    // ��������� �������

//     printf("Vvodite simvoly (# dlya vyhoda):\n");

//     while ((ch = getchar()) != '#')
//     {
//         // ������������ ��������� ����� ��� ������� Enter
//         if (ch == '\n')
//         {
//             numenter++;
//             continue;
//         }

//         if (ch == ' ')
//             numprob++;
//         else
//             numsim++;

//         printf("Vvodite simvoly (# dlya vyhoda):\n");
//     }

//     printf("\n--- Itogi ---\n");
//     printf("Probelov: %d\n", numprob);
//     printf("Perehodov stroki: %d\n", numenter);
//     printf("Ostalnyh simvolov: %d\n", numsim);

//     return 0;
// }

// #include<stdio.h>

// int main(void)
// {
//     char ch;
//     int num = 1;

//     while((ch = getchar()) != '#'){

//         if(ch == '\n')
//         continue;

//     if((num % 9) != 0){
//         num++;
//         printf(" %c %%c: %d  ", ch, ch);
//         continue;
//     }

  
//         else{
//             printf("\n");
//             num = 1;    
//         }
//     }
//         return 0;
//     }


// #include <stdio.h>

// int main(void)
// {
//     char ch;
//     int num = 0;

//     while ((ch = getchar()) != '#') {

//         if (ch == '\n')
//             continue;

//         printf("%c %d  ", ch, ch);
//         num++;

//         if (num % 8 == 0) {
//             printf("\n");
//         }
//     }

//     return 0;
// }


// #include <stdio.h>

// int main(void)
// {
//     int num;
//     int numse = 0;
// int sumpolozitelnih, sumne;
// sumne = 0;
// sumpolozitelnih = 0;
//     int numchet, numnechet;
//    float numchetsredne, numnechetsredne;
//    numchetsredne = numnechetsredne = 0;
// numchet = numnechet = 0;

//     while((scanf("%d", &num)) != 0)
// {
//     numse++;

//     if((num % 2) == 0){
//         ++numchet;
//         sumpolozitelnih+=num;
//         numchetsredne = (float)sumpolozitelnih / numchet;
        
//     }

//     else{
//         ++numnechet;
//         sumne+=num;
//         numnechetsredne = (float)sumne / numnechet;
//     }
// }
// printf("%d vsego vvedeno cifr %d chetnih %d nechetnih %.1f srednee chet i %.1f ne sredne chet\n",
// numse, numchet, numnechet, numchetsredne, numnechetsredne);

// return 0;
// }



// #include <stdio.h>

// int main(void)
// {
//     int num;
//     int numchet = 0, numnechet = 0;
//     int sumpolozitelnih = 0, sumne = 0;

//     printf("Vvodite celie chisla (0 dlya okonchaniya):\n");

//     while (scanf("%d", &num) == 1 && num != 0)
//     {
//         if (num % 2 == 0)
//         {
//             numchet++;
//             sumpolozitelnih += num;
//         }
//         else
//         {
//             numnechet++;
//             sumne += num;
//         }
//     }

//     float numchetsredne = (numchet > 0) ? (float)sumpolozitelnih / numchet : 0;
//     float numnechetsredne = (numnechet > 0) ? (float)sumne / numnechet : 0;

//     int total = numchet + numnechet;
//     float procentchet = (total > 0) ? ((float)numchet / total) * 100 : 0;
//     float procentnechet = (total > 0) ? ((float)numnechet / total) * 100 : 0;

//     printf("\nChetnih: %d, srednee: %.2f, procent: %.1f%%\n", numchet, numchetsredne, procentchet);
//     printf("Nechetnih: %d, srednee: %.2f, procent: %.1f%%\n", numnechet, numnechetsredne, procentnechet);

//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     char ch;
//     int num = 0;

//     while ((ch = getchar()) != '#')
//     {
//       if(ch == '.') 
//       {
//       printf("!");
//       num++;
//       }


//       else if(ch == '!')
//       {
//       printf("!!");
//       num++;
//       }

//       else
//       printf("%c",ch);
//     }

//     printf("\nstolko bilo zamen:%d", num);
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     char ch;
//     int num = 0;

//     while ((ch = getchar()) != '#')
//     {
//         switch (ch)
//         {
//         case '.':
//             printf("!");
//             num++;
//             break;

//         case '!':
//         printf("!!");
//         num++;
//         break;

//         default:
    
//         putchar(ch);
//             break;
//         }
    
//     }
//     printf("\n %d sstolko bilo izmeniy", num);
    
// }

// #include <stdio.h>

// int main(void){

//     char ch;
//     int num = 0;
//     char res;

//     while ((ch = getchar()) != '#')
//     {
//        if(res == 'e' && ch =='i')
//        num++;

//        res = ch;
//     }

//     printf("%d", num);
//     return 0;
// }

// #include <stdio.h>
// #define dollarVchas (1*10)
// #define dollarovsverhurochnih (10*1.5)
// #define CHASOV 40
// #define trista 300
// #define nalogtrista (300 * 0.15)
// #define sled (300+150)
// #define nalogs450 (150 * 0.20)


// int main()
// {
//     int chasov;
//     float zarabotal = 0.0;
//     float Nalogi = 0.0;


//     while(scanf("%d", &chasov) == 1 && chasov != 0){
//      zarabotal = 0.0;
//      Nalogi = 0.0;
//     if (chasov <= 40)
//     {
//         zarabotal+= chasov * 10;
        
//     }
//     else if(chasov > 40)
//     zarabotal+=(chasov - CHASOV) * dollarovsverhurochnih + (40 * dollarVchas);
    
//     if(zarabotal < trista){
//     Nalogi = (float)zarabotal * 0.15;
//     zarabotal -= Nalogi;
//     }

//     else if (zarabotal < sled)
//     {
//         Nalogi =((float)zarabotal - trista) * 0.20;
//         zarabotal-= Nalogi + nalogtrista;
//     }

//     else
//     {
//         Nalogi = ((float)zarabotal - sled) * 0.25;
//         zarabotal -= Nalogi + nalogtrista + nalogs450;
//     }

//     printf("%.2f$ chistogo zarobotka za %d chasov\n", zarabotal, chasov);
//     printf("vvedite kolichestbvo chasov ili vidite cherez sifru: 0\n");
// }
// printf("poka");
// return 0;
// }









// #include <stdio.h>

// #define RATE 10.0               // ������ $10/���
// #define OVERTIME_RATE 15.0      // ������ �� ������������ (10 * 1.5)
// #define STD_HOURS 40            // ����������� ������� ������
// #define TAX1_LIMIT 300
// #define TAX2_LIMIT 150

// int main(void)
// {
//     int hours;
//     double gross = 0.0;   // ���������
//     double tax = 0.0;     // �����
//     double net = 0.0;     // ������ ��������
    
//     printf("VVedite kolichestvo chasov (0 dlya vihoda): ");

//     while (scanf("%d", &hours) == 1 && hours != 0)
//     {
//         // ---- ���������� ----
//         if (hours <= STD_HOURS)
//             gross = hours * RATE;
//         else
//             gross = STD_HOURS * RATE +
//                     (hours - STD_HOURS) * OVERTIME_RATE;

//         // ---- ����� ----
//         if (gross <= TAX1_LIMIT)
//         {
//             tax = gross * 0.15;
//         }
//         else if (gross <= TAX1_LIMIT + TAX2_LIMIT)
//         {
//             tax = TAX1_LIMIT * 0.15 +
//                   (gross - TAX1_LIMIT) * 0.20;
//         }
//         else
//         {
//             tax = TAX1_LIMIT * 0.15 +
//                   TAX2_LIMIT * 0.20 +
//                   (gross - TAX1_LIMIT - TAX2_LIMIT) * 0.25;
//         }

//         net = gross - tax;

//         printf("\nNachisleno: %.2f $\n", gross);
//         printf("Nalogi: %.2f $\n", tax);
//         printf("chistaya zarplata: %.2f $\n\n", net);

//         printf("Vvedite kolichesvo chasov (0 dlya vihoda): ");
//     }

//     printf("poka.\n");
//     return 0;
// }





// #include <stdio.h>

// // #define RATE 10.0               // ������ $10/���
// // #define OVERTIME_RATE 15.0 // ������ �� ������������ (10 * 1.5)
// #define STD_HOURS 40            // ����������� ������� ������
// #define TAX1_LIMIT 300
// #define TAX2_LIMIT 150

// int main(void)
// {
//     double OVERTIME_RATE;
//     double RATE;
//     int ch;
//     int hours;
//     double gross = 0.0;   // ���������
//     double tax = 0.0;     // �����
//     double net = 0.0;     // ������ ��������
//     //1) $8.75 |  2) $9.33  | 3) $10.00 | 4) $11.20
    
    
// printf("1) stavka $8.75/chas, 2) stavka $9.33/chas 3) stavka $10.00/chas 4) $11.20/chas 5) vihod\n");
//     while ((scanf("%d", &ch) == 1) && ch != 5)
//     {
       
        
      
//         switch (ch)
//         {
//         case 1:
//             RATE = 8.75;
//             OVERTIME_RATE = RATE * 1.5;
//             break;

//         case 2:
//             RATE = 9.33; 
//             OVERTIME_RATE = RATE * 1.5;
//             break;
        
//         case 3:
//             RATE = 10.00;
//             OVERTIME_RATE =  RATE * 1.5;
//             break;

//         case 4:
//             RATE = 11.20; 
//             OVERTIME_RATE = RATE * 1.5;
//             break;
        
//         default:
//         printf("Vvedeno ne verno libo nazmite 5) chtob vity\n");
//             continue;
//         }

//         printf("VVedite kolichestvo chasov: ");
//         scanf("%d", &hours) == 1;
//         // ---- ���������� ----
//         if (hours <= STD_HOURS)
//             gross = hours * RATE;
//         else
//             gross = STD_HOURS * RATE +
//                     (hours - STD_HOURS) * OVERTIME_RATE;

//         // ---- ����� ----
//         if (gross <= TAX1_LIMIT)
//         {
//             tax = gross * 0.15;
//         }
//         else if (gross <= TAX1_LIMIT + TAX2_LIMIT)
//         {
//             tax = TAX1_LIMIT * 0.15 +
//                   (gross - TAX1_LIMIT) * 0.20;
//         }
//         else
//         {
//             tax = TAX1_LIMIT * 0.15 +
//                   TAX2_LIMIT * 0.20 +
//                   (gross - TAX1_LIMIT - TAX2_LIMIT) * 0.25;
//         }

//         net = gross - tax;

//         printf("\nNachisleno: %.2f $\n", gross);
//         printf("Nalogi: %.2f $\n", tax);
//         printf("chistaya zarplata: %.2f $\n\n", net);

//         printf("1) stavka $8.75/chas, 2) stavka $9.33/chas 3) stavka $10.00/chas 4) $11.20/chas 5) vihod\n");
//     }

//     printf("poka.\n");
//     return 0;
// }


// #include <stdio.h>

// int main(void)
// {
//     int num;

//     printf("������� ������������� �����: ");
//     scanf("%d", &num);

//     if (num < 2)
//     {
//         printf("������� ����� ���.\n");
//         return 0;
//     }

//     for (int i = 2; i <= num; i++)
//     {
//         int is_prime = 1;

//         for (int j = 2; j * j <= i; j++)
//         {
//             if (i % j == 0)
//             {
//                 is_prime = 0;
//                 break;
//             }
//         }

//         if (is_prime)
//             printf("%d ", i);
//     }

//     printf("\n");

//     return 0;
// }


// #include <stdio.h>
// #define ODIN 17850
// #define GLAVA 23900
// #define BRAK 29750
// #define BRAKRAZ 14875
// int main(void)
// {
//     double Zarabotal, sucnalog, nalog, posleVIplaty;
//     char ch; 
//     int true = 0;

//     for( ;(scanf("%lf", &Zarabotal)) == 1 && Zarabotal > 0; ){
//         printf("teper vvedite v kakuy katigoriu vi vhodide:\n Odin:a \n glava semeistva: b\n V bake: c\n Brak no razdelno: d\n");
//         while (true <= 0)
//         {
//            for ( ;(ch = getchar()) && true <= 0; ){
//             switch (ch)
//             {
//             case 'a':
//                 nalog = ODIN;
//                 break;
//             case 'b':
//                 nalog = GLAVA;
//                 break;
//             case 'c':
//                 nalog = BRAK;
//                 break;
//             case 'd':
//                 nalog = BRAKRAZ;
//                 break;
//             case '#':
//             printf("pokeda\n");
//             return 0;
              
            
            
//             default:
//             printf("Ne verno vibrano esli hotie zakonchit vvedite: # \n");
            
//                 continue;
//             }

//             true = 1;

//             /* code */}
//         }

//         if(Zarabotal <= nalog)
//         {
//             sucnalog = Zarabotal * 0.15;
//             posleVIplaty = Zarabotal - sucnalog;
//         }

//         else{
//             sucnalog = (Zarabotal - nalog) * 0.28 + (nalog * 0.15);
//             posleVIplaty = Zarabotal - sucnalog;
//         }
        
//         printf("\nVi zarabotali stolko do viplaty: %.2f\n Vi aplatily stolko nalogov: %.2f\n Vasha chistaya zp: %.2f\n",
//         Zarabotal, sucnalog, posleVIplaty);
//         true = 0;
//     } 

//     printf("Dosvidaniya");

//     return 0;

// }


// #include <stdio.h>
// #define ARTISHOKI 2.05
// #define SVEKLA 1.15
// #define MORKOV 1.09
// #define SKIDKA 0.55
// #define SUMMA 100
// #define DOSTAVKA 6.50
// #define SREDNEDOSAVKA 14.00
// #define BIGDOSTAVKA 0.50
// #define dos 5
// #define sreddos 20 

// int main(void)
// {
//     double artifunt, sveklafunt, morkovfunt, funt, dostavka;
//     double arti, svekla, morkov, summa, konechnayasumma, skidka, allsuma; 
//     double otart, otsvek, otmork;
//     char ch;
//     int pokup = 0;
//     int sok = 0;
//     funt = 0;
//     skidka = 0;
//     arti = svekla = morkov = summa = 0;
//     allsuma = 0;
//     otart = otsvek = otmork = 0;
//     dostavka = 0;
//     double summavege = 0;
    
//     while (pokup <= 0)
//     {
//         printf("VVedite cho vi hotite vzyat:\n");
//         printf("artishok : (a)\nsvekla : (s)\nmorkovka : (m)\n");
//         scanf(" %c", &ch);

//         switch (ch)
//         {
//         case 'a':
//         printf("vvedite skolko funtov vozimete ili q chtob zakazat\n");
//             scanf("%lf", &artifunt);
//             otart += artifunt;
//             funt+=artifunt;
//             arti+=artifunt * ARTISHOKI;
//             break;

//          case 's':
//           printf("vvedite skolko funtov vozimete ili q chtob zakazat\n");
//             scanf("%lf", &sveklafunt);
//             otsvek += sveklafunt;
//             funt+=sveklafunt;
//             svekla+=sveklafunt * SVEKLA;
//             break;

//          case 'm':
//           printf("vvedite skolko funtov vozimete ili q chtob zakazat\n");
//             scanf("%lf", &morkovfunt);
//             otmork += morkovfunt;
//             funt+=morkovfunt;
//             morkov+=morkovfunt * MORKOV;
//             break;

//          case 'q':
//             printf("Spasibo za zakaz\n");
//             pokup = 1;
//             break;
        
        
//         default:
//         printf("net takogo ovosha\n");
//             continue;
//         }
//     }

// summavege = allsuma = summa = arti + svekla +  morkov;

// if(summa >= SUMMA){
    
//      (summa -= (skidka =(summa*SKIDKA)));
//      sok = 1;
    
// }

// if(funt <= dos)
// {
//   konechnayasumma =  summa + DOSTAVKA;
//   allsuma += DOSTAVKA;
//   dostavka = DOSTAVKA;
// }
// else if(funt > dos && funt <sreddos)
// {
//     konechnayasumma = summa + SREDNEDOSAVKA;
//     allsuma += SREDNEDOSAVKA;
//     dostavka = SREDNEDOSAVKA;
// }

// else{
//     konechnayasumma = (summa + SREDNEDOSAVKA) + ((funt - sreddos) * BIGDOSTAVKA);
//     allsuma += (dostavka = (SREDNEDOSAVKA + ((funt - sreddos) * BIGDOSTAVKA)));
// }

// printf("summa: %.2f$\n", summavege);
// if(arti > 0)
// {
//     printf("vzyato artishokov na %.2f$ i vesit %.2f funtov\n", arti, otart);
// }
// if(svekla > 0)
// {
//     printf("vzyato svekli na %.2f$ i vesit %.2f funtov\n",svekla, otsvek);
// }
// if(morkov > 0)
// {
//     printf("vzyato morkovi na %.2f$ i vesit %.2f funtov\n", morkov, otmork);
// }
// if(sok == 1){
//     printf("Skidka %.2f$\nc uchetom skidki cena: %.2f$\n",skidka, summa);
// }
// printf("Dostavka %.2f$\nitogovaya summa:  %.2f$\n", dostavka , konechnayasumma);
// if(sok == 1){printf("bezucheta ckidki: %.2f$", allsuma);}
// }


// #include <stdio.h>

// int main(void)
// {
//     char ch;
//     while ((ch = getchar()) != '#')
//     {
//         putchar(ch);
//     }
    
// }


// #include <stdio.h>

// int main(void)
// {
//     char ch;
//     while ((ch = getchar()) != EOF)
//     {
//         putchar(ch);
//     }
    
// }

// #include <stdio.h>
// void display(char cr, int lines, int width);
// int main(void)
// {
//     int ch;
//     int rows, cols;

//     printf("VVedite simvol i dva celih chisla:\n");

//     while((ch = getchar()) != '\n')
//     {
//         scanf("%d %d", &rows, &cols);
//         display(ch, rows, cols);

//         printf("Vvedite eshe odin simvol i dva celih chisla;\n");
//         printf("Dlya zaversheniya vvedite symvol novoi stroki.\n");

//     }
//     printf("��������� ���������.\n");

//     return 0;
// }

// void display(char cr, int lines, int width)
// {
//     int row, col;

//     for(row = 1; row <= lines; row++)
//     {
//         for(col = 1; col <= width; col++)
//     putchar(cr);
//     putchar('\n');
//     }
// }


// #include <stdio.h>

// void display(char cr, int lines, int width);

// int main(void)
// {
//     int ch;
//     int rows, cols;

//     printf("Vvedite symvol i dva celih chisla:\n");
//     while((ch = getchar()) != '\n')
//     {
//         if(scanf("%d %d", &rows, &cols) != 2)
//         break;

//         display(ch, rows, cols);
//         while(getchar() != '\n')
//         continue;
//         printf("Vvedite eshe odin symvol i dva celih chisla;\n");
//         printf("Dlya zaversheniya vvedite symvol novoi stroki.\n");
//     }
// printf("programma zavershena\n");
// return 0;
// }

// void display(char cr, int lines, int width)
// {
//     int row, col;
//     for(row = 1; row <= lines; row++)
//     {
//         for(col = 1; col <= width; col++)
//         putchar(cr);
//         putchar('\n');
//     }
// }

// #include <stdio.h>
// #include <stdbool.h>
// long get_long(void);

// bool bad_limits(long begin, long end, long low, long high);

// double sum_squares(long a, long b);

// bool bad_limits(long begin, long end, long low, long high);

// int main(void){
//  const long MIN = -10000000L;
//  const long MAX = +10000000L;
//  long start;
//  long stop;
//  double answer;

//  printf("Eto programma dschislyet summu kvadratov "
// "celih chisel v zadannom diapazone \na vverhniya ne doljna bit "
// "menshe -10000000, \na verhnyea ne dolzna bit "
// "bolshe +10000000.\nvvedite znacheniya "
// "predelov (dlya zaversheniya vvedite vvedite 0 dlya oboih predelov): \n"
// "nijniy predel: ");

// printf("nijniy predel");
// start = get_long();
// printf("vverhniy predel: ");
// stop = get_long();

// while (start !=0 || stop !=0)
// {
//     if (bad_limits(start, stop, MIN, MAX))
//     printf("Povtorite popitku.\n");
//     else
//     {
//         answer = sum_squares(start, stop);
//         printf("Cumma kvadratov celih chisel ");
//         printf("ot %ld do %ld ravna %g\n", start, stop, answer);
//     }
//     printf("Vvedite znacheniya predelov (dlya zaversheniya \
// vvedite 0 dlya oboih predelov) :\n");
// printf("nijniy predel: ");
// start = get_long();
// printf("vverhniy predel: ");
// stop = get_long();

// }
// printf("programma zavershena");
//     return 0;
// }

// long get_long(void)
// {
//     long input;
//     char ch;
//     while (scanf("%ld", &input) != 1)
//     {
//         while ((ch = getchar()) != '\n')
        
//             putchar(ch);
//             printf(" ne yavlyaetsya celochislennim.\nVvedite ");
//             printf("celoe chislo, takoe kak 25, -178 ili 3: ");
     
//     }
//       return input;
// }

// double sum_squares(long a, long b)
// {
//     double total = 0;
//     long i;

//     for(i = a; i <= b; i++)
//     total += (double)i * (double)i;

//     return total;
// }

// bool bad_limits(long begin, long end, long low, long high){

//     bool not_good = false;
//     if(begin > end)
//     {
//         printf("%ld ne menshe chem %ld.\n", begin, end);
//         not_good = true;
//     }
//     if(begin < low || end < low)
//     {
// printf("Znacheniya doljni bit ravni %d ili bolhe.\n", low);
// not_good = true;
//     }
//     if(begin > high || end > high)
//     {
//         printf("Znachenya doljni bit ravni %d ili menshe.\n", high);
//         not_good = true;
//     }
//     return not_good;
// }


// #include <stdio.h>
// char get_choice(void);
// char get_first(void);
// int get_int(void);
// void count(void);

// int main(void)
// {
//     int choice;
//     // void count(void);

//     while ((choice = get_choice()) != 'v')
//     {
//         switch (choice)
//         {
//         case 'c': printf("Pokupaite deshevo, prodavaite dorogo.\n");
//             break;
//         case 'z': putchar('\a');
//             break;
//         case 'p': count();
//             break;
//         default: printf("oshibka\n");
//             break;
//         }
//     }
//     printf("Programma zavershena.\n");
//     return 0;
// }

// void count(void)
// {
//     int n, i;
//     printf("Do kakogo predela vesti chet? Vvedite veloe chislo:\n");
//     n = get_int();
//     for(i =1; i <= n; i++)
//     printf("%d\n", i);
//     while (getchar() != '\n')
//     {
//         continue;
//     }
// }

// char get_choice(void)
// {
//     int ch;
//     printf("Vvedite bukvu, soootevestvuushuu vibranomu vaiantu:\n");
//     printf("c. sovet            z. zvonok\n");
//     printf("p. podchet          v. vihod\n");
//     ch = get_first();
//     while(ch != 'c' && ch != 'z' && ch != 'p' && ch!= 'v')
//     {
//         printf("viberite c,z,p ili v.\n");
//         ch = get_first();
//     }
//     return ch;
// }

// char get_first(void)
// {
//     int ch;
//     ch = getchar();
//     while (getchar() != '\n')
//         continue;
//         return ch;
// }

// int get_int(void)
//     {
//         int input;
//         char ch;
//         while(scanf("%d", &input) != 1)
//         {
//          while((ch = getchar()) != '\n')
//         putchar(ch);
//         printf(" ne yavlyaetsya celochislennim.\nVvedite ");
//         printf("celoe chislo, takoe kak 25, -178 ili 3: ");
//         }
//         return input;
//     }



// #include <stdio.h>

// int main()
// {
//     int ch;
//     int n = 0;
//     while ((ch = getchar()) != EOF)
//     {
//         putchar(ch);
//         ++n;
//     }
//     printf("stolko symvolov vivel fail %d", n);
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     char ch;
//     int n;

//     while ((ch = getchar()) != EOF)
//     {
//         if(ch == '\n'){
//             continue;
//         }
//         else if(ch == ' ')
//         continue;
//         putchar(ch);
//         printf("%d\n", ch);
//     }
//     return 0;
// }



// #include <stdio.h>
// #include <ctype.h>

// int main(void)
// {
//     int ch;            // ����������� int
//     int count = 0;     // ������� ��� ������ �� 10 � ������

//     while ((ch = getchar()) != EOF)
//     {
//         // ���� ��� ������� ������ � ������� ��� \n � ������ ����� ������
//         if (ch == '\n') {
//             printf("\\n %3d\n", ch);
//             count = 0;     // ����� ������
//             continue;
//         }

//         // ���������
//         if (ch == '\t') {
//             printf("\\t %3d  ", ch);
//         }
//         // ��������� ������������ (< 32 ��� == 127)
//         else if (ch < 32 || ch == 127) {
//             printf("^%c %3d  ", ch + 64, ch);
//         }
//         // ���������� �������
//         else {
//             printf("%c %3d  ", ch, ch);
//         }

//         count++;

//         // ������ 10 ������� � ����� ������
//         if (count == 10) {
//             printf("\n");
//             count = 0;
//         }
//     }

//     return 0;
// }

// 



// #include <stdio.h>
// #include <ctype.h>

// int main(void)
// {
//     int ch;            // getchar() -> ����������� int
//     int num_lower = 0; // �������� �����
//     int num_upper = 0; // ��������� �����
//     int num_other = 0; // �� ���������

//     while ((ch = getchar()) != EOF)
//     {
//         if (islower(ch))          // ��������: �������� �����
//             num_lower++;
//         else if (isupper(ch))     // ��������: ��������� �����
//             num_upper++;
//         else
//             num_other++;          // ����� ������ ������
//     }

//     printf("Propisnyh: %d\n", num_upper);
//     printf("Strochnyh: %d\n", num_lower);
//     printf("Ostalnyh:  %d\n", num_other);

//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     int ch;
//     int letters = 0;      // ���������� ����
//     int words = 0;        // ���������� ����
//     int in_word = 0;      // ��������� �� ������ �����

//     while ((ch = getchar()) != EOF)
//     {
//         // ���� ������ ��� ����� ������ � ����� �����������
//         if (ch == ' ' || ch == '\n' || ch == '\t')
//         {
//             in_word = 0;
//             continue;
//         }

//         // ���� ��� �����
//         if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//         {
//             letters++;

//             if (!in_word)      // ���� � ����� �����
//             {
//                 words++;
//                 in_word = 1;
//             }

//             continue;
//         }

//         // ����� ������ ������ � �� ����� ? ������� �� �����
//         in_word = 0;
//     }

//     printf("����: %d, ����: %d, ������� ���-�� ���� � �����: %.2f\n",
//            letters, words,(double)letters / words);

//     return 0;
// }



// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
//     int ch;
//     int letters = 0;    // ���������� ����
//     int words = 0;      // ���������� ����
//     int in_word = 0;    // 1 ���� ������ ������ �����

//     while ((ch = getchar()) != EOF)
//     {
//         if (isalpha(ch))   // �����?
//         {
//             letters++;

//             if (!in_word)  // �������� ����� �����
//             {
//                 words++;
//                 in_word = 1;
//             }
//         }
//         else               // ������, ����������, ���������, \n � �.�.
//         {
//             in_word = 0;   // ����� �����������
//         }
//     }

//     if (words > 0)
//         printf("Bukv: %d, Slov: %d, Srednee: %.2f\n",
//                letters, words, (double)letters / words);
//     else
//         printf("Slov ne naideno\n");

//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int guess = 1;
//     printf("Vvibetite celoe chislo v intervale ot 1 do 100. Ya poprobuyu ugadat ");
//     printf("ego.\nNazmite klavishu y, eski moya dogadka verna i ");
//     printf("\nklavishi n v protivnom slychae.\n");
//     printf("Vvashim chislom yavlyetsya %d?\n", guess);
//     while (getchar() != 'y')
//     printf("Ladno togda eto %d?\n", ++guess);
    
//     printf("Ya znal, chto y menya poluchitsa");
//     return 0;
    
// }

// #include <stdio.h>

// int main(void)
// {
//     int num = 50;
//     char ch;
//     char blml;
//    int  horosho = 1;
//     printf("Vvibetite celoe chislo v intervale ot 1 do 100. Ya poprobuyu ugadat ");
//     printf("ego.\nNazmite klavishu y, eski moya dogadka verna 'i' ");
//     printf("\nklavishi 'n' v protivnom slychae.\n");
//     printf("%d", num);
// printf("Nazmite klavishu y, eski moya dogadka verna i \nklavishi n v protivnom slychae\n");
//     for( ;(ch = getchar())!= 'i'; )
//     {
//         printf("horosho eto chislo menshe ili bolse nazvanogo?\n");
//         printf("esli bolse 'A; esli menhse 'B'");
//         while (horosho)
//         {
        
//         blml = getchar();
     
        
//         if(blml == 'A' || blml == 'B'){
//             switch (blml)
//             {
//             case 'A':
//                 num = 75;
//                 break;

//                 case 'B':
//                 num = 25;
//                 break;
            
//             default:
//                 break;
//             }
//         }
//         else {
//             continue;
//         }

//     }


// printf("%d",num);
    
// printf("Nazmite klavishu y, eski moya dogadka verna i \nklavishi n v protivnom slychae\n");
    
//     }
//     printf("ura ya molodec\n");
//     return 0;
// }


// #include <stdio.h>

// int main(void)
// {
//     int low = 1;          // ������ �������
//     int high = 100;       // ������� �������
//     int guess;
//     char answer;

//     printf("Zagadaite choslo ot 1 do 100.\n");
//     printf("Ya budu outatsya ego ugadat.\n");
//     printf("Otvechaite:\n");
//     printf("'b' esli moe chislo bolshe zagadanogo\n");
//     printf("'m' esli menshe zadumanogo\n");
//     printf("'y' esli ya ugadal!\n\n");

//     while (low <= high)
//     {
//         guess = (low + high) / 2;   // �������� ���������
//         printf("Vashe chislo %d? (b/m/y): ", guess);

//         answer = getchar();
//         while (getchar() != '\n');  // ������� ����� 1 100 st 50

//         if (answer == 'y')
//         {
//             printf("Otlichno! Ya ugadal chislo %d!\n", guess);
//             break;
//         }
//         else if (answer == 'b')
//         {
//             low = guess + 1;        // ���������� ������
//         }
//         else if (answer == 'm')
//         {
//             high = guess - 1;       // ���������� ������
//         }
//         else
//         {
//             printf("Vvedite tolko b, m ili y.\n");
//         }
//     }

//     return 0;
// }





// #include <stdio.h>
// char get_choice(void);
// char get_first(void);
// int get_int(void);
// void count(void);

// int main(void)
// {
//     int choice;
//     // void count(void);

//     while ((choice = get_choice()) != 'v')
//     {
//         switch (choice)
//         {
//         case 'c': printf("Pokupaite deshevo, prodavaite dorogo.\n");
//             break;
//         case 'z': putchar('\a');
//             break;
//         case 'p': count();
//             break;
//         default: printf("oshibka\n");
//             break;
//         }
//     }
//     printf("Programma zavershena.\n");
//     return 0;
// }

// void count(void)
// {
//     int n, i;
//     printf("Do kakogo predela vesti chet? Vvedite veloe chislo:\n");
//     n = get_int();
//     for(i =1; i <= n; i++)
//     printf("%d\n", i);
//     while (getchar() != '\n')
//     {
//         continue;
//     }
// }

// char get_choice(void)
// {
//     int ch;
//     printf("Vvedite bukvu, soootevestvuushuu vibranomu vaiantu:\n");
//     printf("c. sovet            z. zvonok\n");
//     printf("p. podchet          v. vihod\n");
//     ch = get_first();
//     while(ch != 'c' && ch != 'z' && ch != 'p' && ch!= 'v')
//     {
//         printf("viberite c,z,p ili v.\n");
//         ch = get_first();
//     }
//     return ch;
// }

// char get_first(void)
// {
//     int ch;
//     ch = getchar();
//     while (getchar() != '\n')
//         continue;
//         return ch;
// }

// int get_int(void)
//     {
//         int input;
//         char ch;
//         while(scanf("%d", &input) != 1)
//         {
//          while((ch = getchar()) != '\n')
//         putchar(ch);
//         printf(" ne yavlyaetsya celochislennim.\nVvedite ");
//         printf("celoe chislo, takoe kak 25, -178 ili 3: ");
//         }
//         return input;
//     }




// #include <stdio.h>
// #include <ctype.h>
// char get_choice(void);
// char get_first(void);
// int get_int(void);
// void count(void);

// int main(void)
// {
//     int choice;
//     // void count(void);

//     while ((choice = get_choice()) != 'v')
//     {
//         switch (choice)
//         {
//         case 'c': printf("Pokupaite deshevo, prodavaite dorogo.\n");
//             break;
//         case 'z': putchar('\a');
//             break;
//         case 'p': count();
//             break;
//         default: printf("oshibka\n");
//             break;
//         }
//     }
//     printf("Programma zavershena.\n");
//     return 0;
// }

// void count(void)
// {
//     int n, i;
//     printf("Do kakogo predela vesti chet? Vvedite veloe chislo:\n");
//     n = get_int();
//     for(i =1; i <= n; i++)
//     printf("%d\n", i);
//     while (getchar() != '\n')
//     {
//         continue;
//     }
// }

// char get_choice(void)
// {
//     int ch;
//     printf("Vvedite bukvu, soootevestvuushuu vibranomu vaiantu:\n");
//     printf("c. sovet            z. zvonok\n");
//     printf("p. podchet          v. vihod\n");
//     ch = get_first();
//     while(ch != 'c' && ch != 'z' && ch != 'p' && ch!= 'v')
//     {
//         printf("viberite c,z,p ili v.\n");
//         ch = get_first();
//     }
//     return ch;
// }

// char get_first(void)
// {
//     int ch;
//     ch = getchar();
//     while (getchar() != '\n')
//         continue;
//         return ch;
// }
// // char get_first(void)
// // {
// //     int ch;
// //     while (isspace(ch = getchar()))   /* ���� ������������ ������ */
// //         ;

// //     while (getchar() != '\n')         /* ������ ���������� ������� */
// //         ;

// //     return ch;
// // }




// int get_int(void)
//     {
//         int input;
//         char ch;
//         while(scanf("%d", &input) != 1)
//         {
//          while((ch = getchar()) != '\n')
//         putchar(ch);
//         printf(" ne yavlyaetsya celochislennim.\nVvedite ");
//         printf("celoe chislo, takoe kak 25, -178 ili 3: ");
//         }
//         return input;
//     }


// #include <stdio.h>
// void nalog(int n, double m);
// // #define DEFPLATA 10
// #define VERHPLATA 1.5                //proc
// #define PERSTAVKA 0.15
// #define VTORSTAKA 0.20
// #define OSTSTAVKA 0.25
// #define FIRSTSTAVKA 300
// #define DOUBLESTAVKA 450
// #define NORMCHAS 40
// int main(void)
// {
//     int chas = 0;
//     char ch;
//     int pravda = 1;
//     double stavchas = 0;
//     printf("privet vi zarabotali dengi\n i nuzno chtob vi veli vashu stavku v chas\n");
//     printf("1 - 8.75$\n2 - 9.33$\n3 - 10.00$\n4 - 11.20$\n 5 - vihod\n");

//     while (pravda)
//     {
//         ch = getchar();
//         if(ch == ' ' || ch == '\n' || ch == '\t')
//         {
//             continue;
//         }

//         switch (ch)
//         {
//         case '1':
//             stavchas = 8.75;
//             pravda = 0;
//             break;

//         case '2':
//         stavchas = 9.33;
//         pravda = 0;
//         break;

//         case '3':
//         stavchas = 10.00;
//         pravda = 0;
//         break;

//         case '4':
//         stavchas = 11.20;
//         pravda = 0;
//         break;

//         case '5':
//         printf("poka poka\n");
//         return 0;
        
//         default:
//             printf("vi dolzni vvesti stavku v chas \n1 - 8.75$\n2 - 9.33$\n3 - 10.00$\n4 - 11.20$\n 5 - vihod\n");
//             continue;
//         }
//     }
    
//     printf("teper vam nuzno vvetsi kollichestvo chasov kotorie vi otrabotali\n");

//     while (pravda != 1)
//     {
//        if(scanf("%d", &chas) != 1){
//         continue;
//        }
//        pravda = 1;
//     }
//     nalog(chas, stavchas);
    
// printf("dosvidanuya\n");
    
// return 0;
// }

// void nalog(int n, double m){
//     double cleanzar = 0;
//     double zarabatok = 0;
    
//     if(n > NORMCHAS)
//     {
//         zarabatok = ((n - NORMCHAS) * (m * VERHPLATA)) + (NORMCHAS * m);
//     }
//     else{
//      zarabatok = n * m;
//     }
    

//     double nal = 0;

// if (zarabatok <= FIRSTSTAVKA) 
// {
//     nal = zarabatok * PERSTAVKA;
// }
// else if (zarabatok <= DOUBLESTAVKA)
// {
//     nal = FIRSTSTAVKA * PERSTAVKA +
//           (zarabatok - FIRSTSTAVKA) * VTORSTAKA;
// }
// else
// {
//     nal = FIRSTSTAVKA * PERSTAVKA +
//           (DOUBLESTAVKA - FIRSTSTAVKA) * VTORSTAKA +
//           (zarabatok - DOUBLESTAVKA) * OSTSTAVKA;
// }

// zarabatok -= nal;

//     printf("Stolko vi zarabotali s uchetom naloga %.2f\n",zarabatok);

   
// }




// 


// #include <stdio.h>

// int main(void)
// {
// char oshibka;
// char primer;
// char ch;
// char simvol;
// int true = 1;
// double num1 = 0;
// double num2 = 0;
// double vivod = 0;
// printf("variant: a - slozenie\
//         b - vichitanie\nc - umnozenie i d - delenie\n");
// while (true)
// {
//     ch = getchar();

//  while ((oshibka = getchar()) != '\n');

//     switch (ch)
//     {
//     case 'a':
//         primer = '1';
//         simvol = '+';
//         break;
//     case 'b':
//         primer = '2';
//         simvol = '-';
//         break;
//     case 'c':
//         primer = '3';
//         simvol = '*';
//         break;
//     case 'd':
//         primer = '4';
//         simvol = '/';
//         break;
    
//      case 'q':
//         return 0;
//         break;
//     default:
//     printf("neverno - vvedite pravilniy variant: a - slozenie\
//         b - vichitanie\nc - umnozenie i d - delenie\n");
//        continue;
//     }

//  printf("Vvedite dva chisla: ");
//     while((scanf("%lf %lf",&num1, &num2)) != 2)
//     {
//         while((oshibka = getchar()) != '\n')
//         {
//             printf("%c", oshibka);
//             continue;
//         }
//         printf(" neyavlyaetsya chislom\n Vvedite chislo, takoe kak 2.5, -1.78E8 ili 3: 1\n");
//     }
    

//     if(primer == '1')
//     {
//         vivod = num1 + num2;
//     }
//     else if(primer == '2')
//     {
//      vivod  = num1 - num2;
//     }

//     else if(primer == '3')
//     {
//      vivod = num1 * num2;
//     }

//     else
//     {
//       vivod =  num1 / num2;
//  }

//  printf("%f %c %f = %f\n", num1, simvol, num2, vivod);
//  printf("variant: a - slozenie\
//         b - vichitanie\nc - umnozenie i d - delenie\n");
// }
// printf("poka poka");
// return 0;
// }

// #include <string.h>
// #include <stdio.h>

// #define NAME "GIGGATHINK, INC."
// #define ADDRESS "101 Megabuck Plaza"
// #define PLACE "Megapolis, CA 94904"
// #define WIDTH 40
// #define SPACE ' '

// void show_n_char(char ch, int num);

// int main(void)
// {
//     int spaces;
//     show_n_char('*', WIDTH);
//     putchar('\n');
//     show_n_char(SPACE, 12);
//     printf("%s\n", NAME);
//     spaces = (WIDTH - strlen(ADDRESS)) / 2;

//     show_n_char(SPACE, spaces);
//     printf("%s\n", ADDRESS);
//     show_n_char(SPACE,(WIDTH - strlen(PLACE)) / 2);

//     printf("%s\n", PLACE);
//     show_n_char('*', WIDTH);
//     putchar('\n');
//     return 0;
// }



// void show_n_char(char ch, int num)
// {
//     int count;
//     for (count = 1; count <= num; count++)
//     {
//         putchar(ch);
//     }
// }


// #include <stdio.h>
// int imin(int, int);

// int main(void)
// {
//     int evil1, evil2;
//     printf("vvedite dva celih chisla(ili q dlya zaversheniya):\n");
//     while (scanf("%d %d", &evil1, &evil2) == 2)
//     {
//     printf("menshim  iz dvuh chisrl %d i %d yavlyaetsya %d.\n",
//     evil1, evil2, imin(evil1, evil2));
//     printf("Vvedite dva celih chisla (ili q dlya zaversheniya):\n");
// }

// printf("Programma zavershena.\n");
// return 0;
// }

// int imin(int n, int m)
// {
//     int min;
//     if(n<m)
//     min = n;

//     else{
//         min = m;
//     }

//     return min;

//     /* �������, ������������ ����������� ��������, ������ ������ */ 
// // irnin(int n,int m)
// // { 
// // return (n < m) ? n : m;
// // }

// }

// #include <stdio.h>
// int imax(int, int);
// int main(void)
// {
//     printf("Naibolshim znacheniem iz %d i %d yavlyaetsya %d.\n", 3, 5, imax(3, 5));

//     printf("naibolshim znachenie, iz %d i %d yavlyetsya %d\n", 3,5, imax(3.0, 5.0));
//     return 0;
// }

// int imax(int n, int m)
// {
//     return (n > m ? n : m);
// }


// #include <stdio.h>
// void up_and_down(int n);

// int main(void)
// {
//     up_and_down(1);
//     return 0;
// }

// void up_and_down(int n)
// {
//     printf("Uroven %d: yacheika n %p\n", n, &n); //1
//     if(n<4)
//     up_and_down(n+2);
//     printf("Uroven %d: yacheika n %p pupka \n", n, &n); //2
// }


// #include <stdio.h>
// long fact(int n);
// long rfact(int n);

// int main(void)
// {
//     int num;
//     printf("Eto programma vichislyaet factorili.\n");
//     printf("Vvedite znacheniya v diapozone 0-12 (q dlya zaversheniya): \n");
//     while (scanf("%d", &num) == 1)
//     {
//         if (num < 0)
//         printf("Otricatelnie chisla ne hodyat.\n");
//         else if(num > 12)
//         printf("Vvodimoe znachenie doljno bit menshe 13.\n");
//         else{
//             printf("cikl: factorial %d = %ld\n", num, fact(num));
//             printf("rekursiya: factorial %d = %ld\n", num, rfact(num));
//         }
//         printf("Vvedite znachenie v diapozone 0-12 (q dlya zaversheniya):\n");
//     }
//     printf("programma zavershena.\n");
//     return 0;
// }

// long fact(int n) //������� ���������� �� �����
// {
//     long ans;
    
//     for(ans = 1; n > 1; n--)
//     ans *= n;
//     return ans;
// }

// long rfact(int n) //����������� ������
// {
//     long ans;
//     if(n > 0)
//     ans = n * rfact(n - 1);
//     else
//     ans = 1;
//     return ans;
// }


// #include <stdio.h>

// void to_binary(unsigned long n);
// int main(void)
// {
// unsigned long number;
// printf("Vvedite celoe chislo (q dlya zaversheniya):\n");
// while(scanf("%lu", &number) == 1)
// {
//     printf("Dvoicniy ekvivalent: ");
//     to_binary(number);
//     putchar('\n');
//     printf("vvedite celoe chislo (q dlya zaversheniya): \n");
// }
// printf("Programma zavershena.\n");
// return 0;
// }

// void to_binary(unsigned long n)
// {
//     int r;
//     r = n % 2;  
//     if(n >= 2)
//     to_binary(n / 2);
//     putchar(r == 0 ? '0' : '1');
//     return;
// }

//loccchek

// #include <stdio.h>
// void mikado(int);

// int main(void)
// {
//     int pooh = 2, bah = 5;
//     printf("Vnutri main() pooh = %d and &pooh = %p\n", pooh, &pooh);
//     // printf("asdasdasdsa %p", pooh);
//     printf("Vnutri main() bah = %d and &pooh = %p\n", bah, &bah);
//     mikado(pooh);
//     return 0;
// }

// void mikado(int bah)
// {
//     int pooh = 10;
//     printf("Vnutri mikado() pooh = %d and &pooh = %p\n", pooh, &pooh);
//     printf("Vnutri mikado() bah = %d and &bah = %p\n", bah, &bah);
// }

// #include <stdio.h>

// void interchange(int * u, int * v);

// int main(void)
// {
//     int x = 5, y = 10;

//     printf("PErvonachalno x = %d and y = %d.\n", x, y);
//     interchange(&x, &y);
//     printf("Teper x = %d and y = %d\n", x, y);

//     return 0;
// }

// void interchange(int * u, int * v)
// {
//     int temp;
//     temp = *u;
//     *u = *v;
//     *v = temp;
// }




// #include <stdio.h>

// void show_menu(void)
// {
//     printf("�������� ���� �� ��������� ���������:\n");
//     printf("1) ���������� �����\n");
//     printf("3) ������� �����\n");
//     printf("2) ����������� �����\n");
//     printf("4) ����� �� ���������\n");
//     printf("������� ����� ���������� ��������: ");
// }

// int get_choice(int min, int max)
// {
//     int choice;

//     while (1)
//     {
//         if (scanf("%d", &choice) != 1)
//             return 4;

//         if (choice < min || choice > max)
//         {
//             show_menu();
//         }
//         else
//         {
//             return choice;
//         }
//     }
// }

// int main(void)
// {
//     int choice;

//     show_menu();
//     choice = get_choice(1, 4);

//     printf("�� ������� ������� %d\n", choice);

//     return 0;
// }


// #include <stdio.h>

// double razn(double x, double y);

// int main(void)
// {
//     double x, y;

//    while (1)
//    {
//     if(scanf("%lf %lf", &x, &y) != 2)
//     {
//         while (getchar() != '\n');
      
//         continue;
//     }
//     break;
//    }
//     printf("%.1f",razn(x, y));
//     return 0;
// }

// double razn(double x, double y)
// {
//     if(x > y){
//         return y;
//     }
    
//     else 
//     {
//         return x;
//     }
// }

// #include <stdio.h>
// void chline(char, int, int);
// int main(void)
// {
//     chline('#', 4, 10);
// return 0;
// }

// void chline(char ch, int i, int j)
// {
//     int k;
//     for (k = i; k <= j; k++)
//     {
//         putchar(ch);
//     }
//     putchar('\n');
// }

// #include <stdio.h>

// char pool(char, int, int);

// int main(void)
// {
//     pool('g', 5, 5);
//     return 0;
// }
// char pool(char nel, int strok, int enter)
// {
//   for(int index = 0 ;index < enter; index++)
//   {
//     for (int lol = 0; lol < strok; lol++)
//     {
//         printf("%c",nel);
//     }
//     printf("\n");
//   }
//     return nel;
// }


// #include <stdio.h>

// double harmonic_mean(double a, double b);

// int main(void)
// {
//     double x = 4.0, y = 6.0;
//     printf("������� ������������� %lf � %lf = %lf\n", x, y, harmonic_mean(x, y));
//     printf("srednee znach %lf", (x+y)/2);
//     return 0;
// }

// double harmonic_mean(double a, double b)
// {
//     return 1.0 / ((1.0 / a + 1.0 / b) / 2.0);
// }

// #include <stdio.h>
// void larger_of(double *y, double *x);

// int main(void)
// {
//     double x, y;
//     x = 13102300;
//     y = 5;

//     larger_of(&x, &y);
// printf("%.2f, %.2f", x, y);
// }

// void larger_of(double *x, double *y){
//     if(*y > *x){
//         *x = *y;
//     }
//     else{
//         *y = *x;
//     }
// }


// #include <stdio.h>
// void triple(double *a, double *b, double *c);

// int main(void)
// {
//     double a, b ,c;
//     a = 15;
//     b = 10;
//     c = 20;
//     triple(&a, &b, &c);
//     printf("%.2f, %.2f, %.2f",a, b, c);
// }
// void triple(double *a, double *b, double *c)
// {
//     double gorC = *c;
//      double   romB = *b;
//       double  sorA = *a;
//     if(*a < *b && *a < *c){
//         if (*b > *c)
//         {
            
//             *b = *c;
//             *c = romB;
//     }
//    }

//    else if(*a > *b && *a > *c)
//    {
//     if(*b < *c){
        
//         *c = sorA;
//         *b = gorC;
//         *a = romB;
//     }
//     else{
//         *c = sorA;
//         *a = gorC;

//     }
//    }
//    else if(*b > *c){
//     *b = sorA;
//     *c = romB;
//     *a = gorC;

//    }
//    else if(*c > *b){
//     *b = sorA;
//     *a = romB;
//    }

//    else{
//     printf("oni iznachalmo imeit cifri kak po zadaniy\n");
//    }
// }

// #include <stdio.h>

// void triple(double *a, double *b, double *c);

// int main(void)
// {
//     double a = 15, b = 10, c = 20;
//     triple(&a, &b, &c);
//     printf("%.2f, %.2f, %.2f\n", a, b, c); // 10.00, 15.00, 20.00

//     // �������� ������ ���������
//     triple(&a, &b, &c); // ���� ��� �����������
//     printf("%.2f, %.2f, %.2f\n", a, b, c); 

//     return 0;
// }

// void triple(double *a, double *b, double *c)
// {
//     double x = *a;
//     double y = *b;
//     double z = *c;
//     double min, mid, max;

//     // ������� �����������
//     if (x <= y && x <= z) min = x;
//     else if (y <= x && y <= z) min = y;
//     else min = z;

//     // ������� ������������
//     if (x >= y && x >= z) max = x;
//     else if (y >= x && y >= z) max = y;
//     else max = z;

//     // �������
//     mid = x + y + z - min - max;

//     // �����������
//     *a = min;
//     *b = mid;
//     *c = max;
// }


// #include <stdio.h>
// int alfavitnumber(char c);
// int main(void){
// char ch;

// for( ;(ch = getchar()) != EOF;)
// {
//    printf("%c ee nomer %d\n",ch, alfavitnumber(ch));
// }
// return 0;
// }

// int alfavitnumber(char c)
// {
//     if(c < 65 || c > 90){
//         if(c < 97 || c > 122)
//         {
//             return -1;
//         }
//     }
//     else if(c >= 'A' && c <='Z')
//     {
//         int num = 0;
//         num = c - 'A' + 1;
//         return num;

//     }

//     else{
//         int num = 0;
//         num = c - 'a' + 1;
//         return num;
//     }
// }

// #include <stdio.h>

// int alfavitnumber(char c);

// int main(void)
// {
//     char ch;

//     while ((ch = getchar()) != EOF)
//     {
//         printf("%c ee nomer %d\n", ch, alfavitnumber(ch));
//     }

//     return 0;
// }

// int alfavitnumber(char c)
// {
//     if (c >= 'A' && c <= 'Z')
//         return c - 'A' + 1;
//     else if (c >= 'a' && c <= 'z')
//         return c - 'a' + 1;
//     else
//         return -1;
// }

//power.c -- �������� ����� � ����� �������
// #include <stdio.h>
// double power(double n, int p);

// int main(void)
// {
//     double x, xpow;
//     int exp;

//     printf("Vvedite chislo and polozitelnuu celuu stepen,");
//     printf(" v lotoruu\n chislo budet vozvedeno. Dlya zaversheniya programmi");
//     printf(" vvedite q.\n");
//     while (scanf("%lf%d", &x, &exp) == 2)
//     {
//         xpow = power(x, exp);
//         printf("%.3g v stepeni %d ravno %.5g\n", x, exp, xpow);
//         printf("Vvedite sledushuu paru chisel ili q dlya zaversheniya.\n");
//     }
//     printf("Nadeemsya, chto vi ocenili eto  upraznenie -- do cvidaniya!\n");
//     return 0;
// }

// double power(double n, int p)
// {
//     double pow = 1;
//     int i;
//     if(p > 0){
//     for (i = 1; i <= p; i++)
//     {
//         pow *= n;
//     }
//         return pow;
    
// }
// else{
    
//     for(i = 1; i <= -p; i++)
//     {
//         pow *= n;
//     }
//         pow = 1.0 / pow;
        
//     
//     return pow;
// }

// }



// #include <stdio.h>

// double power(double n, int p);

// int main(void)
// {
//     double x;
//     int exp;

//     while (scanf("%lf %d", &x, &exp) == 2)
//     {
//         printf("%.3g v stepeni %d = %.5g\n", x, exp, power(x, exp));
//         printf("vvedite slep paru chisel (Ctrl+D vihod):\n");
//     }

//     return 0;
// }

// double power(double n, int p)
// {
//     double result = 1.0;
//     int i;

//     if (n == 0 && p == 0)
//     {
//         printf("0v stepeni 0 ne opredeleno, ispolzuetsya znachenie 1.\n");
//         return 1.0;
//     }

//     if (p == 0)
//         return 1.0;

//     if (n == 0)
//         return 0.0;

//     if (p > 0)
//     {
//         for (i = 1; i <= p; i++)
//             result *= n;
//     }
//     else
//     {
//         for (i = 1; i <= -p; i++)
//             result *= n;
//         result = 1.0 / result;
//     }

//     return result;
// }




// #include <stdio.h>

// double power(double n, int p);

// int main(void)
// {
//     double x;
//     int exp;

//     while (scanf("%lf %d", &x, &exp) == 2)
//     {
//         printf("%.3g v stepeni %d = %.5g\n", x, exp, power(x, exp));
//         printf("vvedite slep paru chisel (Ctrl+D vihod):\n");
//     }

//     return 0;
// }

// double power(double n, int p)
// {
//     if (n == 0 && p == 0)
//     {
//         printf("0 v stepeni 0 ne opredeleno, ispolzuetsya 1.\n");
//         return 1.0;
//     }

//     if (p == 0)
//         return 1.0;

//     if (n == 0)
//         return 0.0;

//     if (p > 0)
//         return n * power(n, p - 1);
//     else
//         return 1.0 / power(n, -p);
// }


// //binary.c -- ������� ����� ����� � ������� �����
// #include <stdio.h>
// void to_binary(unsigned long n);
// int main(void)
// {
//     unsigned long number;
//     printf("Vvedite celoe chislo (q dlya zaversheniya):\n");
//     while (scanf("%lu", &number) == 1)
//     {
//         printf("Dvoichniy ekvivalent: ");
//         to_binary(number);
//         putchar('\n');
//         printf("Vvedite celoe chislo (q dlya zaversheniya):\n");
//         }

//         printf("poka");
//         return 0;
    

// }

// void to_binary(unsigned long n)
// {
// int r;
// r = n % 2;
// if(n > 2)
// to_binary(n / 2);
// putchar(r == 0 ? '0' : '1');
// return;
// }






// //binary.c -- ������� ����� ����� � ������� �����
// #include <stdio.h>

// void to_binary(unsigned long n, int base);

// int main(void)
// {
//     unsigned long number;
//     int base;

//     printf("Vvedite chislo i osnovanie (2-10), q dlya vihoda:\n");

//     while (scanf("%lu %d", &number, &base) == 2)
//     {
//         if (base < 2 || base > 10)
//         {
//             printf("Osnovanie dolzhno bit ot 2 do 10.\n");
//             continue;
//         }

//         printf("Resultat: ");
//         to_binary(number, base);
//         putchar('\n');

//         printf("Vvedite chislo i osnovanie:\n");
//     }

//     return 0;
// }


// void to_binary(unsigned long n, int base)
// {
// int r;
// r = n % base;
// if(n >= base)
// to_binary(n / 8, base);
// putchar('0' + r);
// }

// #include <stdio.h>

// long Fibonacci(int n);

// int main(void)
// {
//     int n;

//     printf("Vvedite nomer chisla Fibonacci (>=0):\n");

//     while (scanf("%d", &n) == 1 && n >= 0)
//     {
//         printf("Fibonacci(%d) = %ld\n", n, Fibonacci(n));
//         printf("Vvedite sleduyushchee chislo (Ctrl+D dlya vihoda):\n");
//     }

//     return 0;
// }
// long Fibonacci(int n)
// {
//     long prev = 0;
//     long curr = 1;
//     long next;
//     int i;

//     if (n == 0)
//         return 0;
//     if (n == 1)
//         return 1;

//     for (i = 2; i <= n; i++)
//     {
//         next = prev + curr;
//         prev = curr;
//         curr = next;
//     }

//     return curr;
// }


//day_monl.c -- ������� ���������� ���� � ������ ������

// #include <stdio.h>
// #define MONTHS 12

// int main(void)
// {
//     int days[MONTHS] = {31, 28, 31, 30,31,30,31,31,30,31,30,31};
//     int index;
//     for(index = 0; index < MONTHS; index++)
//     printf("mesyac %d imeet %2d den(dney).\n", index +1, days[index]);
//     return 0;
// }

// #include <stdio.h>
// #define SIZE 4
// int main(void)
// {
//     int no_data[SIZE];
//     int i;
//     printf("%2s%14s\n","i", "no_data[1]");
//     for(i = 0; i < SIZE; i++)
//     printf("%2d%14d\n", i, no_data[i]);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//   const  int size[] = {11, 12, 13, 14, 20};

//     for(int in = 0; in < sizeof size / sizeof size[0]; in++)
//     {
//         printf("mes %2d imeet %d den (dni).\n", in +1, size[in]);
//     }
//     return 0;
// }

// #include <stdio.h>
// #define MONTHS 12
// int main(void)
// {
//     int days[MONTHS] = {31,28, [4] = 31, 30, 31, [1] = 29};
//     int i;
//     for(i = 0; i < MONTHS; i++)
//     printf("%2d %d\n", i + 1, days[i]);
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int n = 5; 
//     int m = 8;
//     float a1[5];//da
//     float a2[5 * 2 + 1];//da
//     float a3[sizeof(int) + 1]; //da
//     float a4[-4]; //net, razmer dolzen bit > 0
//     float a5[0]; //net, razmer dolzen bit > 0
//     float a6[2.5]; // net dolzno bit celim chislom
//     float a7[(int) 2.5]; // da privedenie constanti float k tipu float k tipu int
//     float a8[n]; // ne bilo razresheno do c99
//     float a9[m]; // ne bilo razresheno do c99
// }

//rain.c -- ������� ��������� ������ �� �����, ������� �������� �� ��� � �������
// �������� �� ����� �� ������ �� ������� �� ��������� ���

// #include <stdio.h>
// #define MONTHS 12 //���������� ������� � ����
// #define YEARS 5 //���������� ���, ��� ������� ��������� ������

// int main(void){
// //������������� ������� �� ������� �� ������ � 2010 �� 2014 ��.

// const float rain[YEARS][MONTHS] =
// {
// {4.3,4.3, 4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
// {8.5, 8.2, 1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
// {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
// {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
// {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
// };
// int year, month;
// float subtot, total;
// printf("God Kolichestvo osadkov(v dumah)\n");
// for(year = 0, total = 0; year < YEARS; year++)
// {
//     // ��� ������� ���� ����������� ���������� ������� �� ������ �����
//     for(month = 0, subtot = 0; month < MONTHS; month++)
//     subtot += rain[year] [month];
//     printf("%5d %15.1f\n", 2010 + year, subtot);
//     total += subtot; // ����� ����� ��� ���� ���
// }
// printf("\nSrednegodoe kolichestvo osadkov sostavlyaet %.1f dumov.\n\n",total / YEARS);
// printf("SREDEMESYACHNOE KOLICHESTVO OSADKOV:\n\n");
// printf(" Yanv Fev Mar Apr May Iun Iul Avg Sen Okt");
// printf("   Noy DEk\n");
// for(month = 0; month < MONTHS; month++)
// {
//     //��� ������� ������ ����������� ���������� ������� �� ���������� �����
//     for(year = 0, subtot = 0; year < YEARS; year++)
//     subtot += rain[year][month];
//     printf("%4.1f ", subtot/YEARS);
// }
// printf("\n");
// return 0;
// }

//pnt_add.c -- �������� ����������
// #include <stdio.h>
// #define SIZE 4
// int main(void)
// {
// short dates [SIZE];
// short * pti;
// short index;
// double bills[SIZE];
// double * ptf;
// pti = dates; //������������� ��������� ������ �������
// ptf = bills;
// printf("%23s %15s\n","short", "double");
// for(index = 0; index < SIZE; index++)
// {
//     printf("ukazateli + %d: %10p %10p\n", index, pti + index, ptf + index);
// }
// return 0;
// }

//day_monc3.c -- ������������� ����� ������ � �����������
// #include <stdio.h>
// #define MONTHS 12

// int main(void)
// {
//     int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//     int index;
//     for(index = 0; index < MONTHS; index++)
//     printf("mesyac %2d imeet %d den(dney). \n", index + 1, *(days + index)); // ���� �����, ��� � days[index]
//     return 0;
// }

//sum_sum_arr1.c -- ����� ��������� �������
// ����������� ������������� %u ��� %lu, ���� %zd �� ��������

// #include <stdio.h>
// #define SIZE 10

// int sum(int ar[], int n); //int sum(int * ar, int n)

// int main(void)
// {
//     int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
//     long answer;
//     answer=sum(marbles, SIZE);
//     printf("Obshaaua summa e;ementov masiva marbles ravna %ld. \n", answer);
//     printf("Obshaaua summa e;ementov masiva marbles ravna %ld. \n",sum(marbles, SIZE));
//     printf("obiom pamyayi otvedeniy pod massiv marbles, sostovlyaet %zd baitov.\n", sizeof marbles);

//     return 0;
// }

// int sum(int ar[], int n)
// {
//     int i;
//     int total = 0;
//     for(i = 0; i < n; i++)
//     total += ar[i]; //*(ar + i)
//     printf("razmer ar coctovlyaet %zd baitov.\n", sizeof ar);

//     return total;
// }


//sum_sum_arr2.c -- ����� ��������� �������
// #include <stdio.h>
// #define SIZE 10
// int sump(int * start, int * end);
// int main(void)
// {
//     int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
//     long answer;
//     answer = sump(marbles, marbles + SIZE);
//     printf("Obshaua summa elementov massiva marbles ravna %ld.\n", answer);
//     return 0;
// }

// //�������������� ���������� ����������

// int sump(int * start, int * end)
// {
//     int total = 0;
//     while (start < end)
//     {
//         total += *start; //�������� �������� total
//         start++; //����������� ��������� �� ��������� �������
//     }
//     return total;
    
// }

// order.c -- ���������� � ��������� � �����������

// #include <stdio.h>

// int data[2] = {100, 200};
// int moredata[2] = {300, 400};
// int main(void)
// {
//     int * p1, * p2, * p3;
//     p1 = p2 = data;
//     p3 = moredata;
//     printf("*p1 = %d, *p2 = %d, *p3 = %d\n",
//     *p1        , *p2     ,*p3);
//      printf("*p1++ = %d, *++p2 = %d, (*p3)++ = %d\n",
//     *p1++        , *++p2     ,(*p3)++);
//      printf("*p1 = %d, *p2 = %d, *p3 = %d\n",
//     *p1        , *p2     ,*p3);
//     return 0;
// }

// //ptr_ops.c -- �������� ��� �����������
// #include <stdio.h>

// int main(void)
// {
//     int urn[5] = {100, 200, 300, 400, 500};
//     int * ptr1, * ptr2, * ptr3;

//     ptr1 = urn;  // ������������ ��������� ������ 
//     ptr2 = &urn[2]; // �� �� �����
//                     //������������� ��������� � ���������
//                     //������ ���������
//     printf("Znachenie ukazatelya, razimenovaniy ukazatel, adres ulazatelya:\n");
//     printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n",
//     ptr1, *ptr1, &ptr1);
//     // �������� ����������

//     ptr3 = ptr1 + 4;
//     printf("\nslozenie znachrniya int s ukazatelem:\n");
//     printf("ptr1 + 4 = %p, *(ptr4 + 3) = %d\n",
//         ptr1 + 4, * (ptr1 + 3));
//     ptr1++;//����������������� ���������
//     printf("\nznacheniya posle vipolneniya operacii ptr!++\n");
//     printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n",
//     ptr1, *ptr1, &ptr1);
    
//     ptr2--; //����������������� ���������
//     printf("\nznacheniz posle vipolneniya operasii --ptr2:\n");
//     printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);
//     --ptr1; //�������������� ��������� ��������
//     ++ptr2; //�������������� ��������� ��������

//     printf("\nvostonovlenie ishodnih znacheniy ukazatelei:\n");
//     printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);
//     //��������� ������ ��������� �� �������
//     printf("\nvichitanie odnogo ukazatelya iz dreugogo:\n");
//     printf("ptr2 = %p, ptr1 = %p. ptr2 - ptr1 = %td\n",
//         ptr2, ptr1, ptr2 - ptr1);

//         //��������� ������ �������� �� ���������
//         printf("\nvichitaniya iz ukazatelya znacheniya tips int:\n");
//         printf("ptr3 = %p, ptr3 - 2 = %p\n", ptr3, ptr3 - 2);

//         return 0;
// }


//pnt_add.c == �������� ����������
// #include <stdio.h> 
// #define SIZE 4

// int main(void)
// {
//     short dates[SIZE];
//     short * pti;
//     short index;
//     double bills[SIZE];
//     double * ptf;
//     pti = dates; //������������ ��������� ����� �������
//     ptf = bills;
//     printf("%23s %15s\n", "short", "double");
//     for(index = 0; index < SIZE; index++)
//     printf("ukazateli + %d: %10p %10p\n",
//     index, pti + index, ptf + index);

//     return 0;
// }    


//day_mon3.c -- ������������� ����� ������ � �����������
// #include <stdio.h>
// #define MONTHS 12

// int main(void)
// {
//     int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 ,31};
//     int index;

//     for(index = 0; index < MONTHS; index++)
//     printf("mesyac %2d imeet %d den (dney).\n", index + 1, *(days + index));// �� �� �����, ��� � days(index)

//     return 0;
// }

//sum_sum_arr1.c -- ����� ��������� �������
//����������� ������������� %u ��� %lu, ���� %zd �� ��������
// #include <stdio.h>
// #define SIZE 10
// int sum(int ar[], int n);
// int main(void)
// {
//     int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
// long answer = sum(marbles, SIZE);
// printf("Obshaya summa elemebtov massiva marbles ravna %ld\n", answer);
// printf("Obiom pamyati, otvedennoi pod massiv marbles, sostovlyaet %zd baitov.\n", sizeof marbles);

// return 0;
// }

// int sum(int ar[], int n) // naskolko velik massiv?
// {
//     int i;
//     int total = 0;
//     for(i = 0; i < n; i++)
//     total += ar[i];
//     printf("Razmer ar sostovlyaet %zd baitov.\n", sizeof(ar));
//     return total;
// }


//sum_sum_arr2.c -- ����� ��������� �������

// #include <stdio.h>
// #define SIZE 10
// int sump(int * start, int * end);

// int main(void)
// {
//     int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 2};
//     long answer;

//     answer = sump(marbles, marbles + SIZE);
//     printf("Obshaya summa elementov massiva marbles ravna %ld.\n", answer);
//     return 0;
// }

// int sump(int * start, int * end)
// {
//     int total = 0;

//     while (start < end)
//     {
//         total += *start; //�������� �������� � �����
//         start++; //����������� ���������
//     }

//     return total;
// }


//ptr_ops.c -- �������� ��� �����������
// #include <stdio.h>
// int main(void)
// {
//     int urn[5] = {100, 200, 300, 400, 500};
//     int * ptr1, * ptr2, *ptr3;
//     ptr1 = urn; //100
//     ptr2 = &urn[2]; //300



//     printf("znachenie ukazatelya, razimenovaniy ukazatel, adres ukazatelya:\n");
//     printf("ptr1 = %p. *ptr1 = %d, &ptr1 = %p\n",
//                     ptr1, *ptr1, &ptr1); //100
//     //�������� ����������
//     ptr3 = ptr1 + 4; //ptr3 imeet index 4, moya logika stroitsya na tom chto 0+4, dopuskaychto v dresah eto mojet bit 5 indrx
//     printf("\nclozenie znacheniya int c ekazatelem:\n");
//     printf("ptr1 + 4 = %p, *(ptr4 + 3) = %d\n",
//                     ptr1 + 4, *(ptr1 + 3)); //103
//     ptr1++;
//     printf("\nznacheniya posle vipolneniya operacii ptr1++:\n");
//     printf("ptr1 =%p, *ptr1 = %d, &ptr1 = %p\n",
//                     ptr1, *ptr1, &ptr1); //200
//     ptr2--;
//     printf("\nznacheniya posle vipolneniya operacii --ptr2:\n");
//     printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n",
//                     ptr2, *ptr2, &ptr2); //200
//     --ptr1;
//     ++ptr2;
//     printf("\nvostanovlenie ichobnih znacheniy ukazateley:\n");
//     printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2); //100, 300

//     //vichitanie odnogo ukazatelya iz drugogo
//     printf("\nvichitanie odnogo ukazatelya iz drugogo:\n");
//     printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %d\n", //- 200  ili 1 index
//                     ptr2, ptr1, ptr2 - ptr1);

//     //vihitanie celogo znacheniya iz ukazatelya
//     printf("\nvichitanie iz ukazatelya znacheniya tipa int:\n");
//     printf("ptr3 = %p, ptr3 - 2 = %d\n", ptr3, *(ptr3 - 2)); //200 index 2 tak kak ptr3 imeet index 4, moya logika stroitsya na tom chto 0+4, dopuskaychto v dresah eto mojet bit 5 indrx

//     return 0;
// } 

//arf.c -- �������, �������������� ���������
// #include <stdio.h>
// #define SIZE 5
// void show_array(const double ar[], int n); /* ar[] � ���������� ������������ const double*;
//    ������� �������� ����� ������� � �� �����
//    �������� ��� �������� */
// void mult_array(double ar[], int n, double mult);  //������� ������� � ������� ����� ������ ������ � ar[] = *ar

// int main(void)
// {
//     double dip[SIZE] = {20.0, 17.66, 8.2, 15.3, 22.22}; //������ �������� � 0 - 4 ������
//     printf("Ishodniy massiv dip:\n");
//     show_array(dip, SIZE); // �������� ������� ���� �������� �� ��������
//     mult_array(dip, SIZE, 2.5); //����������� �������� � ������ �� ��������
//     printf("Massiv dip posle vizova funkcii mult_array():\n");
//     show_array(dip, SIZE); //����� ����������, �� ��� ��������� ���������

//     return 0;
// }

// //������� ����������� �������
// void show_array(const double ar[], int n) 
// {
//     int i;

//     for(i = 0; i < n; i++)
//     printf("%8.3f ", ar[i]); //�� ������ ������� ������ ����� ���������� ar[i] ��� ��� ����� *ar + i
//     putchar('\n');
// }

// //��������� ������ ������� ������� �� ���� � ��� �� ���������
// void mult_array(double ar[], int n, double mult)
// {
//     int i;
//     for(i = 0; i < n; i++)
//     ar[i] *= mult;   // � ��� ������� ar[i] *= ��� ���� ����� ��� � *(ar + i) = mult * (*(ar + i))
// }


// //zippol.c -- ���������� � ������� zippo
// #include <stdio.h>
// int main(void)
// {
//     int zippo[4][2] = {{2,4}, {6,8}, {1,3}, {5,7}};
//     printf(" zippo = %p, zippo + 1 = %p\n", 
//     zippo, zippo + 1); //&zippo[0] //&zippo[1]
//     printf("zippo[0] = %p, zippo[0] + 1 = %p\n", 
//     zippo[0], zippo[0] + 1); //&zipp[0][0] //&zippo[1][0]
//     printf("*zippo = %p. *zippo + 1 = %p\n", *zippo, *zippo + 1); //zippo[0]&[0] //zippo[0]&[1]
//     printf("zippo[0][0] = %d\n", zippo[0][0]); //zippo[0][0]
//     printf(" *zippo[0] = %d\n", *zippo[0]); //zippo[0]&[0]
//     printf("  **zippo = %d\n", **zippo); //zippo[0][0]
//     printf(" zippo[2][1] = %d\n", zippo[2][1]); //1
//     printf("*(*(zippo+2) + 1) = %d\n",*(*(zippo+2) + 1));  //*((*(zippo+2)) + 1)) //*(*zippo[2] + 1)//*(zippo[2][0] + 1)// *zippo[2][1] = 3

//     return 0;
// }



//zippo2.c -- ��������� ���������� � ������� zippo  � ������� ���������� ���� ���������
// #include <stdio.h>
// int main(void)
// {
//     int zippo[4][2] = { {2,4}, {6,8}, {1,3}, {5,7} }; 
//     int (*pz)[2];
//     pz = zippo;

//     printf(" pz = %p, pz + 1 = %p\n", pz, pz + 1); //&pz[0], &pz[1]
//     printf("pz[0] = %p, pz[0] + 1 = %p\n", pz[0], pz[0] + 1); //&pz[0][0], &pz[0][1]
//     printf("*pz = %p, *pz + 1 = %p\n", *pz, *pz + 1); //&pz[0][0], &pz[0][1]
//     printf("pz[0][0] = %d\n", pz[0][0]); //2
//     printf(" *pz[0] = %d\n", *pz[0]); //2
//     printf(" **pz = %d\n", **pz); //2
//     printf(" pz[2][1] = %d\n", pz[2][1]); //3
//     printf("*(*(pz+2) + 1) = %d\n", *(*(pz + 2) + 1));//3

//     return 0;
// }

//array2d.c -- ������� ��� ��������� ��������
// #include <stdio.h>
// #define ROWS 3
// #define COLS 4

// void sum_rows(int ar[][COLS], int rows);
// void sum_cols(int [][COLS], int);
// int sum2d(int (*ar)[COLS], int rows);

// int main(void)
// {
//     int junk[ROWS][COLS] = {
//         {2,4,6,8},
//         {3,5,7,9},
//         {12,10,8,6}
// };
// sum_rows(junk, ROWS);
// sum_cols(junk, ROWS);
// printf("Summa vseh elementov  = %d\n", sum2d(junk, ROWS));

// return 0;
// }

// void sum_rows(int ar[][COLS], int rows)
// {
//     int r;
//     int c;
//     int tot;

//     for(r = 0; r < rows; r++)
//     {
//         tot = 0;
//         for(c = 0; c < COLS; c++)
//         tot += ar[r][c];
//         printf("stroka %d: summa = %d\n", r, tot);
//     }
// }

// void sum_cols(int ar[][COLS], int rows)
// {
//     int r;
//     int c;
//     int tot;

//     for (c = 0; c < COLS; c++)
//     {
//         tot = 0;
//         for(r = 0; r < rows; r++)
//         tot += ar[r][c];
//         printf("stolbec %d: summa = %d\n", c, tot);
//     }
// }

// int sum2d(int ar[][COLS], int rows)
// {
//     int r;
//     int c;
//     int tot = 0;

//     for(r = 0; r < rows; r++)
//     for(c = 0; c < COLS; c++)
//     tot + ar[r][c];

//     return tot;
// }

//vararr2d.c -- �������, ������������ ������� ���������� �����
// #include <stdio.h>
// #define ROWS 3
// #define COLS 4
// int sum2d(int rows, int  cols, int ar[rows][cols]);
// int main(void)
// {
//     int i, j;
//     int rs = 3;
//     int cs = 10;
//     int junk[ROWS][COLS] = {
//         {2,4,6,8},
//         {3,5,7,9},
//         {12,10,8,6}
//     };

//     int morejunk[ROWS-1][COLS+2] = {
//         {20,30,40,50,60,70},
//         {5,6,7,8,9,10}
//     };

//     int varr[rs][cs]; //������ ���������� �����
//     for(i = 0; i < rs; i++)
//     for(j = 0; j <  cs; j++)
//     varr[i][j] = i * j + j;

//     printf("Tradicioniy massiv 3x5\n");
//     printf("Summa vseh elementov = %d\n",
//     sum2d(ROWS, COLS, junk));
//     printf("Tradicioniy massiv 2x6\n");
//     printf("Summa vseh elementov = %d\n",
//     sum2d(ROWS-1, COLS+2, morejunk));
//     printf("Massiv peremennoy dlini 3x10\n");
//     printf("Summa vseh elementov = %d\n",
//     sum2d(rs, cs, varr));

//     return 0;
// }

// //������� � ���������� ���� ������� ���������� �����
// int sum2d(int rows, int cols, int ar[rows][cols])
// {
//     int  r;
//     int c;
//     int tot = 0;
//     for(r = 0; r < rows; r++)
//     for(c = 0; c< cols; c++)
//     tot += ar[r][c];

//     return tot;
// }

//flc.c == ������� ���������� ���������
// #include <stdio.h>
// #define COLS 4


// int sum2d(const int ar[][COLS], int rows);
// int sum(const int ar[], int rows);

// int main(void)
// {
//     int total1, total2, total3;
//     int * pt1;
//     int (*pt2)[COLS];

//     pt1 = (int [2]) {10, 20};
//     pt2 = (int [2][COLS]) {{1, 2, 3, -9},{4,5,6, -8}};

//     total1 = sum(pt1, 2);
//     total2 = sum2d(pt2, 2);
//     total3 = sum((int []) {4,4,4,5,5,5}, 6);

//     printf("total1 = %d\n", total1);
//     printf("total2 = %d\n", total2);
//     printf("total3 = %d\n", total3);

//     return 0;
// }

// int sum(const int ar[], int n)
// {
//     int i;
//     int total = 0;

//     for(i = 0; i < n; i++)
//     total += ar[i];

//     return total;
// }


// int sum2d(const int ar[][COLS], int rows)
// {
//     int  r;
//     int c;
//     int tot = 0;

//     for(r = 0; r < rows; r++)
//     for(c = 0; c < COLS; c++)
//     tot += ar[r][c];

//     return tot;
// }

// #include <stdio.h>
// int main(void)
// {
//     int ref[] = {8,4,0,2};

//     int  *ptr;
//     int index;

//     for(index = 0, ptr = ref; index < 4; index++, ptr++)
//     printf("%d, %d\n",ref[index], *ptr);

//     return 0;
// }

// #include <stdio.h>

// #define REST 6

// void obiv(int rest, int rom[]);

// int main(void)
// {
//     int rom[REST] ={1};

//     obiv(REST, rom);
// }

// void obiv(int rest, int rom[])
// {
//     int index = 0;
//     int total = 0;
// printf("%d\n", rom[index]); 

//     for( ;index+1< rest; index++)
//     {
        
//         rom[index] += total;
//         rom[index] *= 2;
//         printf("%d\n", rom[index]); 
//         total = rom[index];
//     }
// }


// #include <stdio.h>

// int main(void)
// {
//     int rom[6]= {1,2,4,8,16,32};
//     rom[2];
//     int bob[100] = {[99]= -1};
//     printf("%d", bob[99]);

//     int lol[100] = {
//         [5]  = 101,
//         [10] = 101,
//         [11] = 101,
//         [12] = 101,
//         [3]  = 101
//     };
// }

// #include <stdio.h>
// void lol(double []);
// void pop(short [][30]);
// void kek(long [][10][15]);
// int main(void)
// {
//     double trots[20];
//     short clops[10][30];
//     long shots[5][10][15];

//     lol(trots);
//     pop(clops);
//     kek(shots);
// }

// void lol(double lol[])
// {
// printf("1");
// }
// void pop(short lol[][30])
// {
// printf("2");
// }
// void kek(long lol[][10][15])
// {
// printf("3");
// }


// 1. ������������� ��������� rain. � �� �������� 10.7, ����� ��� ��������� 
// ���������� � �������������� ���������� ������ ��������. (��� ��-�������� ���
// ����� ��������� � ���������������� ������.)

//rain.c -- ������� ��������� ������ �� �����, ������� �������� �� ��� � 
//������� �������� �� ����� �� ������ ������� �� ��������� ���

// #include <stdio.h>
// #define MONTHS 12 //���������� ������� � ����
// #define YEARS 5 // ���������� ���, ��� ������� �������� ������

// int main(void)
// {
//     //������������� ������� �� ������� �� ������ � 2010 �� 2014 ��
//     const float rain[YEARS][MONTHS] = {
// {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
// {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
// {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
// {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
// {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
//     };

//     const float (*RAIN)[MONTHS]; 
//     RAIN = rain;
// int year, month;
// float subtot, total, *mothth;
// printf("God KOLICHESTVO OSADKOV( v dumah)\n");
// for(total = 0; RAIN < rain+YEARS; RAIN++)
// {
//     //��� ������� ����������� ���������� ������� ������ �����
//     for(month = 0, subtot = 0, mothth = *RAIN; mothth < *RAIN + MONTHS; mothth++)
//     {
//         subtot += *mothth;
//     }
//     printf("%5d %15.1f\n", 2010 + (RAIN  - rain), subtot);
//     total += subtot;
// }

// printf("\nSrednegodovoe kolichestvo osadkov: %.1f dyuma.\n\n",
//            total / YEARS);

//     printf("SREDEMEYASYACHNOE KOLICHESTVO OSADKOV:\n\n");
//     printf(" Yanv Fev Mar Apr May Iun Iul Avg Sen Okt Noy Dek\n");
//       for (mothth = rain[0]; mothth < rain[0] + MONTHS; mothth++)
//     {
//         subtot = 0.0;
//         for (RAIN= rain; RAIN < rain + YEARS; RAIN++)
//             subtot += *( *(RAIN) + (mothth - rain[0]));

//         printf("%4.1f ", subtot / YEARS);
//     }

//     printf("\n");
// return 0;
// }

// #include <stdio.h>
// copy_arr(double [], double [], int);
// copy_ptr(double *, double *, int);
// copy_ptrs(double [], double [], double[]);
// int main(void)
// {
//     double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
//     double target1[5];
//     double target2[5];
//     double target3[5];

// copy_arr(target1, source, 5);

// copy_ptr(target2, source, 5);

// copy_ptrs(target3, source, source + 5);

// return 0;
// }

// copy_arr(double lol[], double pop[], int kek){
//     for( int index = 0; index < kek; index++)
//     {
//         lol[index] = pop[index];
//     }
// }

// copy_ptr(double *lol, double *pop, int kek){
//     for(int index = 0; index < kek; lol++, index++){
//         *lol = *(pop + index);
//     }
// }


// copy_ptrs(double lol[], double pop[], double *kek){

//     for(; pop < kek; pop++, lol++){
//         *lol = *pop;
//         printf("%.1f", *lol);
//     }

// }


// #include <stdio.h>
// int rush(int [], int);
// int main(void)
// {
//     int lol[5]= {100,2,10,4,5};
   
// int indexbig = rush(lol, 5);
//     printf("%d", indexbig);
//     return 0;
// }

// int rush(int lok[], int hoh){
//     int kek = lok[0];
//     int rex = 0;
    
//     for(int index = 0; index < hoh; index++)
//     {
//         int pop = lok[index];
        
        
//         if(kek < pop){
//             kek = pop;
//             rex = index;
//         }
        
//     }
// return rex;
// }

// #include <stdio.h>
// #define PPPP 3
// void prok(double [], int);

// int main(void)
// {
//     double lol[PPPP]={1.1, 1.2, 1.3};
//     prok(lol, PPPP);
//     for(int i = 0; i < PPPP; i++)
//     {
//         printf("%.1f\n",lol[i]);
//     }

//     return 0;
// }


// void prok(double kek[], int n)
// {
//    double pop = 0;
//    int upindex = n;

//     for(int index = 0; index <  n / 2; index++){
        
//             pop = kek[index];
//             kek[index] = kek[n - 1 - index];
//             kek[n - 1 - index] = pop;
//     }
// }



// #include <stdio.h>
// void copy_arr(double [], double [], int);
// void copy_arr1(double [], double [], int);
// int main(void){

//     double lol[3][3]= 
//     {
//     {1.1, 1.2, 1.3},
//     {2.1, 2.2, 2.3},
//     {3.1, 3.2, 3.3}
//     };

    
    
   

//     double target1[3];
//     double target2[3];

//     copy_arr(lol, target1, 3);

//     for(int i = 0; i < 3; i++)
//     printf("targer1: %.1f", target1[i]);

// copy_arr1(lol, target2, 3);
//     for(int i = 0; i < 3; i++)
//     printf("targer2: %.1f", target2[i]);
    

//     return 0;
// }


// void copy_arr(double lol[][3], double pop[], int kek)
// {
//      double (*prok)[3] = lol;
//     for(double *pok = *prok; pok < (lol + kek); pok++, pop++)
//     {
//        *pop = *pok;
//     }
// }

// void copy_arr1(double lol[][3], double pop[], int kek)
// {
//      double (*prok)[3] = lol;
//     for(double *pok = *(prok + 1); pok < (lol + kek); pok++, pop++)
//     {
//        *pop = *pok;
//     }
// }


// #include <stdio.h>

// void copy_arr(double target[], double source[], int n);

// int main(void)
// {
//     double source[3][3] = {
//         {1.1, 1.2, 1.3},
//         {2.1, 2.2, 2.3},
//         {3.1, 3.2, 3.3}
//     };

//     double target[3][3];

//     for(int i = 0; i < 3; i++)
//         copy_arr(target[i], source[i], 3);

//     for(int i = 0; i < 3; i++)
//     {
//         for(int j = 0; j < 3; j++)
//             printf("%.1f ", target[i][j]);
//         printf("\n");
//     }

//     return 0;
// }

// void copy_arr(double target[], double source[], int n)
// {
//     for(int i = 0; i < n; i++)
//         target[i] = source[i];
// }


// #include <stdio.h>
// void copy_arr(int target[], int source[]);

// int main(void)
// {
// int masiv[7] = {1,2,3,4,5,6,7};
// int masiv1[3];

// copy_arr(masiv1, masiv);

// for(int i = 0; i < 3; i++){
//   printf("%d",masiv1[i]);
// }

// return 0;
// }

// void copy_arr(int target[], int source[]){
//     for(int i = 2, r = 0; source+i < source + 5;   i++, r++)
//     {
//         target[r] = source[i];
//     }
// }

// #include <stdio.h>
// void arr(int num, int num2, double lol[][num2], double kek[][num2]);
// void arr1(int num, int num2, double lol[][num2]);
// int main(void){

//     double masiv[3][5] = {
//         {1,2,3,4,5},
//         {1.1, 1.2, 1.3, 1.4, 1.5},
//         {10, 20, 30, 40, 50}
//     };

//     double target[3][5];
// arr(3, 5, masiv, target);
// arr1(3, 5, target);
//     return 0;
// }


// void arr(int num, int num2, double lol[][num2], double kek[][num2]){
// for(int index = 0; index < num; index++)
// {
//     for (int i = 0; i < num2; i++)
//     {
//         kek[index][i] = lol[index][i];
//     }
// }
// }

// void arr1(int num, int num2, double lol[][num2])
// {
//    // double (*pop)[num2] = lol;
//     double *pop2 = *lol;
//     for( ;pop2 < *(lol + num-1) + num2; pop2++)
//     {
// printf("%.1f\n", *pop2);
//     }
// }

// #include <stdio.h>
// void arr(int [], int [], int[], int n);
// int main(void)
// {
// int target[3] = {1,2,3};
// int target1[3] = {1,2,3};
// int target2[3];
// arr(target, target1, target2, 3);

// for(int i = 0; i < 3; i++){
//     printf("%d\n", target2[i]);
// }

// return 0;

// }
// void arr(int lol[], int pop[], int kek[], int n){
//     for(int index = 0; index < n; index++)
//     {
//         kek[index] = (*(pop + index)) + (*(lol + index));
//     }
// }

// #include <stdio.h>

// void arr(int num, int num2, int lol[][num2]);
// void arr1(int num, int num2, int lol[][num2]);

// int main(void)
// {
//     int masiv[3][5] = {
//         {1, 2, 3, 4, 5},
//         {10, 20, 30, 40, 50},
//         {6, 7, 8, 9, 10}
//     };

//     arr1(3, 5, masiv);
//     arr(3, 5, masiv);
//     arr1(3, 5, masiv);
// }

// void arr(int num, int num2, int lol[][num2]){
//     for(int index = 0; index < num; index++)
//     {
//         for(int i = 0; i < num2; i++)
//         {
//             lol[index][i] *= 2;
//         }
//     }
// }

// void arr1(int num, int num2, int lol[][num2]){
//      for(int index = 0; index < num; index++)
//     {
//         for(int i = 0; i < num2; i++)
//         {
//            printf("%d ",lol[index][i]);
//         }
//         printf("\n");
//     }
//     printf("\n");
// }



// #include <stdio.h>

// void double_array(int num, int num2, int lol[][num2]);
// void print_array(int num, int num2, int lol[][num2]);
// void double_array_ptr(int num, int num2, int *ptr);
// void print_array_ptr(int num, int num2, int *ptr);

// int main(void) {
//     int masiv[3][5] = {
//         {1, 2, 3, 4, 5},
//         {10, 20, 30, 40, 50},
//         {6, 7, 8, 9, 10}
//     };

//     printf("�������� ������:\n");
//     print_array_ptr(3, 5, &masiv[0][0]); // ����� ����� ���������

//     double_array_ptr(3, 5, &masiv[0][0]); // �������� ����� ���������

//     printf("\n����� ��������:\n");
//     print_array_ptr(3, 5, &masiv[0][0]); // ����� ����� ���������

//     return 0;
// }

// // �������� ����� ���������
// void double_array_ptr(int num, int num2, int *ptr) {
//     for(int i = 0; i < num * num2; i++) {
//         *(ptr + i) *= 2; // ���������� ��� �������� �������
//     }
// }

// // ����� ����� ���������
// void print_array_ptr(int num, int num2, int *ptr) {
//     for(int i = 0; i < num; i++) {
//         for(int j = 0; j < num2; j++) {
//             printf("%d ", *(ptr + i * num2 + j)); // ��������� ����� ��������
//         }
//         printf("\n");
//     }
// }

// rain.c -- ������� ��������� ������ �� �����, ������� �������� �� ��� � �������
// �������� �� ����� �� ������ �� ������� �� ��������� ���

// #include <stdio.h>
// #define MONTHS 12 //���������� ������� � ����
// #define YEARS 5 //���������� ���, ��� ������� ��������� ������
// void arr(int years, int month, const double masiv[][month], double *sub, double *tot);
// void arr2(int years, int month, const double masiv[][month], double *sub, double *tot);
// int main(void){
// //������������� ������� �� ������� �� ������ � 2010 �� 2014 ��.

// const double rain[YEARS][MONTHS] =
// {
// {4.3,4.3, 4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
// {8.5, 8.2, 1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
// {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
// {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
// {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
// };
// int year, month;
// double subtot = 0.0;
// double total = 0.0;
// printf("God Kolichestvo osadkov(v dumah)\n");
// arr(YEARS, MONTHS, rain, &subtot, &total);
// // for(year = 0, total = 0; year < YEARS; year++)
// // {
// //     // ��� ������� ���� ����������� ���������� ������� �� ������ �����
// //     for(month = 0, subtot = 0; month < MONTHS; month++)
// //     subtot += rain[year] [month];
// //     printf("%5d %15.1f\n", 2010 + year, subtot);
// //     total += subtot; // ����� ����� ��� ���� ���
// // }
// printf("\nSrednegodoe kolichestvo osadkov sostavlyaet %.1f dumov.\n\n",total / YEARS);
// printf("SREDEMESYACHNOE KOLICHESTVO OSADKOV:\n\n");
// printf(" Yanv Fev Mar Apr May Iun Iul Avg Sen Okt");
// printf("   Noy DEk\n");
// arr2(YEARS, MONTHS, rain, &subtot, &total);
// // for(month = 0; month < MONTHS; month++)
// // {
// //     //��� ������� ������ ����������� ���������� ������� �� ���������� �����
// //     for(year = 0, subtot = 0; year < YEARS; year++)
// //     subtot += rain[year][month];
// //     printf("%4.1f ", subtot/YEARS);
// // }
// printf("\n");
// return 0;
// }

// void arr(int years, int month,const double masiv[][month], double *sub, double *tot){

//     for(int index = 0; index < years; index++){
//         *sub = 0;
//         for(int i = 0; i < month; i++){
//             *sub += masiv[index][i];
//         }
//          printf("%5d %15.1f\n", 2010 + index, *sub);
//             *tot += *sub;

//     }
// }

// void arr2(int years, int month,const double  masiv[][month], double *sub, double *tot){
 
//     for(int index = 0; index < month; index++){
//         *sub = 0;
//         for(int i = 0; i < years; i++)
//         *sub += masiv[i][index];
//         printf("%4.1f ", *sub/years);
//     }
// }


// #include <stdio.h>

// #define MONTHS 12
// #define YEARS 5

// void arr(int years, int months, const double masiv[][months], double *total);
// void arr2(int years, int months, const double masiv[][months]);

// int main(void)
// {
//     const double rain[YEARS][MONTHS] =
//     {
//         {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
//         {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
//         {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
//         {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
//         {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
//     };

//     double total = 0.0;

//     printf("God  Kolichestvo osadkov (v dyumah)\n");
//     arr(YEARS, MONTHS, rain, &total);

//     printf("\nSrednegodovoe kolichestvo osadkov: %.1f dyuma.\n\n",
//            total / YEARS);

//     printf("SREDEMESYACHNOE KOLICHESTVO OSADKOV:\n\n");
//     printf(" Yanv Fev Mar Apr May Iun Iul Avg Sen Okt Noy Dek\n");

//     arr2(YEARS, MONTHS, rain);

//     printf("\n");
//     return 0;
// }

// void arr(int years, int months, const double masiv[][months], double *total)
// {
//     double subtot;

//     for (int year = 0; year < years; year++)
//     {
//         subtot = 0.0;

//         for (int month = 0; month < months; month++)
//             subtot += masiv[year][month];

//         printf("%5d %15.1f\n", 2010 + year, subtot);
//         *total += subtot;
//     }
// }


// void arr2(int years, int months, const double masiv[][months])
// {
//     double subtot;

//     for (int month = 0; month < months; month++)
//     {
//         subtot = 0.0;

//         for (int year = 0; year < years; year++)
//             subtot += masiv[year][month];

//         printf("%4.1f ", subtot / years);
//     }
// }

// #include <stdio.h>
// void znak(int num, int num1, double mas[][num1]);
// void pri(int num, int num1, double mas[][num1]);
// void srednee(int num, int num1, double mas[][num1]);
// void bolshee(int num, int num1, double mas[][num1]);
// int main(void){
//     double masiv[3][5];

//     znak(3, 5, masiv);
//     pri(3,5,masiv);
//     srednee(3,5, masiv);
//     bolshee(3,5, masiv);

//     return 0;
// }

// void znak(int num, int num1, double mas[][num1])
// {
// for(int index = 0; index < num; index++){
//     for(int i = 0; i < num1; i++)
//     {
//      scanf("%lf", &mas[index][i]);
//     }
// }
// }

// void pri(int num, int num1, double mas[][num1]){
// for(int index = 0; index < num; index++){
//     printf("index %d: ", index);
//     for(int i = 0; i < num1; i++)
//     {
//      printf("%.1f || ", mas[index][i]);
//     }
//     printf("\n");
// }
// }

// void srednee(int num, int num1, double mas[][num1]){
//     double total = 0;
//     for(double (*p)[num1] = mas; p < mas + num; p++){
//         double subtot = 0;
//         for(double *l = *p; l < *p + num1; l++)
//         {
//             subtot += *l;
//         }
//         total += subtot;
//         printf("srednee stroki %.1lf\n",subtot / num1);
//         printf("summa stroki %.1lf\n",subtot);
//     }
//     printf("%.1lf srednee vseh znacheniy\n", total / (num * num1));
//      printf("%.1lf summa vseh znacheniy\n", total);
// }

// void bolshee(int num, int num1, double mas[][num1])
// {
//    double (*p)[num1] = mas;
//    double *l = *p;
//    double bol = 0;
   

//    while (l < (*(p + num) + num1))
//    {
//     if(*l > bol){
//         bol = *l;
//     }
//     ++l;
//    }
//    printf("naibolsee chislo: %.1lf\n", bol);
   
// }

//string1.c

// #include <stdio.h>
// #define MSG "Ya - simvolnaya strokovaya konstanta."
// #define MAXLENGTH 81

// int main(void)
// {
//     char words[MAXLENGTH] = "Y yvlyus ctrokoi, hranashiysya v massive.";
//     const char * pt1 = "Chto - to ukazivaet na menya.";
//     puts("vot neskolko strok:");
//     puts(MSG);
//     puts(words);
//     puts(pt1);
//     words[14] = 'U';
//     puts(words);
//     int n = 9;
//     char cookies[1]; //���������
//     char cakes[2+5]; //��������� ��������� ������ �������� ������������ ����������
//     char pies[2*sizeof(long double) + 1]; //���������
//     char crubs[n]; //�� ����������� �� ������ ��������� �99
//     char car[10] = "luna";
//     car = &car[0], *car == 'l', *(car+1) == car[1] == 'u'

//     return 0;
// }

//addreses.c -- ������ �����
// #define MSG "Ya osobenniy."

// #include <stdio.h>

// int main(void)
// {
//     char ar[] = MSG;
//     const char *pt = MSG;

//     printf("adres \"Ya osobenniy.\": %p \n", "Ya osobenniy.");
//     printf("            adres ar: %p\n", ar);
//     printf("            adres pt: %p\n", pt);
//     printf("            adres MSG: %p\n", MSG);
//     printf("adres \"Ya osobenniy.\": %p \n", "Ya osobenniy");

//     return 0;
// }

//arrchar.c - ������ ����������, ������ �����

// #include <stdio.h>
// #define SLEN 40
// #define LIM 5

// int main(void){
//     const char *mytalents[LIM] = {
//         "Mgnovennoe skladivanie chisel",
//         "tochnoe umnozeniie", "nakaplivanie dannih",
//         "ispolnenie instrukciy s tochostu do bukvi",
//         "Znaniye yazika programmirovaniya C"
//     };

//     char yourtalents[LIM][SLEN] = {
//         "hozdenie po prymoy", 
//         "Zdoroviy son", "Prosmotr telepedach",
//         "Rassilaka pisem", "chtenie elecronnoy pochti"
//     };

//     int i;
//     puts("Cravnim nashi lananti");
// printf("%-52s %-25s\n", "Moi talanti", "Vashi talanti");
// for(i = 0; i < LIM; i++)
// printf("%-52s %-25s\n", mytalents[i], yourtalents[i]);
// printf("\n razmer mytalents: %zd, razmer yourtalents: %zd\n", sizeof(mytalents), sizeof(yourtalents));

// return 0;
// }

//p_and_s.c -- ��������� � ������
// #include <stdio.h>

// int main(void){

//     const char * mesg = "Ne pozvolyate cebya zaputat!";

//     const char * copy;

//     copy = mesg;
//     printf("%s\n", copy);

//     printf("mesg = %s; &mesg = %p; value = %p\n", mesg, &mesg, mesg);
//     printf("copy = %s; &copy = %p; value = %p\n", copy, &copy, copy);

//     return 0;
// }

//getsputs.c -- ������������� ������� gets() � puts()

// #include <stdio.h>
// #define STLEN 81
// int main(void)
// {
//     char words[STLEN];

//     puts("Vvedite stroku.");
//     gets(words);
//     printf("Vasha stroka, vivedena dvajdi:\n");
//     printf("%s\n", words);
//     puts(words);
//     puts("gotovo");

//     return 0;
// }


//fgets1.c --  ������������� ������� fgets() � fputs()
// #include <stdio.h>
// #define STLEN 15
// int main(void)
// {
//     char words[STLEN];
//     puts("Vvedite stroku.");
//     fgets(words, STLEN, stdin);
//     printf("Vasha stroka, vivedennaya dvazdi(s pomoshu puts(), a zatem fputs()):\n");
//     puts(words);
//     fputs(words, stdout);
//     puts("Vvedite eshe odnu stroku.");
//     fgets(words, STLEN, stdin);
//     printf("\n");
//     for(int index = 0; index < STLEN; index++)
//     {
//         printf("[%c]", words[index]);
//     }
//     printf("\n");
//     printf("vasha stroka, vivedenaya dvajdi (c pomoshu puts(), a zatem fputs()):\n");
//     puts(words);
//     fputs(words, stdout);
//     puts("Gotovo.");

//     return 0;
// }

//fgets2.c -- ������������� ������� fgets() � fputs()

// #include <stdio.h>
// #define STLEN 10

// int main(void)
// {
//     char words[STLEN];

//     puts("vveditestroki (ili pustuu stroku dlya vihoda iz programmi):");

//     while(fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
//     fputs(words, stdout);

//     puts("gorovo");

//     return 0;
// }

//fgets3.c -- ������������� ������� fgets()

// #include <stdio.h>
// #define STLEN 10
// int main(void)
// {
//     char words[STLEN];
//     int i;
//     puts("Vvedite stroki (ili pustuu stroku dlya vihoda iz programmi):");
//     while(fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
//     {
//         i = 0;
//         while(words[i] != '\n' && words[i] != '\0')
//         i++;
//         if (words[i] == '\n')
//         words[i] = '\0';
//         else // ��������� ������� words[i] == '\0'
//         while (getchar() != '\n')
//         continue;

//         puts(words); 
//     }
    
//     puts("gotovo");
//     return 0;
// }


// char * s_gets(char * st, int n)
// {
//     char * ret_val; 
//     int i;
// }

// ret_val = fgets(st, n, stdin);
// if(ret_val) // �.�. ret_val != NULL
// {
//     while (st[i] != '\n' && st[i] != '\0')
//     {
//        i++;
//     }
//     if (st[i] != '\n')
//     st[i] = '\0';
//     else //��������� ������� words[i] == '\0'
//     while (getchar != '\n')
//     {
//         continue;
//     }
    
//     return ret_val;
// }

//scan_str.c -- ������������� ������� scanf()
// #include <stdio.h>

// int main(void)
// {
//     char name1[11], name2[11];
//     int count;
//     printf("Vvedite dva imeni.\n");
//     count = scanf("%5s %10s", name1, name2);
//     printf("Prochitano %d imeni: %s i %s.\n", count, name1, name2);

//     return 0;
// }

//put_out.c -- ������������ ������� puts()

// #include <stdio.h>
// #define DEF "YA - stroka, opredelennaya direktivoi #define."

// int main(void)
// {
//     char str1[80] = "Macciv bil iniciliizirovan moim znacheniem. ";
//     const char * str2 = "Ukazatel bil inicilizirovsan moim znacheniem. ";
//     puts("Ya - argument funkcii puts(). ");
//     puts(DEF);
//     puts(str1);
//     puts(str2);
//     puts(&str1[5]);
//     puts((str2 + 4));

//     return 0;
// }

//put1.c -- ������� ������ ��� ���������� ��������

// #include <stdio.h>
// void put1(const char * string) // ������ �� ����������
// {
//     while (*string != '\0')  
//     {
//         putchar(*string++);
//     }
    
// }

// int i = 0;
// while (string[i] != '\0')
// putchar(string[i++]);

//put2.c -- ������� ������ � ������������� �������

// #include <stdio.h>

// int put2(const char * string)
// {
//     int count = 0;

//     while(*string); 
//     {
//         putchar(*string++);
//         count++;
//     }

//     putchar('\n');
//     return(count);
// }

//put_put.c -- ������� ������, ������������ �������������
// #include <stdio.h>
// void put1(const char *);
// int put2(const char *);

// int main(void)
// {
//     put1("Esli bi u menya bilo stolko deneg, ");
//     put1(" skolko ya mog bi potratit, \n");
//     printf("poluchilos %d simvolov.\n",
//     put2("to ya nikoda ne zabotilsya bi o pozhinke starih bashmakov."));

//     return 0;
// }

// void put1(const char * string)
// {
//     while(*string) // ����������� *string! = '\0'
//     putchar(*string++);
// }

// int put2(const char * string)
// {
//     int count = 0;
//     while (*string)
//     {
//         putchar(*string++);
//         count++
//     }

//     putchar('\n');
//     return count;
// }

//test_fit.c -- ������������� ������� ������������ �����
// #include <stdio.h>
// #include <string.h> //�������� ��������� ��������� �������

// void fit(char *, unsigned int);

// int main(void)
// {
//     char mesg[] = "Vse doljno bit maksimalno prostim, "
//     " no ne bolee. ";
//     puts(mesg);
//     fit(mesg, 35);
//     puts(mesg);
//     puts("Rassmotrim eshe neskolko strok. ");
//     puts(mesg + 36);
//     return 0;
// }

// void fit(char *string, unsigned int size)
// {
//     if(strlen(string) > size)
//     string[size] = '\0';
// }

//str_cat.c -- ���������� ��� ������
// #include <stdio.h>
// #include <string.h> //o��������� strcat()
// #define SIZE 80
// char * s_gets(char * st, int n);

// int main(void)
// {
//     char flower[SIZE];
//     char addon[] = " pahnet kak starie valenki.";

//     puts("Kakoi u vas lubimiy cvetok?");

//     if(s_gets(flower, SIZE))
//     {
//         strcat(flower, addon);
//         puts(flower);
//         puts(addon);
//     }
//     else
//     puts("Obnaruzen konec faila! ");
//     puts("Programma zavershena.");

//     return 0;
// }

// char * s_gets(char * st, int n)
// {
//     char * ret_val;
//     int i = 0;

//     ret_val;
//     int i = 0;

//     ret_val = fgets(st, nm stdin);
//     if (ret_val)
//     {
//         while (st[i] != '\n' && st[i] != '\0')
//         {
//            i++;
//         }
//         if(st[i] == '\n')
//         st[i] = '\0';
//         else //��������� ������� words[i] == '\0'
//         while (getchar( != '\n'))
//         {
//        continue;  
//         }
        
//     }

//     return ret_val;
// }

//join _chk.c -- ���������� ��� ������, �������������� �������� ������
// #include <stdio.h>
// #include <string.h>
// #define SIZE 30
// #define BUGSIZE 13

// char * s_gets(char * st, int n);

// int main(void)
// {
//     char flower[SIZE];
//     char addon[] = "pahnet kak starie valenki.";
//     char bug[BUGSIZE];
//     int available;
//     puts("Kakoi u vas lubimiy cvetok?");
//     s_gets(flower, SIZE);
//     if((strlen(addon) + strlen(flower) + 1) <= SIZE)
//     strcat(flower, addon);
//     puts(flower);
//     puts("Kakoe u vas lubimoe nasekomoe?");
//     s_gets(bug, BUGSIZE);
//     available = BUGSIZE - strlen(bug) - 1;
//     strcncat(bug, addon, available);
//     puts(bug);
//     return 0;
// }

// char *s_gets(char * st, int n)
// {
//     char * ret_val;
//     int i = 0;
//     ret_val = fgets(st, n, stdin);
//     if(ret_val)
//     {
//         while (st[i] != '\n' && st[i] != '\0')
//         i++;
//       if(st[i] == '\n')
//     st[i] = '\0';
//     else //��������� ������� words[i] == '\0'
//     while (getchar() != '\n')
//     {
//         continue;
//     }
//     }

//     return ret_val;
// }

//nogo.c -- ����� �� ��� ��������?
// #include <stdio.h>
// #include <string.h> //���������� strcmp()

// #define ANSWER "Grant"
// #define SIZE 40

// char * s_gets(char * st, int n);
// int main(void)
// {
//     char try[SIZE];
//     puts("Kto pohoronen v mogile Granta?");
//     s_gets(try, SIZE);

//     while (strcmp(try, ANSWER) != 0)
//     {
//         puts("Nepravilno! Ppopitaytes ashe raz.");
//         s_gets(try, SIZE);
//     }

//     puts("Teper pravilno!");
//     return 0;
// }

// char * s_gets(char * st, int n)
// {
//     char * ret_val;
//     int i = 0;
//     ret_val = fgets(st, n, stdin);
//     if(ret_val)
//     {
//         while (st[i] != '\n' && st[i] != '\0')
//         {
//             i++;
//         }
//         if(st[i] = '\n')
//         st[i] = '\0';

//         else // ��������� ������� words[i] == '\0'
//         while (getchar() != '\n')
//         {
//             continue;
//         }
        
//     }

//     return ret_val;
// }

//compback.c -- ��������, ������������ �������� strcm()

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     printf("strcmp(\"A\", \"A\") vozvrashaet");
//     printf("%d\n,", strcmp("A", "A"));

//     printf("strcmp(\"A\", \"B\") vozvrashaet");
//     printf("%d\n,", strcmp("A", "B"));

//     printf("strcmp(\"B\", \"A\") vozvrashaet");
//     printf("%d\n,", strcmp("B", "A"));

//     printf("strcmp(\"C\", \"A\") vozvrashaet");
//     printf("%d\n,", strcmp("C", "A"));

//     printf("strcmp(\"Z\", \"a\") vozvrashaet");
//     printf("%d\n,", strcmp("Z", "a"));

//       printf("strcmp(\"apples\", \"apple\") vozvrashaet");
//     printf("%d\n,", strcmp("apples", "apple"));

//     return 0;
// }

//quit_chk.c -- ������ ��������� ���������
// #include <stdio.h>
// #include <string.h>
// #define SIZE 80
// #define LIM 10
// #define STOP "quit"

// char * s_gets(char * st, int n);

// int main(void)
// {
//     char input[LIM][SIZE];
//     int ct = 0;

//     printf("VVedite do %d strok (ili quit dlya zaversheniya): \n", LIM);
//     while (ct < LIM && s_gets(input[ct], SIZE) != NULL && strcmp(input[ct], STOP) != 0)
//     {
//         ct++;
//     }
//     printf("vvedeno %d strok(i)\n", ct);

//     return 0;
// }

// char * s_gets(char * st, int n)
// {
//     char * ret_val;
//     int i = 0;
//     ret_val = fgets(st, n, stdin);
//     if(ret_val)
//     {
//         while (st[i] != '\n' && st[i] != '\0')
//         {
//             i++;
//         }
//         if(st[i] == '\n')
//         st[i] = '\0';
//         else //�������� ������� words[i] == '\0'
//         while (getchar() != '\n')
//        continue;
//     }

//    return ret_val;
// }

//starsrch.c -- ������������� ������� strncmp()

// #include <stdio.h>
// #include <string.h>
// #define LISTSIZE 6

// int main(void)
// {
//     const char * list[LISTSIZE] =
//     {
//         "astronomiya", "astatizm",
//         "astrofizika", "ostrakizm",
//         "acterizm", "astrolyabiya"
//     };

//     int count = 0;
//     int i;

//     for(i = 0; i < LISTSIZE; i++)
//     {
//         if(strncmp(list[i], "astro", 5) == 0)
//         {
//             printf("Naideno: %s\n", list[i]);
//             count++;
//         }
//     }
        
//     printf("Kolichestvo slov v sposke,"
//         "nachinaushiysa s astro: %d\n", count);

//         return 0;
    
// }

//copyl.c -- ������������� ������������� strcpy()
// #include <stdio.h>
// #include <string.h> //���������� strcpy()
// #define SIZE 40
// #define LIM 5

// char * s_gets(char * st, int n);

// int main(void)
// {
//     char qwords[LIM][SIZE];
//     char temp[SIZE];
//     int i = 0;

//     printf("Vvedite %d slov, kotorie nachinautsya s bukvi k:\n", LIM);
//     while (i < LIM && s_gets(temp, SIZE))
//     {
//         if (temp[0] != 'k')            //if (strncmp(temp, "�", 1) != 0)
//         printf("%s ne nachinautsya s bikvi k!\n", temp); 
//         else{
//             strcpy(qwords[i], temp);
//             i++;
//         }
//     }
//     puts("Spisok prinyatih slovv:");
//     for(i = 0; i < LIM; i++)
//     puts(qwords[i]);
// }

// char * s_gets(char * st, int n)
// {
//     char * ret_val;
//     int i = 0;

//     ret_val = fgets(st, n, stdin);
//     if(ret_val)
//     {
//         while (st[i] != '\n' && st[i] != 0)
//         {
//             i++;
//         }
//         if(st[i] == '\n')
//         st[i] = '\0';
//         else //��������� ������� words[i] == '\0'
//         while (getchar() != '\n')
//         {
//           continue;
//         }
        
//     }

//     return ret_val; 
// }


// char target[20];
// int x;
// x = 50; //������������ ��� �����
// strcpy(target, "Eto tak!"); //������������ �����
// target = "Ochen dolgo"; //�������������� ������

// char * str;
// strcpy(str, "nevozmutimost C"); //��������

//copy2.c -- ������������ ������������� strcpy()
// #include <stdio.h>
// #include <string.h> // ���������� strcpy()
// #define WORDS "naihudchim"
// #define SIZE 40

// int main(void)
// {
//     const char * orig = WORDS;
//     char copy[SIZE] = "Budte luchim, chem mogli bi bit.";
//     char *ps;

//     puts(orig);
//     puts(copy);
//     ps = strcpy(copy + 6, orig);
//     puts(copy);
//     puts(copy + 18);
//     puts(ps);
//     ps[0] = 'l';
//     puts(ps);

//     return 0;
// }

//copy3.c -- ������������ ������������� strncpy()
// #include <stdio.h>
// #include <string.h> // ���������� strncpy()
// #define SIZE 40
// #define TARGSIZE 7
// #define LIM 5
// char * s_gets(char * st, int n);
// int main(void)
// {
//     char qwords[LIM][TARGSIZE];
//     char temp[SIZE];
//     int i = 0;
//     printf("Vvedite %d slov, kotorie nachinautsya s bukvi k:\n", LIM);
//     while (i < LIM && s_gets(temp, SIZE))
//     {
//         if(temp[0] != 'q')
//         printf("%s ne nachinautsya s bukvi k!\n", temp);
//         else
//         {
//             strncpy(qwords[i], temp, TARGSIZE - 1);
//             qwords[i][TARGSIZE - 1] = '\0';
//             i++;
//         }
//     }
// puts("Spisok prinyatih slov:");
// for(i = 0; i < LIM; i++)
// puts(qwords[i]);

// return 0;
    

// }

// char * s_gets(char * st, int n)
// {
//     char * ret_val;
//     int i = 0;
//     ret_val = fgets(st, n, stdin);
//     if(ret_val)
//     {
//         while (st[i] != '\n' && st[i] != '\0')
//         i++;
//         if (st[i] == '\n')
//             st[i] = '\0';
//         else //��������� ������� words[i] == '\0'
//             while (getchar() != '\n')
//                 continue;
//     }
//     return ret_val;
// }

//format.c -- �������������� ������
// #include <stdio.h>
// #define MAX 20
// char * s_gets(char * st, int n);

// int main(void)
// {
//     char first[MAX];
//     char last[MAX];

//     char formal[2 * MAX + 10];
//     double prize;
//     puts("Vvedite svoe imya:");
//     s_gets(first, MAX);
//     puts("Vvedite svou familiy:");
//     s_gets(last, MAX);
//     puts("Vvedite cummu denejnogo priza:");
//     scanf("%lf", &prize);

//     sprintf(formal, "%s, %-19s: $%6.2f\n", last, first, prize);
//     puts(formal);

//     return 0;
// }

// char * s_gets(char * st, int n)
// {
//     char * ret_val;
//     int i = 0;

//     ret_val = fgets(st, n, stdin);
//     if(ret_val){
//         while (st[i] != '\n' && st[i] !='\0')
//         i++;
//         if(st[i] == '\n')
//         st[i] = '\0';
//         else
//         while (getchar() != '\n')
//       continue;     
//     }
//     return ret_val; 
// }

// s_gerts == 
// fgets(line, 80, stdin); 
// find = strchr(line, '\n'); //����� �������� ����� ������
// if(find) //���� ����� �� �������� NULL
// *find = '\0'; //��������� ���� ������� ������


//sort_str.c -- ��������� ������ � ��������� ��

// #include <stdio.h>
// #include <string.h>

// #define SIZE 81
// #define LIM 20
// #define HALT ""
// void strst(char *strings[], int num);
// char * s_gets(char * st, int n);

// int main(void)
// {
//     char input[LIM][SIZE];
//     char *ptstr[LIM];
//     int ct = 9;
//     int k;

//     printf("Vvedite do %d strok i oni budut otsortirovani.\n", LIM);
//     printf("Chtobi ostanovot vvod, nazmite klavishu Enter v nachale stroki.\n");
//     while (ct < LIM && s_gets(input[ct], SIZE != NULL && input[ct][0] != '\0'))
//     {
//         ptstr[ct] = input[ct];
//         ct++;
//     }
//     stsrt(ptstr, ct);
//     puts("\nOtcortirovaniy spisok:\n");
//     for(k = 0; k < ct; k++)
//     puts(ptstr[k]);

//     return 0;
// }

// void stsrt(char * strings[], int num)
// {
//     char *temp;
//     int top, seek;
//     for(top = 0; top < num -1; top++)
//         for(seek = top + 1; seek < num; seek++)
//             if(strcmp(strings[top], strings[seek]) > 0)
//             {
//                 temp = strings[top];
//                 strings[top] = strings[seek];
//                 strings[seek] = temp;
//             }
// }

// char * s_gets(char * st, int n)
// {
//     char * ret_val;
//     int i;
//     ret_val = fgets(st, n, stdin);
//     if(ret_val)
//     {
//         while (st[i] != '\n' && st[i] != '\0')
//             i++;
//         if(st[i] == '\n')
//             st[i] = '\0';
//         else // ��������� ������� worsds[i] == '\0'
//             while (getchar() != '\n')
//             continue;
//     }

//    return ret_val;
// }

// mod_str.c -- ������������ ������
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// #define LIMIT 81

// void ToUpper(char *);
// int PunctCount(const char *);

// int main(void)
// {
//     char line[LIMIT];
//     char * find;

//     puts("Vvedite stroku:");
//     fgets(line, LIMIT, stdin);
//     find = strchr(line, '\n'); //����� ������� ����� ������
//     if(find)                   //���� ����� �� �������� NULL
//         *find = '\0';          //��������� ���� ������� ������
//     ToUpper(line);
//     puts(line);
//     printf("Eto stroka soderjit %d znakov prepinaniya.\n", PunctCount(line));

//     return 0;
// }

// void ToUpper(char * str)
// {
//     while (*str)
//     {
//         *str = toupper(*str);
//         str++;
//     }
    
// }

// int PunctCount(const char * str)
// {
//     int ct = 0;
//     while (*str)
//     {
//         if(ispunct(*str))
//             ct++;
//         str++;
//     }
//     return ct;
// }

// //repeat.c -- ������� main() � �����������
// #include <stdio.h>
// int main(int argc, char * argv[])
// {
//     int count;

//     printf("Kolichestvo argumentov, ukazanih  v komandnoi stroke: %d\n", argc - 1);

//     for(count = 1; count < argc; count++)
//         printf("%d: %s\n", count, argv[count]);
//     printf("\n");

//     return 0;
// }

//hello.c -- ����������� �������� �������� ������ � �����
// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char *argv[])
// {
//     int i, times;
//     if(argc < 2 || (times = atoi(argv[1])) < 1)
//     printf("Ispolzovanie: %s polozitelnoe - chislo\n", argv[0]);

//     else
//         for( i = 0; i < times; i++)
//             puts("Horosho dnya!");
//     return 0;
// }

//strcnvt.c -- ������������� ������� strtol()
// #include <stdio.h>
// #include <stdlib.h>
// #define LIM 30
// char * s_gets(char * st, int n);

// int main()
// {
//     char number[LIM];
//     char * end;
//     long value;

//     puts("Vvedite chislo (ili pustuyu stroku dlya vihoda iz programmi) :");
//     while (s_gets(number, LIM) && number[0] != '\0')
//     {
//         value = strtol(number, &end, 10); // �� ����������� 10
//         printf("Decyatichniy vvod, decyatichniy vivod: %ld, prekrashen na %s (%d) \n", value, end, *end);
//         value = strtol(number, &end, 16); //�� ��������� 16
//         printf("shestnadcatericniy vvod, chestdnacetiricniy vivod: %ld, prekrashen na %s (%d)\n", value, end, *end);
        
//     }
//     puts("Programma zavershena.\n");
//     return 0;
// }

// char * s_gets(char * st, int n)
// {
//     char * ret_val;
//     int i = 0;

//     ret_val = fgets(st, n, stdin);
//     if(ret_val)
//     {
//         while (st[i] != '\n' && st[i] != '\0')
//         {
//             i++;
//         }
//         if(st[i] == '\n')
//             st[i] = '\0';
//         else //��������� ������� words[i] == '\0'
//             while (getchar() != '\n')
//                 continue;
//     }
//     return ret_val;
// }


//������� ��� ������������:

// //1. ����� ������ �������� � �������������� ���������� ���������� ������?
// int main (void)
// {
//     char name[] = {'L', 'u', 'n', 'a'} //�������� ������� ������ '\0'? , ������������� ����� ���� ������� � ������� ������� "Luna"

// }

//2. Chto vivedet cled programma?
// #include <stdio.h>
// int main(void)
// {
//     char note[] = "uvidimsya zavtra v kafe.";
//     char * ptr;
//     ptr = note;
//     puts(ptr); //"uvidimsya zavtra v kafe."
//     puts(++ptr); //"vidimsya zavtra v kafe."
//     note[7] = '\0'; // uvidims'\0'a zavtra v kafe.'\0';
//     puts(note); //������� uvidims
//     puts(++ptr); //"idims

//     return 0;
// }

//3. ��� ������� ��������� ���������?
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char food[] = "Vkusno";
//     char * ptr;

//     ptr = food + strlen(food);// ���������� ����� �����: food[0] + 6 = food[6] == '\0';
//     while (--ptr >= food) //food[5] (o) >= food[0] (V); food[4] (n) >= food[0] (V); ... food[0] (v) >= food[0] (V); 
//     {
//         puts(ptr); // "o", "no" ... "Vkusno";
//     }

//     return 0;
    
// }

// //4. ��� ������� ��������� ���������
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char goldwyn[40] = "ogu ya smog";
//     char samuel[40] = "Za vsu dor";
//     const char * quote = "osilit lis chast.";

//     strcat(goldwyn, quote); //� goldwyn ������������� ����� �� quote ���������� ������ goldwyn = {"ogu ya smogosilit lis chast."}
//     strcat(samuel, goldwyn); //� samuel ������������� ����� �� goldwyn ���������� ������ samuel = {"Za vsu dorogu ya smog osilit lis chast."}
 
//     puts(samuel); //������������: Za vsu dorogu ya smogosilit lis chast.

//     return 0;
// }
//5. �����������, ��� ������� ����� ���������� �������:
// #include <stdio.h>
// char *pr (char *str);

// int main(void)
// {
//     char * x = pr("Xo Xo Xo!");
//     char buffer[] = "Xo Xo Xo!";
//     char *x = pr(buffer);
//    return 0;
// }
// char *pr (char *str)
// {
//     char * pc;
//     pc = str;
//     while (*pc)
//     {
//         putchar(*pc++);
//     }
//     do{
//         putchar(*--pc);
//     } while (pc - str); 
   
//     return (pc);
// }

/*
��������� �� ��������� ����� �������:
� = pr("�� �� ��!") ;

�. ��� �� �������? // Xo Xo Xo!!oX oX oX
�. ����� ��� ������ ����� ���������� �? // ��������� char. char *
�. ����� �������� �������� ���������� �? // &str[0] 
�. ��� �������� ��������� *--��, � ��� ��� ���������� �� --*�� ? //��� �������� ��� ���� ����� �� ���� ������ ����� ������� ��� ��� � ��� ������ *pc == '\0',
 --*pc ��� ��� �������� �� �����, � ����� ��������, ���� ���� ������� � ������ � ��� ���� 10 ������ 9;
�. ��� ����� ��������, ���� *--�c �������� ���������� *�c-- ? // ����� �������� ������, ���� �������� ������ ������ � ����� ��� ���������������� ��� ��� �������� '\0'
�. ��� ���� ������������� ��� ��������� �������� � ���������� while? //�  ������ ������, ���� �� ������ '\0' ���� ��� ����� 0, � ������ �����, ������ �������� ������� ���� �� ������ ������ ��� �� ������ �� ����� ������. ������ do ��������� pc ���� �� �� ����� ����� &str[0].
�. ��� ����������, ���� ������� pr() �������� � �������� ��������� ������ ������? //(" ") ��� ���� ������, ��� ��� ���������� ������ ������ ��� ����.
�. ��� �������� ������� � ���������� �������, ����� pr() ����� ����
������������ ���, ��� �������� ����?*/ // char buffer[] = "�� �� ��!"; 
                                        //char *x = pr(buffer);




//6. �����������, ��� ������� ��������� ����������:
// #include <stdio.h>
// int main(){
// char sign = '$';
// printf("%d %d %d", sizeof(sign), sizeof('$'), sizeof("$"));
// return 0;
// }
/*������� ������ ������ �������� ���������� sign? �������� '$'? �������� "$"?*/\


//7. ��� ������� ��������� ���������?
// #include <stdio.h>
// #include <string.h>
// #define M1 "How are ya, sweetie?"
// char M2[40] = "Beat the clock.";
// char * M3 = "chat";

// int main(void)
// {
//     char words[80];

//     printf(M1); //How are ya, sweetie? --  ������
//     puts(M1); //How are ya, sweetie?\n -- ������
//     puts(M2); //Beat the clock.\n -- ������
//     puts(M2 + 1);//eat the clock.\n -- ������
//     strcpy(words, M2); // words == Beat the clock.
//     strcat(words, "Win a toy.");// words == Beat the clock.Win a toy.
//     puts(words); // Beat the clock.Win a toy. -- ������
//     words[4] = '\0'; // Beat'\0'the clock.Win a toy.'\0'
//     puts(words); //Beat-- ������
//     while (*M3)
//         puts(M3++);//chat //hat //at // t -- ��� ��� �������� ���� �� ������ �� '\0' � ���� �� �� ����� �� ������ ������
//     puts(--M3); //t
//     puts(--M3); //at
//     M3 = M1; //"How are ya, sweetie?"
//     puts(M3); //How are ya, sweetie? ��������

//     return 0;
// }

//8. ��� ������� ��������� ���������?
// #include <stdio.h>
// int main(void)
// {
//     char str1[] = "gawsie";
//     char str2[] = "bletonism";
//     char *ps;

//     int i = 0;
//     for(ps = str1; *ps != '\0'; ps++) //��� ������������� ���� ���� �������� ������ ���� �� �� 'a' � 'e' ������� g ���������� f ������ ��� � ascll �� ����� �� ���� ������� ������ ������� �������� ��� �� ����� ����� faavrhee
//     {
//         if(*ps == 'a' || *ps =='e')
//             putchar(*ps);
//         else 
//             (*ps)--;
//         putchar(*ps); //�� ����� ������ ����������,������� '�' � 'e' ����� �������������
//     }

    // putchar('\n');
//     while (str2[i] != '\0')
//     {
//         printf("%c", i % 3? str2[i] : '*'); //��� ���� ������� �� 3 �� �������� '*' ������ ������������ ��������
//         i++;
//     }
//        return 0; //�����: faavrhee *le*on*sm
// }


/*9. ������� s_gets(),  ������������ � ���� �����, ����� ����������� � ����� � �������������� ����������,
 � �� ��������, ����� ��������� �� ��� ���������� i. �������� ���.*/

//  #include <stdio.h>
//  #include <string.h>
//  #define LIM 2
//  char * s_gets(char * st, int n);

//  int main(void)
//  {
//     char name[LIM];
//     char * lol;
//     if(lol = (s_gets(name, LIM))){
//     puts(name);
//     }

//     return 0;
//  }

//  char * s_gets(char * st, int n)
//  {
//     char * pt = fgets(st, n, stdin);
//     if(pt)
//     {
//         for( ;*st != '\n' && *st != '\0'; st++);
//         if(*st =='\n')
//         {
//             *st = '\0';
//         }
//         else 
//             while (getchar() != '\n')
//                 continue;
//     } 

//     return pt;
//  }

/*10. ������� strlen() ��������� ��������� �� ������ � �������� ��������� � ���������� ����� ������. 
�������� ���� ������ ���� �������*/

// #include <stdio.h>
// #define NOMER 40
// int str(char * name, int n);
// int main(void)
// {
//     char lol[NOMER]= {"lol kek cheburek\n"};
//     int num;
//     num = str(lol, NOMER);
//     printf("%d", num);
// }

// int str(char * name, int n)
// {
//     int i = 0;
//     char * kek = name;
//     for(; kek < name + n; kek++)
//     {
//         if(*kek != '\0')
//         {
//             i++;
//         }
//         else{
//             break;
//         }
//     }

//     return i;
// }

//������������ 
//(
// int my_strlen(char *name)
// {
//     char *start = name;

//     while (*name)
//         name++;

//     return name - start;
// }
//)

/*11. ������� s_gets(), ������������ � ���� �����, 
����� ���������� � �������������� ������� strchr()������ ����� while 
��� ����������� �������� ����� ������. �������� ���.*/

// #include <stdio.h>
// #include <string.h>
// char * s_gets(char * name, int n);
// #define LIM 5

// int main(void)
// {
//     char masiv[LIM];
//     char * lol;

//     lol = s_gets(masiv, LIM);
//     puts(lol);
//     return 0;
// }
// char * s_gets(char * name, int n)
// {
//     char * kek;
//     char * zez;
//     if((kek = fgets(name, n, stdin)) != 0)
//     {
//         if((zez = strchr(name, '\n')) != NULL)
//         *zez = '\0';

//         else
//     while (getchar() != '\n'){
//     continue;
//     }
//     }

//     return kek;
// }

/*12. ������������ �������, ������� ��������� ��������� �� ������ � �������� ���������
� ���������� ��������� �� ������ ������ �������, ������������� � ��������� ������� ������ ������ ��� ����� ���.
������� ������ ���������� ���������, ���� ������� �� �������*/

// #include <stdio.h>
// #include <string.h>
// #define LIM 20
// char * s_gets(char * name, int n);
// char * probel(char * name, int n);

// int main(void)
// {
//     char masiv[LIM];
//     char *lol;
//     char *zoj;

//     if ((lol = s_gets(masiv, LIM)) != NULL)
//     {
//         zoj = probel(masiv);
//         puts(lol);
//         puts(zoj);
//     }

//     return 0;
// }

// char * s_gets(char * name, int n)
// {
//     char * kek;
//     char * zez;
//     if((kek = fgets(name, n, stdin)) != 0)
//     {
//         if((zez = strchr(name, '\n')) != NULL)
//         *zez = '\0';

//         else
//     while (getchar() != '\n'){
//     continue;
//     }
//     }

//     return kek;
// }

// char * probel(char * name)
// {
//     char *kek;

//     kek = strchr(name, ' ');       
//     if (kek == NULL)               
//         kek = strchr(name, '\0');  

//     return kek;
// }

/*13. ���������� ��������� �� �������� 11.21, ��������� ������� �� ctype.h ��� ����,
 ����� ��������� ������������ ���������� ����� ���������� �� ���������� ������������� ��������� � �������� ����.*/
//������� 11.21. ��������� compare.c
//compare.c -- ��� ��������� ����� ��������
// #include <stdio.h>
// #include <string.h> //���������� strcmp()
// #include <ctype.h>

// #define ANSWER "GRANT"
// #define SIZE 40

// char * s_gets(char * st, int n);
// char * s_BOOK(char * st, int n);

// int main(void)
// {
//     char try[SIZE];
//     puts("Kto pohoronen v mogile Granta?");
//     s_gets(try, SIZE);
//     s_BOOK(try, SIZE);
//     while (strcmp(try, ANSWER) != 0)
//     {
//         puts("Nepravilno! Popitaites eshe raz.");
//         s_gets(try, SIZE);
//         s_BOOK(try, SIZE);
//     }

//     puts("Teper pravilno!");
//    printf("lol");

//     return 0;
// }

// char * s_gets(char * st, int n)
// {
//     char * ret_val;
//     int i = 0;

//     ret_val = fgets(st, n, stdin);
//     if(ret_val)
//     {
//         while (st[i] != '\n' && st[i] != '\0')
//         {
//             i++;
//         }
//         if(st [i] == '\n')
//         st[i] = '\0';
//         else //��������� ������� words[i] == '\0'
//             while (getchar() != '\n')
//             continue;
//     }

//     return ret_val;
// }

// char * s_BOOK(char * st, int n){
// char * lot = st;
// for( ;*lot != '\0'; lot++)
// *lot = toupper(*lot);

// return st;
// }

//������ ��� ������������

// hiding.c -- переменные в блоках
// #include <stdio.h>

// int main(void)
// {
//     int x = 30;
//     printf("x vo vneshnem bloke: %d po adresu %p\n", x, &x);
//     {
//         int x = 77;
//         printf("x vo vnutene, bloke: %d po adresu %p\n", x, &x);
//     }
//     printf("x vo vneshnem bloke: %d po adresu %p\n", x, &x);

//     while(x++ < 33)
//     {
//         int x = 100;
//         x++;
//         printf("x v cikle while: %d po adresu %p\n", x, &x);
//     }
//     printf("x vo vneshnem bloke: %d po adresu %p\n", x, &x);   
// }

//forc99.c -- новые правила для блоков в C99

// #include <stdio.h>
// int main()
// {
//     int n = 8;

//     printf(" PErvonachanlno n = %d po adresu %p\n", n, &n);
    
//     for(int n = 1; n < 3; n++)
//         printf("        cikl 1: n = %d po adresu %p\n", n, &n);
//     printf("    Posle cikla 1 n = %d po adresu %p\n", n, &n);

//     for(int n = 1; n < 3; n++)
//     {
//         printf("    index cikla 2 n = %d po adresu %p\n", n, &n);
//         int n = 6;
//         printf("    cikl 2: n = %d po adresu %p\n", n, &n);
//         n++;
//     }
//     printf("    Posle cikla 2 n = %d po adresu %p\n", n, &n);

//     return 0;
// }

//loc_stat.c -- использование локальной статической переменной
// #include <stdio.h>

// void trystat(void);

// int main(void)
// {
//     int count;
//     for(count = 1; count <= 3; count++)
//     {
//         printf("Nachinatsya iteraciya %d: \n", count);
//         trystat();
//     }

//     return 0;
// }

// void trystat(void)
// {
//     int fade = 1;
//     static int stay = 1;

//     printf("fade = %d and stay = %d\n", fade++, stay++);
// }


// global.c -- использование внешней перменной
// #include <stdio.h>
// int units = 0;
// void critic(void);

// int main(void)
// {
//     extern int units;

//     printf("Skolko funtov vesit malenkiy bochonok masla?\n");
//     scanf("%d", &units);

//     while(units != 56)
//         critic();
//     printf("Vi znali eto!\n");

//     return 0;
// }

// void critic(void)
// {
//     printf("Vam ne povezlo. Poprobuite eshe raz.\n");
//     scanf("%d", &units);
// }

//parta.c -- разнообразные классы хранения
//компилировать вместе с partb.c

// #include <stdio.h>
// void report_count();
// void accumulate(int k);
// int count = 0;  //область видимости в пределах файла, внешнее связывание

// int main(void)
// {
//     int value; //автоматическая переменная
//     register int i; //регстровая переменная
//     printf("Vvedite polozitelnoe celoe chislo (0 dlya zaversheniya): ");
//     while(scanf("%d", &value) == 1 && value > 0)
//     {
//         ++count;     //использование переменной с областью видимости в пределах файла
//         for(i = value; i >= 0; i--)
//             accumulate(i);
//         printf("Vvedite polozitelnoe celoe chislo (0 dlya zaversheniya): ");
//     }
//     report_count();

//     return 0;
// }

// void report_count()
// {
//     printf("Cikl vipolnen %d raz(a)\n",count);
// }

// //partb.c -- остальная часть программы
// //компилировать вместе с parta.c
// #include <stdio.h>

// extern int count;  //ссылочное объявление, внешнее связывание

// static int total = 0; //статическое определение, внутренее связывание
// void accumulate(int k); //прототип

// void accumulate(int k)  //k имеет область вижимости в пределах блока, связывание отсуствует

// {
//     static int subtotal = 0; //статическая переменная связыввание отсуствует

//     if(k <= 0)
//     {
//         printf("iteraciya cikla: %d\n", count);
//         printf("subtotal: %d; total: %d\n", subtotal, total);
//         subtotal = 0;
//     }
//     else
//     {
//         subtotal += k;
//         total += k;
//     }
// }

//rand0.c -- генерация случайных чисел
//             используется переносимый арлгоритм ANSI C
// static unsigned long int next = 1; //начальное число

// int rand0(void)
// {
//     //магическая формула генерации псевдослучайных чисел
//     next = next * 1103515245 + 12345;
//     return (unsigned int) (next / 65536) % 32768;
// }

//r_drive0.c -- тестирование функции rand0()
//компилировать вместе с rand0.c
// #include <stdio.h>
// extern int rand0(void);
// int main(void)
// {
//     int count;

//     for(count = 0; count < 5; count++)
//             printf("%d\n", rand());
//     return 0;
// }

// //s_and_r.c --файл для функций rand1() и srand1()
// //          используется переносимый алгоритм ANSI C

// static unsigned long int next = 1;

// int rand1(void)
// {
//     //магическая формула ддя геренации псевдослучайных чисел
//     next = next * 1103515245 + 12345;
//     return (unsigned int) (next / 65536) % 32768;
// }

// void srand1(unsigned int seed)
// {
//     next = seed;
// }

// r_drivel.c -- тестирование функций rand1() и srand1()
// компилировать вместе с s_and_r.c

// #include <stdio.h>
// extern void srand1(unsigned int x);
// extern int rand1(void);

// int main(void)
// {
//     int count;
//     unsigned seed;

//     printf("VVedite zelaemoe nachalnoe chislo.\n");
    
//     while (scanf("%u",  &seed) == 1)
//     {
//         srand1(seed); //переустановка начального числа
//         for(count = 0; count < 5; count++)
//             printf("%d\n", rand1());
//         printf("Vvedite sledushue nachalnoe chislo (q dlya zaversheniya): \n");
//     }

//     printf("Programma zaverhena.\n");

//     return 0;
// }

// diceroll.c -- эмуляция игры в кости
// комлировать вместе с mandydice.c

// #include "diceroll.h"
// #include <stdio.h>
// #include <stdlib.h>  //для бибилиотечной функции rand()

// int roll_count = 0;         //внешнее связывание

// static int rollem(int sides) //закрытая для этого файла
// {
//     int roll;
//     roll = rand() % sides + 1;
//     ++roll_count;

//     return roll;
// }

// int roll_n_dice(int dice, int sides)
// {
//     int d;
//     int total = 0;
//     if(sides < 2)
//     {
//         printf("Tredbuyutsya, po menshey mere, 2 grani.\n");
//         return -2;
//     }
//     if(dice < 2)
//     {
//         printf("Trebuetsya menshey mere, 2 grani.\n");
//         return -1;
//     }
//     for(d = 0; d  < dice; d++)
//         total += rollem(sides);
//     return total;
// }

// //diceroll.h
// extern int roll_count;
// int roll_n_dice(int dice, int sides);

// manydice.c -- бросание мнодества костей
// компилировать вместе с diceroll.c
// #include <stdio.h>
// #include <stdlib.h>     //для библиотечной функции srand()
// #include <time.h>       //для функции time()
// #include "diceroll.h"   //для функции roll_n_dicee() и для переменной roll_count

// int main(void)
// {
//     int dice, roll;
//     int sides;
//     srand((unsigned int) time()); //рандомизация начального числа
//     printf("Vvedite kolichestvo graney kosty ili 0 dlya zavesheniya programmi.\n");
//     while (scanf("%d", &sides) == 1 && sides > 0)
//     {
//         printf("Skolko kostey?\n");
//         if((status = scanf("%d", &dice)) != 1)
//         {
//             if(status == EOF)
//                 break;  //выход из цикла
//             else
//             {
//                 printf("Vi dolzni vvesti celoe chislo.");
//                 printf(" Davaite nachnem s nachala.\n");
//                 while(getchar() != '\n')
//                     continue; //отбросить некорректный ввод
//                     printf("Skolko granei? Dlya prekrasheniya vvedite 0.\n");
//                     continue; //новая итерация
//             }
//         }
//         roll = roll_n_dice(dice, sides);
//         printf("vi brosali %d raz (a), ispolzuya %d kosti c %d granyami.\n", roll, dice, sides);
//         printf("Slolko granei? Dlya prekrasheniya vvedite 0.\n");
//     }
//     printf("Funkciya rollem() bila vizvana %d raz(a).\n", roll_count); //используется переменная extern
//     printf("Pust udacha ne pokidaet vas!\n");

//     return 0;
// }

// double * ptd;
// ptd = (double *) malloc(30 * sizeof(double));

// //dyn_arr.c -- динамически выделяемый массив
// #include <stdio.h>
// #include <stdlib.h> //для malloc(), free()

// int main(void)
// {
//     double * ptd;
//     int max = 0;
//     int number;
//     int i = 0;

//     puts("Vvedite maksimalnoe kolichestvo elementov tipa double.");
//     if(scanf("%d", &max) != 1)
//     {
//         puts("Kolichistvo vvedeno nekorrektno -- proramma zaveshena.");
//         exit(EXIT_FAILURE);
//     }
//     ptd = (double *) malloc(max * sizeof(double));
//     if(ptd == NULL)
//     {
//         puts("Ne udalos videliy pamyat. Proramma zavesrshena.");
//         exit(EXIT_FAILURE);
//     }
//     // ptd теперь указывает на массив из max элементов
//     puts("Vvedite znachenie(q dlya vihoda:)");
//     while(i < max && scanf("%lf", &ptd[i]) == 1)
//     ++i; ////////////////////////
//     printf("vvedeno %d elementov:\n", number = i);
//     for(i = 0; i < number; i++)
//     {
//         printf("%7.2f ",ptd[i]);
//         if(i % 7 == 6)
//         putchar('\n');
//     }
//     if(i % 7 != 0)
//         putchar('\n');
//         puts("Programma zavershena.");
//         free(ptd);

//         return 0;
// }

// long * newmem;
// newmem = (long *) calloc(100, sizeof(long));

// int vlamal()
// {
//     int n;
//     int * pi;

//     scanf("%d", &n);
//     pi = (int *) malloc (n * sizeof(int));
//     int ar[n]; // массив переменной длины
//     pi[2] = ar[2] = -5;
//     ...
// }


//where.c -- где находится в памяти?
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int static_store = 30;
// const char * pcg = "Strokoviy literal";

// int main(void)
// {
//     int auto_store = 40;
//     char auto_string[] = "Avtomaticheskiy massiv char";
//     int * pi;
//     char * pcl;

//     pi = (int *) malloc(sizeof(int));
//     *pi = 35;
//     pcl = (char *)  malloc(strlen("Dinamishiskaya stroka") +  1);
//     strcpy(pcl, "Dinamicsheskaya stroka");

//     printf("            static_store: %d po adresu %p\n", static_store, &static_store);
//     printf("            auto_store: %d po adresu %p\n", auto_store, &auto_store);
//     printf("            *pi: %d po adresu %p\n", *pi, pi);
//     printf("        %s po adresu %p\n", pcg, pcg);
//     printf("         %s po adresu %p\n", auto_string, &auto_string);
//     printf("          %s po adresu %p\n", pcl, pcl);
//     printf("         %s po adresu %p\n", "Stroka v kaviskah", "Stroka v kaviskah");
    
//     free(pi);
//     free(pcl);

//     return 0;
// }

//Voprosi dlya samo kontrolya

//7. Каким функциям известна переменная в следующем коде? Если ли в коде ошибки?
//файл 1
// int daisy;
// int main(void)
// {
//     int lily;
//     ...;
// }
// int petal()
// {
//     extern int daisy, lily; //lily  оштбка так как локальная
//     ...;
// }
// //файл 2
// extern int daisy;
// static int lily;

// int rose;
// int stem()
// {
//     int rose;
//     ...;
// }
// void root()
// {
//     ...;
// }

//8. Что выведет следующая прорамма?
// #include <stdio.h>
// char color = 'B';
// void first(void);
// void second(void);

// int main(void)
// {
//     extern char color;
//     printf("color v main() ravno %c\n", color);
//     first();
//     printf("color v main() ravno %c\n", color);
//     second();
//     printf("color v main() ravno %c\n", color);

//     return 0;
// }

// void first(void)
// {
//     char color;
//     color = 'R';
//     printf("color v first()ravno %c\n", color);
// }

// void second(void)
// {
//     color = 'G';
//     printf("color v second() ravno %c\n", color);
// }


//1. Перепишите программу из листинга 12.4 так, чтобы в ней не использовались глобальные переменные
//glovbal.c -- использование внешней переменной
// #include <stdio.h>
// int units = 0;
// void critic(void);
// int main(void)
// {
//     extern int units;
//     printf("Skolko funtov vesit malenkiy bochonok masla?\n");
//     scanf("%d", &units);
//     while (units != 56)
//             critic();
//     printf("Vi znali eto!\n");

//     return 0;
// }

// void critic(void)
// {
//     printf("Vam ne povezlo. Poprobuite eshe raz.\n");
//     scanf("%d", units);
// }

//Ответ
// #include <stdio.h>
// void critic(int * units);
// int main(void)
// {
//     int units = 0;
//     printf("Skolko funtov vesit malenkiy bochonok masla?\n");
//     scanf("%d", &units);
//     while (units != 56)
//             critic(&units);
//     printf("Vi znali eto!\n");

//     return 0;
// }

// void critic(int * units)
// {
//     printf("Vam ne povezlo. Poprobuite eshe raz.\n");
//     scanf("%d", units);
// }

// //2.
// //pe12-2b.c
// //компилировать вместе с pe12-2a.c
// #include <stdio.h>
// #include "pe12-2a.h"
// int main(void)
// {
//     int mode;
//     printf("Vvedite 0 dlya metrisheskogo rezima ili 1 dlya amerikanskogo rezima: ");
//     scanf("%d", &mode);
//     while(mode >= 0)
//     {
//         set_mode(mode);
//         get_info();
//         show_info();
//         printf("Vvedite 0 dlya metrisheskogo rezima ili 1 dlya amerikanskogo rezima:");
//         printf(" (-1 d;ya zaversheniya): ");
//         scanf("%d", &mode);
//     }
//     printf("Programma zavershena.\n");
//     return 0;
// }
// //pe12-2a.c
// #include <stdio.h>
// #include "pe12-2a.h"

// static int mode = 0;
// static double rasstoyanie;
// static double rashod;
// void set_mode(int m)
// {
//     if(m == 0 || m == 1)
//     {
//         mode = m;
//     }
//     else
//         printf("Ukazan nedopustimiy rezhim. Ispolzuetsya rezhim %d.\n", mode);
    
// }

// void get_info()
// {
//     if(!mode)
//     {
//         printf("Vvedite proidennoe rasstoyanie v killometrah: ");
//         scanf("%lf", &rasstoyanie);
//         printf("Vvedite obiom izrachodanovogo topliva v litrah: ");
//         scanf("%lf", &rashod);
//     }
//     else
//     {
//         printf("Vvedite proidennoe rastoyanie v milyah ");
//         scanf("%lf", &rasstoyanie);
//         printf("Vvedite obiom izrachodanovogo topliva v galonah: ");
//         scanf("%lf", &rashod);
//     }
// }

// void show_info()
// {
//     if(!mode)
//     printf("Rashod topliva sostovlyaet %.2lf litrov na 100 km", rashod / rasstoyanie * 100);

//     else
//     printf("Rashod topliva sostovlyaet %.2lf mili na gallon", rasstoyanie / rashod);
// }

// //pe12-2a.h
// void show_info();
// void get_info();
// void set_mode(int m);

//3.
// #include <stdio.h>
// #include "another_pe12-2a.h"
// int main(void)
// {
//     int mode = 0;
//     double rasstoyanie ,rashod;
//     printf("Vvedite 0 dlya metrisheskogo rezima ili 1 dlya amerikanskogo rezima: ");
//     scanf("%d", &mode);
//     while(mode >= 0)
//     {
//         set_mode(&mode, mode);
//         get_info(mode, &rasstoyanie, rashod);
//         show_info(mode, rashod, rasstoyanie);
//         printf("\nVvedite 0 dlya metrisheskogo rezima ili 1 dlya amerikanskogo rezima:");
//         printf(" (-1 d;ya zaversheniya): ");
//         scanf("%d", &mode);
//     }
//     printf("Programma zavershena.\n");
//     return 0;
// }

// #include <stdio.h>
// #include "another_pe12-2a.h"


// void set_mode(int * mode, int m)
// {
//     if(m == 0 || m == 1)
//     {
//         *mode = m;
//     }
//     else
//         printf("Ukazan nedopustimiy rezhim. Ispolzuetsya rezhim %d.\n", *mode);
// }

// void get_info(int mode, double * rasstoyanie, double * rashod)
// {
//     if(!mode)
//     {
        
//         printf("Vvedite proidennoe rasstoyanie v killometrah: ");
//         scanf("%lf", rasstoyanie);
//         printf("Vvedite obiom izrachodanovogo topliva v litrah: ");
//         scanf("%lf", rashod);
//     }
//     else
//     {
//         printf("Vvedite proidennoe rastoyanie v milyah ");
//         scanf("%lf", rasstoyanie);
//         printf("Vvedite obiom izrachodanovogo topliva v galonah: ");
//         scanf("%lf", rashod);
//     }
// }

// void show_info(int mode, double rashod, double rasstoyanie)
// {
//     if(!mode)
//     printf("Rashod topliva sostovlyaet %.2lf litrov na 100 km", rashod / rasstoyanie * 100);

//     else
//     printf("Rashod topliva sostovlyaet %.2lf mili na gallon", rasstoyanie / rashod);
// }

// //another_pe12-2a.h
// void show_info(int mode, double rashod, double rasstoyanie);
// void get_info(int mode, double * rasstoyanie, double * rashod);
// void set_mode(int * mode, int m);

//4.

// #include <stdio.h> 
// int block(void);

// int main(void)
// {
// int kol;
//  block();
//  block();
//  block();
//  kol = block();
//  printf("%d - stolko raz bila vizvana funkciya block()", kol);

// return 0;
// }
// int block(void)
// {
//     static int chet = 0;
//     printf("kek\n");
//     chet++;
//     return chet;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// #define SIZE 100

// int main(void)
// {
//     int nums[SIZE];
//     int temp;
    
//     srand((unsigned int) time(0));

//     for(int i = 0; i < SIZE; i++)
//         nums[i] = rand() % 10 + 1;

//     for(int i = 0; i < SIZE - 1; i++)
//     {
//         for(int index = i + 1; index < SIZE; index++)
//         {
//             if(nums[i] < nums[index])
//             {
//                 temp = nums[i];
//                 nums[i] = nums[index];
//                 nums[index] = temp;

//             }
//         }
//     }
//     for(int i = 0; i < SIZE; i++)
//     {
//         printf("%d ", nums[i]);

//         if((i + 1) % 10 == 0)
//             printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// #define SIZE 100

// int main(void)
// {
//     int nums[SIZE];
//     int temp;
//     int num1, num2, num3, num4,  num5, num6, num7, num8, num9, num10;
//     num1 = num2 = num3 = num4 = num5 = num6 = num7 = num8 = num9 = num10 = 0;

    
//     srand((unsigned int) time(0));

//     for(int i = 0; i < SIZE; i++)
//     {
//         nums[i] = rand() % 10 + 1;
//         if(nums[i] == 1)
//         num1++;
//         else if(nums[i] == 2)
//         num2++;
//         else if(nums[i] == 3)
//         num3++;
//         else if(nums[i] == 4)
//         num4++;
//         else if(nums[i] == 5)
//         num5++;
//         else if(nums[i] == 6)
//         num6++;
//         else if(nums[i] == 7)
//         num7++;
//         else if(nums[i] == 8)
//         num8++;
//         else if(nums[i] == 9)
//         num9++;
//         else if(nums[i] == 10)
//         num10++;
//     }

//     printf("chislo %d bilo sgenerirovano: %d raz\n", 1, num1);
//     printf("chislo %d bilo sgenerirovano: %d raz\n", 2, num2);
//     printf("chislo %d bilo sgenerirovano: %d raz\n", 3, num3);
//     printf("chislo %d bilo sgenerirovano: %d raz\n", 4, num4);
//     printf("chislo %d bilo sgenerirovano: %d raz\n", 5, num5);
//     printf("chislo %d bilo sgenerirovano: %d raz\n", 6, num6);
//     printf("chislo %d bilo sgenerirovano: %d raz\n", 7, num7);
//     printf("chislo %d bilo sgenerirovano: %d raz\n", 8, num8);
//     printf("chislo %d bilo sgenerirovano: %d raz\n", 9, num9);
//     printf("chislo %d bilo sgenerirovano: %d raz\n", 10, num10);

//     return 0;
// }

//13.1
// //count.c -- использование стандартного ввода-вывода
// #include <stdio.h>
// #include <stdlib.h> //протоип exit()

// int main(int argc, char * argv[])
// {
//     int ch; //место для хранения каждого символа по мере чтения
//     FILE *fp; //"указатель файла"
//     unsigned long count = 0;
//     if(argc != 2)
//     {
//         printf("Ispolzovanie: %s imya_faila\n", argv[0]);
//         exit(EXIT_FAILURE);
//     }
//     if((fp = fopen(argv[1], "r")) == NULL)
//     {
//         printf("Ne udaetsya otkrit %s\n",argv[1]);
//         exit(EXIT_FAILURE);
//     }
//     while((ch = getc(fp)) != EOF)
//     {
//         putc(ch, stdout); //то же, что и putchar(ch);
//         count++;
//     }
//     fclose(fp);
//     printf("Fail %s soderzit %lu simvolov\n", argv[1], count);

//     return 0;
// }

// //правильное проектное решение #1
// int ch;                            //переменная int длч хранения EOF
// FILE * fp;
// fp = fopen("wacky.txt", "r");       
// ch = getc(fp);                     //получить первоначальный ввод
// while(ch != EOF)
// {               
//     putchar(ch);                //обработать ввод
//     ch = getc(fp);              //получить следюущий ввод
// }

// //правильное проектное решение #2
// int ch;
// FILE * fp;
// fp = fopen("wacky.txt", "r");
// while ((ch + getc(fp)) != EOF)
// {
//     putchar(ch);
// }

// //reducto.c -- скоращение файлов на две трети!
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(int argc, char * argv[])
// {
//     FILE *in, *out;  // объявление двух указателей на FILE
//     int ch;
//     char name[LEN]; //хранилище для имени выходного файла
//     int count = 0;

//     //проверка аргументов командной строки
//     if(argc < 2)
//     {
//         fprintf(stderr, "Ispolzovanie: %s imya_faila\n", argv[0]);
//         exit(EXIT_FAILURE);
//     }

//     //настройка ввода
//     if((in = fopen(argv[1], "r")) == NULL)
//     {
//         fprintf(stderr, "Ne udaetsya otkrit fail\"%s\"\n", argv[1]);
//         exit(EXIT_FAILURE);
//     }
//     //настрйока вывода
//     strncpy(name, argv[1], LEN - 5); //копирование имени файла
//     name[LEN - 5] = '\0';
//     strcat(name, ".red");           //добавление .red
//     if((out = fopen(name, "w")) == NULL)
//     {
//                                 //открытие файла для записи
//         fprintf(stderr, "Ne udaetsya sozdat vihodnoy fail.\n");
//         exit(3);
//     }
//     //копирование данных
//     while((ch = getc(in)) != EOF)
//         if(count++ % 3 == 0)
//             putc(ch, out);              //выводить каждый третий символ
//     //очистка
//     if(fclose(in) != 0 || fclose(out) != 0)
//         fprintf(stderr, "OShibka pri zakritii failov.\n");
//     return 0;
// }

// //addaword.c -- использование fprintf(), fscanf() and rewind()
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define MAX 41

// int main(void)
// {
//     FILE * fp;
//     char words[MAX];

//     if((fp = fopen("wordy", "a+")) == NULL)
//     {
//         fprintf(stdout, " Ne udaetsya otkrit fail \"wordy\".\n");
//         exit(EXIT_FAILURE);
//     }
//     puts("Vvedite slova dlya dobavleniya v fail; dlya zaversheniya");
//     puts("VVedite simvol # v nachale stroki.");
//     while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
//         fprintf(fp, "%s\n", words);
//     puts("Soderzimoe faila:");
//     rewind(fp);             // возврат в начало файла
//     while(fscanf(fp, "%s", words) == 1)
//         puts(words);
//     puts("Gotovo!");
//     if(fclose(fp) != 0)
//         fprintf(stderr, "Oshibka pri zakritii faila\n");

//     return 0;
// }

// //reverse.c -- отображение содержимого файла в обратном порядке
// #include <stdio.h>
// #include <stdlib.h>
// #define CNTL_Z '\032' //маркер конца файла в текстовых файлах DOS
// #define SLEN 81

// int main(void)
// {
//     char file[SLEN];
//     char ch;
//     FILE *fp;
//     long count, last;

//     puts("Vvedite imya faila dlya obrabotki:");
//     scanf("%80s", file);
//     if((fp = fopen(file, "rb")) == NULL)
//     {                                       //режим только для чтения
//         printf("reverse ne udaetsya otkrit %s\n", file);
//         exit(EXIT_FAILURE);
//     }
//     fseek(fp, 0L, SEEK_END);            //перейти в конце файла
//     last = ftell(fp);
//     for(count = 1L; count <= last; count++)
//     {
//         fseek(fp, -count, SEEK_END);                //двигаться в обратном направлении
//         ch = getc(fp);
//         if(ch != CNTL_Z && ch != '\r')
//             putchar(ch);
//     }
//     putchar('\n');
//     fclose(fp);

//     return 0;
// }

// //append.c -- добавление содержимого файлов в файл назначения
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define BUFSIZE 4096
// #define SLEN 81

// void append(FILE * source, FILE * dest);
// char * s_gets(char * st, int n);

// int main(void)
// {
//     FILE *fa, *fs;          //fa для файла назначения, fs для исходного файла
//     int files = 0;          //количество добавляемых файлов
//     char file_app[SLEN];    //имя файла назначения
//     char file_src[SLEN];    //имя исходного файла
//     int ch;
//     puts("Vvedite imya faila naznacheniya:");
//     s_gets(file_app, SLEN);
//     if((fa = fopen(file_app, "a+")) == NULL)
//     {
//         fprintf(stderr, "Ne udaytsya otkrit %s\n", file_app);
//         exit(EXIT_FAILURE);
//     }
//     if(setvbuf(fa, NULL, _IOFBF, BUFSIZ) != 0)
//     {
//         fputs("Ne udaetsya sozdat vihodnoy bufer\n", stderr);
//         exit(EXIT_FAILURE);
//     }
//     puts("Vvedite imya pervogo ishodnogo faila (ili pustuu stroku dlya zaversheniya):");
//     while(s_gets(file_src, SLEN) && file_src[0] != '\0')
//     {
//         if(strcmp(file_src, file_app) == 0)
//             fputs("Dobavit fail v konec samogo sebya nevozmojno\n", stderr);
//         else if ((fs = fopen(file_src, "r")) == NULL)
//             fprintf(stderr, "Ne udaetsya otkrit %s\n", file_src);
//         else
//         {
//             if(setvbuf(fs, NULL, _IOFBF, BUFSIZ) != 0)
//             {
//                 fputs("Ne udaetsya sozdat vhodnoy bufer\n", stderr);
//                 continue;
//             }
//             append(fs, fa);
//             if(ferror(fs) != 0)
//                 fprintf(stderr,"OShibka pri chtenii faila %s.\n", file_src);
//             if(ferror(fs) != 0)
//                 fprintf(stderr,"Oshibka pri zapisi faila %s.\n", file_app);
//             fclose(fs);
//             files++;
//             printf("Soderzimoe faila %s dobavleno.\n", file_src);
//             puts("VVedite imya skeduushego faila(ili pustuyu stroku dlya zaversheniya):");
//         }
//     }
//     printf("Dobavlenie zaversheno. Kolichestvo dobavlennih failov: %d.\n", files);
//     rewind(fa);
//     printf("Soderzimoe %s:\n", file_app);
//     while((ch = getc(fa)) != EOF)
//         putchar(ch);
//     puts("Otobrazenie zaversheno.");
//     fclose(fa);
//     return 0;
// }

// void append(FILE * source, FILE * dest)
// {
//     size_t bytes;
//     static char temp[BUFSIZ];           //выделить память один раз
//     while((bytes = fread(temp, sizeof(char), BUFSIZ, source)) > 0)
//         fwrite(temp, sizeof(char), bytes, dest);
// }
// char * s_gets(char * st, int n)
// {
//     char * ret_val;
//     char * find;
//     ret_val = fgets(st, n, stdin);
//     if(ret_val)
//     {
//         find = strchr(st, '\n');    //поиск символа новой строки
//         if(find)                    //если адрес не является NULL,
//             *find = '\0';           //поместить туда нулевой символ
//         else
//             while(getchar() != '\n')
//                 continue;
//         }
//     return ret_val;
// }

// //randbin.c -- произвольный доступ, двоичный ввод-вывод
// #include <stdio.h>
// #include <stdlib.h>
// #define ARSIZE 1000

// int main()
// {
//     double numbers[ARSIZE];
//     double value;

//     const char * file = "numbers.dat";
//     int i;
//     long pos;
//     FILE * iofile;
//     //создание набора значений double
//     for(i = 0; i < ARSIZE; i++)
//         numbers[i] = 100.0 * i + 1.0 / (i + 1);
//     //попытка открыть файл
//     if((iofile = fopen(file, "wb")) == NULL)
//     {
//         fprintf(stderr, "Ne udaytsya otkrit fail %s dlya vihoda.\n", file);
//         exit(EXIT_FAILURE);
//     }
//     //запись в файл массива в двочном формате
//     fwrite(numbers, sizeof (double), ARSIZE, iofile);
//     fclose(iofile);
//     if ((iofile = fopen(file, "rb")) == NULL)
//     {
//         fprintf(stderr,
//                 "Ne udautsya okrit fail %s dlya proizvolnoo dostupa.\n", file);
//         exit(EXIT_FAILURE);
//     }
//     //чтение избранных элементов из файла
//     printf("Vvedite index v diapozone 0-%d.\n", ARSIZE - 1);
//     while(scanf("%d", &i) == 1 && i >= 0 && i < ARSIZE)
//     {
//         pos = (long) i * sizeof(double); // вычисление смещения
//         fseek(iofile, pos, SEEK_SET); //переход в нужную сторону
//         fread(&value, sizeof (double), 1, iofile);
//         printf("Po etomu indeksu nahoditsya znachenie %f.\n", value);
//         printf("VVedite sleduushiy index (ili znachenie za predelami diapazonov dlya zaversheniya):\n");
//     }
//     //завершние
//     fclose(iofile);
//     puts("Programma zavershena.");
//     return 0;
// }

// // 1. Что неправильно в следующей программе:
// int main(void)
// {
// int * fp; 
// int k;
// fp = fopen("gelatin");  //это просто указатель а нужен указатель на файл плюс не указан режим открытия
// for (k = 0; k < 30; k++)
// fputs(fp, "Кто-то ест студень."); //было бы правилньо будь указан FILE * fp и поменять местами
// fclose("gelatin");  //надо закрывать не файл, а указатель на файл
// return 0;
// }

// /*2. Что делает следующая программа? (Предположите, что она запускается в среде 
// командной строки.)*/

// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>

// int main(int argc, char * argv[])
// {
//     int ch;
//     FILE *fp;

//     if(argc < 2)
//         exit(EXIT_FAILURE);
//     if((fp = fopen(argv[1], "r")) == NULL)
//         exit(EXIT_FAILURE);
//     while((ch = getc(fp)) != EOF)
//         if(isdigit(ch))
//             putchar(ch);
//     fclose(fp);

//     return 0;
// }

// #include <stdio.h>
// FILE * fp1, *fp2;
// char ch;

// fp1 = fopen("terky", "r");
// fp2 = fopen("jerky", "w");

// a. ch = getc(); //(ch = getc(fp1)) != EOF // fp2 не подходит так мы его читаем, а не вписываем
// б. fprintf(fp2,"%c\n", ch); //fp2 не подходит
// в. putc(ch,fp2); 
// г. fclose(fp1); 

// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char * argv[])
// {
//     FILE * fp;
//     int total = 0;
//     double sum = 0.0;
//     double ch;
//     if(argc < 2)
//     {
//         printf("Net faila");
//         fp = stdin;
//     }
//     else if((fp = fopen(argv[1], "r")) == NULL)
//     {
//         printf("Oshibka");
//         exit(EXIT_FAILURE);
//     }
//     else
//     {
//     fprintf(stderr, "Slishkom mnogo argumentov.\n");
//     exit(EXIT_FAILURE);
//     }
    

//     while(fscanf(fp, "%lf", &ch) == 1)
//     {
//         sum += ch;
//         total++;
    
//     }

//     if(total > 0)
//     {
//         printf("Srednee arifmiticheskoe: %f\n", sum / total);
//     }
//     else 
//         printf("Chisla ne vvedeny.\n");

//     if(fp != stdin)
//         fclose(fp);
    
//     return 0;
// }

// /*5. Напишите программу, которая принимает два аргумента командной строки. 
// Первым аргументом является символ, а вторым — имя файла. Программа долж
// на выводить из файла только те строки, которые содержат указанный символ.*/


// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// #define LEN 256;

// int main(int argc, char * argv[])
// {
//     FILE *fp;
//     char line[LEN];
//     char target;

//     if(argc != 3)
//     {
//         fprintf(stderr, "Ispolzavanie: %s simvolov fail\n", argv[0]);
//         exit(EXIT_FAILURE);
//     }

//     target = argv[1][0];

//     if((fp = fopen(argv[2], "r")) == NULL)
//     {
//         fprintf(stderr, "NE udaytsya otrkit fail.\n");
//         exit(EXIT_FAILURE);
//     }

//     while(fgets(line, LEN, fp) != NULL)
//     {
//         if(strchr(line, target) != NULL)
//             fputs(line, stdout);
//     }

//     fclose(fp);

//     return 0;
// }

// /*1. Модифицируйте программу в листинге 13.1, чтобы она предлагала пользователю
//  ввести имя файла и читала его ответ вместе использования аргументов ко
// мандной строки.*/

// //count.c -- использование стандарртного ввода-вывода
// #include <stdio.h>
// #include <stdlib.h> //прототип exit()

// int main(void)
// {
//     char name[100];
//     printf("Vvetie imya faila: ");
//     if(scanf("%99s", name) != 1)
//         exit(EXIT_FAILURE);
    
//     int ch;     //место для хранения каждого символа по мере чтения
//     FILE *fp;    // указатель файла
//     unsigned long count = 0;

    
//     if((fp = fopen(name, "r")) == NULL)
//     {
//         printf("Ne udaetsya okrit %s\n", name);
//         exit(EXIT_FAILURE);
//     }

//     while((ch = getc(fp)) != EOF)
//     {
//         putc(ch, stdout);   // то же, что и putchar(ch);
//         count++;
//     }
//     fclose(fp);
//     printf("Fail %s soderzit %lu simvolov\n", name, count);

//     return 0;
// }

// /*2. Напишите программу копирования файлов, которая получает имя исходного 
// файла и имя копии из командной строки. Используйте стандартный ввод-вывод 
// и двоичный режим, если это возможно.*/

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(int argc, char * argv[])
// {
//     int ch;
//     FILE * fp, *fp2;

//     if(argc != 3)
//         exit(EXIT_FAILURE);
    
//     if((fp = fopen(argv[1], "rb")) == NULL)
//         exit(EXIT_FAILURE);
    
//     if((fp2 = fopen(argv[2], "wb")) == NULL)
//         exit(EXIT_FAILURE);
    
//     while((ch = getc(fp)) != EOF)
//         putc(ch, fp2);

//     fclose(fp);
//     fclose(fp2);
//     return 0;
// }

// /*3. Напишите программу копирования файлов, которая предлагает пользователю 
// ввести имя текстового файла. выступающего в роли исходного, и имя выход
// ного файла. Программа должна использовать функцию toupper () из ctype. h 
// для перевода текста в верхний регистр во время его записи в выходной файл. 
// Применяйте стандартный ввод-вывод и текстовый режим.*/

// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>

// int main(void)
// {
//     FILE *fp, *fp2;
//     int ch;
//     char name[100], name2[100];
//     printf("VVedite imya failov:\n");
//     if((scanf("%99s %99s", name, name2)) != 2)
//         exit(EXIT_FAILURE);
    
//     if((fp = fopen(name, "r")) == NULL)
//         exit(EXIT_FAILURE);
//     if((fp2 = fopen(name2, "w+")) == NULL)
//         exit(EXIT_FAILURE);

//     while((ch = getc(fp)) != EOF)
//         putc(toupper(ch), fp2);

//     rewind(fp2);

//     while((ch = getc(fp2)) != EOF)
//         putchar(ch);

//     fclose(fp);
//     fclose(fp2);

//     return 0;
// }

// /*4. Напишите программу, которая последовательно отображает на экране содержи
// мое всех файлов, перечисленных в командной строке. Для управления циклом 
// используйте argc.*/

// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char * argv[])
// {
//     FILE *fp;
//     int ch;
//     if(argc < 2)
//         exit(EXIT_FAILURE);


//     for(int index = 1; index < argc && ((fp = fopen(argv[index], "r")) != NULL); index++)
//     {
//         while((ch = getc(fp)) != EOF)
//         putchar(ch);

//         printf("\n");
//         fclose(fp);
//     }

//     return 0;
// }

// /*5. Модифицируйте программу в листинге 13.6, чтобы вместо интерактивного ин
// терфейса она использовала интерфейс командной строки.*/

// //randbin.c -- произвольный доступ, двоичный ввод - вывод
// #include <stdio.h>
// #include <stdlib.h>

// #define ARSIZE 1000

// int main(int argc, char *argv[])
// {
//     double numbers[ARSIZE];
//     double value;

//     int i;
//     long pos;

//     FILE *iofile;

//     if(argc != 3)
//     {
//         printf("Ispolzovanie: %s fail index\n", argv[0]);
//         exit(EXIT_FAILURE);
//     }

//     for(i = 0; i < ARSIZE; i++)
//         numbers[i] = 100.0 * i + 1.0 / (i + 1);

//     if((iofile = fopen(argv[1], "wb")) == NULL)
//     {
//         fprintf(stderr, "Ne udaetsya otkrit fail.\n");
//         exit(EXIT_FAILURE);
//     }

//     fwrite(numbers, sizeof(double), ARSIZE, iofile);

//     fclose(iofile);

//     if((iofile = fopen(argv[1], "rb")) == NULL)
//     {
//         fprintf(stderr, "Ne udaetsya otkrit fail.\n");
//         exit(EXIT_FAILURE);
//     }

//     i = atoi(argv[2]);

//     if(i < 0 || i >= ARSIZE)
//     {
//         printf("Neverniy index.\n");
//         exit(EXIT_FAILURE);
//     }

//     pos = (long)i * sizeof(double);
//     fseek(iofile, pos, SEEK_SET);
//     fread(&value, sizeof(double), 1, iofile);
//     printf("Znachenie: %f\n", value);

//     fclose(iofile);

//     return 0;
// }

// // 6. Программы, работающие с аргументами командной строки, полагаются на то, 
// // что пользователь помнит, как их правильно запускать. Перепишите программу 
// // из листинга 13.2 так, чтобы вместо использования аргументов командной стр<)- 
// // ки она предлагала пользователю ввести необходимую информацию.

// #include <stdio.h>
// #include <stdlib.h>         //для exit()
// #include <string.h>
// #define LEN 1028
// int main()
// {
//     FILE *in, *out;         //объявление двух указателей на FILE
//     int ch;
//     char name[LEN], name2[LEN];         //хранилище для имени выходного файла
//     int count = 0;

//     printf("VVedite imya faila:");
//     scanf("%s", name2);

//     //настрйока ввода
//     if((in = fopen(name2, "r")) == NULL)
//     {
//         fprintf(stderr, "Ne udaetsya otkrit fail\"%s\"\n",name2);
//         exit(EXIT_FAILURE);
//     }

//     //натсройка вывода
//     strncpy(name, name2, LEN - 5); //копирование имени файла
//     name[LEN - 5] = '\0';
//     strcat(name, ".red");

//     if((out = fopen(name, "w")) == NULL)
//     {
//         fprintf(stderr, "Ne udaetsya sozdat vihodnoy fail.\n");
//         exit(3);
//     }
//     //копирование данныз
//     while((ch = getc(in)) != EOF)
//         if(count++ % 3 == 3)
//             putc(ch, out);

//     fclose(in);
//     fclose(out);

//     return 0;

// }

// /*7. Напишите программу, которая открывает два файла. Получать имена файлов 
// можно либо через командную строку, либо предложив пользователю ввести их.
// а. Сделайте так, чтобы эта программа выводила строку 1 первого файла, строку 1 
// второго файла, строку 2 первого файла, строку 2 второго файла и т.д., пока нс 
// будет выведена последняя строка более длинного (по количеству строк) файла.
// б. Модифицируйте программу так, чтобы строки с одним и тем же номером вы
// водились в одной экранной строке.*/

// #include <stdio.h>
// #include <stdlib.h>
// #define LEN 100
// int main(void)
// {
//     char name1[LEN], name2[LEN];
//     FILE *fp1, *fp2;
//     int ch, rm, lm;
//     lm = rm = 0;

//     printf("Vvedite imya faila nomer 1 and nomer 2:");
//     scanf("%s %s", name1, name2);

//     if((fp1 = fopen(name1, "r")) == NULL)
//     {  
//         fprintf(stderr, "oshibka ne otkrivaetsya fail %s", name1);
//         exit(EXIT_FAILURE);
//     }
//     if((fp2 = fopen(name2, "r")) == NULL)
//     {  
//         fprintf(stderr, "oshibka ne otkrivaetsya fail %s", name2);
//         exit(EXIT_FAILURE);
//     }

//     while(1)
//     {
//         if(rm != EOF)
//         while((ch = getc(fp1)) != '\n' && ch != EOF)
//             putchar(ch);

//         rm = ch;
//         if(rm != EOF)
//             putchar(' ');

//         if(lm != EOF)
//         while((ch = getc(fp2)) != '\n' && ch != EOF)
//             putchar(ch);

//         lm = ch;
//         if(lm != EOF)
//             putchar('\n');
       
//         if(rm == EOF && lm == EOF)
//         {
//             fclose(fp1);
//             fclose(fp2);
//             return 0;
//         }
//     }
// }

// /*8. Напишите программу, которая принимает в качестве аргументов командной 
// строки символ и ноль или более имен файлов. Если за символом не следуют ар
// гументы, программа должна читать стандартный ввод. В противном случае она 
// должна открывать каждый файл по очереди и сообщать, сколько раз в нем вcтре
// чается указанный символ. Вместе с результатом каждого подсчета должны быть 
// указаны имя файла и сам символ. Предусмотрите средства проверки ошибок, 
// позволяющие выяснить корректность количества аргументов и возможность от
// крытия файлов. Если файл не может быть открыт, программа должна сообщать 
// об этом факте и переходить к обработке следующего файла.*/

// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char * argv[])
// {
//     FILE * fp;
//     int ch;
//     int sim;
//     int total = 0;

//     if(argc < 2)
//     {
//         fprintf(stderr, "ne dostatochno argeumentov");
//         exit(EXIT_FAILURE);
//     }
    
//     sim = argv[1][0];

//     if (argc == 2)
//     {
//         total = 0;

//         while ((ch = getchar()) != EOF)
//         {
//             if (ch == sim)
//                 total++;
//         }

//         printf("simvol %c vstretilsya %d raz\n", sim, total);
//     }

//     else
// {
//     for(int num = 2; num < argc; num++)
//     {
//         if((fp = fopen(argv[num], "r")) == NULL)
//         {
//         fprintf(stderr, "oshibka v faile %s", argv[num]);
//         continue;
//         }
        
//         while((ch = getc(fp)) != EOF)
//             if(ch == sim)
//                 total++;

//         printf("fail: %s imeet stolko kolichestvo simvolov %c: %d\n", argv[num], sim, total);
//         total = 0;
//         fclose(fp);
//     }
// }

//     return 0;
// }



// /*9. Модифицируйте программу в листинге 13.3, чтобы каждое слово было про
// нумеровано в соответствии с порядком его добавления в список, начиная с 1. 
// Позаботьтесь о том, чтобы при втором запуске программы новая нумерация 
// слов начиналась с того места, где была закончена пумерация при предыдущем 
// запуске.*/

// //addaword.c -- использование fprintf(), fscanf, and rewind()

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <ctype.h>
// #define MAX 41

// int main(void)
// {
//     FILE *fp, *fpsum;
//     int sum = 0;
//     int ch;
//     char words[MAX];

//     if((fp = fopen("wordy", "a+")) == NULL)
//     {
//         fprintf(stdout, "Ne udayetsya otkrit fail \"wordy\".\n");
//         exit(EXIT_FAILURE);
//     }

//     if((fpsum = fopen("wordynum", "r+")) == NULL)
//     {
//         fprintf(stdout, "Ne udayetsya otkrit fail \"wordynum\".\n");
//         exit(EXIT_FAILURE);
//     }

//     puts("VVedite slova dlya dobavleniya V fail; dlya zaversheniya");
//     puts("VVedite simvol # v nachale stroki.");
//     while((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
//         fprintf(fp, "%s\n", words);
//     while((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
//         fprintf(fpsum, "%s\n", words);
//     while((ch = getc(fpsum)) != EOF)
//         if(isspace(ch) == 1)
//             sum++;
//     rewind(fpsum);
//     puts("Soderzimoe faila:");
//     rewind(fp);         //возврат в начало файла
//     while(fscanf(fp, "%s", words) == 1)
//         puts(words);
//     puts("Gotovo!");


//     for(int i = 1; i <= sum; i++)
//     {
//         printf("№%d ", i);
//         puts(fpsum);
//     }

//     if(fclose(fp) != 0)
//         fprintf(stderr, "Oshibka pri zakritii faila\n");
//     if(fclose(fpsum) != 0)
//         fprintf(stderr, "Oshibka pri zakritii faila\n");

//     return 0;
// }

// /*10. Напишите программу, открывающую текстовый файл, имя которого получается 
// интерактивно. Организуйте цикл, который предлагает пользователю ввести по
// зицию в файле. Затем программа должна вывести часть файла, начиная с этой 
// позиции и заканчивая следующим символом новой строки. Цикл ввода должен 
// завершаться при вводе отрицательного или нечислового значения.*/

// #include <stdio.h>
// #include <stdlib.h>

// #define LIN 40
// int main(void)
// {
//     FILE * fp;
//     int ch;
//     char name[LIN];
//     int num = 0;
//     int pos;
//     int start = 0;

//     printf("VVetite umya faila:");
//     scanf("%s", name);

//     if((fp = fopen(name, "r")) == NULL)
//     {  
//         fprintf(stderr, "Oshibka!!");
//         exit(EXIT_FAILURE);
//     }
    
//     while(1)
//     {
//         printf("Vvedite poziciy");
        
//          if(scanf("%d", &pos) != 1 || pos < 0)
//             break;

//          while((ch = getc(fp)) != EOF)
//         {
//             if(num >= pos)
//                 start = 1;

//             if(start)
//             {
//                 putchar(ch);

//                 if(ch == '\n')
//                     break;
//             }

//             num++;
//         }
//         rewind(fp);
//         num = 0;
//         start = 0;
//     }
// }

// // 11. Напишите программу, которая принимает два аргумента командной строки. 
// // Первый аргумент - это строка, а второй - имя файла. Программа должна ис
// // кать в файле и выводить все строки, содержащие указанную. Поскольку зада
// // ча ориентирована на строки, а не на символы, используйте функцию fgets () 
// // вместо getc (). Для поиска строки, содержащей заданную, применяйте функцию 
// // strstr () (кратко описанную в упражнении 7 из главы 11) из стандартной биб
// // лиотеки С.


// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define LEN 256;

// int main(int argc, char * argv[])
// {
//     FILE *fp;
//     char line[LEN];

//     if(argc < 3)
//         exit(EXIT_FAILURE);
    
    

//     if((fp = fopen(argv[2], "r")) == NULL)
//     {
//         exit(EXIT_FAILURE);
//     }

//     while(fgets(line, LEN, fp) != NULL)
//     {
//         if(strchr(line, argv[1]) != NULL)
//             printf("%s", line);
//     }

//     fclose(fp);

//     return 0;
// }

// // 12. Создайте текстовый файл, состоящий из 20 строк по 30 целых чисел. Целые зна
// // чения должны входить в диапазон от О до 9 и отделяться друг от друга пробела
// // ми. Файл является цифровым представлением изображения, при этом значения 
// // от О до 9 воспроизводят возрастающие уровни темноты. Напишите программу, 
// // которая читает содержимое этого файла в массив элементов int с размером 20 
// // на 30. При грубом подходе к преобразованию такого цифрового представления 
// // в изображение программа должна использовать значения из этого массива для 
// // инициализации массива элементов char с размером 20 на 31. При этом О соот
// // ветствует символу пробела, 1 - символу точки и т.д.; большее значение представ
// // ляется символом, занимающим большую площадь. Например, символ # может 
// // использоваться для представления значения 9. Последний символ (31-й) в каж
// // дой строке должен быть нулевым, образуя в итоге массив из 20 строк. Программа 
// // должна отобразить результирующее изображение (т.е. вывести строки) и также 
// // сохранить результат в текстовом файле. Например, предположим, что началь
// // ные данные выглядят так:
// // 009000000000589985200000000000 
// // 000090000000589985520000000000 
// // 000000000000581985452000000000 
// // 000090000000589985045200000000 
// // 009000000000589985004520000000 
// // 000000000000589185000452000000 
// // 000000000000589985000045200000 
// // 5 5 5 5 5 5 5 5 5 5 5 5 5 8 9 9 8 5 5 5 5 5 5 5 5 5 5 5 5 5 
// // 8 8 8 8 8 8 8 8 8 8 8 8 5 8 9 9 8 5 8 8 8 8 8 8 8 8 8 8 8 8 
// // 999909999999999999999939999999 
// // 8 8 8 8 8 8 8 8 8 8 8 8 5 8 9 9 8 5 8 8 8 8 8 8 8 8 8 8 8 8
// // Файловый ввод-вывод 563
// // 5555555555555
// // CD 
// // 9
// // оооооооооооо589
// // оооооооооооо589
// // оооо22оооооо589
// // оооо33оооооо589
// // оооо44оооооо589
// // оооо55оооооо589
// // оооооооооооо589
// // оооооооооооо589
// // 985555555555555
// // 985оооооооооооо
// // 985ооооббоооооо
// // 985оо5бооб5оооо
// // 985о5б111165ооо
// // 985оо56ооб5оооо
// // 985оооо6боооооо
// // 985оооооооооооо
// // 985оооооооооооо
// // При заданном выборе выходных символов вывод будет иметь следующий вид:
// // # 
// // # 
// // *%##%*'
// // # 
// // # 
// // *%##%**'
// // * %. #%*-*'
// // *%##%* -*'
// // *%##%* -*'
// // *%#. % * -*'
// // *%##%* -*'
// // *************%# # % *************
// // #### #################:#######
// // *************%##% *************
// // * %##% *
// // *%##%* 
// // ==
// // '' 
// // :: 
// // ~~ 
// // ** 
// // *%##%* *= =*
// // * %##%**=__= *
// // *%##%* *= = *
// // *%##%* 
// // *%##%*
// // *%##%*
// // =

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <time.h>

// #define LIM 20
// #define MAX 31

// int main(void)
// {
//     int num[LIM][MAX];
//     char sim[LIM][MAX];
//     char map[10] = " .':~*=&%#";
//     char ch;

//     FILE *fp;
//     FILE *fp1;

//     srand((unsigned int) time(0));

//     for(int i = 0; i < LIM; i++)
//     {
//         for(int index = 0; index < MAX - 1; index++)
//             num[i][index] = rand() % 10;
//     }

//     if((fp = fopen("rock", "w+")) == NULL)
//     {
//         exit(EXIT_FAILURE);
//     }

//     for(int i = 0; i < LIM; i++)
//     {
//         for(int index = 0; index < MAX - 1; index++)
//             fprintf(fp, "%d", num[i][index]);
//         fprintf(fp,"%c", '\n');
//     }

//     rewind(fp);

//       for(int i = 0; i < LIM; i++)
//     {
//         for(int index = 0; index < MAX - 1; index++)
//             sim[i][index] = map[num[i][index]];

//         sim[i][MAX - 1] = '\0';
//     }
    
//      if((fp1 = fopen("image", "w")) == NULL)
//     {
//         fprintf(stderr, "Ne udaetsya sozdat fail.\n");
//         exit(EXIT_FAILURE);
//     }

//     for(int i = 0; i < LIM; i++)
//     {
//         puts(sim[i]);
//         fprintf(fp1, "%s\n", sim[i]);
//     }



//         fclose(fp);
//         fclose(fp1);
//         return 0;
     
// }



// //Листинг 14.1 программа book.c
// //book.c -- каталог для одной книги
// #include <stdio.h>
// #include <string.h>
// char * s_gets(char * st, int n);
// #define MAXTITL 41  //макисмальная длина названия + 1
// #define MAXAUTL 31  //максимальная длина имени автора + 1

// struct book{
//     char title[MAXTITL];
//     char author[MAXAUTL];
//     float value;
// };                          //конец шаблона структуры

// int main(void)
// {
//     struct book library; //объявление library в качестве еременной типа book

//     printf("Vvedite nazvanie knigi.\\n");
//     s_gets(library.title, MAXTITL); //доступ к разделу названия книги

//     printf("Teper vvedite FIo avtora.\n");
//     s_gets(library.author, MAXAUTL);
//     printf("Teper vvedite cenu.\n");
//     scanf("%f", &library.value);
//     printf("%s avtorstva %s: $%.2f\n", library[index].title,
//         library.author, library.value);
//     printf("%s: \"%s\" ($%.2f)\n", library.author,
//         library.title, library.value);
//     printf("Gotovo.\n");
//     return 0;
// }

// char * s_gets(char * st, int n)
// {
//     char * ret_val;
//     char * find;

//     ret_val = fgets(st, n, stdin);
//     if(ret_val)
//     {
//         find = strchr(st, '\n');
//         if(find)
//             *find = '\0';
//         else
//             while(getchar() != '\n')
//                 continue;
//     }

//     return ret_val;
// }

// //Листинг 14.2 Програмаа manybook.c
// // manybook.c -- каталок для нескольких книг
// #include <stdio.h>
// #include <string.h>
// char * s_gets(char * st, int n);
// #define MAXTITL 40
// #define MAXAUTL 40
// #define MAXBKS 100          //максимально количество книг

// struct book{
//     char title[MAXTITL];
//     char author[MAXAUTL];
//     float value;
// };

// int main(void)
// {
//     struct book library[MAXBKS]; // массив cтруктур типа book
//     int count = 0;
//     int index;

//     printf("Vvedite nazvanie knigi.\n");
//     printf("NAzmite [enter] v nachale strokui, chtobi zakonchit vvod.\n");
//     while(count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
//     {
//         printf("Teper vvedite FIO avtora");
//         s_gets(library[count].author, MAXAUTL);
//         printf("Teper vvedite cenu.\n");
//         scanf("%f", &library[count++].value);
//         while(getchar() != '\n')
//             continue;       //очистисть входную строку
//         if(count < MAXBKS)
//             printf("VVedite nazvanie sleduushey knigi.\n");
//     }
//     if(count > 0)
//     {
//         printf("Katalog vashih knig:\n");
//         for(index = 0; index < count; index++)
//             printf("%s avtorstva %s: $%.2f\n", library[index].title, library[index].author, library[index].value);
//     }
//     else
//         printf("VVobshe net knig& ochen ploho.\n");
//     return 0;
// }

// char * s_gets(char * st, int n)
// {
//     char * ret_val;
//     char * finde;

//     ret_val = fgets(st, n, stdin);
//     if(ret_val)
//     {
//         finde = strchr(st, '\n');
//         if(finde)
//             *finde = '\0';
//         else
//             while(getchar() != '\n')
//                 continue;
//     }
//     return ret_val; 
// }

// //Листинг 14.3 Программа friend.c
// //friend.c -- пример вложенной структуры
// #include <stdio.h>
// #define LEN 20

// const char * msgs[5] =
// {
//     "   Blagodaru vac za chudesno provedenniy vecher, ",
//     "Vi ondoznachno prodemonstrirovali, chto",
//     "Yavlyet sobou tip muschini. Mi obyazatelno dolzni vcteritsya",
//     "Za voshititelnim uzinom c ",
//     "i veselo proesti vremya."
// };

// struct names{               //первая структура
//     char first[LEN];
//     char last[LEN];
// };

// struct guy{                 //вторая стурктура
//     struct names handle;    //вложеннная структура
//     char favfood[LEN];
//     char job[LEN];
//     float income;
// };

// int main(void)
// {
//     struct guy fellow = {
//         {"Billi", "Bons"},
//         "zapechenimi omarami",
//         "personalniy trener",
//         68112.00 
//     };

//     printf("Dorogoi %s, \n\n", fellow.handle.first);
//     printf("%s%s.\n", msgs[0], fellow.handle.first);
//     printf("%s%s\n", msgs[1], fellow.job);
//     printf("%s\n", msgs[2]);
//     printf("%s%s%s, msgs[3]", fellow.favfood, msgs[4]);
    
//     if(fellow.income > 150000.0)
//         puts("!!");
//     else if(fellow.income > 75000.0)
//         puts("!");
//     else
//         puts(".");
//     printf("\n%40s%s\n ", " ", "Do skoroi vstrechi,");
//     printf("%40s%s\n", " ", "Sheila");

//     return 0;
// }

// //Листинг 14.4 Программа friends.c
// //friends.c -- использование указателя на структуру
// #include <stdio.h>
// #define LEN 20

// struct names
// {
//     char first[LEN];
//     char last[LEN];
// };

// struct guy
// {
//     struct  names handle;
//     char favfood[LEN];
//     char job[LEN];
//     float income;    
// };


// int main(void)
// {
//     struct  guy fellow[2] = {
//         {{"Billi", "Bons"},
//         "zapechennimi omarami",
//         "Pesonalniy trener",
//         68112.00
//         },
//         {{"jim", "Hokins"},
//         "ribnim frikase",
//         "redactor tabloida",
//         232400.00
//     }
//     };
//     struct  guy * him;  //указатель на структуру

//     printf("adres #1: %p #2: %p\n", &fellow[0], &fellow[1]);
//     him = &fellow[0];   //сообщает указателю, на что указывать
//     printf("ukazatel #1: %p #2: %p\n", him, him+1);
//     printf("him > income ranvo $%.2f: (*him).income ranvo $%.2f\n",
//         him->favfood, him->handle.last);

//     return 0;
// }


// //Листинг 14.5. Программа funds1.c
// //funds1.c-- передача членов структуры в качестве аргументов
// #include <stdio.h>
// #define FUNDLEN 50

// struct funds{
//     char bank[FUNDLEN];
//     double bankfund;
//     char save[FUNDLEN];
//     double savefund;
// };

// double sum(double, double);

// int main(void)
// {
//     struct funds stan = {
//         "Garlic-Melon Bamk",
//         4032.27,
//         "Lucky's Savings and Loan",
//         8543.94
//     };
//     printf("Obshaya summa na chetah u stena sostavlyaet $%.2f.\n",
//             sum(stan.bankfund, stan.savefund));
//     return 0;
// }

// //суммирование двух чисел типа double
// double sum(double x, double y)
// {
//     return(x+y);
// }

// //Листинг 14.6 Программа указателя на структуру
// //funds2.c -- передача указателя на структуру
// #include <stdio.h>
// #define FUNDLEN 50
// struct funds
// {
//     char bank[FUNDLEN];
//     double bankfund;
//     char save[FUNDLEN];
//     double savefund;
// };

// double sum(const struct funds *);   //аргумент является указателем
// int main(void)
// {
//     struct funds stan = {
//         "Garlic-Melon Bank",
//         4032.27,
//         "Lucky`s Savings and Loan",
//         8543.94
//     };
//     printf("Obshyaya summa na chetah u stena sostavlyaet $%.2f.\n", sum(&stan));
//     return 0;
// }

// double sum(const struct funds * money)
// {
//     return(money->bankfund + money->savefund);
// }


// //листинг 14.7. Программа funds3.c
// //funds3.c -- передача структуры
// #include <stdio.h>
// #define FUNDLEN 50

// struct funds{
//     char bank[FUNDLEN];
//     double bankfund;
//     char save[FUNDLEN];
//     double savefund;
// };

// double sum(struct funds moolah);

// int main(void)
// {
//     struct funds stan = {
//         "Garlic-Melon Bank",
//         4032.27,
//         "Lucky`s Savins and Loan",
//         8543.94
//     };

//     printf("Obshyaa summa na chetah u stena sostavlyaet $%.2f.\n", sum(&stan));

//     return 0;
// }

// double sum(struct funds moolah)
// {
//     return(moolah.bankfund + moolah.savefund);
// }

// //Листинг 14.8. Программа names1.c
// //names1.c -- использует указатели на структуры
// #include <stdio.h>
// #include <string.h>
// #define NLEN 30
// struct namect{
//     char fname[NLEN];
//     char lname[NLEN];
//     int letters;
// };

// void getinfo(struct namect *);
// void makeinfo(struct namect *);
// void showinfo(const struct namect *);
// char * s_gets(char * st, int n);

// int main(void)
// {
//     struct namect person;
//     getinfo(&person);
//     makeinfo(&person);
//     showinfo(&person);
//     return 0;
// }

// void getinfo(struct namect * pst)
// {
//     printf("Vvedite svoe imya.\n");
//     s_gets(pst->fname, NLEN);
//     printf("Vvedite svou familiyu.\n");
//     s_gets(pst->lname, NLEN);
// }

// void makeinfo(struct namect * pst)
// {
//     pst->letters = strlen(pst->fname) + strlen(pst->lname);
// }

// void showinfo(const struct namect * pst)
// {
//     printf("%s %s, vashe imya i familiya soderzat %d bukv.\n",
//         pst->fname, pst->lname, pst->letters);
// }

// char * s_gets(char * st, int n)
// {
//     char * ret_val;
//     char * find;

//     ret_val = fgets(st, n, stdin);
//     if(ret_val)
//     {
//         find = strchr(st, '\n');
//         if(find)
//             *find = '\0';
//         else
//             while(getchar() != '\n')
//                 continue;           
//     }
//     return ret_val;
// }


// //Листинг 14.9. Программа names2.c
// //names2.c -- передает и возвращает структуры
// #include <stdio.h>
// #include <string.h>
// #define NLEN 30
// struct namect{
//     char fname[NLEN]; 
//     char lname[NLEN];
//     int letters;
// };

// struct namect getinfo(void);
// struct namect makeinfo(struct namect);
// void showinfo(struct namect);
// char * s_gets(char * st, int n);

// int main(void)
// {
//     struct namect person;

//     person = getinfo();
//     person = makeinfo(person);
//     showinfo(person);
//     return 0;
// }

// struct namect getinfo(void)
// {
//     struct namect temp;
//     printf("Vvedite svoe imya.\n");
//     s_gets(temp.fname, NLEN);
//     printf("Vvedite svou familiyu.\n");
//     s_gets(temp.lname, NLEN);
//     return temp;
// }

// struct namect makeinfo(struct namect info)
// {
//     info.letters = strlen (info.fname) + strlen(info.lname);
//     return info;
// }

// void showinfo(struct namect info)
// {
//     printf("%s %s, vashe imya i familiya soderzat %d bukv.\n",
//         info.fname, info.lname, info.letters);
// }

// char * s_gets(char * st, int n)
// {
//     char * ret_val;
//     char * find;


//     ret_val = fgets(st, n, stdin);
//     if(ret_val)
//     {
//         find = strchr(st, '\n');
//         if(find)
//             *find = '\0';
//         else
//             while(getchar() != '\n')
//                 continue;           
//     }
//     return ret_val;
// }

// //Листинг 14.10. Программа names3.c
// //names2.c -- передает и возвращает структуры
// #include <stdio.h>
// #include <string.h>         //для strcpy(), strlen()
// #include <stdlib.h>         //для malloc(), free()
// #define SLEN 81
// struct namect{
//     char * fname; 
//     char * lname;
//     int letters;
// };

// void getinfo(struct namect *);      //выделение памяти
// void makeinfo(struct namect *);
// void showinfo(const struct namect *);
// void cleanup(struct namect *);
// char * s_gets(char * st, int n);

// int main(void)
// {
//     struct namect person;

//     getinfo(&person);
//     makeinfo(&person);
//     showinfo(&person);
//     cleanup(&person);

//     return 0;
// }

// void getinfo(struct namect * pst)
// {
//     char temp[SLEN];
//     printf("Vvedite svoe imya.\n");
//     s_gets(temp, SLEN);
//     //выделение памяти для хранения имени
//     pst->fname = (char *) malloc(strlen(temp + 1));

//     //копирование имени в выделенную память
//     srtcpy(pst->fname, temp);
//     printf("Vvedite svou familiyu.\n");
//     s_gets(temp, SLEN);
//     pst->lname = (char *) malloc(strlen(temp) + 1);
//     strcpy(pst -> lname, temp);
// }

// void makeinfo(struct namect * pst)
// {
//     pst->letters = strlen(pst->fname) + strlen(pst->lname);
// }

// void showinfo(const struct namect * pst)
// {
//     printf("%s %s, vashe imya i familiya soderzat %d bukv.\n",
//         pst->fname, pst->lname, pst->letters);
// }

// void cleanup(struct namect * pst)
// {
//     free(pst->fname);
//     free(pst->lname);
// }

// char * s_gets(char * st, int n)
// {
//     char * ret_val;
//     char * find;


//     ret_val = fgets(st, n, stdin);
//     if(ret_val)
//     {
//         find = strchr(st, '\n');
//         if(find)
//             *find = '\0';
//         else
//             while(getchar() != '\n')
//                 continue;           
//     }
//     return ret_val;
// }

// //Листинг 14.11. Программа complit.c
// //complit.c -- составные литералы

// #include <stdio.h>
// #define MAXTITL 41
// #define MAXAUTL 31

// struct book{        //шаблон структуры: book - дескриптор
//     char title[MAXTITL];
//     char author[MAXAUTL];
//     float value;
// };

// int main(void)
// {
//     struct book readfirst;
//     int score;
//     printf("vvedite raiting: ");
//     scanf("%d", &score);
//     if(score >= 84)
//         readfirst = (struct book){"Presupleine i nakazanie",
//                                   "Fedor Dostoevskiy",
//                                   11.25};
//     else
//         readfirst = (struct book){"Krasnay slyapa mistera Baunsi",
//                                   "Fred Uinsom",
//                                    5.99};
//     printf("Naznachennie vam reitingi:\n");
//     printf("%s by %s: $%.2f\n", readfirst.title, readfirst.author, readfirst.value);

//     return 0;
// }

// //Листинг 14.12 Программа flexmemb.c
// //flexmemb.c -- член типа гибкого массива (средство С99)
// #include <stdio.h>
// #include <stdlib.h>

// struct flex
// {
//     size_t count;
//     double average;
//     double scores[]; //член с типом гибкого массива
// };

// void showFlex(const struct flex * p);
// int main(void)
// {
//     struct flex * pf1, *pf2;
//     int n = 5;
//     int i;
//     int tot = 0;

//     //выделение памяти для структуры и массива
//     pf1 = malloc(sizeof(struct flex) + n * sizeof(double));
//     pf1->count = n;
//     for(i = 0; i < n; i++)
//     {
//         pf1->scores[i] = 20.0 - i;
//         tot += pf1->scores[i];
//     }
//     pf1->average = tot / n;
//     showFlex(pf1);
//     n = 9;
//     tot = 0;
//     pf2 = malloc(sizeof(struct flex) + n * sizeof(double));
//     pf2->count = n;
//     for(i = 0; i < n; i++)
//     {
//         pf2->scores[i] = 20.0 - i/2.0;
//         tot += pf2->scores[i];
//     }
//     pf2->average = tot / n;
//     showFlex(pf2);
//     free(pf1);
//     free(pf2);
//     return 0;
// }

// void showFLex(const struct flex * p)
// {
//     int i;
//     printf("Reitingi: ");
//     for(i = 0; i > p->count; i++)
//         printf("%g ", p->scores[i]);
//     printf("\nSrednee znachenie: %g\n", p->average);
// }


// //Листинг 14.13. Программа funds4.c
// //funds4.c -- передача функции массива структур
// #include <stdio.h>
// #define FUNDLEN 50
// #define N 2

// struct funds {
//     char bank[FUNDLEN];
//     double bankfund;
//     char save[FUNDLEN];
//     double savefund;
// };

// double sum(const struct funds money[], int n);

// int main(void)
// {
//     struct fund jones[N] = 
// {
//     {
//         "Garlic-Melon Bank",
//         4032.27,
//         "Lucky`s Savings and Loan",
//         8543.94
//     },
//     {
//         "Honest Jack`s Bank",
//         3620.88,
//         "Party Time Savings",
//         3802.91
//     }
// };

// printf("Obshaya summa na chetah u djonsonov sostavlyaet $%.2f.\n", sum(jones, N));

// return 0;
// }

// double sum(const struct funds money[], int n)
// {
//     double total;
//     int i;

//     for(i = 0, total = 0; i < n; i++)
//         total += money[i].bankfund + money[i].savefund;

//     return(total);
// }

// //Листинг 14.14 Программа booksave.c

// //booksave.c -- сохранение содержимого структуры в файле
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// #define MAXTITL 40
// #define MAXAUTL 40
// #define MAXBKS 10                   //максимальное количество книг

// char * s_gets(char * st, int n);

// struct book{
//     char title[MAXTITL];
//     char author[MAXAUTL];
//     float value;
// };

// int main(void)
// {
//     struct book library[MAXBKS]; //массив структур
//     int count = 0;
//     int index, filecount;
//     FILE * pbooks;
//     int size = sizeof (struct book);
//     if((pbooks = fopen("book.dat", "a+b")) == NULL)
//     {
//         fputs("Ne udaetsya otkrit fail book.dat\n", stderr);
//         exit(1);
//     }
//     rewind(pbooks);         //перезод в начало файла
//     while(count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1)
//     {
//         if(count == 0)
//             puts("Tekushee soderzimoe faila book.dat:");
//         printf("%s avtorstva %s: $%.2f\n", library[count].title,library[count].author, library[count].value);
//         count++;
//     }
//     filecount = count;
//     if(count == MAXBKS)
//     {
//         fputs("Fail book.dat zapolnen.", stderr);
//         exit(2);
//     }

//     puts("Vvedite nazvanie novih knig.");
//     puts("Nazmite [enter] v nachale stroki, chtobi zapolnit vvod.");
//     while(count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL
//         && library[count].title[0] != '\0')
//     {
//         puts("Tepet vvedite imya avtora.");
//         s_gets(library[count].author, MAXAUTL);
//         puts("Teper vvedite cenu knigi.");
//         scanf("%f", &library[count++].value);
//         while (getchar() != '\n')
//             continue;           //очистить входную строку
//         if(count < MAXBKS)
//             puts("Vvedite nazvanie sleduushei knigi");   
//     }

//     if(count > 0)
//     {
//         puts("Katalog vashih knig:");
//         for(index = 0; index < count; index++)
//             printf("%s avtorstva %s: $%.2f\n", library[index].title,
//                 library[index].author, library[index].value);
//         fwrite(&library[filecount], size, count - filecount, pbooks);
//     }

//     else
//         puts("Vvobshe net knig? ochen ploho.\n");
//     puts("Programma zavershena.\n");
//     fclose(pbooks);

//     return 0;
// }

// char * s_gets(char * st, int n)
// {
//     char * ret_val;
//     char * find;

//     ret_val = fgets(st, n, stdin);
//     if(ret_val)
//     {
//         find = strchr(st, '\n');
//         if(find)
//             *find = '\0';
//         else
//             while(getchar() != '\n')
//                 continue;
//     }
//     return ret_val; 
// }

// //Листинг 14.15 Программа enum.c

// //enum.c -- исользование перечислимых значений
// #include <stdio.h>
// #include <string.h>     //для stcmp(), strchr()
// #include <stdbool.h>    //средство С99

// char * s_gets(char * st, int n);
// enum spectrum{red, orange, yellow, green, blue, violet};
// const char * colors[] = {"red", "orange", "yellow", "green", "blue", "violet"};

// #define LEN 30

// int main(void)
// {
//     char choice[LEN];
//     enum spectrum color;
//     bool color_is_found = false;

//     puts("Vvedite cvet (ili pustuu stroku dlya vihoda):");
//     while(s_gets(choice, LEN) != NULL && choice[0] != '\0')
//     {
//         for(color = red; color <= violet; color++)
//         {
//             if(strcmp(choice, colors[color]) == 0)
//             {
//                 color_is_found = true;
//                 break;
//             }
//         }
//         if(color_is_found)
//         switch(color)
//         {
//             case red: puts("Rozi krasnie");
//                 break;
//             case orange: puts("Mali oranzivie");
//                 break;
//             case yellow: puts("Podsolnuhi zeltie");
//                 break;
//             case blue: puts("Kolokolchihi sinie");
//                 break;
//             case violet : puts("Fialki fioletovie");
//                 break;   
//         }
//         else
//             printf("Cvet %s ne izvesten.\n", choice);
//         color_is_found = false;
//         puts("Vvedite sleduushiy cvet (ili pustuu stroku dlya vihoda):");
//     }
//     puts("Programma zavetshena");
//     return 0;
// }

// char * s_gets(char * st, int n)
// {
//     char * ret_val;
//     char * find;

//     ret_val = fgets(st, n, stdin);
//     if(ret_val)
//     {
//         find = strchr(st, '\n');
//         if(find)
//             *find = '\0';
//         else
//             while(getchar() != '\n')
//                 continue;
//     }
//     return ret_val;
// }

// //Листинг 14.16. Программа func_ptr.c
// //func_ptr.c -- использование указателей на функции
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// #define LEN 81
// char * s_gets(char * st, int n);
// char showmenu(void);
// void eatline(void);             //читает до конца строки
// void show(void (*fp)(char *), char * str);
// void ToUpper(char *);           //преобразует строку в верхний регистр
// void ToLower(char *);           //преобразует строку в нижний регистр
// void Transpose(char *);         //меняет местами регистры
// void Dummy(char *);

// int main(void)
// {
//     char line[LEN];
//     char copy[LEN];
//     char choice;
//     void (*pfun)(char *);           //указаывает на функцию, которая имеет аргумент
//                                     //типа char * и ничего не возвращает
//     puts("Vvedite stroku (pustaya stroka - vihod iz programmi):");
//     while(s_gets(line, LEN) != NULL && line[0] != '\0')
//     {
//         while((choice = showmenu()) != '\n')
//         {
//             switch(choice)              //оператор switch устанавливает указатель
//             {
//                 case 'u' : pfun = ToUpper; break;
//                 case 'l' : pfun = ToLower; break;
//                 case 't' : pfun = Transpose; break;
//                 case 'o' : pfun = Dummy; break;
//             }
//             strcpy(copy, line);      //сделать копию для show()
//             snow(pfun, copy);           //использовать выбранную фунекцию
//         }
//         puts("Vvedite stroku (pustaya stroka - vihod oz programmi):");
//     }
//     puts("Programma zavershena.");
//     return 0;
// }

// char showmenu(void)
// {
//     char ans;
//     puts("VVedite vibranniy variant iz menu:");
//     puts("u) nizniy register            l) vverhniy registr");
//     puts("t) pomenyat mestami registri  o) ishodniy register");
//     puts("n) sleduushuya stroka");
//     ans = getchar();    //получить ответ
//     ans = tolower(ans);     //преобразовать в нижний регситр
//     eatline();              //избавится от оставшейся частри строки
//     while(strchr("ulton", ans) == NULL)
//     {
//         puts("Vvedite u, l, t, o ili n:");
//         ans = tolower(getchar());
//         eatline();
//     }
//     return ans;
// }

// void eatline(void)
// {
//     while(getchar() != '\n')
//         continue;
// }

// void ToUpper(char * str)
// {
//     while(*str)
//     {
//         *str = toupper(*str);
//         str++;
//     }
// }

// void ToLower(char * str)
// {
//     while(*str)
//     {
//         *str = tolower(*str);
//         str++;
//     }
// }

// void Transpose(char * str)
// {
//     while(*str)
//     {
//         if(islower(*str))
//             *str = toupper(*str);
//         else if(isupper(*str))
//             *str = tolower(*str);
//         str++;
//     }
// }

// void Dummy(char * str)
// {
//     //оставлвяет строку неизмененной
// }

// void show(void (*fp) (char *), char * str)
// {
//     (*fp)(str);     //применять выбранную функцию к str
//     puts(str);      // отобразить результат
// }

// char * s_gets(char * st, int n)
// {
//     char * ret_val;
//     char * find;

//     ret_val = fgets(st, n, stdin);
//     if(ret_val)
//     {
//         find = strchr(st, '\n');
//         if(find)
//             *find = '\0';
//         else
//             while(getchar() != '\n')
//                 continue;
//     }

//     return ret_val;
// }


// // 3. Разработайте шаблон структуры, которая будет содержать название месяца, его 
// // трехбуквенную аббревиатуру, количество дней в месяце и его номер.



// // 4. Определите массив из 12 структур вида, описанного в вопросе 3, и инициализи
// // руйте ее для года, который не является високосным.


// #include <stdio.h>

// struct month {
//     char name[20];
//     char abbr[4];
//     int days;
//     int number;
// };

// int main(void)
// {
//     struct month year[12] = {
//         {"January",   "Jan", 31, 1},
//         {"February",  "Feb", 28, 2},
//         {"March",     "Mar", 31, 3},
//         {"April",     "Apr", 30, 4},
//         {"May",       "May", 31, 5},
//         {"June",      "Jun", 30, 6},
//         {"July",      "Jul", 31, 7},
//         {"August",    "Aug", 31, 8},
//         {"September", "Sep", 30, 9},
//         {"October",   "Oct", 31, 10},
//         {"November",  "Nov", 30, 11},
//         {"December",  "Dec", 31, 12}
//     };

//     return 0;
// }

// // 5. Напишите функцию, которая после получения номера месяца возвращает общее 
// // количество дней с начала года до конца указанного месяца. Предположите, что 
// // шаблон струк^туры, описанный в вопросе 3, и подходящий массив таких структур 
// // объявлены внешне.

// #include <stdio.h>

// struct month {
//     char name[20];
//     char abbr[4];
//     int days;
//     int number;
// };

// int num(struct month haha[], int n);

// int main(void)
// {
//     struct month year[12] = {
//         {"January",   "Jan", 31, 1},
//         {"February",  "Feb", 28, 2},
//         {"March",     "Mar", 31, 3},
//         {"April",     "Apr", 30, 4},
//         {"May",       "May", 31, 5},
//         {"June",      "Jun", 30, 6},
//         {"July",      "Jul", 31, 7},
//         {"August",    "Aug", 31, 8},
//         {"September", "Sep", 30, 9},
//         {"October",   "Oct", 31, 10},
//         {"November",  "Nov", 30, 11},
//         {"December",  "Dec", 31, 12}
//     };

//     printf("Obshee kolichestvo dney do konca %s: %d\n",
//            year[3].name,
//            num(year, 3));

//     return 0;
// }

// int num(struct month haha[], int n)
// {
//     int sum = 0;

//     for(int i = 0; i <= n; i++)
//         sum += haha[i].days;

//     return sum;
// }

// // б. а. Имея показанное ниже определение typedef, объявите 10-элементный массив 
// // указанных структур. Затем с помощью присваивания индивидуальных членов 
// // сделайте так, чтобы третий элемент этого массива описывал объектив марки 
// // Rernarkatar с фокусным расстоянием 500 мм и диафрагмой f/2.0.
// // typedef struct lens ( 
// // float foclen; 
// // float fstop; 
// // char brand[30];
// // ) LENS;
// // /* дескриптор структуры lens 
// // */ 
// // /* фокусное расстояние в миллиметрах */ 
// // /* диафрагма 
// // /* марка производителя 
// // */ 
// // */
// // б. Повторите часть а), но воспользуйтесь в объявлении списком инициализации 
// // с назначенным инициализатором вместо написания отдельных операторов 
// // присваивания для к<^едого члена.

// #include <stdio.h>
// #include <string.h>

// typedef struct lens
// {
//     float foclen;
//     float fstop;
//     char brand[30];
// }LENS;

// int main(void)
// {
//     LENS lenses[10] =
// {
//     [2] = {
//         .foclen = 500.0,
//         .fstop = 2.0,
//         .brand = "Remarkatar"
//     }
// };

//     return 0;
// }


// // 7. Взгляните на следующий фрагмент кода:
// // struct name {
// // char first[20]; 
// // char last[20];
// // } ;
// // struct bem (
// // int limbs; 
// // struct name title; 
// // char туре[3 0];
// // } ;
// // struct bem * рЬ; 
// // struct bem deb = {
// // 6,
// // {"Berbnazel”, "Gwolkapwolk"},
// // "Arcturan"
// // } ;
// // рЬ = &deb;
// // 622 Глава 14
// // а. Что выведут приведенные ниже операторы?
// // printf("%d\n", deb.limbs); 
// // printf("%s\n", pb->type); 
// // printf("%s\n", pb->type + 2);
// // б. Как можно было бы представить "Gwolkapwolk" в форме записи для структур 
// // (двумя способами)?
// // в. Напишите функцию, которая принимает адрес структуры bem в качестве свое
// // го артумента и выводит содержимое этой структуры в показанной ниже фор
// // ме (предположите, что шаблон структуры находится в заголовочном файле
// // starfolk. h):
// // Berbnazel Gwolkapwolk - это 6-конечный Arcturan.

// #include <stdio.h>
// #include <starfok.h>

// struct name {
//     char first[20];
//     char last[20];
// };

// struct bem {
//     int limbs;
//     struct name title;
//     char type[30];
// };

// int main(void)
// {

// struct bem * pb;
// struct bem deb = {
//     6,
//     {"Berbnazel", "Gwolkapwolk"},
//     "Arcturan"
// };
// pb = &deb;

// //а. Что выведут приведенные ниже операторы?
// printf("%d\n", deb.limbs);  //6
// printf("%s\n", pb->type);   //Arcturan
// printf("%s\n", pb->type + 2); //cturan

// // Б. Как можно было бы представить "Gwolkapwolk" в форме записи для структур 
// // (двумя способами)?
// printf("%s\n", deb.title.last);
// printf("%s\n", pb->title.last);

// // в. Напишите функцию, которая принимает адрес структуры bem в качестве свое
// // го артумента и выводит содержимое этой структуры в показанной ниже фор
// // ме (предположите, что шаблон структуры находится в заголовочном файле
// // starfolk.h):
// // Berbnazel Gwolkapwolk - это 6-конечный Arcturan.
// }

// //starfolk.h

// void lol(struct name)
// {
//     printf("%s %s - eto %d-konechniy %s", name.title.first, name.title.last, name.limbs, name.type);
// }

// // 8. Взгляните на сле,^тощие объявления:
// // struct fullname {
// // char fname[20] ; 
// // char lname[20];
// // } ;
// // struct bard 
// // {
// // struct fullname name; 
// // int born; 
// // int died;
// // } ;
// // struct bard willie; 
// // struct bard *pt = &willie;
// // а. Идентифицируйте член born структуры willie с помощью идентификатора
// // willie.
// // б. Идентифицируйте член born структуры willie с помощью идентификатора
// // pt.
// // в. С помощью функции scanf () прочитайте значение для члена born, используя 
// // идентификатор willie.
// // г. С помощью функции scanf () прочитайте значение для члена born, используя 
// // идентифи катор pt.
// // д. С помощью функции scanf () прочитайте значение для члена lname структу
// // ры name, используя идентификатор willie.
// // е. С помощью функции scanf () прочитайте значение для члена lname структу
// // ры name, используя идентификатор pt.
// // ж. Создайте идентификатор для третьей буквы фамилии того, кто описан пере
// // менной willie.
// // з. Напишите выражение, которое представляет общее количество букв в имени 
// // и фамилии того, кто описан переменной willie.

// #include <stdio.h>
// struct fullname {
// char fname[20] ; 
// char lname[20];
// } ;
// struct bard 
// {
// struct fullname name; 
// int born; 
// int died;
// } ;
// int main(void)
// {
// struct bard willie; 
// struct bard *pt = &willie;
// }
// // а. Идентифицируйте член born структуры willie с помощью идентификатора
// // willie. ответ willie.born
// // б. Идентифицируйте член born структуры willie с помощью идентификатора
// // pt. ответ pt->born
// // в. С помощью функции scanf () прочитайте значение для члена born, используя 
// // идентификатор willie. ответ scanf("%d", &willie.born);
// // г. С помощью функции scanf () прочитайте значение для члена born, используя 
// // идентифи катор pt. овтет scanf("%d", &pt->born);
// //д. С помощью функции scanf () прочитайте значение для члена lname структу
// // ры name, используя идентификатор willie. ответ scanf("%s", &willie.name.lname);
// // е. С помощью функции scanf () прочитайте значение для члена lname структу
// // ры name, используя идентификатор pt. ответ scanf("%s", &pt->name.lname);
// // ж. Создайте идентификатор для третьей буквы фамилии того, кто описан пере
// // менной willie. ответ не знаю
// // з. Напишите выражение, которое представляет общее количество букв в имени 
// // и фамилии того, кто описан переменной willie. strlen(willie.name.fname) + strlen(willie.name.lname)
// int total_letters(const struct bard *fp)
// {
//     int sum = 0;

//     for (int i = 0; fp->name.fname[i] != '\0'; i++)
//         sum++;

//     for (int i = 0; fp->name.lname[i] != '\0'; i++)
//         sum++;

//     return sum;
// }

// // 9. Определите шаблон структуры, подходящий для хранения следующих элементов: 
// // марка автомобиля, его мощность в лошадиных силах, экологический рейтинг, ко
// // лесная база и год сборки. В качестве дескриптора шаблона используйте car.

// #include <stdio.h>

// struct car 
// {
//     char marka[20];
//     double moshnost;
//     double raiting;
//     double kolesa;
//     int year;
// };

// int main(void)
// {
//     struct car MASHINA =
//     {
//         .marka ="Porsche",
//         .moshnost = 120,
//         .raiting = 10,
//         .kolesa = 4,
//         .year = 1998
//     };

//     return 0;
// }

// // 1О. Предположим, что имеется следующая структура:
// // struct gas {
// // float distance; 
// // float gals; 
// // float mpg;
// // } ;
// // Структуры и другие формы данных 623
// // а. Напишите функцию, которая принимает аргумент struct gas. Предположи
// // те, что передаваемая структура содержит информацию distance и gals. Эта 
// // функция должна вычислять корректное значение для члена mpg и возвращать 
// // уже заполненную структуру.
// // б. Напишите функцию, которая принимает в качестве аргумента адрес struct 
// // gas. Предположите, что передаваемая структура содержит информацию 
// // distance и gals. Эта функция должна вычислять корректное значение для 
// // члена mpg и присваивать его.

// #include <stdio.h>

// struct gas {
// float distance; 
// float gals; 
// float mpg;
// };

// void gol(struct gas *fp);

// int main(void)
// {
//     struct gas kek =
//     {
//         .distance = 10,
//         .gals = 5
//     };
//     struct gas *fp;
//     fp = &kek;

//     gol(fp);
// }
// void gol(struct gas *fp)
// {
//     if(fp->distance == 0)
//         fp->distance = 5;
//     if(fp->gals == 0)
//         fp->gals = 10;
//     fp->mpg = fp->distance / fp->gals;
// }

// 11. Объявите перечисление с дескриптором choices, которое устанавливает пере
// числимые константы no, yes и maybe в О, 1 и 2 соответственно

// enum choices
// {
//     no,
//     yes,
//     maybe
// };

// // 12. Объявите указатель на функцию, которая возвращает указатель на char и при
// // нимает в качестве аргументов указатель на char и значение char.

// #include <stdio.h>
// #include <string.h>

// char * find_char(char * str, char ch);

// int main(void)
// {
//     char text[] = "Hello World";

//     //указатель на функцию
//     char * (*pf)(char *, char);

//     pf = find_char;

//     char *result = pf(text, 'W');

//     if(result != NULL)
//         printf("Naydeno: %s\n", result);
//     else
//         printf("Simvol ne nayden\n");

//     return 0;
// }

// char * find_char(char *str, char ch)
// {
//     return strchr(str,ch);
// }

// // 13. Объявите четыре функции и инициализируйте массив указателей на них. 
// // Каждая функция должна принимать два аргумента double и возвращать значе
// // ние double. Кроме того, продемонстрируйте два способа использования масси
// // ва для вызова второй функции с аргументами 10. О и 2.5.

// #include <stdio.h>

// double fun1(double num, double num2);
// double fun2(double num, double num2);
// double fun3(double num, double num2);
// double fun4(double num, double num2);

// int main(void)
// {
//     double (*fp[])(double, double) =
//     {
//         fun1,fun2,fun3,fun4
//     };

//   /* способ 1 */
//     printf("%.2f\n", fp[1](10.0, 2.5));

//     /* способ 2 */
//     printf("%.2f\n", (*fp[1])(10.0, 2.5));

//     return 0;
// }

// double fun1(double a, double b)
// {
//     return a + b;
// }

// double fun2(double a, double b)
// {
//     return a - b;
// }

// double fun3(double a, double b)
// {
//     return a * b;
// }

// double fun4(double a, double b)
// {
//     return a / b;
// }

// // 1. Переделайте задание из вопроса 5 таким образом, чтобы артуменг был представ
// // лен названием месяца, а не его номером. (Не забывайте о функции strcmp ().) 
// // Протестируйте готовую функцию в простой программе.

// #include <stdio.h>
// #include <string.h>

// struct month
// {
//     char name[20];
//     char abbr[4];
//     int days;
//     int number;
// };

// int fun(const struct month fp[], char name[]);

// int main(void)
// {
//     struct month play[12] =
//     {
//         {"January",   "Jan", 31, 1},
//         {"February",  "Feb", 28, 2},
//         {"March",     "Mar", 31, 3},
//         {"April",     "Apr", 30, 4},
//         {"May",       "May", 31, 5},
//         {"June",      "Jun", 30, 6},
//         {"July",      "Jul", 31, 7},
//         {"August",    "Aug", 31, 8},
//         {"September", "Sep", 30, 9},
//         {"October",   "Oct", 31, 10},
//         {"November",  "Nov", 30, 11},
//         {"December",  "Dec", 31, 12}
//     };

//     printf("Obshee kolichestvo dney do konca %s: %d\n",
//            play[3].name,
//            fun(play, "April"));

//     return 0;
// }

// int fun(const struct month fp[], char name[])
// {
//     int sum = 0;

//    for(int i = 0; i < 12; i++)
//    {
//     sum += fp[i].days;

//     if(strcmp(fp[i].name, name) == 0)
//         return sum;
//    }

//     return 0;
// }


// // 2. Напишите программу, которая предлагает пользователю ввести день, месяц и год. 
// // Месяц может быть представлен порядковым номером, названием или аббревиа
// // турой. Затем программа должна возвратить общее количество дней, истекших с 
// // начала года по указанный день включительно. (Учитывайте високосные годы.)

// #include <stdio.h>
// #include <string.h>

// struct month 
// {
//     char months[20];
//     int days;
// };

// struct data
// {
//     int day;
//     char month[20];
//     int year;
// };

// int sum(struct data name, struct data name2, struct month months);

// int main(void)
// {
//     struct data name;
//     printf("Vvedtite den, mecyac and god s kotorogo idet otchet:\n");
//     scanf("%d %s %d", &name.day, name.month, &name.year);

//     struct data name2;
//     printf("Vvedtite den, mecyac and god s kotorogo idet otchet:\n");
//     scanf("%d %s %d", &name2.day, name2.month, &name2.year);

//     struct month MOH[12] =
//     {
//     {"January",   31},
//     {"February",  28},
//     {"March",     31},
//     {"April",     30},
//     {"May",       31},
//     {"June",      30},
//     {"July",      31},
//     {"August",    31},
//     {"September", 30},
//     {"October",   31},
//     {"November",  30},
//     {"December",  31}
//     };
    

    
// }
// int sum(struct data name, struct data name2, struct month months)
// {
//     int sum = 0;

//     for(;name.year != name2.year; name.year += 1 && strcmp(name.month, name2.month) != 0)
//     {
//         sum += 

//     }

   

// }

// // 3. Измените программу из листинга 14.2, чтобы она сначала выводила описания 
// // книг в том порядке, в каком они вводились, затем в алфавитном порядке по на
// // званиям и, наконец, в порядке возрастания цены.

// //manybook.c -- каталог для нескольких книг
// #include <stdio.h>
// #include <string.h>

// char * s_gets(char * st, int n);

// void alfavit(struct book * alfa, int count);
// void chislo(struct book * chi, int count);
// void alfavit2(struct book * alfa, int count);
// #define MAXTITL 40
// #define MAXAUTL 40
// #define MAXBKS 100          //ммксильманое количесвто книг

// struct book
// {
//     char title[MAXTITL];
//     char author[MAXAUTL];
//     float value;
// };

// int main(void)
// {
//     struct book library[MAXBKS];        //массив структур типа book
//     int count = 0;
//     int index;

//     printf("Vvedite nazvanie knigi.\n");
//     printf("Nazmite [enter] v nachale stroki, ctobi zakonchit vvod.\n");
//     while(count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL
//         && library[count].title[0] != '\0')
//     {
//         printf("Teper vvedite FIO avtora.\n");
//         s_gets(library[count].author, MAXAUTL);
//         printf("teper vvedite cenu.\n");
//         scanf("%f", &library[count++].value);
//         while(getchar() != '\n')
//             continue;       //очитисть входную строку
//         if(count < MAXBKS)
//             printf("Vvedite nazvanie sleduushei knigi.\n");
//     }

//     if(count > 0)
//     {
//         printf("Katalog vashih knig:\n");
//         for(index = 0; index < count; index++)
//             printf("%s avtorstva %s: $%.2f\n", library[index].title,
//                 library[index].author, library[index].value);
//     }


//     else
//         printf("Vvobshe net knig? Ochen ploho.\n");

//     alfavit(library, count);
//     printf("\n");
//     chislo(library, count);
//     putchar('\n');
//     alfavit2(library, count);
        
//     return 0;
// } 

// char * s_gets(char * st, int n)
// {
//     char * ret_val;
// char * find;

// ret_val = fgets(st, n, stdin);
// if(ret_val)
// {
//     find = strchr(st, '\n');
//     if(find)
//         *find = '\0';
//     else
//         while(getchar() != '\n')
//             continue;
// }

// return ret_val;
// }

// void alfavit(struct book * alfa, int count)
// {
    

//     for(char a = 'A'; a <= 'Z'; a++)
//         {
//             for(int i = 0; i < count; i++)
//             {
//             if(alfa[i].title[0] == a)
//                 {
//                 printf("Nazvanie knigi %s ", alfa[i].title);
//                 printf("Avtor %s cena %.2f\n", alfa[i].author, alfa[i].value);
//                 }
//             }
            
//         }
// }

// void chislo(struct book * chi, int count)
// {
//     struct book temp;

//     for(int index = 0; index < count; index++)
//     {
//         for(int i = index + 1; i < count; i++)
//             if(chi[index].value > chi[i].value)
//                 {
//                     temp = chi[i];
//                     chi[i] = chi[index];
//                     chi[index] = temp;
//                 }
//     printf("%s avtorstva %s: $%.2f\n", chi[index].title,
//                     chi[index].author, chi[index].value);
//     }
// }

// void alfavit2(struct book * alfa, int count)
// {
//     struct book temp;

//     for(int index = 0; index < count; index++)
//         for(int i = index + 1; i < count; i++)
//             if(strcmp(alfa[index].title, alfa[i].title) > 0)
//             {
//                 temp = alfa[index];
//                 alfa[index] = alfa[i];
//                 alfa[i] = temp;
//             }

//             for(int i = 0; i < count; i++)
//             printf("%s avtorstva %s: $%.2f\n", alfa[i].title,
//                     alfa[i].author, alfa[i].value);
            
// }

// // 4. Напишите программу, которая создает шаблон структуры с двумя членами в со
// // ответствии со следующими критериями.
// // а. Первым членом является номер карточки социального страхования. Второй 
// // член — это структура, состоящая из трех членов. Ее первый член содержит 
// // имя, второй член — отчество и третий член — фамилию. Создайте и инициали
// // зируйте массив из пяти таких структур. Программа должна выводить данные 
// // в следующем формате:
// // Dribble, Flossie М. — 302039823
// // Выводиться должна только начальная буква отчества, за которой следует точка. 
// // Разумеется, если этот член пуст, не должен выводиться ни инициал, ни точка. 
// // Напишите функцию, которая выполняет такой вывод, передайте рассматрива
// // емую структуру этой функции.
// // б. Модифицируйте часть а) так, чтобы вместо адреса передавалась сама струк
// // тура.

// #include <stdio.h>

// struct iof
// {
//     char name[20];
//     char fatherName[20];
//     char personName[20];
// };

// struct polic
// {
//     struct iof fullname;
//     long polic;
// };

// void print_polic(struct polic p[], int n);
// int main(void)
// {
//     struct polic kod[2] =
//     {
//         {
//             {"Udji", "Sukunovich", "Itadori"},
//             302039823
//         },

//         {
//             {"Pugji", "Dorisovish", "Kenpahi"},
//             302039823
//         }
//     };

//     if (kod[0].fullname.fatherName[0] != '\0')
//     {
//         printf("%s, %s %c. -- %ld\n",
//                kod[0].fullname.personName,
//                kod[0].fullname.name,
//                kod[0].fullname.fatherName[0],
//                kod[0].polic);
//     }
//     else
//     {
//         printf("%s, %s -- %ld\n",
//                kod[0].fullname.personName,
//                kod[0].fullname.name,
//                kod[0].polic);
//     }

//     print_polic(kod, 2);

//     return 0;
// }

// void print_polic(struct polic p[], int n)
// {
//     for(int i = 0; i < n; i++)
//     {
//         printf("%s, %s", p[i].fullname.personName, p[i].fullname.name);
//         if (p[i].fullname.fatherName[0] != '\0')
//             printf(" %c", p[i].fullname.fatherName[0]);
//         printf(" - %ld\n", p[i].polic);
//     }
    
// }



// // 5. Напишите программу, которая соответствуем следующим требованиям.
// // 624 Глава 14
// // а. Программа внешне определяет шаблон срук'^ры name с двумя членами: стро
// // кой для хранения имени и строкой для хранения фамилии.
// // б. Программа внешне определяет шаблон структуры student с тремя членами: 
// // сфуктурой name, массивом grade для хранения трех оценок в виде чисел с плава
// // ющей запятой и переменной для хранения среднего значения этих трех оценок.
// // в. Программа содержит функцию main (), где объявляется массив из CSIZE 
// // (с CSIZE = 4) структур student, в которых инициализируются члены name 
// // именами по вашему выбору. Для выполнения задач, описанных в частях г), д), 
// // е) и ж), используйте функции.
// // г. Программа интерактивно вводит оценки для каждого студента, запрашивая 
// // у пользователя ввод имени студента и его оценок. Поместите оценки в мас
// // сив grade соответствующей структуры. Требуемый цикл можно реализовать в 
// // main () или в специальной функции по вашему усмотрению.
// // д. Программа вычисляет среднюю оценку для каждой структуры и присваивает 
// // ее соответствующему члену.
// // е. Программа выводит информацию из куклой структуры.
// // ж. Программа выводит среднее значение по курсу для каждого числового члена 
// // структуры.

// #include <stdio.h>
// #include <string.h>

// #define CSIZE 4

// struct name{
//     char name[20];
//     char personName[20];
// };

// struct student{
//     struct name allname;
//     double grade[3];
//     double srednee_grade;
// };

// void ocenka(struct student lol[], char name[]);
// void srednee(struct student lol[]);
// double srednee_vseh(struct student lol[]);

// int main(void)
// {
//     char name[20];
//     struct student students[CSIZE] = 
//     {
//         {{"Rostislav"}},
//         {{"Longsliv"}},
//         {{"Rahivhvn"}},
//         {{"Lapuhiv"}},

//     };

   

//     ocenka(students, name);
//     ocenka(students, name);
//     ocenka(students, name);
//     ocenka(students, name);

//     srednee(students);

//     for(int index = 0; index < CSIZE; index++)
//     {
//         if(students[index].srednee_grade != 0)
//         printf("%s   %s  ocenka1 %lf ocenka2 %lf ocenka3 %lf  srednee znachenie %lf\n",
//             students[index].allname.name, students[index].allname.personName, students[index].grade[0],
//         students[index].grade[1], students[index].grade[2], students[index].srednee_grade);
//         else
//             continue;
//     }
    
//     printf("srednee vseh kursov %lf\n",srednee_vseh(students));

//     return 0;
// }

// void ocenka(struct student lol[], char name[])
// {
//     int i = 0;
//     while(1)
//     {
//         printf("Vvedite imya uchenika:\n");
//         scanf("%s", name);
//         if(strcmp(name, lol[i].allname.name) == 0)
//         {
//             for(int index = 0; index < 3; index++)
//             {
//                 printf("VVedite ocenku po %d predmetu: ", index+1);
//                 scanf("%lf", &lol[i].grade[index]);
//             }
//             break;
//         }
//         else if(++i >= CSIZE)
//         {
//             printf("Net takogo imeni");
//             break;
//         }
//     }

// }

// void srednee(struct student lol[])
// {
//     for(int i = 0; i < CSIZE; i++)
//     {
//         double sum = 0;

//         for(int index = 0; index < 3; index++)
//             sum += lol[i].grade[index];

//         lol[i].srednee_grade = sum / 3.0;
//     }
// }

// double srednee_vseh(struct student lol[])
// {
//     double sum = 0;
//     for(int index = 0; index < CSIZE; index++)
//         sum += lol[index].srednee_grade;

//     return sum / CSIZE;
// }

// // 6. Текстовый файл содержит информацию о команде по софтболу (разновидность 
// // бейсбола). В каждой строке данные упорядочены следующим образом:
// // 4 Джесси Джойбет 5211
// // Первым членом является номер игрока (обычно это число из диапазона 0-18). 
// // Второй член — это имя игрока, а третий — его фамилия. Ю^адое имя состоит из 
// // одного слова. Следующий плен показывает, сколько раз игрок принимал мяч, за 
// // которым следует количество нанесенных игроком ударов, проходов и засчитан
// // ных пробежек. Файл может содержать результаты более чем одной игры, следо
// // вательно, для одного и того же игрока может быть несколько строк. Напиши
// // те программу, которая сохраняет соответствующие данные в массиве структур. 
// // Структура должна состоять из членов, в которых представлены фамилия и имя, 
// // количество набранных очков, проходов и засчитанных пробежек, а также сред
// // ний результат (эти значения вычисляются позже). В качестве индекса массива 
// // можете использовать номер игрока. Программа должна выполнять чтение до 
// // конца файла, и накапливать итоговые результаты по каждому игроку.
// // М ир статистики бейсбола довольно сложен. Например, проход или взятие базы 
// // в результате ошибки не расценивается так же высоко, как тот же самый резуль
// // тат, полученный за счет меткого удара, однако он позволяет получить выигран
// // ную пробежку. Но эта программа должна только читать и обрабатывать файлы 
// // данных, как описано ниже, не заботясь о реалистичности данных.
// // Простейший способ предусматривает инициализацию содержимого структуры 
// // нулями, чтение данных из файла во временные переменные и затем их добавле
// // ние к содержимому соответствующей структуры. После того, как программа за
// // вершит чтение файла, она должна вычислить средний уровень достижений для 
// // каждого игрока и запомнить его в соответствующем члене структуры. Средний 
// // уровень достижений вычисляется путем деления накопленного числа ударов, вы
// // полненных игроком, на количество выходов на ударные позиции; вычисление 
// // должно быть с плавающей запятой. Затем программа должна отобразить накап
// // ливаемые данные по каждому ифоку наряду со строкой, в которой содержатся 
// // суммарные статистические данные по всей команде.

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// #define PLAYERS 19

// struct player{
//     int number;
//     char firstName[20];
//     char lastName[20];
//     int out;
//     int punch;
//     int prohod;
//     int run;
//     double average;
// };

// int main(void)
// {
//     struct player players[PLAYERS];

//     FILE *fp = fopen("team.txt", "r");

//     if(fp == NULL)
//     {
//         printf("Ne udalos otkrit fail\n");
//         return 1;
//     }
//     int i = 0;

//     while(fscanf(fp, "%d %s %s %d %d %d %d", &players[i].number, players[i].firstName,
//         players[i].lastName, &players[i].out, &players[i].punch, &players[i].prohod, &players[i].run) == 7 && i < 20)
//         i++;

// }

// // 7. Модифицируйте код в листинге 14.14 так, чтобы каждая запись чи^талась из фай
// // ла и отображалась, чтобы была возможность удалить запись, и можно было из
// // менить ее содержимое. Если вы удаляете запись, используйте освободившуюся 
// // позицию массива для чтения следующей записи. Чтобы разрешить изменение су
// // ществующего содержимого, вместо режима "а+Ь" необходимо применять "r+b" 
// // и уделять больше внимания установке указателя в файле, не допуская перезапи
// // сывание существующих записей добавляемыми записями. Проще всего внести 
// // все изменения в данные, хранящиеся в памяти, и затем записать всю финаль^то 
// // информацию в файл. Один из возможных подходов к отслеживанию изменений 
// // предполагает добавление в структуру каталога члена, который указывает, дол
// // жен ли он быть удален.


// //Листинг 14.14 Программа booksave.c
// //booksave.c --  сохранение содержит структуры в файле
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// #define MAXTITL 40
// #define MAXAUTL 40
// #define MAXBKS 10           //максимальное количество книг

// char * s_gets(char * st, int n);

// struct book{
//     char title[MAXTITL];
//     char author[MAXAUTL];
//     float value;
// };

// int main(void)
// {
//     struct book library[MAXBKS]; //массив структур
//     int count = 0;
//     int  index, filecount;
//     FILE * pbooks;
//     int size = sizeof(struct book);
//     if((pbooks = fopen("book.dat", "a+b")) == NULL)
//     {
//         fputs("Ne udayetsya otkrit fail book.dat\n", stderr);
//         exit(1);
//     }

//     rewind(pbooks);         //переход в начало файла
//     while(count < MAXBKS && fread(&library[count], size,
//                             1, pbooks) == 1)
//     {
//         if(count == 0)
//             puts("Tekushee soderzimoe faila book.dat:");
//         printf("%s avtorstva %s: $%.2f\n", library[count].title,
//                 library[count].author, library[count].value);
//             count++;
//     }
//     filecount = count;
//     if(count == MAXBKS)
//     {
//         fputs("Fail book.dat zapolnen.", stderr);
//         exit(2);
//     }
//     puts("VVedite nazvaniya novih knig.");
//     puts("Nazmite [enter] v nachale stroki, chtobi zakonchit vvod.");
//     while(count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL
//         && library[count].title[0] != '\0')
//     {
//         puts("Teper vvedite imya avtora.");
//         s_gets(library[count].author, MAXAUTL);
//         puts("Teper vvedite cenu knigi.");
//         scanf("%f", &library[count++].value);
//         while(getchar() != '\n')
//             continue;
//         if(count < MAXBKS)
//             puts("Vvedite nazvanie sleduushey knigi.");
//     }

//     if(count > 0)
//     {
//         puts("Katalog vashih knig:");
//         for(index = 0; index < count; index++)
//             printf("%s avtorstva %s: $%.2f\n" ,library[index].title,
//                     library[index].author, library[index].value);
//         fwrite(&library[filecount], size, count - filecount, pbooks);
//     }

//     else
//         puts("Voobshe net knig? Ochen ploho.\n");
//     puts("Programma zavershena.\n");
//     fclose(pbooks);

//     return 0;
// }

// char * s_gets(char * st, int n)
// {
//     char * ret_val;
//     char * find;

//     ret_val = fgets(st, n, stdin);
//     if (ret_val)
//     {
//         find = strchr(st, '\n');
//         if(find)
//             *find = '\0';
//         else
//             while(getchar() != '\n')
//                 continue;
//     }
//     return ret_val;
// }

// #include <stdio.h>
// #include <stdbool.h>
// #include <string.h>

// void show_free_place(struct airaplan plan[]);
// void num(struct airaplan plan[]);
// void show_place_abc(struct airaplan plan[]);
// int BronMesta(struct airaplan plan[]);
// int SnatMesta(struct airaplan plan[]);




// struct airaplan{
//     int index_num;
//     bool bronya;
//     char first_name[20];
//     char second_name[20];
// };

// int main(void)
// {
// struct airaplan plan[12];

// FILE *fp = fopen("plane.dat", "rb");

// if (fp != NULL)
// {
//     fread(plan, sizeof(struct airaplan), 12, fp);
//     fclose(fp);
// }
// else
// {
//     for (int i = 0; i < 12; i++)
//     {
//         plan[i].index_num = i + 1;
//         plan[i].bronya = false;
//         plan[i].first_name[0] = '\0';
//         plan[i].second_name[0] = '\0';
//     }
// }

//     char ch;

//     while(1)
//     {
//     printf("Dlya vibora fukcii vvedite ee bukveniyu metku:\n");
//     printf("a) Pokazat kolichestvo svobodnih mest\n");
//     printf("b) Pokazat spisok svobodnih mest\n");
//     printf("c) Pokazat spisok zabronirovannih mest v alfavitnom poryadke\n");
//     printf("d) Zabronirovat mesto dlya passajira\n");
//     printf("e) Snyat bronyu s mesta\n");
//     printf("f) Vity iz programmi\n");

//         ch = getchar();

//         while(getchar() != '\n');

//         switch (ch)
//         {
//         case 'a':
//             num(plan);
//             break;
//         case 'b':
//             show_free_place(plan);
//             break;
//         case 'c':
//             show_place_abc(plan);
//             break;
//         case 'd':
//             BronMesta(plan);
//             break;
//         case 'e':
//             SnatMesta(plan);
//             break;
//         case 'f':

//             fp = fopen("plane.dat", "wb");

//             if (fp != NULL)
//             {
//             fwrite(plan, sizeof(struct airaplan), 12, fp);
//             fclose(fp);
//             }

//             printf("konec raboti\n");
//             return 0;

        
//         default:
//             printf("Net takogo varianta otveta!!!\n");
//             continue;
//         }
//     }

// }

// void show_free_place(struct airaplan plan[])
// {

//     for(int index = 0; index < 12; index++)
//     {
//         if(plan[index].bronya == 0)
//         printf("mesto nomer %d svobodno\n", plan[index].index_num);
//     }
// }

// void num(struct airaplan plan[])
// {
//     int free = 0;
//       for(int index = 0; index < 12; index++)
//     {
//         if(plan[index].bronya == 0)
//             free++;
//     }
//     if(free != 0)
//     printf("svobodnih mest: %d", free);
//     else
//         printf("Vse mesta zabronirovani");
// }

// void show_place_abc(struct airaplan plan[])
// {
//     struct airaplan temp;

//      for(int index = 0; index < 12; index++)
//         for(int i = index + 1; i < 12; i++)
//             if(plan[index].bronya == 1 && plan[i].bronya == 1)
//             if(strcmp(plan[index].first_name, plan[i].first_name) > 0)
//             {
//                 temp = plan[index];
//                 plan[index] = plan[i];
//                 plan[i] = temp;
//             }

//     for(int index = 0; index < 12; index++)
//     {
//         if(plan[index].bronya == 1)
//         printf("%s %s mesto %d\n", plan[index].first_name, plan[index].second_name, plan[index].index_num);
//     }
// }

// int BronMesta(struct airaplan plan[])
// {
//     int mesto;
//     struct airaplan pl;
//     printf("Vvedite imya i familiyu: ");
//     scanf("%19s %19s", pl.first_name, pl.second_name);
//     while(1)
// {
//     printf("Vvedite mesto kotoroe hottite zabronirovat ili vvedite '0' esli hotite viyti;");
//     scanf("%d", &mesto);

//     if(mesto > 12)
//         printf("oshibka takogo mesta net\n");
//     else if(mesto == 0)
//         return 0;
//     else{
//         for(int index = 0; index < 12; index++)
//         {
//             if(mesto == plan[index].index_num)
//                 if(plan[index].bronya == 0)
//                     {
//                         plan[index].bronya = 1;
//                         strcpy(plan[index].first_name, pl.first_name);
//                         strcpy(plan[index].second_name, pl.second_name);
//                         return 1;
//                     }
//                 else
//                     printf("\nEto mesto uze zabroniravano viberite drugoe\n");

//         }
//     }
// }
// }


// int SnatMesta(struct airaplan plan[])
// {
//     int mesto;
//     while(1)
// {
//     printf("Vvedite mesto kotoroe hottite snyat ili vvedite '0' esli hotite viyti;");
//     scanf("%d", &mesto);

//     if(mesto > 12)
//         printf("oshibka takogo mesta net\n");
//     else if(mesto == 0)
//         return 0;
//     else{
//         for(int index = 0; index < 12; index++)
//         {
//             if(mesto == plan[index].index_num)
//                 if(plan[index].bronya == 1)
//                     {
//                         plan[index].bronya = 0;
//                         return 1;
//                     }
//                 else
//                     printf("\nEto mesto ne zabroniravano viberite drugoe\n");

//         }
//     }
// }
// }

// #include <stdio.h>
// #include <stdbool.h> 
// #include <string.h>

// struct airaplan{
//     int index_num;
//     bool bronya;
//     bool confirm;
//     char first_name[20];
//     char second_name[20];
// };

// struct flight{
//     int flight_num;
//     struct airaplan seats[12];
// };

// void show_free_place(struct airaplan plan[]);
// void num(struct airaplan plan[]);
// void show_place_abc(struct airaplan plan[]);
// int BronMesta(struct airaplan plan[]);
// int SnatMesta(struct airaplan plan[]);
// int Seat(struct airaplan plan[]);

// int main(void)
// {
// struct flight plan[4] ={
//     {102},
//     {311},
//     {444},
//     {519}
// };

// FILE *fp = fopen("plane.dat", "rb");

// if (fp != NULL)
// {
//     fread(plan, sizeof(struct flight), 4, fp);
//     fclose(fp);
// }
// else
// {
//     for (int f = 0; f < 4; f++)
// {
//     for (int i = 0; i < 12; i++)
//     {
//         plan[f].seats[i].index_num = i + 1;
//         plan[f].seats[i].bronya = false;
//         plan[f].seats[i].confirm = false;
//         plan[f].seats[i].first_name[0] = '\0';
//         plan[f].seats[i].second_name[0] = '\0';
//     }
// }
// }
// int current;

// printf("Viberite reis:\n1) Flight 102\n2) Flight 311\n3) Flight 444\n4) Flight 519\n");
// scanf("%d", &current);
// current -= 1;



//     char ch;

//     while(1)
//     {
//     printf("Dlya vibora fukcii vvedite ee bukveniyu metku:\n");
//     printf("a) Pokazat kolichestvo svobodnih mest\n");
//     printf("b) Pokazat spisok svobodnih mest\n");
//     printf("c) Pokazat spisok zabronirovannih mest v alfavitnom poryadke\n");
//     printf("d) Zabronirovat mesto dlya passajira\n");
//     printf("e) Snyat bronyu s mesta\n");
//     printf("g) potverdite bron\n");
//     printf("f) Vity iz programmi\n");

//         ch = getchar();

//         while(getchar() != '\n');

//         switch (ch)
//         {
//         case 'a':
//             num(plan[current].seats);
//             break;
//         case 'b':
//             show_free_place(plan[current].seats);
//             break;
//         case 'c':
//             show_place_abc(plan[current].seats);
//             break;
//         case 'd':
//             BronMesta(plan[current].seats);
//             break;
//         case 'e':
//             SnatMesta(plan[current].seats);
//             break;
//         case 'g':
//             Seat(plan[current].seats);
//             break;
//         case 'f':

//             fp = fopen("plane.dat", "wb");

//             if (fp != NULL)
//             {
//             fwrite(plan, sizeof(struct flight), 4, fp);
//             fclose(fp);
//             }

//             printf("konec raboti\n");
//             return 0;

        
//         default:
//             printf("Net takogo varianta otveta!!!\n");
//             continue;
//         }
//     }

// }

// void show_free_place(struct airaplan plan[])
// {

//     for(int index = 0; index < 12; index++)
//     {
//         if(plan[index].bronya == 0)
//         printf("mesto nomer %d svobodno\n", plan[index].index_num);
//     }
// }

// void num(struct airaplan plan[])
// {
//     int free = 0;
//       for(int index = 0; index < 12; index++)
//     {
//         if(plan[index].bronya == 0)
//             free++;
//     }
//     if(free != 0)
//     printf("svobodnih mest: %d\n", free);
//     else
//         printf("Vse mesta zabronirovani");
// }

// void show_place_abc(struct airaplan plan[])
// {
//     int proverka = 0;
//     struct airaplan temp;

//      for(int index = 0; index < 12; index++)
//         for(int i = index + 1; i < 12; i++)
//             if(plan[index].bronya == 1 && plan[i].bronya == 1)
//             if(strcmp(plan[index].first_name, plan[i].first_name) > 0)
//             {
//                 temp = plan[index];
//                 plan[index] = plan[i];
//                 plan[i] = temp;
//             }


//     for(int index = 0; index < 12; index++)
//     {
//         if(plan[index].bronya == 1)
//         {
//         proverka++;
//         printf("%s %s mesto %d confirmed:%d\n", plan[index].first_name, plan[index].second_name, plan[index].index_num, plan[index].confirm);
//         }
//     }
//     if(proverka == 0)
//         printf("Net zabronirovannih mest\n");
// }

// int BronMesta(struct airaplan plan[])
// {
//     int mesto;
//     struct airaplan pl;
//     printf("Vvedite imya i familiyu: ");
//     scanf("%19s %19s", pl.first_name, pl.second_name);
//     while(1)
// {
//     printf("Vvedite mesto kotoroe hottite zabronirovat ili vvedite '0' esli hotite viyti: ");
//     scanf("%d", &mesto);

//     if(mesto > 12)
//         printf("oshibka takogo mesta net\n");
//     else if(mesto == 0)
//     {
//         while(getchar() != '\n');
//         return 0;
//     }
//     else{
//         for(int index = 0; index < 12; index++)
//         {
//             if(mesto == plan[index].index_num)
//                 if(plan[index].bronya == 0)
//                     {
//                         plan[index].bronya = 1;
//                         plan[index].confirm = 0;
//                         strcpy(plan[index].first_name, pl.first_name);
//                         strcpy(plan[index].second_name, pl.second_name);
//                         while(getchar() != '\n');
//                         return 1;
//                     }
//                 else
//                     printf("\nEto mesto uze zabroniravano viberite drugoe\n");

//         }
//     }
// }
// }


// int SnatMesta(struct airaplan plan[])
// {
//     int mesto;
//     while(1)
// {
//     printf("Vvedite mesto kotoroe hottite snyat ili vvedite '0' esli hotite viyti: ");
//     scanf("%d", &mesto);

//     if(mesto > 12)
//         printf("oshibka takogo mesta net\n");
//     else if(mesto == 0)
//     {
//         while(getchar() != '\n');
//         return 0;
//     }
//     else{
//         for(int index = 0; index < 12; index++)
//         {
//             if(mesto == plan[index].index_num)
//                 if(plan[index].bronya == 1)
//                     {
//                         plan[index].bronya = 0;
//                         plan[index].confirm = 0;
//                         while(getchar() != '\n');
//                         return 1;
//                     }
//                 else
//                     printf("\nEto mesto ne zabroniravano viberite drugoe\n");

//         }
//     }
// }
// }

// int Seat(struct airaplan plan[])
// {
//     int seat;
//     printf("Potverdit mesto: ");
//     scanf("%d", &seat);

//     for(int i = 0; i < 12; i++)
//     {
//         if(plan[i].index_num == seat && plan[i].bronya)
//         {
//             plan[i].confirm = 1;
//             return 1;
//         }
//     }
//     return 0;
// }

// // 10. Напишите программу, которая реализует меню с использованием массива ука
// // зателей на функции. Например, выбор пункта а в меню должен активизировать 
// // функцию, на которую указывает первый элемент массива


// #include <stdio.h>

// int umnojit(int a, int b);
// int delit(int a, int b);
// int plus(int a, int b);
// int minus(int a, int b);

// int main(void)
// {
//     int (*fp[4])(int, int) = {
//         umnojit,
//         delit,
//         plus,
//         minus
//     };

//     printf("Vviberite deistvie: \n");
//     printf("a) umnojenie\n");
//     printf("b) delenie\n");
//     printf("c) slozenie\n");
//     printf("d) vichitanie\n");

//     char ch;

//     ch = getchar();

//     switch (ch)
//     {
//     case 'a':
//         printf("%d\n", fp[0](10, 5));
//         break;
//     case 'b':
//         printf("%d\n", fp[1](10, 5));
//         break;
//     case 'c':
//         printf("%d\n", fp[2](10, 5));
//         break;
//     case 'd':
//         printf("%d\n", fp[3](10, 5));
//         break;
    
//     default:
//         printf("Net takogo varianta otveta dosvidanie");
//         return 0;
//     }

// return 0;
// }


// int umnojit(int a, int b)
// {
//     return a * b;
// }

// int delit(int a, int b)
// {
//     return a / b;
// }

// int plus(int a, int b)
// {
//     return a + b;
// }

// int minus(int a, int b)
// {
//     return a - b;
// }



// #include <stdio.h>
// #include <math.h>

// void transform(double source[], double target[], int n,
//                double (*func)(double));

// double square(double x);
// double cube(double x);

// void print_array(double arr[], int n);

// int main(void)
// {
//     double source[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
//     double target[5];

//     printf("Original:\n");
//     print_array(source, 5);

//     printf("\nSquare:\n");
//     transform(source, target, 5, square);
//     print_array(target, 5);

//     printf("\nCube:\n");
//     transform(source, target, 5, cube);
//     print_array(target, 5);

//     printf("\nSin:\n");
//     transform(source, target, 5, sin);
//     print_array(target, 5);

//     printf("\nSqrt:\n");
//     transform(source, target, 5, sqrt);
//     print_array(target, 5);

//     return 0;
// }

// void transform(double source[], double target[], int n,
//                double (*func)(double))
// {
//     for (int i = 0; i < n; i++)
//         target[i] = func(source[i]);
// }

// double square(double x)
// {
//     return x * x;
// }

// double cube(double x)
// {
//     return x * x * x;
// }

// void print_array(double arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//         printf("%.3f ", arr[i]);
//     printf("\n");
// }

// //Листинг 15.1. Программа binbit.c
// //binbit.c -- использование операций с битами для отображения двоичного представления чисел
// #include <stdio.h>
// #include <limits.h> //Для CHAR_BIT колличество битов на символ
// char * itobs(int, char *);
// void show_bstr(const char *);

// int main(void)
// {
//     char bin_str[CHAR_BIT * sizeof(int) + 1];
//     int number;

//     puts("VVodite celie chisla i prosmatrivaite ih dvoichnie predstavleniya.");
//     puts("Nechislovoi vvod zavershaet programmu.");
//     while(scanf("%d", &number) == 1)
//     {
//         itobs(number, bin_str);
//         printf("%d predstavlyaet kak ", number);
//         show_bstr(bin_str);
//         putchar('\n');
//     }
//     puts("Programma zavershena.");

//     return 0;
// }

// char * itobs(int n, char * ps)
// {
//     int i;
//     const static int size = CHAR_BIT * sizeof(int);

//     for(i = size - 1; i >= 0; i--, n >>= 1)
//         ps[i] = (01 & n) + '0';         //предполагается кодировка ASCII или похожая
//     ps[size] = '\0';

//     return ps;
// }

// //отображение двочиной строки блоками по 4
// void show_bstr(const char * str)
// {
//     int i = 0;

//     while(str[i])
//     {
//         putchar(str[i]);
//         if(++i % 4 == 0 && str[i])
//             putchar(' ');
//     }
// }

// //invert4.c -- использование операций с битами для отображения двоичного представления чисел
// #include <stdio.h>
// #include <limits.h>
// char * itobs(int, char *);
// void show_bstr(const char *);
// int invert_end(int num, int bits);

// int main(void)
// {
//     char bin_str[CHAR_BIT * sizeof(int) + 1]; 
//     int number;
//     puts("Vvodite celie chisla i prosmatrivaete ih dvoichnoe predstavlenie.");
//     puts("Nechislovoi vvod zacershaet programmu.");

//     while(scanf("%d", &number) == 1) 
//     {
//         itobs(number, bin_str);
//         printf("%d predstavlyaet kak\n", number);
//         show_bstr(bin_str);
//         putchar('\n');
//         number = invert_end(number, 4);
//         printf("Investirovanie poslednih 4 bitov daet\n");
//         show_bstr(itobs(number, bin_str));
//         putchar('\n');
//     }
//     puts("Programma zavershena.");
//     return 0;
// }

// char * itobs(int n, char * ps)
// {
//     int i;
//     const static int size = CHAR_BIT * sizeof(int); 
//     for(i = size - 1; i >= 0; i--, n>>=1) 
//         ps[i] = (01 & n) + '0';
//     ps[size] = '\0';
//     return ps;
// }

// //отображение двочиной строки блоками по 4
// void show_bstr(const char * str)
// {
//     int i = 0;

//     while(str[i]) // пока не будет получен нулевой символ
//     {
//         putchar(str[i]);
//         if(++i % 4 == 0 && str[i]) 
//             putchar(' ');
//     }
// }

// int invert_end(int num, int bits)
// {
//     int mask = 0;
//     int bitval = 1;

//     while(bits-- > 0)
//     {                   
//         mask |= bitval; 
//         bitval <<= 1;  
//     }

//     return num ^ mask;  
// }


// //Листинг 15.3 Программа fields.c
// //fileds.c -- определение и использование полей
// #include <stdio.h>
// #include <stdbool.h>        //C99, определение bool, true, false
// //стили линии
// #define SOLID 0
// #define DOTTED 1
// #define DASHED 2
// //основые цвета
// #define BLUE 4
// #define GREEN 2
// #define RED 1
// //смешанные цвета
// #define BLACK 0
// #define YELLOW (RED | GREEN)
// #define MAGENTA (RED | BLUE)
// #define CYAN (GREEN | BLUE)
// #define WHITE (RED | GREEN | BLUE)

// const char * colors[8] = {"cherniy", "krasniy", "zeleniy", "jeltiy",
//     "siniy" , "purpurniy", "goluboi", "beliy"};

// struct box_props{
//     bool opaque                 : 1;
//     unsigned int fill_color     : 3;
//     unsigned int                : 4;
//     bool show_border            : 1;
//     unsigned int border_color   : 3;
//     unsigned int border_style   : 2;
//     unsigned int                : 2;
// };

// void show_settings(const struct box_props * pb);

// int main(void)
// {
//     //создание и инициализация структуры box_props
//     struct box_props box = {true, YELLOW, true, GREEN, DASHED};

//     printf("Ishodnie nastroiki okna:\n");
//     show_settings(&box);

//     box.opaque = false;
//     box.fill_color = WHITE;
//     box.border_color = MAGENTA;
//     box.border_style = SOLID;
//     printf("\nIzmeninnie nastroiki okna:\n");
//     show_settings(&box);

//     return 0;
// }

// void show_settings(const struct box_props * pb)
// {
//     printf("Okno %s. \n",
//             pb->opaque == true ? "Neprozrachno": "Prozracno");
//     printf("Cvet fona %s.\n", colors[pb->fill_color]);
//     printf("Ramka %s. \n",
//             pb->show_border == true ? "otobrazaetsya" : "ne otobrazaetsya");
//     printf("Cvet ramki %s.\n", colors[pb->border_color]);
//     printf("Stil ramki ");

//     switch(pb->border_style)
//     {
//         case SOLID  : printf("splochnoi.\n"); break;
//         case DOTTED : printf("punktirniy.\n"); break;
//         case DASHED : printf("shtihovoi.\n"); break;
//         default     : printf("neizvestnogo tipa.\n");
//     }
// }

// //Листинг 15.4 Программа dualview.c
// //dualview.c -- битовые поля и побитовые операции
// #include <stdio.h>
// #include <stdbool.h>
// #include <limits.h>
// //Константы Битовых Полей
// //стили линии
// #define SOLID  0
// #define DOTTED 1
// #define DASHED 2
// //основные цвета
// #define BLUE   4
// #define GREEN  2
// #define RED    1
// //cмешаные цвета
// #define BLACK  0
// #define YELLOW  (RED | GREEN)
// #define MAGNETA (RED | BLUE)
// #define CYAN    (GREEN | BLUE)
// #define WHITE   (RED | GREEN | BLUE)

// //Побитовые константы
// #define OPAQUE          0x1
// #define FILL_BLUE       0x8
// #define FILL_GREEN      0x4
// #define FILL_RED        0x2
// #define FILL_MASK       0xE
// #define BORDER          0x100
// #define BORDER_BLUE     0x800
// #define BORDER_GREEN    0x400
// #define BORDER_RED      0x200
// #define BORDER_MASK     0xE00
// #define B_SOLID         0
// #define B_DOTTED        0x1000
// #define B_DASHED        0x2000
// #define STYLE_MASK      0x3000

// const char * colors[8] = {"cherniy", "krasniy", "zeleniy", "jeltiy",
//         "siniy", "purpurniy", "goluboy", "beliy"};
    
// struct box_props{
//     bool opaque                 : 1;
//     unsigned int fill_color     : 3;
//     unsigned int                : 4;
//     bool show_border            : 1;
//     unsigned int border_color   : 3;
//     unsigned int border_style   : 2;
//     unsigned int                : 2;
// };

// union Views         //взгляд на данные как на struct или как unsigned short
// {
//     struct box_props st_view;
//     unsigned short us_view;
// };

// void show_setting(const struct box_props * pb);
// void show_settings1(unsigned short);
// char * itobs(int n, char * ps);

// int main(void)
// {
//     //создание объекта Views, инициализация представления в виде структры
//     union Views box = {(true, YELLOW, true, GREEN, DASHED)};
//     char bin_str [8 * sizeof(unsigned int) + 1];

//     printf("Ishodnie nastroiki okna:\n");
//     show_setting(&box.st_view);
//     printf("\nNastroiki okna s ispolzovaniem predstavleniya unsigned short:\n");
//     show_settings1(box.us_view);

//     printf("Kombinaciya bitov %s\n",
//             itobs(box.us_view, bin_str));
    
//     box.us_view &= ~FILL_MASK;              //очистить биты фона
//     box.us_view |= (FILL_BLUE | FILL_GREEN); //переуставновить фон
//     box.us_view ^= OPAQUE;                  //переключить прозрачность
//     box.us_view |= BORDER_RED;              //ошибочный подход
//     box.us_view &= ~STYLE_MASK;             //очистить биты стиля
//     box.us_view |= B_DOTTED;                 //установить пунктирный стиль
//     printf("\nIzmenenie nastroiki okna:\n");
//     show_setting(&box.st_view);
//     printf("\nNastroiki okna s ispolzovaiem predstavleniya unsigned short:\n");
//     show_settings1(box.us_view);
//     printf("Kombinaciya bitov %s\n",
//             itobs(box.us_view, bin_str));

//     return 0;
// }

// void show_setting(const struct box_props * pb)
// {
//     printf("Okno %s.\n",
//         pb->opaque == true ? "Neprozrachno": "prozrachno");
//     printf("Cvet fona %s.\n", colors[pb->fill_color]);
//     printf("Ramka %s.\n",
//             pb->show_border == true ? "otobrazaetsya" : "ne otobrazaetsya");
//     printf("Cvet ramki %s.\n", colors[pb->border_color]);
//     printf("Stil ramki ");

//     switch (pb->border_style)
//     {
//     case SOLID  : printf("Sploshnoi.\n"); break;
//     case DOTTED : printf("Punktirniy.\n"); break;
//     case DASHED : printf("shrihovoi.\n"); break;

//     default:
//     printf("neizvbestnogo tipa");
//     }
// }


// void show_settings1(unsigned short us)
// {
//     printf("Okno %s.\n",
//         (us & OPAQUE) == OPAQUE? "neprozracno": "prozrachno");
//     printf("Cvet fona %s.\n",
//         colors[(us >> 1) & 07]);
//     printf("stil ramki ");
//        switch (us & STYLE_MASK)
//     {
//     case B_SOLID  : printf("Sploshnoi.\n"); break;
//     case B_DOTTED : printf("Punktirniy.\n"); break;
//     case B_DASHED : printf("shrihovoi.\n"); break;

//     default:
//     printf("neizvbestnogo tipa");
//     }

// printf("Cvet ramki %s.\n",
//         colors[(us >> 9) & 07]);
// }


// char * itobs(int n, char * ps)
// {
//     int i;
//     const static int size = CHAR_BIT * sizeof(int);

//     for(i = size - 1; i >= 0; i--, n >>= 1)
//         ps[i] = (01 & n) + '0';
//     ps[size] = '\0';
    
//     return ps;
// }


// //Листинг 15.5 Прграмма align.c
// //align.c -- использование _Alignof and Alignas (C11)
// #include <stdio.h>

// int  main(void)
// {
//     double dx;
//     char ca;
//     char cx;
//     double dz;
//     char cb;
//     char _Aligans(double) cz;

//     printf("Viravnivanie char: %zd\n", _Alignof(char));
//     printf("viravnivanie double: %zd\n", _Alignof(double));
//     printf("&dx: %p\n", &dx);
//     printf("&ca: %p\n", &ca);
//     printf("&cx: %p\n", &cx);
//     printf("&dz: %p\n", &dz);
//     printf("&cb: %p\n", &cb);
//     printf("&cz: %p\n", &cz);
// }

// 1. Преобразуйте следующие десятичные значения в двоичную форму:
// а. 3  011
// б. 13 1101
// в. 59 111011
// г. 119 1110111

// 2. Преобразуйте следующие двоичные значения в десятичную, восьмеричную и
// шестнадцатеричную форму:
// а. 00010101      21          025      15
// б. 01010101      85          125     55
// в. 01001100      76          114     4c
// г. 10011101      157         235     9d


// . Вычислите следующие выражения; предположите, что каждое* значение* имеет
// 8 битов:
// a. ~3            11111100
// b. 3 & 6         00000010
// v. 3 | 6         00000111
// g. 1 | 6         00000111
// d. 3 ^ 6         00000101
// e. 7 >> 1        00000011
// z 7 << 2         00011100    

// 4. Вычислите следующие выражения; предположите, что каждое значение имеет 
// 8 битов:
// а. ~0        1111 1111
// б. !0        1
// в. 2 & 4     0
// г. 2 && 4    1
// д. 2 | 4     0110  0x6 v 16 
// е. 2 || 4    1   
// ж. 5 << 3    0010 1000

// 5. Поскольку в ДОСН-коде используются только последние 7 битов, иногда жела
// тельно маскировать ос^тальные биты. Как будет выглядеть подходящая маска в 
// двоичной форме? В десятичной? В восьмеричной? В шестнадцатеричной

//v dboicnoi 0111 1111
//v desyaticnhoi 127
// v vosmetricnoi 177
// v shestandatericnoy 0xF


// 6. В листинге 15.2 следующий код
// while (bits-- > 0)
// {
// mask 1= bitval; 
// bitval <<= 1;
// }
// можно заменить таким фрагментом:
// while (bits-- > 0)
// {
// mask += bi tval; 
// bitval *= 2;
// }
// и программа по-прежнему будет работать. Означает ли это, что действие * =2 
// эквивадентно <<= 1? А как насчет 1 = и +=
// *=2 da
//А как насчет 1 = и += не знаю

// // 7. а. Компьютер linkerbell содержит в специальном байте информацию, касающу
// // юся оборудования. Этот байт может быть прочитан программой, и он содер
// // жит следующую информацию:
// // Биты
// // 0-1
// // 2
// // 3-4
// // 5
// // 6-7
// // Описание
// // Количество дисководов 1.44 Мбайт
// // Не используется
// // Количество приводов чтения компакт-дисков
// // Не используется
// // Количество жестких дисков
// // Подобно 1ВМ РС, компьютер Tinkerbell заполняет битовые поля структуры 
// // справа налево. Создайте шаблон битовых нолей, подходящий для хранения 
// // информации.
// // б. Компьютер Klinkerbell, ближайший кюн linkerbell, заполняет битовые ноля 
// // структур слева направо. Создайте соответствующий шаблон битовых нолей 
// // для системы Klinkerbell

// struct str
// {
//     unsigned int floppy : 2;    
//     unsigned int :1;
//     unsigned int cd :2;
//     unsigned int : 1;
//     unsigned int hhd : 2;
// };

// struct str2
// {
//     unsigned int hdd     : 2;
//     unsigned int         : 1;
//     unsigned int cd      : 2;
//     unsigned int         : 1;
//     unsigned int floppy  : 2;
// };


// #include <stdio.h>

// int bin(const char * str);

// int main(void)
// {
//     char * pbin = "01001001";

//     printf("%d\n", bin(pbin));

//     return 0;
// }

// int bin(const char * str)
// {
//     int result = 0;

//     while(*str)
//     {
//         result <<= 1;

//         if(*str == '1')
//             result +=1;

//         str++;
//     }

//     return result;
// }

// #include <stdio.h>
// #include <string.h>
// #include <limits.h>

// int num(const char *bin);
// char *bit(int n, char *str);

// int main(int argc, char *argv[])
// {
//     char bin[CHAR_BIT * sizeof(int) + 1];

//     if(argc != 3)
//     {
//         printf("Usage: %s binari1 binary2\n", argv[0]);
//         return 1;
//     }

//     int num1 = num(argv[1]);
//     int num2 = num(argv[2]);

//     printf("Number 1: %s\n", bit(num1, bin));

//     printf("~Number1: %s\n", bit(~num1, bin));

//     printf("Number 2: %s\n", bit(num2, bin));

//     printf("~Number2 : %s\n\n", bit(~num2, bin));

//     printf("AND (&): %s\n", bit(num1 & num2, bin));
//     printf(" OR (|): %s\n", bit(num1 | num2, bin));
//     printf(" ISKL OR(^): %s\n", bit(num1 ^ num2, bin));

//     return 0;
// }


// int num(const char *bin)
// {
//     int result = 0;

//     while(*bin)
//     {
//         result  <<= 1;

//         if(*bin == '1')
//             result |= 1;

//         bin++;
//     }
//     return result;
// }

// char *bit(int n, char *str)
// {
//     const int size = CHAR_BIT * sizeof(int);

//     for(int i = size - 1; i >= 0; i--, n >>= 1)
//         str[i] = (n & 1) + '0';

//     str[size] = '\0';

//     return str;
// }

// #include <stdio.h>
// #include <limits.h>
// void bit(int num, char * lol);
// int number(char * lol);

// int main(void)
// {
//     int num;
//     scanf("%d", &num);

//     char masiv[CHAR_BIT * sizeof(int) + 1];


//     bit(num, masiv);

//     printf("%s\n", masiv);

//     int vkl = number(masiv);
//     printf("%d stolkoi vklucchinh bitov v chisle %d", vkl, num);

//     return 0;
// }


// void bit(int num, char * lol)
// {
//     int size = CHAR_BIT * sizeof(int);
//     for(int i = size - 1; i >= 0; i--, num >>= 1)
//     {
//         lol[i] = (num & 1) + '0';
//     }
//     lol[size] = '\0';
// }

// int number(char * lol)
// {
//     int size = CHAR_BIT * sizeof(int);
//     int vkl = 0;
//     for(int i = 0; i < size; i++)
//     {
//         if(lol[i] == '1')
//             vkl++;
//     }
// return vkl;
// }


// // int count_bits(int num)
// // {
// //     int count = 0;

// //     while (num)
// //     {
// //         if (num & 1)
// //             count++;

// //         num >>= 1;
// //     }

// //     return count;
// // }

// #include <stdio.h>

// int proverka(int num, int mesto);
// int main(void)
// {
//     int num = 10;
//     int bit = 3;

//     printf("%d", proverka(num, bit));

//     return 0;
// }
// int proverka(int num, int mesto)
// {
//     num>>=mesto-1;

//     if(num & 1)
//         return 1;
//     else 
//         return 0;
// }

// #include <stdio.h>
// #include <limits.h>

// unsigned int bit(unsigned int x, int n);
// int main(void)
// {
//     printf("%d", bit(0x80000000, 4));

// }
// unsigned int bit(unsigned int x, int n)
// {
//     int bits = sizeof(unsigned int) * 8;

//     while(n-- > 0)
//     {
//         unsigned int last = x >> (bits - 1);

//         x <<= 1;

//         x |= last;
//     }
// return x;
// }

// #include <stdio.h>

// #define ID_MASK      0xFF
// #define SIZE_MASK    (0x7F << 8)
// #define ALIGN_MASK   (0x3 << 15)

// #define BOLD_MASK    (1 << 17)
// #define ITALIC_MASK  (1 << 18)
// #define UNDER_MASK   (1 << 19)

// struct bit
// {
//     unsigned int indifikator_shrifta : 8;
//     unsigned int size_shrift : 7;
//     unsigned int viravnivanie : 2;
//     unsigned int poluzirniy : 1;
//     unsigned int kursiv : 1;
//     unsigned int podchernitiy : 1;
// };

// void ID(unsigned long *lol)
// {
    
//     unsigned int temp;

//     printf("Vvedite identifikator (0-255):");
//     scanf("%u", &temp);

//     *lol &= ~ID_MASK;
//     *lol |= (temp & 0xFF);
// }

// void shrift(unsigned long *lol)
// {   
//     unsigned int temp;

//     printf("Vvedite razmer: ");
//     scanf("%u", &temp);

//     *lol &= ~SIZE_MASK;
//     *lol |= ((temp & 0x7F) << 8);
// }

// void viravnivanie(unsigned long *lol)
// {
//     unsigned int temp;

//     printf("0 - Vlevo\n");
//     printf("1 - Po centru\n");
//     printf("2 - Vpravo\n");
//     printf("Viberite viravnivanie: ");

//     scanf("%u", &temp);

//     *lol &= ~ALIGN_MASK;
//     *lol |= ((temp & 0x03) << 15);
// }

// void poluzhirniy(unsigned long *lol)
// {
//     *lol ^= BOLD_MASK;
// }

// void kursiv(unsigned long *lol)
// {
//     *lol ^= ITALIC_MASK;
// }

// void podcherknutiy(unsigned long *lol)
// {
//     *lol ^= UNDER_MASK;
// }


// int main(void)
// {
//     unsigned long font = 0;
    
//     font |= 1;
//     font |= (12 << 8);

//     char *masiv;
//     while(1)
//     {
//         unsigned int aligin = (font & ALIGN_MASK) >> 15;
//         printf("ID      RAZMER      VIRAVNIVANIE        Z       K       CH\n");
//         switch(aligin)
//         {
//             case 0: masiv = "Vlevo"; break;
//             case 1: masiv ="Po centru"; break;
//             case 2: masiv = "Vpravo"; break;
//         }
//         printf("%d      %d          %s                  %s      %s      %s\n",
//                 (font & ID_MASK), ((font & SIZE_MASK) >> 8), masiv, 
//                  font  & BOLD_MASK ? "VKL" : "OTKL", 
//                  font  & ITALIC_MASK ? "VKL" : "OTKL",
//                  font  & UNDER_MASK ? "VKL" : "OTKL");

//         char ch;

//         printf("\n");
//         printf("f - izmenit ID\n");
//         printf("s - izmenit razmer\n");
//         printf("a - viravnivanie\n");
//         printf("b - poluzhirniy\n");
//         printf("i - kursiv\n");
//         printf("u - podcherknutiy\n");
//         printf("q - vihod\n");

//         scanf(" %c", &ch);  
//         while(getchar() != '\n');

//         switch (ch)
//         {
//         case 'f':
//             ID(&font);
//             break;
//         case 's':
//             shrift(&font);
//             break;
//         case 'a':
//             viravnivanie(&font);
//             break;
//         case 'b':
//             poluzhirniy(&font);
//             break;
//         case 'i':
//             kursiv(&font);
//             break;
//         case 'u':
//             podcherknutiy(&font);
//             break;
//          case 'q':
//             return 0;
//             break;
        
//         default: printf("Ne verniy vvod poprobite snova\n");
//             break;
//         }
//     }
// }

// //Листинг 16.1. Программа preproc.c
// //preproc.c -- простые примеры работсы с препроцессором
// #include <stdio.h>
// #define TWO 2                           // при желании можно использовать в комментарии
// #define OW "Logica - poslednee ubeziche lichenih\
// voobrazeniya. - Oskar Uaild"            //обратная косая черта переносит определение на след строку

// #define FOUR TWO*TWO
// #define PX printf("X = %d.\n", x);
// #define FMT "X = %d.\n"

// int main(void)
// {
//     int x = TWO;

//     PX;

//     x = FOUR;
//     printf(FMT, x);
//     printf("%s\n", OW);
//     printf("TWO: OW\n");

//     return 0;
// }

// //Листинг 16.2 Программа mac_arg.c
// //mac_arg.c -- макросы с аргументами
// #include <stdio.h>
// #define SQUARE(X) X*X
// #define PR(X) printf("Resultat: %d.\n", X)
// int main(void)
// {
//     int x = 5;
//     int z;

//     printf("x = %d\n", x);
//     z = SQUARE(x);
//     printf("Vichislenie SQUARE(x): ");
//     PR(z);
//     z = SQUARE(2);
//     printf("Vichislenie SQUARE(2): ");
//     PR(z);
//     printf("Vishislenie 100/SQUARE(2): ");
//     PR(100/SQUARE(2));
//     printf("x = %d.\n", x);
//     printf("Vishislenie SQUARE(++x): ");
//     PR(SQUARE(++x));
//     printf("Posle inkrementirovaniya x = %x.\n",x);
//     return 0;
// }

// //subst.c -- подстановка в строке
// #include <stdio.h>
// #define PSQR(x) printf("Kvadrat " #x "raven %d.\n",((x) * (x)))
// int main(void)
// {
//     int y = 5;

//     PSQR(y);
//     PSQR(2 + 4);
//     return 0;
// }

// //glue.c -- использование операции ##
// #include <stdio.h>
// #define XNAME(n) x ## n
// #define PRINT_XN(n) printf("x" #n " = %d\n", x ## n);

// int main(void)
// {
//     int XNAME(1) = 14;
//     int XNAME(2) = 20;

//     int x3 = 30;

//     PRINT_XN(1);            //превращается в printf("x1 = %d\n", x1)
//     PRINT_XN(2);            //превращается в printf("x2 = %d\n", x2)  
//     PRINT_XN(3);            //превращается в printf("x3 = %d\n", x3)

//     return 0;
// }

// //variadic.c -- макросы с переменным числом аргументов
// #include <stdio.h>
// #include <math.h>
// #define PR(X, ...) printf("Soobchenie " #X ": " __VA_ARGS__)
// int main(void)
// {
//     double x = 48;
//     double y;
//     y = sqrt(x);
//     PR(1, "x = %g\n", x);
//     PR(2, "x = %.2f, y = %.4f\n", x, y);

//     return 0;
// }

// //names_st.h -- заголовочный файл для структуры names_st
// //константы
// #include <stdio.h>
// #define SLEN 32

// //объявления структур  
// struct names_st
// {
//     char first[SLEN];
//     char last[SLEN];
// };

// //определение типов
// typedef struct names_st names;

// //прототипы функций
// void et_names(names *);
// void show_names(const names *);
// char * s_gets(char * st, int n);

// //names_st.c --определение функций для names_st
// #include <stdio.h>
// #include "names_st.h"       //включение заголовочного файла

// //определение функций
// void get_names(names * pn)
// {
//     printf("VVedite csoe imya: ");
//     s_gets(pn->first, SLEN);

//     printf("VVedite svou familiu: ");
//     s_gets(pn->last, SLEN);
// }

// void show_names(const names * pn)
// {
//     printf("%s %s", pn->first, pn->last);
// }

// char * s_gets(char * st, int n)
// {
//     char * ret_val;
//     char * find;

//     ret_val = fgets(st, n, stdin);
//     if(ret_val)
//     {
//         find = strchr(st, '\n');
//         if(find)
//             *find = '\0';
//         else
//             while(getchar() != '\n')
//                 continue;
//     }

//     return ret_val;
// }

// //useheader.c -- использование структуры names_st.c
// #include <stdio.h>
// #include "names_st.h"
// //не забулте скомпноновать с names_st.c

// int main(void)
// {
//     names candidate;

//     get_names(&candidate);
//     printf("Dobro pozalovat v programmu, ");
//     show_names(&candidate);
//     printf("!\n");

//     return 0;
// }

// //ifdef.c -- использование условной компиляции
// #include <stdio.h>
// #define JUST_CHECKING
// #define LIMIT 4

// int main(void)
// {
//     int i;
//     int total = 0;

//     for(i = 1; i <= LIMIT; i+=)
//     {
//         total += 2*i*i + 1;
// #ifdef JUST_CHECKING
//         printf("i = %d, promezutocnaya summa = %d\n", i, total);
// #endif
//     }
//     printf("Itogovaya summa = %d\n", total);

//     return 0;
// }

// //Листинг 16.10 
// //names.h -- добавление защиты от многократного вклбючения

// #ifndef NAMES_H_
// #define NAMES_H_
// //конастанты
// #define SLEN 32

// //объявления структур
// struct names_st
// {
//     char first[SLEN];
//     char last[SLEN];
// };

// //определения типов
// typedef struct names_st names;

// //прототипы функций
// void get_names (names *);
// void show_names(const names *);
// char * s_gets(char * st, int n);

// #endif

// //Листинг 16.11. Программа doubincl.c
// //doubincl.c -- двукратное включение заголовочного файла
// #include <stdio.h>
// #include "names.h"
// #include "names.h"          // непреднамеренно второе включение

// int main(void)
// {
//     names winner = {"Ivan","Ivanov"};
//     printf("Pobeditelem stal %s %s.\n", winner.first, winner.last);

//     return 0;
// }

// //Листинг 16.12 Програмаа predef.c
// //predef.c -- предопределнныые идентификаторы
// #include <stdio.h>
// void why_me();

// int main(void)
// {
//     printf("Fail: %s.\n", __FILE__);
//     printf("Data: %s.\n", __DATE__);
//     printf("Vremya: %s.\n", __TIME__);
//     printf("Versiya: is %ld.\n", __STDC_VERSION__);
//     printf("Eto stroka %d.\n",__LINE__);
//     printf("Eto funciya %s\n", __func__);

//     why_me();

//     return 0;
// }

// void why_me()
// {
//     printf("Eto funciya %s\n", __func__);
//     printf("Eto stroka %d.\n", __LINE__);
// }

// //Листинш 16.13. Программа predef.c
// //mytype.c

// #include <stdio.h>

// #define MYTYPE(X) _Generic((X), \
//     int: "int",\
//     float : "float",\
//     double : "double",\
//     default : "drugoi"\
// )

// int main(void)
// {
//     int d = 5;
//     printf("%s\n", MYTYPE(d));          //d имеет тип int
//     printf("%s\n", MYTYPE(2.0 * d));    //2.0 * d имеет тип double
//     printf("%s\n", MYTYPE(3L));         //3L имеет тип long
//     printf("%s\n", MYTYPE(&d));         //&d имеет тип int *

//     return 0;
// }

// //Листинг 16.14 Программа rect_pol.c
// //rect_pol.c -- преобразует прямогульные координаты в полярные
// #include <stdio.h>
// #include <math.h>

// #define RAD_TO_DEG (180 / (4 * atan(1)))

// typedef struct polar_v
// {
//     double magnitude;
//     double angle;
// }Polar_V;

// typedef struct rect_v{
//     double x;
//     double y;
// }Rect_V;

// Polar_V rect_to_polar(Rect_V);

// int main(void)
// {
//     Rect_V input;
//     Polar_V result;

//     puts("Vvedite koordinati x and y; vvedite q dlya vihoda:");

//     while(scanf("%lf %lf", &input.x, &input.y) == 2)
//     {
//         result = rect_to_polar(input);
//         printf("modul = %0.2f, ugol = %0.2f\n",
//                 result.magnitude, result.angle);
//     }

//     return 0;
// }
// Polar_V rect_to_polar(Rect_V rv)
// {
//     Polar_V pv;

//     pv.magnitude = sqrt(rv.x * rv.x + rv.y * rv.y);
//     if(pv.magnitude = 0.0)
//         pv.angle = 0.0;
//     else
//         pv.angle = RAD_TO_DEG * atan2(rv.y, rv.x);

//     return pv;
// }

// //Листинг 16.15 Программа generic.c
// //generic.c -- определение обобщенных макросов
// #include <stdio.h>
// #include <math.h>
// #define RED_TO_DEG (180 / (4 * atanl(1)))

// //обобщенная функция излвечения квадратного корня
// #define SQRT(X) _Generic((X), \
//     long double: sqrt, \
//     default: sqrt,\
//     float: sqrtf)(X)
    
// //Обобщенная функция вычисления синуса угла, заданного в градусах
// #define SIN(X) _Generic((X),\
//     long double: sinl((X)/RED_TO_DEG),\
//     default: sin((X)/RED_TO_DEG),\
//     float: sinf((X)/RED_TO_DEG)\
// )

// int main(void)
// {
//     float x = 45.0f;
//     double xx = 45.0;
//     long double xxx = 45.L;

//     long double y = SQRT(x);
//     long double yy = SQRT(xx);
//     long double yyy = SQRT(xxx);

//     printf("%.17Lf\n", y);      //соотвествует float
//     printf("%.17Lf\n", yy);     //default
//     printf("%.17Lf\n", yyy);    //long double

//     int i = 45;
//     yy = SQRT(i);
//     printf("%.17Lf\n", yy); //default
//     yyy = SIN(xxx);
//     printf("%.17Lf\n", yyy);    //long double

//     return 0;
// }

// //Листинг 16.16 Программа byebye.c
// //byebye.c -- пример применения atexit()
// #include <stdio.h>
// #include <stdlib.h>
// void sing_off(void);
// void too_bad(void);

// int main(void)
// {
//     int n;

//     atexit(sing_off);       //регистрация функции sign_off()
//     puts("Vvedite celoe chislo:");
//     if(scanf("%d", &n) != 1)
//     {
//         puts("Eto ne celoe chislo!");
//         atexit(too_bad); //регистрация функции too_bad()
//         exit(EXIT_FAILURE);
//     }
//     printf("%d yavlyaetsya %s.\n", n, (n % 2 == 0) ? "Chetniy" : "nechentin");

//     return 0;
// }

// void sing_off(void)
// {
//     puts("Zavershenie raboti ocherendoi zamchatelnoi progammi ot");
//     puts("SeeSaw Software");
// }

// void too_bad(void)
// {
//     puts("SeeSaw Sofrware prinosit ickrinie iznveneniya");
//     puts("v svysi s otkazom");
// }

//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA!
// //Листинг 16.17. Программа qsorter.c
// //qsorter.c -- использование бысьрой сортировки для упорядочения групп чисел
// #include <stdio.h>
// #include <stdlib.h>

// #define NUM 40
// void fillarray(double ar[], int n);
// void showarray(const double arp[], int n);
// int mycomp(const void * p1, const void * p2);

// int main(void)
// {
//     double vals[NUM];
//     fillarray(vals, NUM);
//     puts("Spisok cluchainih chisel:");
//     showarray(vals, NUM);
//     qsort(vals, NUM, sizeof(double), mycomp);
//     puts("\nOtsortirovannie spisok:");
//     showarray(vals, NUM);
//     return 0;
// }

// void fillarray(double ar[], int n)
// {
//     int index;

//     for(index = 0; index < n; index++)
//         ar[index] = (double)rand()/((double) rand() + 0.1);
// }

// void showarray(const double ar[], int n)
// {
//     int index;

//     for(index = 0; index < n; index++)
//     {
//         printf("%9.4f ", ar[index]);
//         if(index % 6 == 5)
//             putchar('\n');
//     }
//     if(index % 6 != 0)
//         putchar('\n');
// }

// //сортировка по возрастанию
// int mycomp(const void * p1, const void * p2)
// {
//     //для доступа к значениям необходимо использовать указатели на double
//     const double * a1 = (const double *) p1;
//     const double * a2 = (const double *) p2;

//     if(*a1 < *a2)
//         return -1;
//     else if(*a1 == *a2)
//         return 0;
//     else
//         return 1;
// }

// //Листинг 16.18 Программа assert.c
// //assert.c -- использование assert()
// #include <stdio.h>
// #include <math.h>
// #include <assert.h>

// int main()
// {
//     double x, y, z;

//     puts("VVedite paru chisel (0 0 dlya zaversheniya): ");
//     while(scanf("%lf%lf", &x, &y) == 2 && (x != 0 || y != 0))
//     {
//         z = x * x - y * y;      //должно быть +
//         assert(z >= 0);
//         printf("Rezultatom yavlyetsya %f\n", sqrt(z));
//         puts("Vvedite sledushuu paru chisel");
//     }
//     puts("Programma zavershena.");
//     return 0;
// }

// //Листинг 16.19 Программа statasrt.c
// //statsrt.c
// #include <stdio.h>
// #include <limits.h>
// _Static_assert(CHAR_BIT == 7, "Oshibochno predpolohaetsya 16-bitoviy tip char");
// int main(void)
// {
//     puts("Tip char imeet 16 bitov.");
//     return 0;
// }


// //BBBBBBBBBBBBBBBBBBBBBBBBBBBBB
// //Листинг 16.20. Программма mems.c
// //mems.c -- использование функций memcpy() and memmove()
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #define SIZE 10
// void show_array(const int ar[], int n);
// //удалите следующую строку если _Static_assert из C11 не поддерживается
// _Static_assert(sizeof(double) == 2 * sizeof(int), "double ne imeet dvoinoi razmer int");

// int main()
// {
//     int values[SIZE] = {1,2,3,4,5,6,7,8,9,10};
//     int target[SIZE];
//     double curios[SIZE / 2] = {2.0, 2.0e5, 2.0e10, 2.0e20, 5.0e30};

//     puts("Ispolsovanie memcpy():");
//     puts("znacheniya (ishodnie dannie): ");
//     show_array(values, SIZE);
//     memcpy(target, values, SIZE * sizeof(int));
//     puts("celevoe dannie (kopiya znacheniy):");
//     show_array(target, SIZE);

//     puts("\nIspolzovanie memmove() s perekrivuashimisya oblastyami:");
//     memmove(values + 2, values, 5 * sizeof(int));
//     puts("znachenie -- elementi 0-5 skopirovani v elementi 2-7:");
//     show_array(values, SIZE);

//     puts("\nIspolzovanie memcpy() dlya kopirovaniya double v int:");
//     memcpy(target, curios, (SIZE/2) * sizeof(double));
//     puts("celevie dannie -- 5 znacheny double v 10 posiciyah int:");
//     show_array(target, SIZE / 2);
//     show_array(target + 5, SIZE / 2);

//     return 0;
// }

// void show_array(const int ar[], int n)
// {
//     int i;
//     for(i = 0; i < n; i++)
//         printf("%d ", ar[i]);
//     putchar('\n');
    
// }

// //Листинг 16.21. Программа varags.c
// //varags.c -- использование переменного числа аргументов
// #include <stdio.h>
// #include <stdarg.h>
// double sum(int, ...);

// int main(void)
// {
//     double s,t;
//     s = sum(3, 1.1, 2.5, 13.3);
//     t = sum(6, 1.1, 2.1,13.1,4.1,5.1, 6.1);

//     printf("Vozvrashaemoe znachenie "
//            "sum(3, 1.1, 2.5, 13.3):                            %g\n",s);
//     printf("Vozvrashaemoe znachenie "
//            "sum(6, 1.1, 2.1, 13.1, 4.1, 5.1, 6.1):             %g\n",t);

//     return 0;
// }

// double sum(int lim, ...)
// {
//     va_list ap;             //объявление обхекта для храенения аргументов
//     double tot = 0;
//     int i;

//     va_start(ap, lim);              //инициализация ар списком аргументов
//     for(i = 0; i < lim; i++)        
//         tot += va_arg(ap, double);      //доступ к каждому элементу в сиске аргументов
//     va_end(ap);                     //очистка

//     return tot;
// }


// // 1. Ниже приведены группы из одного или нескольких макросов, сопровождаемые 
// // строками кода, в которых они используются. Каким будет результат выполнения 
// // кода в каждом случае? Является ли код допустимым? (Предполагается, что пере
// // менные были объявлены.)
// //а.
// #define FPM 5280     /* футов в миле */
// dist = FPM * miles; 
// //ОТВЕТ ДА
// //б. 
// #define FEET 4 
// #define POD FEET + FEET 
// plort = FEET * POD;
// //ОТВЕТ ЭТО ДОПУСТИМО НО ОТВЕТ МОЖЕТ ОТЛИЧАТСЯ ОТ ЗАДУМИ, ТАК КАК НЕТ ЯВНЫХ СКОБОК, МОЖЕТ ПРОИЗОЙТИ СНАЧАЛА УМНОЖЕНИЕ ФИТ НА ФИТ И ПОТОМ ПРИБАВЛЕНИЕ ФИТ
// //B.
// #define SIX = 6; 
// nex = SIX;
// //нет так как  сикс будет не 6 а =6;
// //r.
// // #define NEW(X) X + 5 
// // у = NEW(у);      //ДОПУСТИМО
// // berg = NEW(berg) * lob;  //ТА ЖЕ ПРОБЛЕМА КАК В Б. ТАК КАК СНААЛА МОЖЕТ ПРОИЗОЙТИ УМНОЖЕНИЕ И ПОТОМУ УЖЕ СКАЛДЫВАНИЕ С 5 И Т.Д
// // est = NEW(berg) / NEW(у);    //DOPUSTIMO NO IZ ZA NE NALICHIA CKOBOK PLOHO (X) (X + 5) RABOTALO BI KORRTNO
// // nilp = lob * NEW(-berg) ; //NORM NO VSE SNOVA V SKOBKI UPIRAETSYA

// // 2. Исправьте определение в части г) вопроса 1, чтобы сделать код более надеж
// // ным.
// #define NEW(X) (X + 5)
// у = NEW(у);      
// berg = NEW(berg) * lob; 
// est = NEW(berg) / NEW(у);    
// nilp = lob * NEW(-berg) ; 

// 3. Определите функциональный макрос, который возвращает меньшее из двух зна
// чений.
//#define LOL(X, Y) ((X) < (Y) ? (X) : (Y))

// // 4. Определите макрос EVEN_GT (Х, У), который возвращает значение 1, если Х яв
// // ляется четным, а также больше У.
// #define EVEN_GT(X, Y) ((((X) % 2) == 0) && ((X) > (Y))) 

// //5. Определите функциональный макрос, который выводит представления и зна
// // чения двух целочисленных выражений. Например, он может выводить строку
// // 3 + 4 = 7 и 4 * 12 = 48
// //eсли аргументами являются выражения 3 + 4 и 4* 12.

// #define PRO(X, Y, X1, Y1) printf(#X " + " #Y " = %d and " #X1 " * " #Y1 " = %d", X + Y, X1 * Y1)

// #define PRO(X, Y) \
//     printf(#X " = %d\n" #Y " = %d\n", (X), (Y))


// 6. Напишите операторы #define для достижения следующих целей.
// а. Создайте именованную константу со значением 25.       //#define NUM 25
// б. Обеспечьте, чтобы идентификатор SPACE представлял символ пробела. #define SPACE ' '
// в. Обеспечьте, чтобы макрос PS () выводил символ пробела.   #define PS() printf(" ")
// г. Обеспечьте, чтобы макрос BIG (Х) представлял сложение 3 и Х.  #define BIG(X) ((X) + 3)
// д. Обеспечьте, чтобы макрос SUMSQ (Х, У) представлял сумму квадратов Х и У. #define SUMSQ(X, Y) (((X) * (X)) + ((Y) * (Y)))

// // 7. Определите макрос, который выводит имя, значение и адрес переменной int в 
// // сле^дующем формате:
// // имя: fop; значение: 23; адрес: ff46016

// #define ALL(X) printf("imya: "#X ": znachenie: %d; adres: %p", (X), (&X))

// 8. Предположим, что имеется блок кода, который необходимо пропустить во 
// время тестирования программы. Как это сделать без удаления этого блока 
// кода из файла?

// #include <stdio.h>
// int main(void)
// {
//     printf("Начало\n");

// #if 0
//     printf("Этот код не выполнится\n");
//     int x = 10;
//     printf("%d\n", x);
// #endif

//     printf("Конец\n");
// }

// #define DEBUG

// #ifdef DEBUG
//     // код
// #endif

// 9. Напишите фрагмент кода, который выводит дату обработки препроцессором, 
// если макрос PR_ DATE определен.
// #include <stdio.h>

// #define PR_DATE

// int main(void)
// {
// #ifdef PR_DATE
//     printf("Data: %s\n", __DATE__);
// #endif

//     return 0;
// }

// 10. При обсуждении встраиваемых функций были показаны три разных версии фун
// кции square (). Чем они отличаются друг от друга в пане поведения? 


// 11. Создайте макрос, используя выражение обобщенного выбора, которое оценива
// ется в строку "boolean", если аргумент макроса имеет тип _Bool, и в строку 
// "not boolean" в противном случае.

// #include <stdio.h>
// #include <stdbool.h>

// #define BOOL_TYPE(X) \
// _Generic((X), \
//     _Bool: "boolean", \
//     default: "not boolean")

// int main(void)
// {
//     _Bool a = 1;
//     int b = 5;
//     double c = 3.14;

//     printf("%s\n", BOOL_TYPE(a));
//     printf("%s\n", BOOL_TYPE(b));
//     printf("%s\n", BOOL_TYPE(c));

//     return 0;
// }

// 12. Что неправильно в следующей программе?
// #include <stdio.h>                                                   //#include <math.h>
// int main(int argc, char argv[]) //char * argv[]
// {                                                                    //double x = atof(argv[1]);
// printf("Квадратный корень из %f равен %f\n", argv[1],                //x
// sqrt(argv[1])) ;
// }
//ответ то что мы символ чар не перевели в число


// 13. Предположим, что scores — это массив из 1000 значений int, которые требуют 
// сортировки в порядке убывания, а также, что вы используете функцию сорти
// ровки qsort ( ) и функцию сравнения по имени comp ( ) .
// а. Как правильно вызвать qsort () ?
// б. Какое определение подойдет для comp () ?

// #include <stdlib.h>

// int comp(const void *a, const void *b)
// {
//     const int *x = a;
//     const int *y = b;

//     if (*x < *y)
//         return 1;
//     if (*x > *y)
//         return -1;

//     return 0;
// }

// int main(void)
// {
//     int scores[1000];

//     qsort(scores, 1000, sizeof(scores[0]), comp);

//     return 0;
// }


// 14. Предположим, что datal — это массив из 100 значений double, а data2 — мас
// сив из 300 значений do^le.
// а. Напишите вызов функции memcpy (), который скопирует первые 100 элемен
// тов data2 в datal.
// б. Напишите вызов функции memcpy (), который скопирует последние 100 эле
// ментов data2 в datal
// memcpy(data1, data2, sizeof(data1));
// memcpy(data1, data2 + 200, 100 * sizeof(double));

// #include <stdio.h>
// #define NUM(X, Y) ((2.0 * ((X) * (Y))) / ((X) + (Y)))

// int main(void)
// {
//     printf("%.1lf %.1lf garmonicheskoe srednee etoh chisel: %lf", (double)10, (double)5, NUM((double)10, (double)5));

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// struct polar
// {
//     double r;
//     double angle;
// };

// struct rect{
//     double x;
//     double y;
// };

// struct rect transform(struct polar p);

// int main(void)
// {
//     struct polar p;
//     struct rect r;

//     printf("VVdite modul: ");
//     scanf("%lf", &p.r);

//     printf("Vvedite ugol(v gradusah): ");
//     scanf("%lf", &p.angle);

//     r = transform(p);

//     printf("x = %.2lf\n", r.x);
//     printf("y = %.2lf\n", r.y);

//     return 0;
// }

// struct rect transform(struct polar p)
// {
//     struct rect temp;
//     double rad = p.angle * 3.14159 / 180.0;

//     temp.x = p.r * cos(rad);
//     temp.y = p.r * sin(rad);

//     return temp;
// }

// #include <stdio.h>
// #include <time.h>


// void time2(double delta)
// {

//   double time1;
//   if((time1 = clock()) == -1)
//   {
//     puts("-1");
//     return;
//   }

//   double time2 = time1 + delta;
   
   
//    while(clock() < time2)
//    {
    
//    }
   
// };
// int main(void)
// {
//     time2(300);

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
// #include <time.h>
// void masiv(int mas[], int n, int m);

// int main(void)
// {
//     int mas[10] = {1,2,3,4,5,6,7,8,9,10};
//     masiv(mas, sizeof(mas) / sizeof(mas[0]), 10);

// }
// void masiv(int mas[], int n, int m)
// {
    
    
//     if(n <= 0 || mas == 0 || n < m)
//     {
//         printf("ERROR");
//         return;
//     }


    

//     bool *pl = calloc(n, sizeof(bool));

//     if(pl == NULL)
//     {
//     printf("AAAA");
//     return;
//     }
//     for(int i = 0; i < n; i++)
//         pl[i] = false;


//     srand(time(NULL));


//     while(m)
//     {
//     int lol = rand() % n;
//     if(pl[lol] == false)
//     {
//     m--;
//     pl[lol] = true;
//     printf("%d\n", mas[lol]);
//     }
//     }

//     free(pl);
// }

// double sum(int lim, ...)
// {
//     va_list ap;             //объявление обхекта для храенения аргументов
//     double tot = 0;
//     int i;

//     va_start(ap, lim);              //инициализация ар списком аргументов
//     for(i = 0; i < lim; i++)        
//         tot += va_arg(ap, double);      //доступ к каждому элементу в сиске аргументов
//     va_end(ap);                     //очистка

//     return tot;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <stdarg.h>
// void show_array(const double ar[], int n);
// double * new_d_array(int n, ...);

// int main(void)
// {
//     double * p1;
//     double * p2;

//     p1 = new_d_array(5, 1.2, 2.3, 3.4, 4.5, 5.6);
//     p2 = new_d_array(4, 100.0, 20.00, 8.08, -1890.0);
//     show_array(p1, 5);
//     show_array(p2, 4);
//     free(p1);
//     free(p2);

//     return 0;
// }
// double * new_d_array(int n, ...)
// {
//     double *p1 = malloc(sizeof(double) * n);

//     va_list ap;

//     va_start(ap, n);

//     for(int i = 0; i < n; i++)
//         p1[i] = va_arg(ap, double);

//     va_end(ap);

//     return p1;
// }

// void show_array(const double ar[], int n)
// {
//     for(int i = 0; i < n; i++)
//     printf("%.2lf ", ar[i]);

//     putchar('\n');
// }

// //Литсинг 17.1 Программа films1.c
// //films.c -- использование массива структур
// #include <stdio.h>
// #include <string.h>
// #define TSIZE 45
// #define FMAX 5

// struct film{
//     char title[TSIZE];
//     int rating;
// };

// char * s_gets(char * st, int n);

// int main(void)
// {
//     struct film movies[FMAX];
//     int i = 0;
//     int j;

//     puts("Vvedite nazvanie pervogo filma: ");
//     while(i < FMAX && s_gets(movies[i].title, TSIZE) != NULL && movies[i].title != '\0')
//     {
//         puts("Vvedite svoe znaxhenie raitinga <0-10>:");
//         scanf("%d", &movies[i++].rating);
//         while(getchar() != '\n')
//             continue;
//         puts("Vvedite nazvanie sledushego filma (ili pustuu strroku dlya prekracheniya vvod):");   
//     }

//     if(i == 0)
//         printf("Dannie ne vvedeni");
//     else
//         printf("spispk filmov:\n");
//     for(j = 0; j < i; j++)
//         printf("Film: %s Raiting: %d\n", movies[j].title, movies[j].rating);

//     printf("Progranna zavetshena,\n");

// }

    // char * s_gets(char * st, int n)
    // {
    //     char * ret_val;
    //     char * find;

    //     ret_val = fgets(st, n, stdin);
    //     if(ret_val)
    //     {
    //         find = strchr(st, '\n');
    //         if(find)
    //         *find = '\0';
    //         else
    //             while(getchar() != '\n')
    //                 continue;
    //     }
    //     return ret_val;
    // }

// #define TSIZE 45
// struct film{
//     char title[TSIZE];
//     int rating;
// };
// //...
// int n, i;
// struct film * movies;   //указатель на структуру
// ///...
// printf("Ukazite maksimalnoe kolichestvo filmov, kotorie vi budete vvodit:\n");

// scanf("%d", &n);
// movies = (struct film *) malloc(n * sizeof(struct film));

// #define TSIZE 45    /* размер массива для хранения названий*/
// #define FMAX 500    /* максимальное количество названий фильмов */

// struct film {
// char title[TSIZE]; 
// int rating;
// };
// ...
// struct film * movies[FMAX]; /* массив указателей на структуры */ 
// int i;
// movies[i] = (struct film *) malloc(sizeof (struct film));

// #define TSIZE 45
// struct film{
//     char title[TSIZE];
//     int rating;
//     struct film * next;
// };
//SACHA
// //ЛИстинг 17.2 Программа films2.c
// //films2.c -- использование связного списка структур
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define TSIZE 45

// struct film{
//     char title[TSIZE];
//     int rating;
//     struct film * next;
// };

//     char * s_gets(char * st, int n)
//     {
//         char * ret_val;
//         char * find;

//         ret_val = fgets(st, n, stdin);
//         if(ret_val)
//         {
//             find = strchr(st, '\n');
//             if(find)
//             *find = '\0';
//             else
//                 while(getchar() != '\n')
//                     continue;
//         }
//         return ret_val;
//     }

//     int main(void)
//     {
//         struct film * head = NULL;
//         struct film * prev, * current;
//         char input[TSIZE];
//         //Sbor i cohranenoe infi
//         puts("Vvedite nazvaie perbogo flma:");
//         while(s_gets(input, TSIZE) != NULL && input[0] != '\0')
//         {
//             current = (struct film *) malloc(sizeof(struct film));
//             if(head == NULL)
//                 head = current;
//             else
//                 prev->next = current;
//             current->next = NULL;
//             strcpy(current->title, input);
//             puts("Vvedite cvoe znachenie raitinga <0-10>:");
//             scanf("%d", &current->rating);
//             while(getchar() != '\n')
//                 continue;
//             puts("VVedite nazvanmie sledushego filma (ili pustuu stroku dlya prekrasheniya vvoda):");
//                 prev = current;
//         }
//         if(head == NULL)
//         printf("Dannie ne vvedeni");
//         else
//             printf("Spisok filmov:\n");
//         current = head;

//         while(current != NULL)
//         {
//             printf("Film: %s Rating: %d\n", current->title, current->rating);
//             current = current->next;
//         }
//         //Programma vipolnena, poetomu moazno osvobodit pamyat
//         current = head;
//         while(current != NULL)
//         {
//             current = head;
//             head = current->next;
//             free(current);
//         }

//         printf("programma zavehsena\n");

//         return 0;
//     }

// //Листинг 17.3. Заголовочный файл для интерфейса list.h
// //list.h -- заголовочный файл для простого типа списка
// #ifndef LIST_H_
// #define LIST_H_
// #include <stdbool.h>        //функциональная возможность С99

// //объявления, специфичные для программы
// #define TSIZE 45        //размер массива для хранения названия
// struct film
// {
//     char title[TSIZE];
//     int rating;
// };
// //определения общих типов
// typedef struct film Item;

// typedef struct node
// {
//     Item item;
//     struct node * next;
// }Node;
// typedef Node * List;
// //прототипы функций
// /*предусловия: plist укзаывает на список*/
// /*постусловия список инициализирован пустым содержимым*/
// void InitializeList(List * plist);

// /*операция: определение, является ли списокм пустым*/
// /*постусловия : функция возвращает значение True, если список 
//                 пуст, и False в противном случае*/
// bool ListIsEmpty(const List *plist);

// /*операция: оппределение, является ли список полным*/
// /*          plist указывает на инциализированный список*/
// /*постусловия : функция возвращает значение True, если список 
//             полон, и False в противном случае*/
// bool ListIsFull(const List *plist);

// /*операция: определение количества элементов в списке
//             plist укзаыает на инициализированный список*/
// /*предусловия: item - элемент, добаввляемый в список
//                 plist указывает на инициализированный список*/
// /*постусловия: если возможно, функция добавляет элемент в 
//                конец списка и возвращает значение True:
//                в противном случае возвращается False*/
// bool ADDItem(Item item, List * plist);

// /*операция: применение функции к каждому элементу списка
//             plist указывает на инициалищированный список
//             pfun указыает на функцию, которая принимает
//             аргумент Item  и не имеет возвращаемого значения*/
// //постусловия: функция, указанная pfun, выполняется один
// //             раз для каждого элемента в списке
// void Traverse(const List *plist, void (*pfun)(Item item));

// /*операция: освоождение выдленной памяти, если она есть
//             plist указывает на инициализированный список*/
// /*постусловия: любая память, выделенная для списка,
//                 освобождается, и список устаналвивается в пустое состояние*/
// void EmptyTheList(List * plist);

// #endif

// //Листинг 17.4. Программа films3.c
// //films3.c -- использование связного списка в стиле ADT
// //компилировать вместе с list.c
// #include <stdio.h>
// #include <stdlib.h> //прототип для exit()
// #include "list.h" //определение List, Item

// void showmovies(Item item);
// char * s_gets(char * st, int n);
// int main(void)
// {
//     List movies;
//     Item temp;

//     //инициализация
//     InitializeList(&movies);
//     if(ListIsFull(&movies))
//     {
//         fprintf(stderr, "Доступаная память отсуствует! Программа заврешена.\n");
//         exit(1);
//     }

//     //сбор и сохранение информации
//     puts("Vvedite nazvanie pervogo filma: ");
//     while(s_gets(temp.title, TSIZE) != NULL && temp.title[0] != '\0')
//     {
//         puts("Vvedite svoe znachenoe reitinga <0-10>:");
//         scanf("%d", &temp.raitng);
//         while(getchar() != '\n')
//             continue;
//         if(AddItem(temp, &movies) == false)
//         {
//             fprintf(stderr, "Problema s videleniem pamyati\n");
//             break;
//         }
//         puts("VVedite nazvanie sleduusheg filma (ili pustuy stroku dlya prekrasheniya vvoda):");
//     }
//     //отображение
//     if(ListIsEmpty(&movies))
//         printf("Dannie ne vvedeni.");
//     else
//     {
//         printf("Spisok filmov:\n");
//         Traverse(&movies, showmovies);
//     }
//     printf("Vi vveli %d filmov.\n", ListItemCount(&movies));

//     //очистка
//     EmptyTheList(&movies);
//     printf("Programma zaveshena.\n");
//     return 0;
// }
// void showmovies(Item item)
// {
//     printf("Film: %s Raiting: %d\n", item.title, item.rating);
// }

// char * s_gets(char * st, int n)
// {
//     char * ret_val;
//     char * find;

//     ret_val = fgets(st, n, stdin);
//     if(ret_val)
//     {
//         find = strchr(st, '\n');
//         if(find)
//             *find = '\0';
//         else
//             while(getchar() != '\n')
//                 continue;
//     }
// return ret_val
// }

// //Листинг 17.5 Файл реализации list.c
// //list.c -- функции для поддержки операций со спписком
// #include <stdio.h>
// #include <stdlib.h>
// #include "list.h"

// //прототип локальной функции
// static void CopyToNode(Item item, Node * pnode);

// //функции интефейса
// //устанавливает список в пустое состояние 
// void InitializeList(List * plist)
// {
//     *plist = NULL;
// }
// // возвращает true, если список пуст
// bool ListIsEmpty(const List * plist)
// {
//     if(*plist == NULL)
//         return true;
//     else
//         return false;
// }

// //возвращает true, если список полон
// bool ListIsFull(const List * plist)
// {
//     Node * pt;
//     bool full;

//     pt = (Node *)malloc(sizeof(Node));
//     if(pt == NULL)
//         full = true;
//     else
//         full = false;
//     free(pt);

//     return full;
// }

// //возвращает количесто узлов
// unsigned int ListItemCount(const List * plist)
// {
//     unsigned int coupnt = 0;
//     Node * pnode = *plist; //установака в начало списка

//     while(pnode != NULL)
//     {
//         ++count;
//         pnode = pnode->next;    //установка в следующий узел
//     }

//     return count;
// }

// //создает узел для хранения элемента и добавляет его в конец
// //списка, указанного переменной plist (медленная реализация)
// bool AddItem(Item item, List * plist)
// {
//     Node * pnew;
//     Node * scan = *plist;
//     pnew = (Node *) malloc(sizeof(Node))
//     if(pnew == NULL)
//         return false;
//     CopyToNode(item, pnew);
//     pnew->next = NULL;
//     if(scan == NULL)
//         *plist = pnew;
//     else{
//         while(scan->next != NULL)
//             scan = scan->next;  //поиск конца списка
//             scan->next = pnew;  //добаление pnew в конец 
//     }
//     return true;
// }
//     //посещает каждый узел и выполняет функцию, указаную pfun
//     void Traverse(const List * plist, void (* pfun)(Item item))
//     {
//         Node * pnode = *plist;  //установка в начало списка

//         while(pnode != NULL)
//         {
//             (*pfun)(pnode->item);       //применение функции к элементу
//             pnode = pnode->next         //переход к следуюущему элементу
//         }
//     }

//     //освобождает память, выделенную функцией malloc()
//     //устаналивает  указатель списка NULL

//     void EmptyTheList(List * plist)
//     {
//         Node * psave;

//         while(*plist != NULL)
//         {
//             psave = (*plist)->next //созрание адреса текущего узла
//             free(*plist);          //освоождение текущего узла
//             *plist = psave;         //перезод к следующему узлу
//         }
//     }

//     //определение локальной функции
//     //копирует элемент в узел 
//     static void CopyToNode(Item item, Node * pnode)
//     {
//         pnode->item = item;     //копирование структуры
//     }

// //Листинг 17.6 Загловочный файл queue.h для интерфейса очереди
// /*queue.h -- интерфейс очереди*/
// #ifndef _QUEUE_H
// #define _QUEUE_H
// #include <stdbool.h>
// /*Здесь НЕОБХОДИМО ВСТАВИТЬ ОПРЕДЕЛЕНИЕ ТИА ITEM
// НАПРИМЕР,*/

// typedef int Item; //для use_q.c
// /*или typedef struct item(int gumption; int charizma;)Item;*/
// #define MAXQUEUE 10
// typedef struct node
// {
//     Item item;
//     struct node * next;
// } Node;

// typedef struct queue
// {
//     Node * front; //указатель на начало очереди
//     Node * rear; //указатель на конец очереди
//     int items;      //количество жлементов в очереди
// }Queue;

// //операция: инициализация очереди
// //предусловие: pq указывает на очерель
// //постусловие: очередь инициализирована пустым содержимым
// void InitializeQueue(Queue * pq);

// //операция: проверка, полна ли очередь
// //предусловие: pq указвает на ранее инициализированную очередь
// //постусловие: возвращает True, если очредь полна, и False в противном случае
// bool QueueIsFull(const Queue * pq);

// //операция: проверка, пуста ли очередь
// //предусловие: pq указаыает на ранее инициализированную очередь
// //посусловие: возвращает True, если очередь пуста и False  в противном случае
// bool QueueIsEmpty(const Queue * pq);

// //операция: определение количества элементов в очереди
// //предусловие: pq указывает на раннее инициализированую очередь
// //постусловие: возвращает количество элементов в очереди
// int QueueItemCount(const Queue * pq);

// //операция: добавление элемента в конец очереди
// //предусловие: pq указавыет на ранее инициализированную очередь
//             //элемент должен быть помещен в конец очереди
// /*постусловие: если очередь не пуста, элемент помещается
//                 в конец очереди и функция возвращает True;
//                 в противном случае очередь остается неизменной,
//                 а функция возвращает False*/
// bool EnQueue(Item item, Queue * pq);

// //операция: удаление элемента из начала очереди
// //предусловие: pq указывает на раннее инициниализированую очередь
// /*остусловие: если очередь не пуста, элемент в начале очереди
//               копируется в *pitem и удалается из очереди,
//               и функция возващает True;
//               если операция опустошает очередь, очерель
//               переустанавливается в пустое состояние.
//               Если очередь пуста с самого начала, она остается
//               неизменной, и функция возвращает False*/
// bool DeQueue(Item *pitem, Queue * pq);
// //операция: опустошение очереди
// //предусловие: pq указывает на ранее инициализированую очередь
// //посусловие: очерель пуста
// void EmptyTheQueue(Queue *  pq);

// #endif

// //Листинг 17.7. Файл реализации queue.c
// //queue.c -- реализация типа Queue
// #include <stdio.h>
// #include <stdlib.h>
// #include "queue.h"

// //локальные функции
// static void CopyToNode(Item item, Node * pn);
// static void CopyToItem(Node * pn, Item * pi);

// void InitializeQueue(Queue * pq);
// {
//     pq->front = pq->rear = NULLl;
//     pq->items = 0;
// }

// bool QueueIsFull(const Queue * pq)
// {
//     return pq->items == MAXQUEUE;
// }

// bool QueueIsEmpty(const Queue * pq)
// {
//     return pq->items == 0;
// }
// int QueueItemCount(const Queue * pq);
// {
//     return pq->items;
// }

// bool EnQueue(Item item, Queue * pq)
// {
//     Node * pnew;
//     if(QueueIsFull(pq))
//         return false;
//     pnew = (Node *) malloc(sizeof(Node));
//     if(pnew == NULL)
//     {
//         fprintf(stderr, "Ne udaysta videlit pamyat!\n");
//         exit(1);
//     }
//     CopyToNode(item, pnew);
//     pnew->next = NULL;
//     if(QueueIsEmpty(pq))
//         pq->front = pnew;       //элемент помещается в началао очереди
//     else
//         pq->rear->next = pnew;  //связывание с концом очереди
//     pq->rear = pnew;        //запись местоположения конца очереди
//     pq->items++;            //увелечение на 1 количества элементов в очереди

//     return true;
// }

// bool DeQueue(Item * pitem, Queue * pq)
// {
//     Node * pt;
//     if(QueueIsEmpty(pq))
//         return false;
//     CopyToItem(pq->front, pitem);
//     pt = pq->front;
//     pq->front = pq->front->next;
//     free(pt);
//     pq->items--;
//     if(pq->items == 0;)
//         pq->rear = NULL;
//     return true;
// }

// //опустошение очереди
// void EmptyTheQueue(Queue * pq)
// {
//     Item dummy;
//     while(!QueueIsEmpty(pq))
//         DeQueue(&dummy, pq)
// }

// //локальные функции
// static void CopyToNode(Item item, Node * pn)
// {
//     pn->item = item;
// }

// static void CopyToItem(Node * pn, Item * pi)
// {
//     *pi = pn->item;
// }

// //Листинг 17.8. Программа use_q.c
// //use_q.c -- теститрование интерфейса Queue с помощью драйвера
// //комилировать вместе с queue.c
// #include <stdio.h>
// #include "queue.h" //определение Queue, Item

// int main(void)
// {
//     Queue line;
//     Item temp;
//     char ch;

//     InitializeQueue(&line);
//     puts("Testirovanie interfaca Queue. VVedite a, chtobi dobavit znachenie,");
//     puts("vvedie d, chotbi udalit znachenie, ili vvedite q dlya vihoda iz progrmami.");
//     while((ch = getchar()) != 'q')
//     {
//         if(ch != 'a' && ch != 'd') //игнорировать длругие вводимые данные
//             continue;
//         if(ch == 'a')
//         {
//             printf("Celoe chislo dlya dobacleniya: ");
//             scanf("%d", &temp);
//             if(!QueueIsFull(&line))
//             {
//                 printf("Pomeshenie %d v ochered\n", temp);
//                 EnQueue(temp, &line);
//             }
//             else
//                 puts("Oshered polna!");
//         }
//         else{
//             if(QueueISEmpty(&line))
//                 puts("Elementy dlya udaleniya otsustvuut!");
//             else
//             {
//                 DeQueue(&temp, &line);
//                 printf("Udalenie %d iz ocheredi\n", temp);
//             }
//         }
//         printf("%d elemntov v ocheredi\n", QueueItemCount(&line));
//         puts("vvedie a, chotbi dobavit, d chtobi udalit, ili vvedite q dlya vihoda iz progrmami.");
//     }
//     EmptyTheQueue(&line);
//     puts("Programma zaverhena");

//     return 0;
// }

// //Листинг 17.9 Прграммма mall.c
// //mall.c -- использует интерфейс Queue
// //компилировать вместе с queue.c
// #include <stdio.h>
// #include <stdlib.h>     //для rand() и srand()
// #include <time.h>       //для time()
// #include "queue1.h"      //измените определение типа Item
// #define MIN_PER_HR 60.0

// bool newcustomer(double x);     //имеется новый клиент?
// Item customertime(long when);   //установка параметров клиента

// int main(void)
// {
//     Queue line;
//     Item temp;  //данные о новом клиенте
//     int hours;  //количество часов моделирвания
//     int perhour; //среднее количество прибывающих клиентов в час
//     long cycle, cyclelimit;// счетчик и граничное значение цикла
//     long turnaways = 0; // количество отказов из-за переполненной очереди
//     long customers = 0; // количество клиентов присоединившихся к очереди
//     long served = 0;  // количество клиентов, обслуженных за время моделирования
//     long sum_line = 0; // накопительное значение длины очереди
//     int wait_time = 0; // время до освобождения Зигмунда
//     double min_per_cust; // среднее время между прибытиями клиентов
//     long line_wait = 0; // накопительное значение времени в очереди

//     InitializeQueue(&line);
//     srand((unsigned int) time(0));      //случайная инициализация rand()
//     puts("Uchebniy primer: koncultacoinniy kiosk Zigmunda Landera");
//     puts("VVedite dlitelnost modelirovaniya v chasah:");
//     scanf("%d", &hours);
//     cyclelimit =  MIN_PER_HR * hours;
//     puts("Vvedite srednee kolichestvo klientov, pribivaushih za chas:");
//     scanf("%d", &perhour);
//     min_per_cust = MIN_PER_HR / perhour;

//     for(cycle = 0;cycle < cyclelimit; cycle++)
//     {
//         if(newcustomer(min_per_cust))
//         {
//             if(QueueIsFull(&line))
//             turnaways++;
//             else
//             {
//                 customers++;
//                 temp = customertime(cycle);
//                 EnQueue(temp, &line);
//             }
//         }
//         if(wait_time <= 0 && !QueueIsEmpty(&line))
//         {
//             DeQueue(&temp, &line);
//             wait_time = temp.processtime;
//             line_wait += cycle - temp.arrive;
//             served++;
//         }
//         if(wait_time > 0)
//             wait_time--;
//         sum_line += QueueItemCount(&line);
//     }
//     if(customers > 0)
//     {
        
//         printf("    Prinyatih klientov: %ld\n", customers); 
//         printf(" obsluzanoh klientov: %ld\n", served); 
//         printf("            otkazov: %ld\n", turnaways);
//         printf(" srednya dlina ocheredi: %.2f\n",
//             (double)sum_line / cyclelimit); 
//         printf("srednee vremya ozidaniya: %.2f min\n", 
//             (double)line_wait / served);
//     }
//     else
//         puts("Klienti otaustvuut!");
//     EmptyTheQueue(&line);
//     puts("Programma zavershena.");

//     return 0;
// }

// //x - среднее время между прибытием клиентов в минутах
// //возвращает true, если клиент появляется в течении данной минуты
// bool newcustomer(double x)
// {
//     if(rand() * x / RAND_MAX < 1)
//         return true;
//     else
//         return false;
// }

// //when - время прибытия клиента
// //функция возвращает структуру Item со временем прибытия,
// //установленным в when, и временем обслуживания,
// //установленным в случайное значение из диапазона от 1 до 3 
// Item customertime(long when)
// {
//     Item cust;
//     cust.processtime = rand() % 3 + 1;
//     cust.arrive = when;

//     return cust;
// }


// //--------------------------------------------
// typedef SOMETHING Item;
    
// typedef struct trnode
// {
//     Item item;
//     struct trnode * left;
//     struct trnode * right;
// }Trn;

// typedef struct tree
// {
//     Trnode * root;
//     int size;
// }Tree;
// //--------------------------------------------


// //Листинг 17.10. Заголовочный файл tree.h для и интерфейса двоичного дерева поиска
// /* tree.h -- двоичное дерево поиска */ 
// /*          дублированные элементы в этом дереве не разрешены */
// #ifndef _TREE_H_
// #define _TREE_H_
// #include <stdbool.h>
// /* переопределение типа Item подходящим образом */ 
// typedef struct item
// {
// char petname[20] ; 
// char petkind[20];
// }Item;

// #define MAXITEMS 10 
// typedef struct trnode 
// {
// Item item;
// struct tmode * left; /* указатель на левую ветвь */
// struct tmode * right; /* указатель на правую ветвь */
// }Trnode;
// typedef struct tree 
// {
// Trnode * root; /* указатель на корень дерева */
// int size; /* количество элементов в дереве */
// } Tree;
// /* прототипы функций */
// /* операция: инициализация дерева пустым содержимым 
// /* предусловия: ptree указывает на дерево 
// /* постусловия: дерево установлено в пустое состояние*/
// void InitializeTree(Tree * ptree);

// /* операция: определение, является ли дерево пустым 
// /* предусловия: ptree указывает на дерево 
// /* постусловия: функция возвращает true, если 
// деревео пустое, и false — в противном случае */
// bool TreelsEmpty (const Tree * ptree);

// /* операция: определение, является ли дерево полным 
// / * предусловия: ptree указывает на дерево 
// /* постусловия: функция возвращает true, если дерево
// полное, и false — в противном случае */
// bool TreelsFull(const Tree * ptree);

// /* операция: определение количества элементов в дереве */
// /* предусловия: ptree указывает на дерево 
// /* постусловия: функция возвращает количество элементов в дереве */
// int TreeItemCount(const Tree * ptree);

// /* операция: добавление элемента к дереву 
// /* предусловия: pi — адрес добавляемого элемента 
//                 ptree указывает на инициализированное дерево */
// /* постусловия: если возможно, функция добавляет элемент 
//                 к дереву и возвращает true; 
//                 в противном случае она возвращает false */
// bool AddItem(const Item * pi, Tree * ptree) ;
// /* операция: поиск элемента в дереве 
// /* предусловия: pi указывает на элемент 
//                 ptree указывает на инициализированное дерево 
// /* постусловия: функция возвращает true, если элемент присутствует 
//                 в дереве, и false — в противном случае */
// bool InTree(const Item * pi, const Tree * ptree);
// /* операция: удаление элемента из дерева 
// /* предусловия: pi — адрес удаляемого элемента 
// /*              ptree указывает на инициализированное дерево 
// /* постусловия: если возможно, функция удаляет элемент из дерева 
// /*              и возвращает true; в противном случае функция 
// /*              возвращает false */
// bool Deleteitem(const Item * pi, Tree * ptree);

// /* операция: применение указанной функции к каждому элементу в дереве */ 
// /* предусловия: ptree указывает на дерево 
//                 pfun указывает на функцию, которая принимает 
//                 аргумент Item и не имеет возвращаемого значения 
// /* постусловия: функция, указанная с помощью pfun, выполняется один раз 
//                 для каждого элемента в дереве */
// void Traverse (const Tree * ptree, void (* pfun) (Item item));

// /* операция:    удаление всех элементов из дерева 
// /* предусловия: ptree указывает на инициализированное дерево 
// /* постусловия: дерево является пустым */
// void DeleteAll(Tree * ptree);
// #endif

// //Листинг 17.11. Файл реалиазции tree.c
// //tree.c -- функция поддержки дерева
// #include <string.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include "tree.h"

// //локальный тип данных 
// typedef struct pair
// {
//     Trnode * parent;
//     Trnode * child;
// }Pair;

// //прототипы локальных функций
// static Trnode * MakeNode(const Item * pi);
// static bool ToLeft(const Item * il, const Item * i2);
// static bool ToRight(const Item * il, const Item * i2);
// static void AddNode(Trnode * new_node, Trnode * root);
// static void InOrder(const Trnode * root, void (*pfun)(Item item));
// static Pair SeekItem(const Item * pi, const Tree * ptree);
// static void DeleteNode(Trnode ** ptr);
// static void DeleteAllNodes(Trnode * ptr);

// //определения функций
// void InitializeTree(Tree * ptree)
// {
//     ptree->root = NULL;
//     ptree->size = 0;
// }

// bool TreeIsEmpty(const Tree * ptree)
// {
//     if(ptree->root == NULL)
//         return true;
//     else 
//         return false;
// }

// bool TreeIsFull(const Tree * ptree)
// {
//     if(ptree->size == MAXITEMS)
//         return true;
//     else 
//         return false;
// }

// int TreeItemCount(const Tree * ptree)
// {
//     return ptree->size;
// }

// bool AddItem(const Item * pi, Tree * ptree)
// {
//     Trnode * new_node;
//     if(TreeIsFull(ptree))
//     {
//         fprintf(stderr, "Dereveo perepolneno\n");
//         return false;       //преждеверменный возврат
//     }
//     if(SeekItem(pi, ptree).child != NULL)
//     {
//         fprintf(stderr, "Popitka dobavleniya dublirovannogo elementa\n");
//         return false;       //преждеверменный возврат
//     }
//     new_node = MakeNode(pi);     //указывает на новый узел
//     if(new_node == NULL)
//     {
//         fprintf(stderr, "Ne udalos sozdat usel\n");
//         return false;       //преждеверменный возврат
//     }
//     //успешное сощдание нового узла
//     ptree->size++;
//     if(ptree->root == NULL)                 //случай 1: дерево пустое
//         ptree->root = new_node;             //новый узел - корень дерева
//     else                                    //случай 2: дерево не пустое
//         AddNode(new_node, ptree->root);     //добавление узла к дереву
//     return true;                            //возврат в случае успеха
// }

// bool InTree(const Item * pi, const Tree * ptree)
// {
//     return (SeekItem(pi, ptree).child == NULL) ? false : true ;
// }

// bool DeletItem(const Item * pi, Tree * ptree)
// {
//     Pair look;
//     look = SeekItem(pi, ptree);
//     if(look.child == NULL)
//         return false;
//     if(look.parent == NULL)     //удаление корневого жлемента
//         DeleteNode(&ptree->root);
//     else if(look.parent->left == look.child)
//         DeleteNode(&look.parent->left);
//     else
//         DeleteNode(&look.parent->right);
//     ptree->size--;

//     return true;
// }

// void Traverse(const Tree * ptree, void(*pfun)(Item item))
// {
//     if(ptree != NULL)
//         InOrder(ptree->root, pfun);
// }

// void DeleteAll(Tree * ptree)
// {
//     if(ptree != NULL)
//         DeleteAllNodes(ptree->root);
//     ptree->root = NULL;
//     ptree->size = 0;
// }

// //локальные функции
// static void InOrder(const Trnode * root, void (*pfun)(Item item))
// {
//     if(root != NULL)
//     {
//         InOrder(root->left, pfun);
//         (*pfun)(root->item);
//         InOrder(root->right, pfun);
//     }
// }

// static void DeleteAllNodes(Trnode * root)
// {
//     Trnode * pright;
//     if(root != NULL)
//     {
//         pright = root->right;
//         DeleteAllNodes(root->left);
//         free(root);
//         DeleteAllNodes(pright);
//     }
// }

// static void AddNode(Trnode * new_node, Trnode * root)
// {
//     if(ToLeft(&new_node->item, &root->item))
//     {
//         if(root->left == NULL)      //пустое дерево
//             root->left = new_node;      //поэтому доавбить сбда узел
//         else
//             AddNode(new_node, root->left);  //иначе обработать поддерево
//     }
//     else if(ToRight(&new_node->item, &root->item))
//     {
//         if(root->right == NULL)
//             root->right == new_node;
//         else
//             AddNode(new_node, root->right);
//     }
//     else{
//         fprintf(stderr, "Oshibka mestopolowenita V AddNode()\n");
//         exit(1);
//     }
// }

// static bool ToRight(const Item * i1, const Item * i2)
// {
//     int compl;
//     if((compl = strcmp(i1->petname, i2->petname)) > 0)
//         return true;
//     else if(compl == 0 &&
//                 strcmp(i1->petkind, i2->petkind) > 0)
//     return true;
//     else
//         return false;
// }

// static Trnode * MakeNode(const Item * pi)
// {
//     Trnode * new_node;
//     new_node = (Trnode *)malloc(sizeof(Trnode));
//     if(new_node != NULL)
//     {
//         new_node->item = *pi;
//         new_node->left = NULL;
//         new_node->right = NULL;
//     }
//     return new_node;
// }


// static Pair SeekItem(const Item * pi, const Tree * ptree)
// {
//     Pair look;
//     look.parent = NULL;
//     look.child = ptree->root;

//     if(look.child == NULL)
//         return look;            //преждевременный возврат

//     while(look.child != NULL)
//     {
//         if(ToLeft(pi, &(look.child->item)))
//     {
//         look.parent = look.child;
//         look.child = look.child->left;
//     }
//     else if(ToRight(pi, &(look.child->item)))
//     {
//         look.parent = look.child;
//         look.child = look.child->right;
//     }

//     else    //если элемент не располроден ни слева, ни справа он должен быть таким же
//         break;  //look/child - это адрес узла, содержащего жлеммент
//     }
//     return look;        //возврат в случае успеха
// }


// static void DeleteNode(Trnode **ptr)
// //адрес родитетельского элемента, указывающего на целевой узел
// {
//     Trnode * temp;
//     if((*ptr)->left == NULL)
//     {
//         temp = *ptr;
//         *ptr = (*ptr)->right;
//         free(temp);
//     }

//     else if((*ptr)->right == NULL)
//     {
//         temp = *ptr;
//         *ptr = (*ptr)->left;
//         free(temp);
//     }

//     else        //удаляемый узел имеет два дочерних узла
//     {
//         //выяснение места присоединения правого дерева
//         for(temp = (*ptr)->left; temp->right != NULL; temp = temp->right)
//             continue;
//         temp->right = (*ptr)->right;
//         temp = *ptr;
//         *ptr = (*ptr)->left;
//         free(temp);
//     }
// }

// //Листинг 17.12 Программа petclub.c
// //petclub.c -- использование двоичного дерева поиска
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// #include "tree.h"

// char menu(void);
// void addpet(Tree * pt); 
// void droppet(Tree * pt); 
// void showpets(const Tree * pt); 
// void findpet(const Tree * pt); 
// void printitem(Item item); 
// void uppercase(char * str); 
// char * s_gets(char * st, int n);

// int main(void)
// {
//     Tree pets;
//     char choice;
//     InitializeTree(&pets);
//     while((choice = menu()) != 'q')
//     {
//         switch (choice)
//         {
//         case 'a' : addpet(&pets);
//             break;
//         case 'l' : showpets(&pets);
//             break;
//         case 'f' : printf("%d zivotnih v clube \n",
//                             TreeItemCount(&pets));
//             break;
//         case 'd' : droppet(&pets);
//             break;
//         default:
//             puts("Oshibka v swqith");
//         }
//     }
//     DeleteAll(&pets);
//     puts("Programma zavershena.");

//     return 0;
// }

// char menu(void)
// {
//     int ch;

//     puts("Programma chlensatva v clube Nerfville Pet Club");
//     puts("Vvedite bukvu, sootvestvuushuu vashemu viboru:");
//     puts("a) dovavlenie zivotnogo   l) vivod cpiska zivotnih");
//     puts("n) kolichestvo zivotnih   f) poisk zivotnih");
//     puts("d) udalenie zivitnigo     q)vihod");
//     while ((ch = getchar()) != EOF)
//     {
//         while(getchar() != '\n')
//             continue;
//         ch = tolower(ch);
//         if(strchr("alrfndq", ch) == NULL)
//             puts("Vveidite bukvu a, l, f, n, d ili q:");
//         else
//             break;
//     }
//     if(ch == EOF) //ввод симовла EOF приводит к выходу из программы
//         ch = 'q';
//     return ch;
// }

// void addept(Tree * pt)
// {
//     Item temp;

//     if(TreeIsFull(pt))
//         puts("V klube bolse net mest!");
//     else
//     {
//         puts("Vvedite cklichku zivotnogo:");
//         s_gets(temp.petname, SLEN);
//         puts("Vvedite vid zivotnogo:");
//         s_gets(temp.petkind, SLEN);
//         uppercase(temp.petname);
//         uppercase(temp.petkind);
//         AddItem(&temp, pt);
//     }
// }

// void showpets(const Tree * pt)
// {
//     if(TreeIsEmpty(pt))
//         puts("Zapisi otsustvuut!");
//     else
//         Traverse(pt, printitem);
// }

// void printitem(Item item)
// {
//     printf("Zivotnoe: %-19s Vid: %-19s\n", item.petname, item.petkind);
// }

// void findpet(const Tree * pt)
// {
//     Item temp;
//     if(TreeIsEmpty(pt))
//     {
//         puts("Zapisi otsustvuut!");
//         return; //если дерево пустое, выйти из функции
//     }
//     puts("Vvedite kclichu zivotnogo, kotoroe hotite naiti:");
//     s_gets(temp.petname, SLEN);
//     puts("Vvedite vid zivotnogo:");
//     s_gets(temp.petkind, SLEN);
//     uppercase(temp.petname);
//     uppercase(temp.petkind);
//     printf("%s po imeni %s ", temp.petkind, temp.petname);
//     if(InTree(&temp, pt))
//         printf("yavlyaetsya chlenom kluba.\n");
//     else
//         printf("ne yavlyatsya clenom kluba.\n");
// }

// void droppet(Tree * pt)
// {
//     Item temp;
//     if(TreeIsEmpty(pt))
//     {
//         puts("zapisi otsustvuut!");
//         return;     //если дерево пусто выйти из функции
//     }
//     puts("Vvedite klicki zovotnogo, kotoroe nuzno iskluchit iz kluba: ");
//     s_gets(temp.petname, SLEN);
//     puts("Vvedite vid zivotnogo:");
//     s_gets(temp.petkind, SLEN);
//     uppercase(temp.petname);
//     uppercase(temp.petkind);
//     printf("%s po imeni %s ", temp.petkind, temp.petname);
//     if(DeleteItem(&temp, pt))
//         printf("iskluchen(a) iz kluba.\n");
//     else
//         printf("ne yavleytsya chlenom kluba.\n");
// }

// void uppercase(char * str)
// {
//     while(*str)
//     {
//         *str = toupper(*str);
//         str++;
//     }
// }

// char * s_gets(char * st, int n)
// {
//     char * ret_val;
//     char * find;

//     ret_val= fgets(st, n, stdin);
//     if(ret_val)
//     {
//         find = strchr(st, '\n');
//         if(find)
//             *find = '\0';
//         else
//             while(getchar() != '\n')
//                 continue;
//     }
//     return ret_val;
// }

// //ЛИстинг 17.2 Программа films2.c
// //films2.c -- использование связного списка структур
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <stdbool.h>
// #define TSIZE 45


// struct film{
//     char title[TSIZE];
//     int rating;
//     struct film * next;
//     struct film * prev;
// };

// bool invert_print(struct film * pr)
// {
//     if(pr == NULL)
//         return false;

//     invert_print(pr->next);
//         printf("Film: %s Rating: %d\n", pr->title, pr->rating);
// }

//     char * s_gets(char * st, int n)
//     {
//         char * ret_val;
//         char * find;

//         ret_val = fgets(st, n, stdin);
//         if(ret_val)
//         {
//             find = strchr(st, '\n');
//             if(find)
//             *find = '\0';
//             else
//                 while(getchar() != '\n')
//                     continue;
//         }
//         return ret_val;
//     }

//     int main(void)
//     {
//         struct film * head = NULL;
//         struct film * end = NULL;
//         struct film * prev, * current;
//         char input[TSIZE];
//         //Sbor i cohranenoe infi
//         puts("Vvedite nazvaie perbogo flma:");
//         while(s_gets(input, TSIZE) != NULL && input[0] != '\0')
//         {
//             current = (struct film *) malloc(sizeof(struct film));
//             current->next = NULL;
//             current->prev = NULL;

//             if(head == NULL)
//                 head = current;
//             else
//             {
//                 prev->next = current;
//                 current->prev = prev;
//             }
//             strcpy(current->title, input);
//             puts("Vvedite cvoe znachenie raitinga <0-10>:");
//             scanf("%d", &current->rating);
//             while(getchar() != '\n')
//                 continue;
//             puts("VVedite nazvanmie sledushego filma (ili pustuu stroku dlya prekrasheniya vvoda):");
//                 prev = current;
//                 end = current;
//         }
//         if(head == NULL)
//         printf("Dannie ne vvedeni");
//         else
//             printf("Spisok filmov:\n");
//         current = head;
        

//         invert_print(head);
//         // while(current != NULL)
//         // {
//         //     printf("Film: %s Rating: %d\n", current->title, current->rating);
//         //     current = current->next;
//         // }

//         // current = end;
//         // while(current != NULL)
//         // {
//         //     printf("Film: %s Rating: %d\n", current->title, current->rating);
//         //     current = current->prev;
//         // }
//         // //Programma vipolnena, poetomu moazno osvobodit pamyat
//         // current = head;
//         // while(current != NULL)
//         // {
//         //     current = head;
//         //     head = current->next;
//         //     free(current);
//         // }

//         printf("programma zavehsena\n");

//         return 0;
//     }

// //Листинг 17.5 Файл реализации list.c
// //list.c -- функции для поддержки операций со спписком
// #include <stdio.h>
// #include <stdlib.h>
// #include "list.h"

// //прототип локальной функции
// static void CopyToNode(Item item, Node * pnode);

// //функции интефейса
// //устанавливает список в пустое состояние masiv[0][0] masiv[0][0] == **masiv
// void InitializeList(List * plist)
// {
//     plist->head = NULL;
// }
// // возвращает true, если список пуст
// bool ListIsEmpty(const List * plist)
// {
//     if(plist->head == NULL)
//         return true;
//     else
//         return false;
// }

// //возвращает true, если список полон
// bool ListIsFull(const List * plist)
// {
//     Node * pt;
//     bool full;

//     pt = (Node *)malloc(sizeof(Node));
//     if(pt == NULL)
//         full = true;
//     else
//         full = false;
//     free(pt);

//     return full;
// }

// //возвращает количесто узлов
// unsigned int ListItemCount(const List * plist)
// {
//     unsigned int count = 0;
//     Node * pnode = plist->head; //установака в начало списка

//     while(pnode != NULL)
//     {
//         ++count;
//         pnode = pnode->next;    //установка в следующий узел
//     }

//     return count;
// }


// bool AddItem(Item item, List * plist)
// {
//     Node * pnew;
//     pnew = (Node *) malloc(sizeof(Node));
//     if(pnew == NULL)
//         return false;
//     CopyToNode(item, pnew);
//     pnew->next = NULL;
   
//     if(plist->head == NULL)
//     {
//         plist->head = pnew;
//         plist->end = pnew;
//     }
        
//     else
//     {
//         plist->end->next = pnew;
//         plist->end = pnew;
//     }

//     return true;
// }
//     //посещает каждый узел и выполняет функцию, указаную pfun
//     void Traverse(const List * plist, void (* pfun)(Item item))
//     {
//         Node * pnode = plist->head;  //установка в начало списка

//         while(pnode != NULL)
//         {
//             (*pfun)(pnode->item);       //применение функции к элементу
//             pnode = pnode->next ;        //переход к следуюущему элементу
//         }
//     }

//     //освобождает память, выделенную функцией malloc()
//     //устаналивает  указатель списка NULL

//     void EmptyTheList(List * plist)
//     {
//         Node * psave;
//         Node * current = plist->head;
//         while(current != NULL)
//         {
//             psave = current->next; //созрание адреса текущего узла
//             free(current);          //освоождение текущего узла
//             current = psave;         //перезод к следующему узлу
//         }

//         plist->head = NULL;
//         plist->end = NULL;
//     }

//     //определение локальной функции
//     //копирует элемент в узел 
//     static void CopyToNode(Item item, Node * pnode)
//     {
//         pnode->item = item;     //копирование структуры
//     }


// //Листинг 17.4. Программа films3.c
// //films3.c -- использование связного списка в стиле ADT
// //компилировать вместе с list.c
// #include <stdio.h>
// #include <stdlib.h> //прототип для exit()
// #include "list.h" //определение List, Item

// void showmovies(Item item);
// char * s_gets(char * st, int n);
// int main(void)
// {
//     List movies;
//     Item temp;

//     //инициализация
//     InitializeList(&movies);
//     if(ListIsFull(&movies))
//     {
//         fprintf(stderr, "Доступаная память отсуствует! Программа заврешена.\n");
//         exit(1);
//     }

//     //сбор и сохранение информации
//     puts("Vvedite nazvanie pervogo filma: ");
//     while(s_gets(temp.title, TSIZE) != NULL && temp.title[0] != '\0')
//     {
//         puts("Vvedite svoe znachenoe reitinga <0-10>:");
//         scanf("%d", &temp.rating);
//         while(getchar() != '\n')
//             continue;
//         if(AddItem(temp, &movies) == false)
//         {
//             fprintf(stderr, "Problema s videleniem pamyati\n");
//             break;
//         }
//         puts("VVedite nazvanie sleduusheg filma (ili pustuy stroku dlya prekrasheniya vvoda):");
//     }
//     //отображение
//     if(ListIsEmpty(&movies))
//         printf("Dannie ne vvedeni.");
//     else
//     {
//         printf("Spisok filmov:\n");
//         Traverse(&movies, showmovies);
//     }
//     printf("Vi vveli %d filmov.\n", ListItemCount(&movies));

//     //очистка
//     EmptyTheList(&movies);
//     printf("Programma zaveshena.\n");
//     return 0;
// }
// void showmovies(Item item)
// {
//     printf("Film: %s Raiting: %d\n", item.title, item.rating);
// }

// char * s_gets(char * st, int n)
// {
//     char * ret_val;
//     char * find;

//     ret_val = fgets(st, n, stdin);
//     if(ret_val)
//     {
//         find = strchr(st, '\n');
//         if(find)
//             *find = '\0';
//         else
//             while(getchar() != '\n')
//                 continue;
//     }
// return ret_val;
// }

// //Листинг 17.7. Файл реализации queue.c
// //queue.c -- реализация типа Queue
// #include <stdio.h>
// #include <stdlib.h>
// #include "queue.h"

// //локальные функции
// static void CopyToNode(Item item, Node * pn);
// static void CopyToItem(Node * pn, Item * pi);

// void InitializeQueue(Queue * pq);
// {
//     pq->front = pq->rear = NULLl;
//     pq->items = 0;
// }

// bool QueueIsFull(const Queue * pq)
// {
//     return pq->items == MAXQUEUE;
// }

// bool QueueIsEmpty(const Queue * pq)
// {
//     return pq->items == 0;
// }
// int QueueItemCount(const Queue * pq);
// {
//     return pq->items;
// }

// bool EnQueue(Item item, Queue * pq)
// {
//     Node * pnew;
//     if(QueueIsFull(pq))
//         return false;
//     pnew = (Node *) malloc(sizeof(Node));
//     if(pnew == NULL)
//     {
//         fprintf(stderr, "Ne udaysta videlit pamyat!\n");
//         exit(1);
//     }
//     CopyToNode(item, pnew);
//     pnew->next = NULL;
//     if(QueueIsEmpty(pq))
//         pq->front = pnew;       //элемент помещается в началао очереди
//     else
//         pq->rear->next = pnew;  //связывание с концом очереди
//     pq->rear = pnew;        //запись местоположения конца очереди
//     pq->items++;            //увелечение на 1 количества элементов в очереди

//     return true;
// }

// bool DeQueue(Item * pitem, Queue * pq)
// {
//     Node * pt;
//     if(QueueIsEmpty(pq))
//         return false;
//     CopyToItem(pq->front, pitem);
//     pt = pq->front;
//     pq->front = pq->front->next;
//     free(pt);
//     pq->items--;
//     if(pq->items == 0;)
//         pq->rear = NULL;
//     return true;
// }

// //опустошение очереди
// void EmptyTheQueue(Queue * pq)
// {
// //     Item dummy;
// //     while(!QueueIsEmpty(pq))
// //         DeQueue(&dummy, pq);
// // }

// // //локальные функции
// // static void CopyToNode(Item item, Node * pn)
// // {
// //     pn->item = item;
// // }

// // static void CopyToItem(Node * pn, Item * pi)
// // {
// //     *pi = pn->item;
// // }

// //stack.h
// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>

// typedef struct item 
// {
//     int num;
// }item_t;

// typedef struct node
// {
//     item_t data;
//     struct node * next;
// } node_t;

// typedef struct stack
// {
//     node_t * last;
// }stack_t;

// bool Initializatoin(stack_t * pt);

// bool Push(item_t * n, stack_t * pt);

// bool Pop(item_t * n, stack_t * pt);




#include <stdio.h>


#define MAX_SIZE 10
int func(int * mas, int size, int num);
int main(void)
{
    int masiv[MAX_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int num = 8;

    printf("%d", func(masiv, MAX_SIZE, num));

    return 0;
}
int func(int * mas, int size, int num)
{
   
    int biggets = size - 1;
    int smalles = 0;
    int centr;

    while (smalles <= biggets)
    {
        centr = smalles + (biggets - smalles) / 2;

        if(mas[centr] == num)
            return 1;

        mas[centr] < num ? smalles = centr + 1 : biggets = centr - 1;
    }

    return 0;
}