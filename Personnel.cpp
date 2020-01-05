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

string Personnel::get_login()
{
    return login;
}
