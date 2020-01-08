#ifndef PERSONNEL_H_INCLUDED
#define PERSONNEL_H_INCLUDED
#include <vector>
#include <string>
#include <cstring>
#include <iostream>

using namespace std;

class Personnel
{
public:
    Personnel(vector<string>);
    string get_login() const;
    string get_nom() const;
    string get_prenom() const;
    string get_job() const;
    string get_firm() const;
    bool get_image() const;

private:
    int num;
    string login;
    string nom;
    string prenom;
    string job;
    string firm;
    bool image;
};

bool operator<(Personnel const&, Personnel const&);
ostream& operator<<(ostream& os, const Personnel& pers);

#endif // PERSONNEL_H_INCLUDED
