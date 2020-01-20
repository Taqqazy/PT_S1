#include "Entreprise.h"
#include "misc.h"

Entreprise::Entreprise(vector<string> vec) {
    nom=vec[1];
    slogan=vec[2];
    if(vec.size()==4)
        nomLogo=vec[3];
    else nomLogo="";
}

string Entreprise::get_nom() const
//fonction qui retourne sous forme de string le nom de chaque objet de classe Entreprise
{
    return nom;
}

string Entreprise::get_nomLogo() const
//fonction qui retourne sous forme de string le nom du logo de chaque objet de classe Entreprise
{
    return nomLogo;
}

string Entreprise::get_slogan() const
//fonction qui retourne sous forme de string le slogan de chaque objet de classe Entreprise
{
    return slogan;
}

void Entreprise::addPers(Personnel pers)
//parametre d'entree : personnel appartenant a l'entreprise
//fonction qui rajoute au vecteur de personnels de l'entreprise un Personnel
{
    vecPersEnt.push_back(pers);
}

vector<Personnel> Entreprise::get_vecPersEnt() const
//fonction qui retourne sous forme de vecteur de Personnel les Personnel de chaque objet de classe Entreprise
{
    return vecPersEnt;
}

void entrepriseAssign(vector<Entreprise> &ent, vector<Personnel> &pers)
//prend en parametre un vecteur d'Entreprise et un vecteur de Personnel
//fonction qui rajoute tous les Personnel de cette Entreprise contenus dans le vecteur pers dans le vecteur d'Entreprise ent
{
    for(unsigned int i=0; i<ent.size(); i++)
    {
        for(unsigned int y=0; y<pers.size(); y++)
        {
            if(ent[i].get_nom()==pers[y].get_firm()) {
                ent[i].addPers(pers[y]);
                pers.erase(pers.begin()+y);
                y--;
            }
        }
    }
}

ostream& operator<<(ostream& os, Entreprise& ent)
//prend en parametres le flux de sortie et un objet de type Entreprise
//surcharge d'operateurs dans le but de pouvoir retourner dans le flux de sortie un Entreprise syntaxé en HTML
//format de sortie : flux de sortie ostream
{
    os << "    <div class=\"ent\">" << endl;
    os << "      <h2>" << ent.get_nom() << "</h2>";
    os << "      <p>" << ent.get_slogan() << "<p>";
    os << "      <img class=\"logo_ent\" src=\"src/logos/" << ent.get_nomLogo() <<"\" alt=\"Logo de " << ent.get_nom() << "\" width=\"105\" height=\"105\" >" << endl;
    vector<Personnel> vecPersEnt = ent.get_vecPersEnt();
    for(int i=0; i<vecPersEnt.size(); i++) {
            os << vecPersEnt[i];
    }
    os << "      <br style=\"clear:both\"/>" << endl;
    os << "    </div>" << endl;
    return os;
}
