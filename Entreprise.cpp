#include "Entreprise.h"
#include "misc.h"

Entreprise::Entreprise(vector<string> vec) {
    nom=vec[1];
    slogan=vec[2];
    if(vec.size()==4)
        nomlogo=vec[3];
    else nomlogo="";
}

string Entreprise::get_nom() const
{
    return nom;
}

void Entreprise::addPers(Personnel pers)
{
    vecPersEnt.push_back(pers);
}

void entrepriseAssign(vector<Entreprise> ent, vector<Personnel> pers)
{
    for(int i=0; i<ent.size(); i++)
    {
        for(int y=0; y<pers.size(); y++)
        {
            if(ent[i].get_nom()==pers[y].get_firm())
                ent[i].addPers(pers[y]);
        }
    }
}

