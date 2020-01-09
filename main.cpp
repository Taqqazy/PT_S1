#include <cstdlib>
#include "misc.h"
#include "htmlSyntaxe.h"
#include "Personnel.h"
#include "Entreprise.h"
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

	ofstream html(html_filename);
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

	vector<Entreprise> vecEnt;
	while(getline(ent, line))
    {
        vecEnt.push_back(Entreprise(lineToVec(line)));
    }

    entrepriseAssign(vecEnt, vecPers);
    for(int i=0; i<vecEnt.size(); i++)
    {
        cout << vecEnt[i].get_vecPersEnt().size() << endl;
    }


	for(int i=0; i<vecPers.size(); i++)
    {
        html << vecPers[i];
    }

	html << "   </body>" << endl;
	html << "</html>";
}

