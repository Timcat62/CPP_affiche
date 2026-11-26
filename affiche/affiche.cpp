/// <summary>
/// But : afficher une affiche pour le forum des métiers
/// Auteur : Timeo CATILLION
/// Date : 25/11/2026
/// 
/// Compilation : cl /EHsc affiche.cpp
/// Execution : affiche.exe
/// </summary>

#include <iostream>

int main()
{
    std::cout << "+--------------------------------------+\n"
    << "|        FORUM DES METIERS 2026        |\n"
    << "+--------------------------------------+\n"
    << "|                 ###                  |\n"
    << "|           [*************]            |\n"
    << "|          *(             )*           |\n"
    << "|      *****(   BTS CIEL  )*****       |\n"
    << "|          *(             )*           |\n"
    << "|           [*************]            |\n"
    << "|                 ###                  |\n"
    << "|                                      |\n"
    << "|  Reseaux - Programmation - Securite  |\n"
    << "|                                      |\n"
    << "+--------------------------------------+\n";
    return 0;
}

// \n et std::endl permettent tout deux de retourner à la ligne, c'est juste la syntaxe qui est différente
/*
Résultat :
+--------------------------------------+
|        FORUM DES METIERS 2026        |
+--------------------------------------+
|                 ###                  |
|           [*************]            |
|          *(             )*           |
|      *****(   BTS CIEL  )*****       |
|          *(             )*           |
|           [*************]            |
|                 ###                  |
|                                      |
|  Reseaux - Programmation - Securite  |
|                                      |
+--------------------------------------+
*/