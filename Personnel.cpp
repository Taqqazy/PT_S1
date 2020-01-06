#include "Personnel.h"
#include "lineToVec.h"

Personnel::Personnel(int i, vector<string> vec)
{
    num=i;
    login=vec[0];
    nom=normalisation(vec[1]);
    prenom=normalisation(vec[2]);
    job=vec[3];
    firm=vec[4];
    image=stoi(vec[5].c_str());
}

string Personnel::get_login() const
{
    return login;
}

string Personnel::get_nom() const
{
    return nom;
}

bool operator<(Personnel const &a, Personnel const &b)
{
    if( a.get_nom() < b.get_nom() )
        return true;
    else return false;
}
