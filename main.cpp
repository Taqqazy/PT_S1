#include <cstdlib>
#include "misc.h"
#include "htmlSyntaxe.h"
#include "Personnel.h"
#include "Entreprise.h"
#include "makeCss.h"
#include <algorithm>

using namespace std;

int main()
{
    // read file
    string csv_filename = "src/perso.csv", ent_filename= "src/entreprise.csv";

    ifstream csv(csv_filename), ent(ent_filename);
    if(!csv.is_open() || !ent.is_open())
    {
        cout << "csv file not found" << endl;
        exit(1);
    }

    string html_filename = "output.html";
    string css_filename = "style2.css";
    ofstream html(html_filename);
    ofstream css(css_filename);
    if(!html.is_open())
    {
        cout << "could not open html file" << endl;
        exit(1);
    }

    htmlSyntaxe(html);
    string line;
    vector<Personnel> vecPers;
    while(getline(csv, line))
    {
        vecPers.push_back(Personnel(lineToVec(line)));
    }
    sort(vecPers.begin(), vecPers.end());


    bool mode;
    cout << "Quel mode voulez vous utiliser ? 0=Personnel, 1=Entreprise" << endl;
    cin >> mode;

    makeCss(css, mode);
    if(!mode)
    {
        for(int i=0; i<vecPers.size(); i++)
        {
            html << vecPers[i];
        }
    }
    else
    {
        vector<Entreprise> vecEnt;
        while(getline(ent, line))
        {
            vecEnt.push_back(Entreprise(lineToVec(line)));
        }
        entrepriseAssign(vecEnt, vecPers);

        for(unsigned int i=0; i<vecEnt.size(); i++)
        {
            html << vecEnt[i] << endl;
        }
    }

    html << "   </body>" << endl;
    html << "</html>";
}

