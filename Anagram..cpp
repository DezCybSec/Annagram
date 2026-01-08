/*
NAME of Project : Anagramm

DATE : 8th December 2025

By : G. Desire M. NOUATCHI

*/

#include <iostream>
#include <cmath>
#include <string>
#include <cctype>

using namespace std ;

	char texte ;

	string nettoyerMot(const string &input){
		string clean = "";
		for (char c :input){
			if (c == ' ')
				continue ;
			clean +=tolower(c);
		
		}
		return clean ;
	}

int main (){
	
	string motUtilisateur ;
	cout << "Entrez un mot dont vous voulez toutes les permutations  " <<endl;
	getline (cin, motUtilisateur) ;
	
	//Appelle de la fonction 
	
	string motPropre = nettoyerMot(motUtilisateur);
	
	cout << "Mot nettoye :" << motPropre << endl;
	
	
	return 0 ;
}




