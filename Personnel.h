#ifndef PERSONNEL_H_INCLUDED
#define PERSONNEL_H_INCLUDED
#include <vector>
#include <string>
#include <cstring>

using namespace std;

class Personnel
{
public:
    Personnel(int, vector<string>);
    string get_login() const;
    string get_nom() const;

private:
    int num;
    string login;
    string nom;
    string prenom;
    string job;
    string firm;
    string image;
};

bool operator<(Personnel const&, Personnel const&);

#endif // PERSONNEL_H_INCLUDED
