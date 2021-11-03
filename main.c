#include <stdio.h>
#include <stdlib.h>

int Pilihan, informasi;

int main()
{
    system("color 40");
    int main;

    system("color 16");
    int Angka;

   int Pilihan,informasi;


    printf("\t||<<.<<<.|_____DAFTAR NAMA AKUN_____|.>>>.>>||\n\n");
    printf("||=================================================||\n");
    printf("||-----------------1.KAS---------------------------||\n");
    printf("||-----------------2.UTANG-------------------------||\n");
    printf("||-----------------3.MODAL-------------------------||\n");
    printf("||-----------------4.PENDAPATAN--------------------||\n");
    printf("||-----------------5.BEBAN-------------------------||\n");
    printf("||-----------------6.PRIVE-------------------------||\n");
    printf("||-----------------7.PERALATAN---------------------||\n");
    printf("||-----------------8.AKM PENJ.PERALATAN------------||\n");
    printf("||-----------------9.SEWA DIBAYAR DI MUKA----------||\n");
    printf("||-----------------10.PERLENGKAPAN-----------------||\n");
    printf("||-----------------11.PIUTANG WESEL----------------||\n");
    printf("||-----------------12.PIUTANG DAGANG---------------||\n");
    printf("||-----------------13.UTANG GAJI-------------------||\n");
    printf("||-----------------14.UTANG WESEL------------------||\n");
    printf("||-----------------15.KAS BANK---------------------||\n");
    printf("||=================================================||\n");
    printf("MASUKKAN NOMOR YANG INGIN ANDA LAKUKAN (1/2/3/4/5/6/7/8/9/10/11/12/13/14/15): ");
    scanf ("%d", &Pilihan);

    switch (Pilihan)
    {
    case 1 : printf("\t<___KAS___>\n");info_acc1();break;
    case 2 : printf("\tUTANG\n");info_acc2();break;
    case 3 : printf("\tMODAL\n");info_acc3();break;
    case 4 : printf("\tPENDAPATAN\n");info_acc4();break;
    case 5 : printf("\tBEBAN\n");info_acc5();break;
    case 6 : printf("\tPRIVE\n");info_acc6();break;
    case 7 : printf("\tPERALATAN\n");info_acc7();break;
    case 8 : printf("\tAKM PENJ.PERALATAN\n");info_acc8();break;
    case 9 : printf("\tSEWA DIBAYAR DI MUKA\n");info_acc9();break;
    case 10: printf("\tPERLENGKAPAN\n");info_acc10();break;
    case 11: printf("\tPIUTANG WESEL\n");info_acc11();break;
    case 12: printf("\tPIUTANG DAGANG\n");info_acc12();break;
    case 13: printf("\tUTANG GAJI\n");info_acc13();break;
    case 14: printf("\tUTANG WESEL\n");info_acc14();break;
    case 15: printf("\KAS BANK\n");info_acc15();break;
    default : printf ("|====-NOT FOUND-====|");break;

    printf("----------------------------------------------");
    }

}

void info_acc1()
{
    printf("<<----------------------------->>\n");
    printf("1. Masuk ke akun mana?\n");
    printf("2. Bertambah pada\n");
    printf("3. Berkurang pada\n");
    printf("MASUKKAN NOMOR UNTUK MELANUTKAN (1/2/3): ");
    scanf ("%d", &informasi);


  switch (informasi)
  {
    case 1 : printf("\t--<<<<<DEBET>>>>>--\n");break;
    case 2 : printf("\t--<<<<<DEBET>>>>>--\n");break;
    case 3 : printf("\t--<<<<<KREDIT>>>>>>--\n");break;
  }
}


void info_acc2()
{
    printf("<<----------------------------->>\n");
    printf("1. Masuk ke akun mana?\n");
    printf("2. Bertambah pada\n");
    printf("3. Berkurang pada\n");
    printf("MASUKKAN NOMOR UNTUK MELANUTKAN (1/2/3): ");
    scanf ("%d", &informasi);


  switch (informasi)
  {
    case 1 : printf("\tKREDIT\n");break;
    case 2 : printf("\tKREDIT\n");break;
    case 3 : printf("\tDEBIT\n");break;
  }
}


 void info_acc3()
{
    printf("<<----------------------------->>\n");
    printf("1. Masuk ke akun mana?\n");
    printf("2. Bertambah pada\n");
    printf("3. Berkurang pada\n");
    printf("MASUKKAN NOMOR UNTUK MELANUTKAN (1/2/3): ");
    scanf ("%d", &informasi);


  switch (informasi)
  {
    case 1 : printf("\tKREDIT\n");break;
    case 2 : printf("\tKREDIT\n");break;
    case 3 : printf("\tDEBIT\n");break;
  }

}

void info_acc4()
{
    printf("<<----------------------------->>\n");
    printf("1. Masuk ke akun mana?\n");
    printf("2. Bertambah pada\n");
    printf("3. Berkurang pada\n");
    printf("MASUKKAN NOMOR UNTUK MELANUTKAN (1/2/3): ");
    scanf ("%d", &informasi);


  switch (informasi)
  {
    case 1 : printf("\tKREDIT\n");break;
    case 2 : printf("\tKREDIT\n");break;
    case 3 : printf("\tDEBIT\n");break;
  }
}


void info_acc5()
{
    printf("<<----------------------------->>\n");
    printf("1. Masuk ke akun mana?\n");
    printf("2. Bertambah pada\n");
    printf("3. Berkurang pada\n");
    printf("MASUKKAN NOMOR UNTUK MELANUTKAN (1/2/3): ");
    scanf ("%d", &informasi);


  switch (informasi)
  {
    case 1 : printf("\tDEBET\n");break;
    case 2 : printf("\tDEBET\n");break;
    case 3 : printf("\tKREDIT\n");break;
  }
}

