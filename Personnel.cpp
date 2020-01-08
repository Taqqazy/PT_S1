#include "Personnel.h"
#include "misc.h"

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

string Personnel::get_prenom() const
{
    return prenom;
}

string Personnel::get_job() const
{
    return job;
}

string Personnel::get_firm() const
{
    return firm;
}

bool Personnel::get_image() const
{
    return image;
}


bool operator<(Personnel const &a, Personnel const &b)
{
    if( a.get_nom() < b.get_nom() )
        return true;
    else return false;
}

ostream& operator<<(ostream& os, const Personnel& pers)
{
    if(pers.get_image())
    {
        os<< "      <img src=" << "\"src\/images\/"+pers.get_login()+".jpg\" alt=\"Photo de " << pers.get_nom() << " " << pers.get_prenom() << "\">" << endl;
    }
    os<< "      <p>" << pers.get_nom() << " " <<pers.get_prenom() << "<br\>" << pers.get_job() << "<p>" << endl;
    return os;
}
