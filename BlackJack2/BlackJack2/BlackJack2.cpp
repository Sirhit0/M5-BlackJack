// BlackJack2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

//Player
string player;
int PlayerNum;
bool Playerwiner = false;
bool Playerlose = false;
int countPlayer;

//el otro
string croupie = croupie;
int croupieNum;
bool croupieWiner = false;
bool croupieLose = false;
int countCroupie;

//functions


void Start() {
    cout << ("Escribe tu nombre");
    cin >> player;
    system("cls");
    //oscaroscarocsaroscaroscar
    cout << (croupie + " hola" + player + " que gusto volver a verte, vamos a jugar");
}

void Game() {

}

void Array() {
    srand(time(NULL));
    string shuffleSuits[] = { "Picas","Corazones","Diamantes","Treboles" };
    int deckOfCards[] = { 1,2,3,4,5,6,7,8,9,10};
    string suitRandom = shuffleSuits[rand() % 5];
    int deckRandom = deckOfCards[rand() % 9];
    cout << (deckRandom + " " + suitRandom);
    if (deckRandom == 1) {
        cout << ("Has sacado un AS puedes escoger entre 1 o 11");
        int numAs;
        cin >> numAs;
        PlayerNum = PlayerNum + numAs;


        int i;
        cout << ("Quieres mas cartas 1.SI/2.NO");
        int More;
        cin >> More;
        if (More == 1) {
            countPlayer++;
            for (i = 0; i < countPlayer; i++) {
                cout << (deckRandom + " " + suitRandom);
            
            }
        }
    }
}


void youLost() {
    //perdemos por que te pasastes
    if (PlayerNum > 21) {
        system("cls");
        system("color c");
        cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n";
        cout << "                                             Has perdido                                                                \n";
        cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n";
        exit(-1);
    }
    //perdimos de forma normal
    if (PlayerNum < croupieNum && croupieNum <= 21) {
        system("cls");
        system("color c");
        cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n";
        cout << "                                             Has perdido                                                                \n";
        cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n";
        exit(-1);
    }
}

void win() {
    //ganas por que la maquina se pasa
    if (croupieNum > 21) {
        system("cls");
        system("color a");
        cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n";
        cout << "                                             Ganastes                                                                   \n";
        cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n";
        exit(-1);
    }
    //ganas de forma normal
    if (PlayerNum > croupieNum && PlayerNum <= 21) {
        system("cls");
        system("color a");
        cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n";
        cout << "                                             Ganastes                                                                   \n";
        cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n";
        exit(-1);
    }
}

void tie() {
    if (PlayerNum == 21 && croupieNum == 21) {
        system("cls");
        system("color b");
        cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n";
        cout << "                                             Empate                                                                     \n";
        cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n";
        exit(-1);
    }
}


int main()
{
    Array();

}