void info_acc6()
{
    printf("<<----------------------------->>\n");
    printf("1. Masuk ke akun mana?\n");
    printf("2. Bertambah pada\n");
    printf("3. Berkurang pada\n");
    printf("MASUKKAN NOMOR UNTUK MELANUTKAN (1/2/3): ");
    scanf ("%d", &informasi);


  switch (informasi)
  {
    case 1 : printf("\tDEBET\n");break;
    case 2 : printf("\tDEBET\n");break;
    case 3 : printf("\tKREDIT\n");break;
  }
}

void info_acc7()
{
    printf("<<----------------------------->>\n");
    printf("1. Masuk ke akun mana?\n");
    printf("2. Bertambah pada\n");
    printf("3. Berkurang pada\n");
    printf("MASUKKAN NOMOR UNTUK MELANUTKAN (1/2/3): ");
    scanf ("%d", &informasi);


  switch (informasi)
  {
    case 1 : printf("\tDEBET\n");break;
    case 2 : printf("\tDEBET\n");break;
    case 3 : printf("\tKREDIT\n");break;
  }
}

void info_acc8()
{
    printf("<<----------------------------->>\n");
    printf("1. Masuk ke akun mana?\n");
    printf("2. Bertambah pada\n");
    printf("3. Berkurang pada\n");
    printf("MASUKKAN NOMOR UNTUK MELANUTKAN (1/2/3): ");
    scanf ("%d", &informasi);


  switch (informasi)
  {
    case 1 : printf("\tKREDIT\n");break;
    case 2 : printf("\tKREDIT\n");break;
    case 3 : printf("\tDEBIT\n");break;
  }
}

void info_acc9()
{
    printf("<<----------------------------->>\n");
    printf("1. Masuk ke akun mana?\n");
    printf("2. Bertambah pada\n");
    printf("3. Berkurang pada\n");
    printf("MASUKKAN NOMOR UNTUK MELANUTKAN (1/2/3): ");
    scanf ("%d", &informasi);


  switch (informasi)
  {
    case 1 : printf("\tDEBET\n");break;
    case 2 : printf("\tDEBET\n");break;
    case 3 : printf("\tKREDIT\n");break;
  }
}

void info_acc10()
{
    printf("<<----------------------------->>\n");
    printf("1. Masuk ke akun mana?\n");
    printf("2. Bertambah pada\n");
    printf("3. Berkurang pada\n");
    printf("MASUKKAN NOMOR UNTUK MELANUTKAN (1/2/3): ");
    scanf ("%d", &informasi);


  switch (informasi)
  {
    case 1 : printf("\tDEBET\n");break;
    case 2 : printf("\tDEBET\n");break;
    case 3 : printf("\tKREDIT\n");break;
  }
}

 void info_acc11()
{
    printf("<<----------------------------->>\n");
    printf("1. Masuk ke akun mana?\n");
    printf("2. Bertambah pada\n");
    printf("3. Berkurang pada\n");
    printf("MASUKKAN NOMOR UNTUK MELANUTKAN (1/2/3): ");
    scanf ("%d", &informasi);


  switch (informasi)
  {
    case 1 : printf("\tDEBET\n");break;
    case 2 : printf("\tDEBET\n");break;
    case 3 : printf("\tKREDIT\n");break;
  }
}

void info_acc12()
{
    printf("<<----------------------------->>\n");
    printf("1. Masuk ke akun mana?\n");
    printf("2. Bertambah pada\n");
    printf("3. Berkurang pada\n");
    printf("MASUKKAN NOMOR UNTUK MELANUTKAN (1/2/3): ");
    scanf ("%d", &informasi);


  switch (informasi)
  {
    case 1 : printf("\tDEBET\n");break;
    case 2 : printf("\tDEBET\n");break;
    case 3 : printf("\tKREDIT\n");break;
  }
}

void info_acc13()
{
    printf("<<----------------------------->>\n");
    printf("1. Masuk ke akun mana?\n");
    printf("2. Bertambah pada\n");
    printf("3. Berkurang pada\n");
    printf("MASUKKAN NOMOR UNTUK MELANUTKAN (1/2/3): ");
    scanf ("%d", &informasi);


  switch (informasi)
  {
    case 1 : printf("\tKREDIT\n");break;
    case 2 : printf("\tKREDIT\n");break;
    case 3 : printf("\tDEBET\n");break;
  }
}

void info_acc14()
{
    printf("<<----------------------------->>\n");
    printf("1. Masuk ke akun mana?\n");
    printf("2. Bertambah pada\n");
    printf("3. Berkurang pada\n");
    printf("MASUKKAN NOMOR UNTUK MELANUTKAN (1/2/3): ");
    scanf ("%d", &informasi);


  switch (informasi)
  {
    case 1 : printf("\tKREDIT\n");break;
    case 2 : printf("\tKREDIT\n");break;
    case 3 : printf("\tDEBET\n");break;
  }
}

void info_acc15()
{
    printf("<<----------------------------->>\n");
    printf("1. Masuk ke akun mana?\n");
    printf("2. Bertambah pada\n");
    printf("3. Berkurang pada\n");
    printf("MASUKKAN NOMOR UNTUK MELANUTKAN (1/2/3): ");
    scanf ("%d", &informasi);


  switch (informasi)
  {
    case 1 : printf("\tDEBET\n");break;
    case 2 : printf("\tDEBET\n");break;
    case 3 : printf("\tKREDIT\n");break;
  }




 getc (0);
}

