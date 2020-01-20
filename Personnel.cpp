#include "Personnel.h"
#include "misc.h"

Personnel::Personnel(vector<string> vec)
//prend en parametres un vecteur contenant les informations de Personnel
//constructeur qui attribue pour chacune des variables de Personnel les valeurs du vecteur
{
    login=vec[0];
    nom=normalisation(vec[1]);
    prenom=normalisation(vec[2]);
    job=vec[3];
    firm=vec[4];
    image=stoi(vec[5].c_str());
}

string Personnel::get_login() const
//fonction qui retourne sous forme de string le login de chaque objet de classe Personnel
{
    return login;
}

string Personnel::get_nom() const
//fonction qui retourne sous forme de string le nom de chaque objet de classe Personnel
{
    return nom;
}

string Personnel::get_prenom() const
//fonction qui retourne sous forme de string le prenom de chaque objet de classe Personnel
{
    return prenom;
}

string Personnel::get_job() const
//fonction qui retourne sous forme de string le travail de chaque objet de classe Personnel
{
    return job;
}

string Personnel::get_firm() const
//fonction qui retourne sous forme de string l'entreprise de chaque objet de classe Personnel
{
    return firm;
}

bool Personnel::get_image() const
//fonction qui retourne sous forme de booleen si chaque objet de classe Personnel a bien une photo
{
    return image;
}


bool operator<(Personnel const &a, Personnel const &b)
//prend en parametres deux Personnel
//surcharge d'operateurs pour pouvoir comparer deux Personnel et dire lequel est le plus grand en fonction de leur nom (ordre alphabetique)
{
    if( a.get_nom() < b.get_nom() )
        return true;
    else return false;
}

ostream& operator<<(ostream& os, const Personnel& pers)
//prend en parametres le flux de sortie et un objet de type Personnel
//surcharge d'operateurs dans le but de pouvoir retourner dans le flux de sortie un Personnel syntaxé en HTML
//format de sortie : flux de sortie ostream
{
    os << "      <div class=\"pers\">" << endl;
    if(pers.get_image())
    {
        os<< "        <img class=\"photo\" src=\"src/images/"+pers.get_login()+".jpg\" alt=\"Photo de " << pers.get_nom() << " " << pers.get_prenom() << "\"\>" << endl;
    }
    else {
        os << "        <div class=\"no_photo\"><p>?</p></div>" << endl;
    }
    os << "        <p>" << pers.get_nom() << " " <<pers.get_prenom() << "<br>" << pers.get_job() << "</p>" << endl;
    os << "      </div>" << endl;
    return os;
}
