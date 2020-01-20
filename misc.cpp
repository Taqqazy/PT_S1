#include "misc.h"

vector<string> lineToVec(const string &ligne) {
//prend en parametre une ligne du fichier csv
//fonction qui retourne le vecteur qui contient les valeurs de la ligne séparées par un |
    vector<string> vectemp;
    unsigned int i=0;
    for(int y=0;y<count(ligne.begin(),ligne.end(), '|')+1;y++) {
        string strtemp="";
        while(ligne[i]!='|' && i<ligne.size()) {
            strtemp+=ligne[i];
            i++;
        }
        i++;
        vectemp.push_back(strtemp);
    }
    return vectemp;
}

string normalisation(string &s)
//prend en parametre un string s
//fonction qui normalise les caracteres du string en majuscule
//retourne un string avec s normalisé
{
    s[0]=toupper(s[0]);
    if(s.length()>1)
    {
        for(unsigned int i=1; i<s.length(); i++)
        {
            s[i]=tolower(s[i]);
        }
    }
    return s;
}
