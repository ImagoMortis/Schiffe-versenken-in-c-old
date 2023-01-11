#include <stdio.h>
#include <stdlib.h>
#define ROWS 10
#define COLS 10
int Kontrollwert1 = 1;
int Kontrollwert2 = 1;
//Schlachtschiff=0 | Kreuzer=1 | Zerstörer=2| Uboot=1
 int schiffgroessen[10] = {4,3,2,1};
int arr1[ROWS][COLS]={        //Spielfeld von Spieler 1 das Spieler1 sieht
        {0,0,0,0,0,0,0,0,0,0},//A
        {0,0,0,0,0,0,0,0,0,0},//B
        {0,0,0,0,0,0,0,0,0,0},//C
        {0,0,0,0,0,0,0,0,0,0},//D
        {0,0,0,0,0,0,0,0,0,0},//E
        {0,0,0,0,0,0,0,0,0,0},//F
        {0,0,0,0,0,0,0,0,0,0},//G
        {0,0,0,0,0,0,0,0,0,0},//H
        {0,0,0,0,0,0,0,0,0,0},//I
        {0,0,0,0,0,0,0,0,0,0} //J
};

int arr2[ROWS][COLS]={        //Spielfeld von Spieler 1 das Spieler2 sieht
        {0,0,0,0,0,0,0,0,0,0},//A
        {0,0,0,0,0,0,0,0,0,0},//B
        {0,0,0,0,0,0,0,0,0,0},//C
        {0,0,0,0,0,0,0,0,0,0},//D
        {0,0,0,0,0,0,0,0,0,0},//E
        {0,0,0,0,0,0,0,0,0,0},//F
        {0,0,0,0,0,0,0,0,0,0},//G
        {0,0,0,0,0,0,0,0,0,0},//H
        {0,0,0,0,0,0,0,0,0,0},//I
        {0,0,0,0,0,0,0,0,0,0} //J
};



