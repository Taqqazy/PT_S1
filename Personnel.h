#ifndef PERSONNEL_H_INCLUDED
#define PERSONNEL_H_INCLUDED
#include <vector>
#include <string>

using namespace std;

class Personnel
{
public:
    Personnel(int, vector<string>);
    string get_login();

private:
    int num;
    string login;
    string nom;
    string prenom;
    string job;
    string firm;
    bool image;
};

#endif // PERSONNEL_H_INCLUDED
