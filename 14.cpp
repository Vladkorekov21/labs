#include <iostream>
#include <string>
using namespace std;
int BMura(string st, string ct)
{
    int stl, ctl;
    stl = st.size();    
    ctl = ct.size();   
    if (stl != 0 && ctl != 0 && stl >= ctl)   
    {
        int i, p;
        int b[256];    
        for (i = 0; i < 256; i++)
        {
            b[i] = ctl;    
        }
        for (i = ctl - 2; i >= 0; i--)  
        {
            if (b[int(unsigned char(ct[i]))] == ctl)    
            {
                b[int(unsigned char(ct[i]))] = ctl - i - 1; 
            }
        }
        p = ctl - 1; 
        while (p < stl) 
        {
            if (ct[ctl - 1] != st[p])   
            {
                p += b[int((unsigned char)st[p])];  
            }
            else    
            {
                for (i = ctl - 1; i >= 0; i--)  
                {
                    if (ct[i] != st[p - ctl + i + 1])   
                    {
                        p += b[int((unsigned char)st[p])];    
                        break;  
                    }
                    else if (i == 0) 
                    {
                        return p - ctl + 1; 
                    }
                }
            }
        }
    }
    return -1; 
}

  
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Строка: Персональные данные" << endl;
    cout << "Шаблон: данные" << endl;
    cout << "Позиция: " << BMura("Персональные данные", "данные") << endl << endl;

    cout << "Строка: Метадата" << endl;
    cout << "Шаблон: дата" << endl;
    cout << "Позиция: " << BMura("Метадата", "дата") << endl << endl;

    cout << "Строка: Персональные данные" << endl;
    cout << "Шаблон: дата" << endl;
    cout << "Позиция: " << BMura("Персональные данные", "дата") << endl << endl;
}

