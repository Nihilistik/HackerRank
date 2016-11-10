
#include <cstdlib>
#include <cmath>
#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <istream>
#include <sstream>
#include <cstring>

using namespace std;

void conversion(string);

/*
 *
 */
int main(int argc, char** argv) {
    string ampm;
    cin >> ampm;
    conversion(ampm);
    return 0;

}

void conversion(string ampm){
    string hh = "", mm = "", ss = "";
    int ihh = 0;
    bool isPm = false;
    vector<string> tmp;

    std::istringstream iss(ampm);

    for(string token; getline(iss, token, ':');){
        tmp.push_back(token);
    }

    for(vector<string>::reverse_iterator it = tmp.rbegin(); it != tmp.rend(); ++it){

        if((tmp.size() - 1) == (tmp.size() - 1 - (it - tmp.rbegin()))){
            string ops = "";
            ss = (*it).substr(0, 2);
            ops = (*it).substr(2, 2);
            if(ops == "PM"){
                isPm = true;
            }
        }else{
            if(mm == ""){
                mm = *it;
            }else{
                hh = *it;
            }
        }
    }

    if(isPm){
        ihh = atoi(hh.c_str());
        if(ihh < 12){
            ihh += 12;
            if(ihh == 24){
                hh = "00";
            }else{
                stringstream ss;
                ss << ihh;
                hh = ss.str();
            }
        }
    }else{
        if(strcmp(hh.c_str(), "12") == 0){
            hh = "00";
        }
    }

    cout << hh << ":" << mm << ":" << ss << endl;

}