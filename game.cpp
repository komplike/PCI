/**
  * @file game.cpp
  * @author xsanta07
  * @author xslavk01
  * @brief user interface and its background.
  */
#include "game.h"
#include <sstream>
#include <string>
#include "save.h"

using namespace std;
int gameUi(){
    Table * tab = nullptr;
    int option = startMenu();
    switch (option){
        case 1: tab = newGame(); break;
        case 2: tab = loadGame(); break;
        case 3: return -1;
    }
    if (tab == nullptr) {
        return 99;
    }
    int action;
    int from;
    int to;
    int position =0;
    while(1) {
        action = 0;
        from = 0;
        to = 0;
        tab->print();
        option = gameMenu(&action,&from,&to,&position);
        if (option == -1) {
            string str = "";
            while(true) {
            cout << "(1) Ulozit" << endl <<
                    "(2) Navrat do hry" << endl <<
                    "(3) Koniec" << endl;
            getline(cin,str);
            stringstream myStream(str);
            if(myStream >> option)
                if (option <= 3 && option > 0 )
                    break;
            cout << '\n' << "Zla moznost ( 1-3 )\n" << endl;
            }
            if (option == 1) {
                save(tab);
                return 0;
            }
            if (option == 3) {
                return -1;
            }
        }
        if (option == 2) {
            Card * tmpCard = tab->hint();
            cout << "HINT: ";
            if (tmpCard != nullptr) {
                tmpCard->Print();
                cout << endl;
            }
            else cout << "Nova karta z balicka" << endl;
        }
        int result = 0;
        switch (action) {
        case 1: result = tab->dealCard();break;
        case 2: result = tab->deck2Table(to);break;
        case 3: result = tab->deck2Found();break;
        case 4: result = tab->table2Table(to,from,position);break;
        case 5: result = tab->table2Found(from);break;
        case 6: result = tab->found2Table(from,to);break;
        }

        if (result != 0)
            cout << "Zly tah\n";
        //test na koniec hry
        if (tab->emptyDT()){
            cout<<endl<<endl<<endl<<"\t\t\tVYHRAL SI"<<endl;
            cout<<"stlac lubovolnu klavesu pre navrat do startovneho menu"<<endl;
            getchar();
            delete tab;
            gameUi();
        }

    }
    delete tab;
    return 0;
}

int gameMenu(int *action, int *from, int *to,int *pos) {
    int option = 0;
    *pos = 0;
    string str = "";
    while(true) {
    cout << "(1) Nova karta z balicka" << endl <<
            "(2) Presun kartu" << endl <<
            "(3) Koniec" << endl <<
            "(4) Hint" << endl;
    getline(cin,str);
    stringstream myStream(str);
    if(myStream >> option)
        if (option <= 4 && option > 0 )
            break;
    cout << '\n' << "Zla moznost ( 1-4 )\n" << endl;
    }
    switch(option) {
    case 1: *action=1; return 0;
    case 2: *action = actionMenu(); break;
    case 3: return -1;
    case 4: return 2;
    }
    switch(*action) {
    case 2: *to=tableMenu(2);break;
    case 3: break;
    case 4: *from=tableMenu(1);*to=tableMenu(2);break;
    case 5: *from=tableMenu(1);break;
    case 6: *from=foundationMenu();*to=tableMenu(2);break;
    }
    return 0;
}

int foundationMenu() {
    int option = -1;
    string str = "";
    while(true) {
    cout << "Vyber kopku vo foundation( 0-3 )" << endl;
    getline(cin,str);
    stringstream myStream(str);
    if(myStream >> option)
        if (option <= 3 && option >= 0 )
            break;
    cout << '\n' << "Neplatny tah\n" << endl;
    }
    return option;
}

int actionMenu(){
    int option = 0;
    string str = "";
    while(true) {
    cout << "(1) Z decku na stol" << endl <<
            "(2) Z decku do foundation" << endl <<
            "(3) Zo stolu na stol" << endl <<
            "(4) Zo stolu na foundation" << endl <<
            "(5) Z foundation na stol" << endl;
    getline(cin,str);
    stringstream myStream(str);
    if(myStream >> option)
        if (option <= 5 && option > 0 )
            break;
    cout << '\n' << "Zla moznost ( 1-5 )\n" << endl;
    }
    return ++option;
}

int tableMenu(int opt) {
    int option = -1;
    string str = "";
    while(true) {
    if (opt == 1) {
        cout << "Vyber kopku z ktorej chces kartu( 0-6 ): ";
    }
    else
        cout << "Vyber kopku do ktorej chces dat kartu( 0-6 ): ";
    getline(cin,str);
    stringstream myStream(str);
    if(myStream >> option)
        if (option <= 6 && option >= 0 )
            break;
    cout << '\n' << "Zly tah\n" << endl;
    }
    return option;
}

int startMenu() {
    int option = 0;
    string str = "";
    while(true) {
    cout << "toto je solitaire hra" << endl;
    cout << "(1) Nova hra" << endl <<
            "(2) Nacitat hru" << endl <<
            "(3) Koniec" << endl;
    getline(cin,str);
    stringstream myStream(str);
    if(myStream >> option)
        if (option <= 3 && option > 0 )
            break;
    cout << '\n' << "Zla moznost ( 1-3 )\n" << endl;
    }
    return option;
}

Table *newGame(){
    Table *tab = new Table;
    tab->initGame();
    return tab;
}


Table *loadGame(){
    Table *tab = new Table;
    tab->loadGame();
    return tab;
}


