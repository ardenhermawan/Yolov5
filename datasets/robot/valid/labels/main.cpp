#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void theFix(string nama)
{
    string s;
    ifstream file(nama);

    getline (file, s);
    file.close();

    s[0] = '0';

    ofstream file2(nama);

    file2 << s;
}

int main(int argc, char const *argv[])
{
    string temp = "";
    string nama1, nama2, nama3, nama4, nama5, nama6, nama7, nama8, txt;

    txt = ".txt";
    nama1 = "bluerobotingoal_0";
    nama2 = "bluerobotleftgoal_0";
    nama3 = "bluerobotnobst_0";
    nama4 = "bluerobotwobst_0";
    nama5 = "redrobotingoal_0";
    nama6 = "redrobotleftgoal_0";
    nama7 = "redrobotnobst4_0";
    nama8 = "redrobotwobst4_0";

    for(int i = 1; i <= 60; i++)
    {
        if (i<10)
        {   
            temp += nama1 + "00";
            temp += to_string(i) + txt;
            theFix(temp);
            temp = "";
        }
        else if (i < 100)
        {
            temp += nama1 + "0";
            temp += to_string(i) + txt;
            theFix(temp);
            temp = "";
        }
        else if (i < 1000)
        {
            temp += nama1;
            temp += to_string(i) + txt;
            theFix(temp);
            temp = "";
        }
    }

    for(int i = 1; i <= 60; i++)
    {
        if (i<10)
        {   
            temp += nama2 + "00";
            temp += to_string(i) + txt;
            theFix(temp);
            temp = "";
        }
        else if (i < 100)
        {
            temp += nama2 + "0";
            temp += to_string(i);
            temp += txt;
            theFix(temp);
            temp = "";
        }
        else if (i < 1000)
        {
            temp += nama2;
            temp += to_string(i);
            temp += txt;
            theFix(temp);
            temp = "";
        }
    }
    for(int i = 1; i <= 136; i++)
    {
        if (i<10)
        {   
            temp += nama3 + "00";
            temp += to_string(i);
            temp += txt;
            theFix(temp);
            temp = "";
        }
        else if (i < 100)
        {
            temp += nama3 + "0";
            temp += to_string(i);
            temp += txt;
            theFix(temp);
            temp = "";
        }
        else if (i < 1000)
        {
            temp += nama3;
            temp += to_string(i);
            temp += txt;
            theFix(temp);
            temp = "";
        }
    }

    for(int i = 1; i <= 137; i++)
    {
        if (i<10)
        {   
            temp += nama4 + "00";
            temp += to_string(i);
            temp += txt;
            theFix(temp);
            temp = "";
        }
        else if (i < 100)
        {
            temp += nama4 + "0";
            temp += to_string(i);
            temp += txt;
            theFix(temp);
            temp = "";
        }
        else if (i < 1000)
        {
            temp += nama4;
            temp += to_string(i);
            temp += txt;
            theFix(temp);
            temp = "";
        }
    }
    for(int i = 1; i <= 76; i++)
    {
        if (i<10)
        {   
            temp += nama5 + "00";
            temp += to_string(i);
            temp += txt;
            theFix(temp);
            temp = "";
        }
        else if (i < 100)
        {
            temp += nama5 + "0";
            temp += to_string(i);
            temp += txt;
            theFix(temp);
            temp = "";
        }
        else if (i < 1000)
        {
            temp += nama5;
            temp += to_string(i);
            temp += txt;
            theFix(temp);
            temp = "";
        }
    }
    for(int i = 1; i <= 61; i++)
    {
        if (i<10)
        {   
            temp += nama6 + "00";
            temp += to_string(i);
            temp += txt;
            theFix(temp);
            temp = "";
        }
        else if (i < 100)
        {
            temp += nama6 + "0";
            temp += to_string(i);
            temp += txt;
            theFix(temp);
            temp = "";
        }
        else if (i < 1000)
        {
            temp += nama6;
            temp += to_string(i);
            temp += txt;
            theFix(temp);
            temp = "";
        }
    }
    for(int i = 1; i <= 97; i++)
    {
        if (i<10)
        {   
            temp += nama7 + "00";
            temp += to_string(i);
            temp += txt;
            theFix(temp);
            temp = "";
        }
        else if (i < 100)
        {
            temp += nama7 + "0";
            temp += to_string(i);
            temp += txt;
            theFix(temp);
            temp = "";
        }
        else if (i < 1000)
        {
            temp += nama7;
            temp += to_string(i);
            temp += txt;
            theFix(temp);
            temp = "";
        }
    }
    for(int i = 1; i <= 223; i++)
    {
        if (i<10)
        {   
            temp += nama8 + "00";
            temp += to_string(i);
            temp += txt;
            theFix(temp);
            temp = "";
        }
        else if (i < 100)
        {
            temp += nama8 + "0";
            temp += to_string(i);
            temp += txt;
            theFix(temp);
            temp = "";
        }
        else if (i < 1000)
        {
            temp += nama8;
            temp += to_string(i);
            temp += txt;
            theFix(temp);
            temp = "";
        }
    }
    return 0;
}