int *KoordinatenEingabeS1(int KoordinatenS1[], char *ptrAusrichtungS1,char AusrichtungS1[]){
    //char KoordinatenEinlesenS1[39];

    char KoordinatenS1_1[10];
    int KoordinatenS1_2[10];
    //  int KoordinatenS1[39];


    //Schlachtschiff
    printf("Bitte geben Sie die Schlachtschiff Y-Koordinate ein\n");
    scanf("%c", &KoordinatenS1_1[0]);
    KoordinatenS1[0] = (int)KoordinatenS1_1[0]-65;
    printf("Bitte geben Sie die Schlachtschiff X-Koordinate ein\n");
    scanf("%d", &KoordinatenS1_2[0]);
    KoordinatenS1[1] = (int)KoordinatenS1_2[0];
    fflush(stdin);
    printf("Bitte geben Sie die Schlachtschiff Ausrichtung ein\n");
    scanf("%c", &ptrAusrichtungS1[0]);
    printf("Schlachtschiff: %d\n", KoordinatenS1[0]);
    printf("Schlachtschiff:%d\n", KoordinatenS1[1]);
    fflush(stdin);

    //Kreuzer1
    printf("Bitte geben Sie die Kreuzer Y-Koordinate ein\n");
    scanf("%c", &KoordinatenS1_1[1]);
    KoordinatenS1[2] = (int)KoordinatenS1_1[1]-65;
    printf("Bitte geben Sie die Kreuzer X-Koordinate ein\n");
    scanf("%d", &KoordinatenS1_2[1]);
    KoordinatenS1[3] = (int)KoordinatenS1_2[1];
    fflush(stdin);
    printf("Bitte geben Sie die Kreuzer Ausrichtung ein\n");
    scanf("%c", &ptrAusrichtungS1[1]);
    printf("Kreuzer: %d\n", KoordinatenS1[2]);
    printf("Kreuzer:%d\n", KoordinatenS1[3]);
    fflush(stdin);

//Kreuzer2
    printf("Bitte geben Sie die Kreuzer Y-Koordinate ein\n");
    scanf("%c", &KoordinatenS1_1[2]);
    KoordinatenS1[4] = (int)KoordinatenS1_1[2]-65;
    printf("Bitte geben Sie die Kreuzer X-Koordinate ein\n");
    scanf("%d", &KoordinatenS1_2[2]);
    KoordinatenS1[5] = (int)KoordinatenS1_2[2];
    fflush(stdin);
    printf("Bitte geben Sie die Kreuzer Ausrichtung ein\n");
    scanf("%c", &ptrAusrichtungS1[2]);
    printf("Kreuzer: %d\n", KoordinatenS1[4]);
    printf("Kreuzer:%d\n", KoordinatenS1[5]);
    fflush(stdin);

//Zerstörer1
    printf("Bitte geben Sie die Zerstoerer Y-Koordinate ein\n");
    scanf("%c", &KoordinatenS1_1[3]);
    KoordinatenS1[6] = (int)KoordinatenS1_1[3]-65;
    printf("Bitte geben Sie die Zerstoerer X-Koordinate ein\n");
    scanf("%d", &KoordinatenS1_2[3]);
    KoordinatenS1[7] = (int)KoordinatenS1_2[3];
    fflush(stdin);
    printf("Bitte geben Sie die Zerstoerer Ausrichtung ein\n");
    scanf("%c", &ptrAusrichtungS1[3]);
    printf("Zerstoerer: %d\n", KoordinatenS1[6]);
    printf("Zerstoerer:%d\n", KoordinatenS1[7]);
    fflush(stdin);

    //Zerstörer2
    printf("Bitte geben Sie die Zerstoerer Y-Koordinate ein\n");
    scanf("%c", &KoordinatenS1_1[4]);
    KoordinatenS1[8] = (int)KoordinatenS1_1[4]-65;
    printf("Bitte geben Sie die Zerstoerer X-Koordinate ein\n");
    scanf("%d", &KoordinatenS1_2[4]);
    KoordinatenS1[9] = (int)KoordinatenS1_2[4];
    fflush(stdin);
    printf("Bitte geben Sie die Zerstoerer Ausrichtung ein\n");
    scanf("%c", &ptrAusrichtungS1[4]);
    printf("Zerstoerer: %d\n", KoordinatenS1[8]);
    printf("Zerstoerer:%d\n", KoordinatenS1[9]);
    fflush(stdin);

//Zerstörer3
    printf("Bitte geben Sie die Zerstoerer Y-Koordinate ein\n");
    scanf("%c", &KoordinatenS1_1[5]);
    KoordinatenS1[10] = (int)KoordinatenS1_1[5]-65;
    printf("Bitte geben Sie die Zerstoerer X-Koordinate ein\n");
    scanf("%d", &KoordinatenS1_2[5]);
    KoordinatenS1[11] = (int)KoordinatenS1_2[5];
    fflush(stdin);
    printf("Bitte geben Sie die Zerstoerer Ausrichtung ein\n");
    scanf("%c", &ptrAusrichtungS1[5]);
    printf("Zerstoerer: %d\n", KoordinatenS1[10]);
    printf("Zerstoerer:%d\n", KoordinatenS1[11]);
    fflush(stdin);

//UBoot1
    printf("Bitte geben Sie die U-Boot Y-Koordinate ein\n");
    scanf("%c", &KoordinatenS1_1[6]);
    KoordinatenS1[12] = (int)KoordinatenS1_1[6]-65;
    printf("Bitte geben Sie die U-Boot X-Koordinate ein\n");
    scanf("%d", &KoordinatenS1_2[6]);
    KoordinatenS1[13] = (int)KoordinatenS1_2[6];
    fflush(stdin);
    printf("U-Boot: %d\n", KoordinatenS1[12]);
    printf("U-Boot:%d\n", KoordinatenS1[13]);
    fflush(stdin);

//UBoot2
    printf("Bitte geben Sie die U-Boot Y-Koordinate ein\n");
    scanf("%c", &KoordinatenS1_1[7]);
    KoordinatenS1[14] = (int)KoordinatenS1_1[7]-65;
    printf("Bitte geben Sie die U-Boot X-Koordinate ein\n");
    scanf("%d", &KoordinatenS1_2[7]);
    KoordinatenS1[15] = (int)KoordinatenS1_2[7];
    fflush(stdin);
    printf("U-Boot: %d\n", KoordinatenS1[14]);
    printf("U-Boot:%d\n", KoordinatenS1[15]);
    fflush(stdin);

    //UBoot3
    printf("Bitte geben Sie die U-Boot Y-Koordinate ein\n");
    scanf("%c", &KoordinatenS1_1[8]);
    KoordinatenS1[16] = (int)KoordinatenS1_1[8]-65;
    printf("Bitte geben Sie die U-Boot X-Koordinate ein\n");
    scanf("%d", &KoordinatenS1_2[8]);
    KoordinatenS1[17] = (int)KoordinatenS1_2[8];
    fflush(stdin);
    printf("U-Boot: %d\n", KoordinatenS1[16]);
    printf("U-Boot:%d\n", KoordinatenS1[17]);
    fflush(stdin);

    //UBoot4
    printf("Bitte geben Sie die U-Boot Y-Koordinate ein\n");
    scanf("%c", &KoordinatenS1_1[9]);
    KoordinatenS1[18] = (int)KoordinatenS1_1[9]-65;
    printf("Bitte geben Sie die U-Boot X-Koordinate ein\n");
    scanf("%d", &KoordinatenS1_2[9]);
    KoordinatenS1[19] = (int)KoordinatenS1_2[9];
    fflush(stdin);
    printf("U-Boot: %d\n", KoordinatenS1[18]);
    printf("U-Boot:%d\n", KoordinatenS1[19]);
    fflush(stdin);

    for (int i = 0; i < 20; ++i) {

        if (KoordinatenS1[i] < 0 || KoordinatenS1[i] >= 10) {
            printf("Falsche Koordinateneingabe, bitte neu Starten\n");
            exit(EXIT_SUCCESS);


        }

        }
    for (int i = 0; i < 10; ++i) {

        if (AusrichtungS1[i] != 'W' && AusrichtungS1[i] != 'S') {
            printf("Falsche Koordinateneingabe (Ausrichtung), bitte neu Starten\n");
            exit(EXIT_SUCCESS);




        }

    }


    return KoordinatenS1;

}

