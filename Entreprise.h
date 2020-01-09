#ifndef ENTREPRISE_H_INCLUDED
#define ENTREPRISE_H_INCLUDED

#include <string>
#include <vector>
#include "Personnel.h"

using namespace std;

class Entreprise
{
public:
    Entreprise(vector<string>);
    string get_nom() const;
    string get_slogan() const;
    string get_nomLogo() const;
    void addPers(Personnel);
    vector<Personnel> get_vecPersEnt() const;

private:
    vector<Personnel> vecPersEnt;
    string nom;
    string slogan;
    string nomLogo;
};

void entrepriseAssign(vector<Entreprise> &ent, vector<Personnel> &pers);

#endif // ENTREPRISE_H_INCLUDED
