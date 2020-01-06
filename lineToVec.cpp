#include "lineToVec.h"

vector<string> lineToVec(const string &ligne) {
    vector<string> vectemp;
    unsigned int i=0;
    for(int y=0;y<6;y++) {
        string strtemp="";
        while(ligne[i]!='|' && i<ligne.size()) {
            strtemp+=ligne[i];
            i++;
        }
        i++;
        vectemp.push_back(strtemp);
    }
    return vectemp;
}

string normalisation(string &s)
{
    s[0]=toupper(s[0]);
    if(s.length()>1)
    {
        for(unsigned int i=1; i<s.length(); i++)
        {
            s[i]=tolower(s[i]);
        }
    }
    return s;
}