int *KoordinatenEingabeS2(int KoordinatenS2[], char *ptrAusrichtungS2,char AusrichtungS2[]){
    //char KoordinatenEinlesenS1[39];

    char KoordinatenS1_1[10];
    int KoordinatenS1_2[10];
    //  int KoordinatenS1[39];


    //Schlachtschiff
    printf("Bitte geben Sie die Schlachtschiff Y-Koordinate ein\n");
    scanf("%c", &KoordinatenS1_1[0]);
    KoordinatenS2[0] = (int)KoordinatenS1_1[0]-65;
    printf("Bitte geben Sie die Schlachtschiff X-Koordinate ein\n");
    scanf("%d", &KoordinatenS1_2[0]);
    KoordinatenS2[1] = (int)KoordinatenS1_2[0];
    fflush(stdin);
    printf("Bitte geben Sie die Schlachtschiff Ausrichtung ein\n");
    scanf("%c", &ptrAusrichtungS2[0]);
    printf("Schlachtschiff: %d\n", KoordinatenS2[0]);
    printf("Schlachtschiff:%d\n", KoordinatenS2[1]);
    fflush(stdin);

    //Kreuzer1
    printf("Bitte geben Sie die Kreuzer Y-Koordinate ein\n");
    scanf("%c", &KoordinatenS1_1[1]);
    KoordinatenS2[2] = (int)KoordinatenS1_1[1]-65;
    printf("Bitte geben Sie die Kreuzer X-Koordinate ein\n");
    scanf("%d", &KoordinatenS1_2[1]);
    KoordinatenS2[3] = (int)KoordinatenS1_2[1];
    fflush(stdin);
    printf("Bitte geben Sie die Kreuzer Ausrichtung ein\n");
    scanf("%c", &ptrAusrichtungS2[1]);
    printf("Kreuzer: %d\n", KoordinatenS2[2]);
    printf("Kreuzer:%d\n", KoordinatenS2[3]);
    fflush(stdin);

//Kreuzer2
    printf("Bitte geben Sie die Kreuzer Y-Koordinate ein\n");
    scanf("%c", &KoordinatenS1_1[2]);
    KoordinatenS2[4] = (int)KoordinatenS1_1[2]-65;
    printf("Bitte geben Sie die Kreuzer X-Koordinate ein\n");
    scanf("%d", &KoordinatenS1_2[2]);
    KoordinatenS2[5] = (int)KoordinatenS1_2[2];
    fflush(stdin);
    printf("Bitte geben Sie die Kreuzer Ausrichtung ein\n");
    scanf("%c", &ptrAusrichtungS2[2]);
    printf("Kreuzer: %d\n", KoordinatenS2[4]);
    printf("Kreuzer:%d\n", KoordinatenS2[5]);
    fflush(stdin);

//Zerstörer1
    printf("Bitte geben Sie die Zerstoerer Y-Koordinate ein\n");
    scanf("%c", &KoordinatenS1_1[3]);
    KoordinatenS2[6] = (int)KoordinatenS1_1[3]-65;
    printf("Bitte geben Sie die Zerstoerer X-Koordinate ein\n");
    scanf("%d", &KoordinatenS1_2[3]);
    KoordinatenS2[7] = (int)KoordinatenS1_2[3];
    fflush(stdin);
    printf("Bitte geben Sie die Zerstoerer Ausrichtung ein\n");
    scanf("%c", &ptrAusrichtungS2[3]);
    printf("Zerstoerer: %d\n", KoordinatenS2[6]);
    printf("Zerstoerer:%d\n", KoordinatenS2[7]);
    fflush(stdin);

    //Zerstörer2
    printf("Bitte geben Sie die Zerstoerer Y-Koordinate ein\n");
    scanf("%c", &KoordinatenS1_1[4]);
    KoordinatenS2[8] = (int)KoordinatenS1_1[4]-65;
    printf("Bitte geben Sie die Zerstoerer X-Koordinate ein\n");
    scanf("%d", &KoordinatenS1_2[4]);
    KoordinatenS2[9] = (int)KoordinatenS1_2[4];
    fflush(stdin);
    printf("Bitte geben Sie die Zerstoerer Ausrichtung ein\n");
    scanf("%c", &ptrAusrichtungS2[4]);
    printf("Zerstoerer: %d\n", KoordinatenS2[8]);
    printf("Zerstoerer:%d\n", KoordinatenS2[9]);
    fflush(stdin);

//Zerstörer3
    printf("Bitte geben Sie die Zerstoerer Y-Koordinate ein\n");
    scanf("%c", &KoordinatenS1_1[5]);
    KoordinatenS2[10] = (int)KoordinatenS1_1[5]-65;
    printf("Bitte geben Sie die Zerstoerer X-Koordinate ein\n");
    scanf("%d", &KoordinatenS1_2[5]);
    KoordinatenS2[11] = (int)KoordinatenS1_2[5];
    fflush(stdin);
    printf("Bitte geben Sie die Zerstoerer Ausrichtung ein\n");
    scanf("%c", &ptrAusrichtungS2[5]);
    printf("Zerstoerer: %d\n", KoordinatenS2[10]);
    printf("Zerstoerer:%d\n", KoordinatenS2[11]);
    fflush(stdin);

//UBoot1
    printf("Bitte geben Sie die U-Boot Y-Koordinate ein\n");
    scanf("%c", &KoordinatenS1_1[6]);
    KoordinatenS2[12] = (int)KoordinatenS1_1[6]-65;
    printf("Bitte geben Sie die U-Boot X-Koordinate ein\n");
    scanf("%d", &KoordinatenS1_2[6]);
    KoordinatenS2[13] = (int)KoordinatenS1_2[6];
    fflush(stdin);
    printf("U-Boot: %d\n", KoordinatenS2[12]);
    printf("U-Boot:%d\n", KoordinatenS2[13]);
    fflush(stdin);

//UBoot2
    printf("Bitte geben Sie die U-Boot Y-Koordinate ein\n");
    scanf("%c", &KoordinatenS1_1[7]);
    KoordinatenS2[14] = (int)KoordinatenS1_1[7]-65;
    printf("Bitte geben Sie die U-Boot X-Koordinate ein\n");
    scanf("%d", &KoordinatenS1_2[7]);
    KoordinatenS2[15] = (int)KoordinatenS1_2[7];
    fflush(stdin);
    printf("U-Boot: %d\n", KoordinatenS2[14]);
    printf("U-Boot:%d\n", KoordinatenS2[15]);
    fflush(stdin);

    //UBoot3
    printf("Bitte geben Sie die U-Boot Y-Koordinate ein\n");
    scanf("%c", &KoordinatenS1_1[8]);
    KoordinatenS2[16] = (int)KoordinatenS1_1[8]-65;
    printf("Bitte geben Sie die U-Boot X-Koordinate ein\n");
    scanf("%d", &KoordinatenS1_2[8]);
    KoordinatenS2[17] = (int)KoordinatenS1_2[8];
    fflush(stdin);
    printf("U-Boot: %d\n", KoordinatenS2[16]);
    printf("U-Boot:%d\n", KoordinatenS2[17]);
    fflush(stdin);

    //UBoot4
    printf("Bitte geben Sie die U-Boot Y-Koordinate ein\n");
    scanf("%c", &KoordinatenS1_1[9]);
    KoordinatenS2[18] = (int)KoordinatenS1_1[9]-65;
    printf("Bitte geben Sie die U-Boot X-Koordinate ein\n");
    scanf("%d", &KoordinatenS1_2[9]);
    KoordinatenS2[19] = (int)KoordinatenS1_2[9];
    fflush(stdin);
    printf("U-Boot: %d\n", KoordinatenS2[18]);
    printf("U-Boot:%d\n", KoordinatenS2[19]);
    fflush(stdin);


    for (int i = 0; i < 20; ++i) {

        if (KoordinatenS2[i] < 0 || KoordinatenS2[i] >= 10) {
            printf("Falsche Koordinateneingabe, bitte neu Starten\n");
            exit(EXIT_SUCCESS);


        }

    }
    for (int i = 0; i < 10; ++i) {

        if (AusrichtungS2[i] != 'W' && AusrichtungS2[i] != 'S') {
            printf("Falsche Koordinateneingabe (Ausrichtung), bitte neu Starten\n");
            exit(EXIT_SUCCESS);


        }

    }

    return KoordinatenS2;

}




