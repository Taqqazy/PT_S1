#include "lineToVec.h"

vector<string> lineToVec(const string &ligne) {
    vector<string> vectemp;
    int i=0;
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
