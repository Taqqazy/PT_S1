#include <cstdlib>
#include "misc.h"
#include "htmlSyntaxe.h"
#include "Personnel.h"
#include <algorithm>

using namespace std;

int main()
{
	// read file
	string csv_filename = "src/perso.csv";

	ifstream csv(csv_filename);
	if(!csv.is_open())
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
	int i=0;
	while(getline(csv, line))
	{
        vecPers.push_back(Personnel(i, lineToVec(line)));
        cout << vecPers[i].get_login() << endl;
        i++;
	}

	sort(vecPers.begin(), vecPers.end());

	for(int i=0; i<vecPers.size(); i++)
    {
        cout << "tri : " << vecPers[i].get_nom() << endl;
    }

	html << "   </body>" << endl;
	html << "</html>";
}