//Spielfeldausgabefunktion
void Spielfeldausgabe(int board[ROWS][COLS]) {
    printf(" 0 1 2 3 4 5 6 7 8 9 \n");
    for(int i = 0; i < COLS; i++) {
        printf("%c ", 'A' +i);
        for(int j = 0; j < ROWS; j++) {
            if(board[j][i] == 0)
                printf(". ");
            else if(board[j][i] == 1)
                printf(". ");
            else if(board[j][i] == 2)
                printf(". ");
            else if(board[j][i] == 3)
                printf(". ");
            else if(board[j][i] == 4)
                printf(". ");
            else if(board[j][i] == 31)
            printf(". ");
            else if(board[j][i] == 21)
            printf(". ");
            else if(board[j][i] == 22)
                printf(". ");
            else if(board[j][i] == 11)
                printf(". ");
            else if(board[j][i] == 12)
                printf(". ");
            else if(board[j][i] == 13)
                printf(". ");
            else if(board[j][i] == 45)
                printf("- ");
            else if(board[j][i] == 120)
                printf("x ");
            else if(board[j][i] == 88)
                printf("X ");
    }
        printf("\n");
    }
}

//Spielfeldausgabefunktion
void Spielfeldeinleseausgabe(int board[ROWS][COLS]) {
    printf(" 0 1 2 3 4 5 6 7 8 9 \n");
    for(int i = 0; i < COLS; i++) {
        printf("%c ", 'A' +i);
        for(int j = 0; j < ROWS; j++) {
            if(board[j][i] == 0)
                printf(". ");
            else if(board[j][i] == 1)
                printf("U ");
            else if(board[j][i] == 2)
                printf("Z ");
            else if(board[j][i] == 3)
                printf("K ");
            else if(board[j][i] == 4)
                printf("S ");
            else if(board[j][i] == 31)
                printf("K ");
            else if(board[j][i] == 21)
                printf("Z ");
            else if(board[j][i] == 22)
                printf("Z ");
            else if(board[j][i] == 11)
                printf("U ");
            else if(board[j][i] == 12)
                printf("U ");
            else if(board[j][i] == 13)
                printf("U ");
            else if(board[j][i] == 45)
                printf("- ");
            else if(board[j][i] == 120)
                printf("x ");
            else if(board[j][i] == 88)
                printf("X ");
        }
        printf("\n");
    }
}







