//!
//! @file       main.cpp
//! @author     Hasenfresser
//! @version    1.04
//! @date       2017-12-28
//!
//! @brief      Main file of the project. Just for testing purposes.
//!

#include "MenuTemplate/MenuTemplate.hpp"
#include <iostream>

using std::cout;
using std::endl;


//!
//! @brief  Main function of MenuTemplate.
//!
//! @return int
//!
int main() {
    // Example menu for a game:
    MenuTemplate::MenuTemplate MenuA;

    //Questao 2 - modifiquei Title e Description para Neverwinter Nights
    MenuA.Title = "\t\tNeverwinter Nights";
    //Alteração na descrição do menu
    MenuA.Description = "Neverwinter Nights Simple Menu";
    MenuA.setCursor("\xe2\x99\xa5 ");

    MenuA.addEntry("GAME_NEW", "New game");
    MenuA.addEntry("GAME_LOAD", "Load save state");
    MenuA.addEntry("GAME_EXIT", "Exit game");
    MenuA.addEntry("GAME_OPTIONS", "Game options");
    //Inserção de mais 3 opções no menu
    MenuA.addEntry("GAME_VIDEO_OPTIONS", "Video Options");
    MenuA.addEntry("GAME_SOUND_OPTIONS", "Sound Options");
    MenuA.addEntry("GAME_CONTROLS", "Controls");

    MenuA.swapEntries(2, "GAME_OPTIONS");

    MenuA.setCursorStartPosition(0);

    cout << MenuA.displayGetName() << endl;
        //Aqui retorna qual o cursor inserido para o menu
    cout << "Cursor do Menu: " << MenuA.getCursor() << endl;
        //Aqui retorna a quantidade de caracteres do cursor
    cout << "O cursor " << MenuA.getCursor() << " possui " << MenuA.getSizeCursor() << " caractere(s)." << endl;
}
