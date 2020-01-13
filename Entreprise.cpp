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
{
    return nom;
}

string Entreprise::get_nomLogo() const
{
    return nomLogo;
}

void Entreprise::addPers(Personnel pers)
{
    vecPersEnt.push_back(pers);
}

vector<Personnel> Entreprise::get_vecPersEnt() const
{
    return vecPersEnt;
}

void entrepriseAssign(vector<Entreprise> &ent, vector<Personnel> &pers)
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
{
    os << "<div class=\"ent\">" << endl;
    os << "     <img class=\"logo_ent\" src=\"src/logos/" << ent.get_nomLogo() <<"\" alt=\"Logo de " << ent.get_nom() << "\" width=\"105\" height=\"105\" >" << endl;
    vector<Personnel> vecPersEnt = ent.get_vecPersEnt();
    for(int i=0; i<vecPersEnt.size(); i++) {
            os << vecPersEnt[i];
    }
    os << "</div>" << endl;
    return os;
}