void Schiffesetzen(int Koordinaten[], char Ausrichtung[], int board[ROWS][COLS], int Groesse[]){
//Schlachtschiff
    if(Ausrichtung[0] == 'W'){
        for (int i = 0; i < Groesse[0]; ++i) {

board[Koordinaten[1]+i][Koordinaten[0]] = 4;
                                            }

                            }else if(Ausrichtung[0] == 'S') {
        for (int i = 0; i < Groesse[0]; ++i) {

            board[Koordinaten[1]][Koordinaten[0]+i] = 4;
                                                }
                                                            }



    //Kreuzer1
    if(Ausrichtung[1] == 'W'){
    for (int i = 0; i < Groesse[1]; ++i) {

    board[Koordinaten[3]+i][Koordinaten[2]] = 3;
                                            }
        }else if(Ausrichtung[0] == 'S') {
        for (int i = 0; i < Groesse[1]; ++i) {

    board[Koordinaten[3]][Koordinaten[2]+i] = 3;
                                            }
                                        }

    //Kreuzer2
    if(Ausrichtung[2] == 'W'){
        for (int i = 0; i < Groesse[1]; ++i) {

            board[Koordinaten[5]+i][Koordinaten[4]] = 31;
        }
    }else if(Ausrichtung[2] == 'S') {
        for (int i = 0; i < Groesse[1]; ++i) {

            board[Koordinaten[5]][Koordinaten[4]+i] = 31;
        }
    }


    //Zerstörer1
    if(Ausrichtung[3] == 'W'){
        for (int i = 0; i < Groesse[2]; ++i) {

            board[Koordinaten[7]+i][Koordinaten[6]] = 2;
        }
    }else if(Ausrichtung[3] == 'S') {
        for (int i = 0; i < Groesse[2]; ++i) {

            board[Koordinaten[7]][Koordinaten[6]+i] = 2;
        }
    }


    //Zerstörer2
    if(Ausrichtung[4] == 'W'){
        for (int i = 0; i < Groesse[2]; ++i) {

            board[Koordinaten[9]+i][Koordinaten[8]] = 21;
        }
    }else if(Ausrichtung[4] == 'S') {
        for (int i = 0; i < Groesse[2]; ++i) {

            board[Koordinaten[9]][Koordinaten[8]+i] = 21;
        }
    }


    //Zerstörer3
    if(Ausrichtung[5] == 'W'){
        for (int i = 0; i < Groesse[2]; ++i) {

            board[Koordinaten[11]+i][Koordinaten[10]] = 22;
        }
    }else if(Ausrichtung[5] == 'S') {
        for (int i = 0; i < Groesse[2]; ++i) {

            board[Koordinaten[11]][Koordinaten[10]+i] = 22;
        }
    }


    //Uboot1


            board[Koordinaten[13]][Koordinaten[12]] = 1;




    //Uboot2



            board[Koordinaten[15]][Koordinaten[14]] = 11;





    //Uboot3


            board[Koordinaten[17]][Koordinaten[16]] = 12;




    //Uboot4
            board[Koordinaten[19]][Koordinaten[18]] = 13;






}


