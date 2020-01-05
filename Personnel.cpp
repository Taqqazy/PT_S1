#include "Personnel.h"

Personnel::Personnel(int i, vector<string> vec)
{
    num=i;
    login=vec[0];
    nom=vec[1];
    prenom=vec[2];
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
    char temp1[20], temp2[20];
    strcpy(temp1, a.get_nom().c_str());
    strcpy(temp2, b.get_nom().c_str());
    if( strcmp(temp1, temp2) < 0 )
        return false;
    else return true;
}
