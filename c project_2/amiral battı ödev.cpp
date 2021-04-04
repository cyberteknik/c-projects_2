#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int main()
{
    basadon:
    system("cls");
    printf("\tAMIRAL BATTI OYUNU\n");
    int oyunalani[15][15];
    char oyunekrani[15][15];
    int i,j,m,k;
    int hak;
    int sayac2,sayac3,sayac4;
    int secim;

    hak = 0;
    sayac2 = 0;
    sayac3 = 0;
    sayac4 = 0;
    for(i=0;i<15;i++)

    {
        for(j=0;j<15;j++)
        {
            oyunalani[i][j]=0;
            oyunekrani[i][j]='_';

        }

    }
    i=0;
    int satir,sutun;
    srand(time(NULL));
    //--------------------------------------------------------------
    while(i<1)//Bir birimlik geminin yerleştirildiği while dögüsü.
    {

        satir=rand()%15;
        sutun=rand()%15;
        oyunalani[satir][sutun]=1;
        i++;
    }
    i=0;
    //------------------------------------------------------------------------------------------
    while(i<1)//İki birimlik geminin yerleştirildiği döngü
    {


        satir=rand()%15;
        sutun=rand()%15;
        if(oyunalani[satir][sutun]==0)
        {
            oyunalani[satir][sutun]=2;
            if(sutun != 14)
            {
                if(oyunalani[satir][sutun+1] == 0)//Geminin sag tarafını kontrol eden if blogu
                {
                    oyunalani[satir][sutun+1] = 2;
                    i++;
                }
            }else if(satir != 14)//Geminin altini kontrol eden if blogu
            {
                if(oyunalani[satir+1][sutun] == 0)
                {
                    oyunalani[satir+1][sutun] = 2;
                    i++;
                }

            }else if(!(satir-1 < 0))//geminin üstünü kontrol eden if blogu
            {
                if(oyunalani[satir-1][sutun] == 0)
                {
                    oyunalani[satir-1][sutun] = 2;
                    i++;
                }
            }else if(!(sutun-1 < 0))//geminin solunu kontrol eden if blogu
            {
                if(oyunalani[satir][sutun-1] == 0)
                {
                    oyunalani[satir][sutun-1] == 2;
                    i++;
                }
            }else
            {
                oyunalani[satir][sutun] = 0;
            }
        }
    }
    //-------------------------------------------------------------------------
    i=0;
    while(i<1)//3 birimlik gemiyi yerlestiren while blogu
    {
        satir=rand()%15;
        sutun=rand()%15;

        if(oyunalani[satir][sutun]==0)
        {
            oyunalani[satir][sutun]=3;
            if(sutun != 14)
            {
                if(oyunalani[satir][sutun+1]==0)
                {
                    oyunalani[satir][sutun+1]=3;
                    oyunalani[satir][sutun+2]=3;
                    i++;
                }
            }
            else if(satir != 14)
            {
                if(oyunalani[satir+1][sutun]==0)
                {
                    oyunalani[satir+1][sutun]=3;
                    oyunalani[satir+2][sutun]=3;
                    i++;
                }
            }
            else
            {
                oyunalani[satir][sutun]=0;
            }
        }
        i++;
    }
    i=0;
    //-------------------------------------------------------------------
    while(i<1)//4 birimlik gemiyi yerlestiren while blogu
    {
        satir=rand()%15;
        sutun=rand()%15;
        if(oyunalani[satir][sutun]==0)
        {
            oyunalani[satir][sutun]=4;
            if(sutun !=14)
            {
                if(oyunalani[satir][sutun+1]==0)
                {
                    oyunalani[satir][sutun+1]=4;
                    oyunalani[satir][sutun+2]=4;
                    oyunalani[satir][sutun+3]=4;
                    i++;
                }
            }else if(satir != 14)
            {
                if(oyunalani[satir+1][sutun]==0)
                {
                    oyunalani[satir+1][sutun]=4;
                    oyunalani[satir+2][sutun]=4;
                    oyunalani[satir+3][sutun]=4;
                    i++;
                }
            }else
            {
                oyunalani[satir][sutun]=0;
            }
        }
        i++;
    }
    //----------------------------------------------------------
    //Oyun alanını ekrana basan döngü
    for(i=0;i<15;i++)
    {
        for(j=0;j<15;j++)
        {
            printf(" %c",oyunekrani[i][j]);
        }
        printf("\n");
    }
    //-----------------------------------------------------------
    while(hak<10)//Oyunun oynandıgı kod dizisi burada baslıyor.
    {
        system("color 70");
        printf("Lutfen vurmak istediginiz koordinati giriniz ;\n");
        printf("Satir :\n");scanf("%d",&satir);
        printf("Sutun :\n");scanf("%d",&sutun);
        if(oyunalani[satir][sutun]==0)
        {
            oyunekrani[satir][sutun]='-';
            system("cls");
            printf("Vurdugunuz yerde gemi yok,maalesef isgaladiniz.\n");

            for(i=0;i<15;i++)
            {
                for(j=0;j<15;j++)
                {
                    printf(" %c",oyunekrani[i][j]);
                }
                printf("\n");
            }
            hak++;

        }
        else if(oyunalani[satir][sutun]==1)
        {
            oyunekrani[satir][sutun]='X';
            system("clear");
            printf("Tebrikler!Bir birimlik gemiyi batirdiniz!\n");
            hak++;
        }
        else if(oyunalani[satir][sutun]==2)
        {
            sayac2++;
            oyunekrani[satir][sutun]='X';
            system("cls");
            printf("Tebrikler!İki birimlik geminin bir birimlik alanini vurdunuz!\n");
            if(sayac2==2)
            {
                printf("Ve Tebrikler!İki birimlik gemiyi batirdiniz!\n");
            }
            for(i=0;i<15;i++)
            {
                for(j=0;j<15;j++)
                {
                    printf(" %c",oyunekrani[i][j]);
                }
                printf("\n");
            }
            hak++;
        }
        else if(oyunalani[satir][sutun]==3)
        {
            sayac3++;
            oyunekrani[satir][sutun]='X';
            system("cls");
            printf("Tebrikler!Uc birimlik geminin bir birimlik alanini vurdunuz!\n");
            if(sayac3==3)
            {
                printf("Ve Tebrikler!Uc birimlik gemiyi batirdiniz!\n");
            }
            for(i=0;i<15;i++)
            {
                for(j=0;j<15;j++)
                {
                    printf(" %c",oyunekrani[i][j]);
                }
                printf("\n");
            }
            hak++;
        }
        else if(oyunalani[satir][sutun]==4)
        {
            sayac4++;
            oyunekrani[satir][sutun]='X';
            system("cls");
            printf("Tebrikler!Dort birimlik geminin bir birimlik alanini vurdunuz!\n");
            if(sayac4==4)
            {
                printf("Ve Tebrikler!Dort birimlik gemiyi batirdiniz!\n");
            }
            for(i=0;i<15;i++)
            {
                for(j=0;j<15;j++)
                {
                    printf(" %c",oyunekrani[i][j]);
                }
                printf("\n");
            }
            hak++;
        }

    }
    //----------------------------------------------------------------------------------------
    printf("Tekrar oynamak istiyor musunuz ?\n");
    printf("Evet icin 1,hayir icin 2 ye basiniz.");
    scanf("%d",&secim);
    if(secim==1)
    {
        goto basadon;
    }
    else
    {
        return 0;
    }
}