void schiessen(int board[ROWS][COLS]){
    int x, y;
    char buchstabe;

    printf("Geben Sie eine Y-Koordinate ein:\n");

    scanf("%c", &buchstabe);
    fflush(stdin);

    //Char zu integer casten
    y = (int) buchstabe;
    y = y - 65;


    printf("Geben Sie eine X-Koordiante ein:\n");

    scanf("%d", &x);
    fflush(stdin);

    if(board[x][y] == 0){

        board[x][y] = 45;

        printf("Wasser getroffen");
    }else if(board[x][y] != 0){

        board[x][y] = 120;

        printf("Schiff getroffen\n");
    }




}


void Kontrolle(int Koordinaten[], char Ausrichtung[], int board[ROWS][COLS], int Groesse[], int pruefwert)
{


    //Schlachtschiff
    int SchlachtschiffZaehler = 0;
    //Schleife für Zähler
    if(Ausrichtung[0] == 'W'){
        for (int i = 0; i < Groesse[0]; ++i) {
if(board[Koordinaten[1]+i][Koordinaten[0]] == 120){
    SchlachtschiffZaehler++;
}
//Überprüfung des Zählers
if(SchlachtschiffZaehler == 4){
    printf("Schiff versenkt\n");
    for (int j = 0; j < Groesse[0]; ++j) {

        board[Koordinaten[1]+j][Koordinaten[0]] = 88;


    }

}
        }

    }else if(Ausrichtung[0] == 'S') {
        for (int i = 0; i < Groesse[0]; ++i) {
            if (board[Koordinaten[1]][Koordinaten[0] + i] == 120) {
                SchlachtschiffZaehler++;
            }
            //Überprüfung des Zählers
            if (SchlachtschiffZaehler == 4) {


                for (int j = 0; j < Groesse[0]; ++j) {

                    board[Koordinaten[1]][Koordinaten[0] + j] = 88;
                }
                printf("Schiff versenkt");

            }
        }
    }

//-----------------------------------------------------------------------------------
    //Kreuzer1
    int Kreuzerzähler1 = 0;
    //Schleife für Zähler
    if(Ausrichtung[1] == 'W') {
        for (int i = 0; i < Groesse[1]; ++i) {
            if (board[Koordinaten[3] + i][Koordinaten[2]] == 120) {
                Kreuzerzähler1++;
            }
//Überprüfung des Zählers
            if (Kreuzerzähler1 == 3) {
                for (int j = 0; j < Groesse[1]; j++) {

                    board[Koordinaten[3] + j][Koordinaten[2]] = 88;

                }
                printf("Schiff versenkt\n");

            }
        }

        } else if(Ausrichtung[1] == 'S') {
        for (int i = 0; i < Groesse[1]; ++i) {
            if (board[Koordinaten[3]][Koordinaten[2] + i] == 120) {
                Kreuzerzähler1++;
            }
            //Überprüfung des Zählers
            if (Kreuzerzähler1 == 3) {
                for (int j = 0; j < Groesse[1]; j++) {

                    board[Koordinaten[3]][Koordinaten[2] + j] = 88;

                }
                printf("Schiff versenkt\n");

            }
        }
    }
//-----------------------------------------------------------------------------------
        //Kreuzer2
        int Kreuzerzähler2 = 0;
        //Schleife für Zähler
        if (Ausrichtung[2] == 'W') {
            for (int i = 0; i < Groesse[1]; ++i) {
                if (board[Koordinaten[5] + i][Koordinaten[4]] == 120) {
                    Kreuzerzähler2++;
                }
//Überprüfung des Zählers
                if (Kreuzerzähler2 == 3) {
                    for (int j = 0; j < Groesse[1]; j++) {

                        board[Koordinaten[5] + j][Koordinaten[4]] = 88;

                    }
                    printf("Schiff versenkt\n");

                }
            }
        } else if (Ausrichtung[2] == 'S') {
            for (int i = 0; i < Groesse[1]; ++i) {
                if (board[Koordinaten[5]][Koordinaten[4] + i] == 120) {
                    Kreuzerzähler2++;
                }
                //Überprüfung des Zählers
                if (Kreuzerzähler2 == 3) {
                    for (int j = 0; j < Groesse[1]; j++) {

                        board[Koordinaten[5]][Koordinaten[4] + j] = 88;

                    }
                    printf("Schiff versenkt\n");

                }
            }
        }
//-----------------------------------------------------------------------------------

            //Zerstörer
            int zerstörerzähler1 = 0;
            //Schleife für Zähler
            if (Ausrichtung[3] == 'W') {
                for (int i = 0; i < Groesse[2]; ++i) {
                    if (board[Koordinaten[7] + i][Koordinaten[6]] == 120) {
                        zerstörerzähler1++;
                    }
//Überprüfung des Zählers
                    if (zerstörerzähler1 == 2) {
                        for (int j = 0; j < Groesse[2]; j++) {

                            board[Koordinaten[7] + j][Koordinaten[6]] = 88;

                        }
                        printf("Schiff versenkt\n");

                    }
                }
            } else if (Ausrichtung[3] == 'S') {
                for (int i = 0; i < Groesse[2]; ++i) {
                    if (board[Koordinaten[7]][Koordinaten[6] + i] == 120) {
                        zerstörerzähler1++;
                    }
                    //Überprüfung des Zählers
                    if (zerstörerzähler1 == 2) {
                        for (int j = 0; j < Groesse[2]; j++) {

                            board[Koordinaten[7]][Koordinaten[6] + j] = 88;

                        }
                        printf("Schiff versenkt\n");

                    }
                }
            }
//-----------------------------------------------------------------------------------
//Zerstörer2
            int zerstörerzähler2 = 0;
            //Schleife für Zähler
            if (Ausrichtung[4] == 'W') {
                for (int i = 0; i < Groesse[2]; ++i) {
                    if (board[Koordinaten[9] + i][Koordinaten[8]] == 120) {
                        zerstörerzähler2++;
                    }
//Überprüfung des Zählers
                    if (zerstörerzähler2 == 2) {
                        for (int j = 0; j < Groesse[2]; j++) {

                            board[Koordinaten[9] + j][Koordinaten[8]] = 88;

                        }
                        printf("Schiff versenkt\n");

                    }
                }
                } else if (Ausrichtung[4] == 'S') {
                for (int i = 0; i < Groesse[2]; ++i) {
                    if (board[Koordinaten[9]][Koordinaten[8] + i] == 120) {
                        zerstörerzähler2++;
                    }
                    //Überprüfung des Zählers
                    if (zerstörerzähler2 == 2) {
                        for (int j = 0; j < Groesse[2]; j++) {

                            board[Koordinaten[9]][Koordinaten[8] + j] = 88;

                        }
                        printf("Schiff versenkt\n");

                    }
                }
            }


            //Zerstörer3
            int zerstörerzähler3 = 0;
            //Schleife für Zähler
            if (Ausrichtung[5] == 'W') {
                for (int i = 0; i < Groesse[2]; ++i) {
                    if (board[Koordinaten[11] + i][Koordinaten[10]] == 120) {
                        zerstörerzähler3++;
                    }
//Überprüfung des Zählers
                    if (zerstörerzähler3 == 2) {
                        for (int j = 0; j < Groesse[2]; j++) {

                            board[Koordinaten[11] + j][Koordinaten[10]] = 88;

                        }
                        printf("Schiff versenkt\n");

                    }
                }
            } else if (Ausrichtung[5] == 'S') {
                for (int i = 0; i < Groesse[2]; ++i) {
                    if (board[Koordinaten[11]][Koordinaten[10] + i] == 120) {
                        zerstörerzähler3++;
                    }
                    //Überprüfung des Zählers
                    if (zerstörerzähler3 == 2) {
                        for (int j = 0; j < Groesse[2]; j++) {

                            board[Koordinaten[11]][Koordinaten[10] + j] = 88;

                        }
                        printf("Schiff versenkt\n");

                    }
                }
            }


    //Uboot1
    int ubootzähler1 = 0;
    //Schleife für Zähler
    if (Ausrichtung[6] == 'W') {
        for (int i = 0; i < Groesse[3]; ++i) {
            if (board[Koordinaten[13] + i][Koordinaten[12]] == 120) {
                ubootzähler1++;
            }
//Überprüfung des Zählers
            if (ubootzähler1 == 1) {
                for (int j = 0; j < Groesse[3]; j++) {

                    board[Koordinaten[13] + j][Koordinaten[12]] = 88;

                }
                printf("Schiff versenkt\n");

            }
        }
    }

    //Uboot2
    int ubootzähler2 = 0;
    //Schleife für Zähler
    if (Ausrichtung[7] == 'W') {
        for (int i = 0; i < Groesse[3]; ++i) {
            if (board[Koordinaten[15] + i][Koordinaten[14]] == 120) {
                ubootzähler2++;
            }
//Überprüfung des Zählers
            if (ubootzähler2 == 1) {
                for (int j = 0; j < Groesse[3]; j++) {

                    board[Koordinaten[15] + j][Koordinaten[14]] = 88;

                }
                printf("Schiff versenkt\n");

            }
        }
    }


    //Uboot3
    int ubootzähler3 = 0;
    //Schleife für Zähler
    if (Ausrichtung[8] == 'W') {
        for (int i = 0; i < Groesse[3]; ++i) {
            if (board[Koordinaten[17] + i][Koordinaten[16]] == 120) {
                ubootzähler3++;
            }
//Überprüfung des Zählers
            if (ubootzähler3 == 1) {
                for (int j = 0; j < Groesse[3]; j++) {

                    board[Koordinaten[17] + j][Koordinaten[16]] = 88;

                }
                printf("Schiff versenkt\n");

            }
        }
    }


//Uboot4
    int ubootzähler4 = 0;
    //Schleife für Zähler
    if (Ausrichtung[8] == 'W') {
        for (int i = 0; i < Groesse[3]; ++i) {
            if (board[Koordinaten[19] + i][Koordinaten[18]] == 120) {
                ubootzähler4++;
            }
//Überprüfung des Zählers
            if (ubootzähler4 == 1) {
                for (int j = 0; j < Groesse[3]; j++) {

                    board[Koordinaten[19] + j][Koordinaten[18]] = 88;

                }
                printf("Schiff versenkt\n");

            }
        }
    }





}

void KonsoleLeeren() {
    int input;
    printf("1 eingeben um die Konsole zu leeren\n");
    scanf("%d", &input);
    if (input == 1) {

        for (int i = 0; i < 50; ++i) {
            printf(" \n");
            fflush(stdin);
                                    }
    }
}



void Gesamtkontrolle(int board[ROWS][COLS], int pruefwert){
int zaheler = 0;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
           if(board[i][j] == 88) {

               zaheler++;
           }
        }

        if(zaheler == 20){
printf(" Alle Schiffe zerstört");
            exit(EXIT_SUCCESS);


        } else if(zaheler < 20){

            pruefwert = 1;

        }

    }




}


int main() {

   //Arrays, Variable, etc--------------------------------------------------------------

        //Koordinaten Spieler 1

        int KoordinatenS1[100];
        char AusrichtungS1[10];
        char *ptrAusrichtungS1 = AusrichtungS1;
    AusrichtungS1[6] ='W';
    AusrichtungS1[7]='W';
    AusrichtungS1[8]='W';
    AusrichtungS1[9]='W';
        //Koordinaten Spieler 2
        int KoordinatenS2[100];
        char AusrichtungS2[10];
    AusrichtungS2[6] ='W';
    AusrichtungS2[7]='W';
    AusrichtungS2[8]='W';
    AusrichtungS2[9]='W';
        char *ptrAusrichtungS2 = AusrichtungS2;
//Variablen für die Kontrollfunktionen--------



    printf("---------------------------------------------------------------------------------------\n");

    printf("Schiffe versenken Kurzanleitung:\n");
    printf("Es werden pro Spieler, 10 Schiffe gesetzt, diese werden je nach Wahl Senkrecht oder Waagerecht platziert.\n"
           "Man waehlt zwischen Waage- oder Senkrecht indem man W (Grossbuchstabe) oder S (Grossbuchstabe) einliest.\n"
           "Die Y-Koordiante wird ueber ein Buchstaben (Grossbuchstabe) A-J eingelesen.\n"
           "Die X-Koordiante wird ueber eine Zahl 0-9 eingelesen.\n"
           "Die Koordianten geben bei Waagerechter Ausrichtung den ersten Wert von link an, der Rest wird von dem Progamm eigenstaendig geaendert.\n"
           "Spieler 1 beginnt.\n");

    printf("---------------------------------------------------------------------------------------\n");


    KoordinatenEingabeS1(KoordinatenS1,ptrAusrichtungS1,AusrichtungS1);
    Schiffesetzen(KoordinatenS1, AusrichtungS1, arr1,schiffgroessen);
    Spielfeldeinleseausgabe(arr1);
    KonsoleLeeren();

    KoordinatenEingabeS2(KoordinatenS2,ptrAusrichtungS2,AusrichtungS2);
    Schiffesetzen(KoordinatenS2, AusrichtungS2, arr2,schiffgroessen);
    Spielfeldeinleseausgabe(arr2);
    KonsoleLeeren();


    while(Kontrollwert1 == 1 && Kontrollwert2 == 1){

        // Spieler 1 Spielzug
        printf("Spieler eins ist am Zug\n");
        schiessen(arr2);
        Kontrolle(KoordinatenS2,AusrichtungS2,arr2,schiffgroessen, Kontrollwert2);
        Spielfeldausgabe(arr2);
         Gesamtkontrolle(arr2,Kontrollwert2);

         // Spieler 2 Spielzug
        printf("Spieler zwei ist am Zug\n");
        schiessen(arr1);
        Kontrolle(KoordinatenS1,AusrichtungS1,arr1,schiffgroessen, Kontrollwert1);
        Spielfeldausgabe(arr1);
        Gesamtkontrolle(arr1,Kontrollwert1);


}




return 0;
    }
