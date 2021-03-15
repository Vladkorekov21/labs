#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void copy();
void count_maxletters_A();

int main()
{
    system("chcp 1251 > nul");
    setlocale(LC_ALL, "rus");

    int close = 0, click;
    do
    {
        cout << endl;
        cout << "\t×òî âû õîòèòå ñäåëàòü?" << endl;
        cout << "1.Ñêîïèðîâàòü èç ôàéëà F1 â ôàéë F2 âñå ñòðîêè, íà÷èíàþùèåñÿ íà áóêâó «À» è ðàñïîëîæåííûå ìåæäó ñòðîêàìè ñ íîìåðàìè N1 è N2" << endl;
        cout << "2.Îïðåäåëèòü íîìåð òîé ñòðîêè, â êîòîðîé áîëüøå âñåãî ñîãëàñíûõ áóêâ, ôàéëà F2" << endl;
        cout << "3.Âûõîä" << endl;
        cout << endl;
        cin >> click;

        switch (click)
        {
        case 1:
            cout << "Ââåäèòå íîìåðà ñòðîêè N1 è N2: " << endl;

            copy();

            break;
        case 2:
            count_maxletters_A();
            break;

        case 3:
            cout << endl;
            cout << "Ïðîãðàììà çàâåðøèëà ñâîþ ðàáîòó!";
            cout << endl;
            close = 1;
            break;
        default:
            break;
        }

    } while (close != 1);
    return 0;
}

void copy()
{
    ifstream file1("F1.txt");
    ofstream file2("F2.txt");

    string str;
    //char S[50];

    int N1, N2;
    bool flag = 0;
    int countStr = 0;
    cin >> N1 >> N2;
    if (!file1.is_open())
    {
        cout << " Îøèáêà îòêðûòèÿ ôàéëà !" << endl;
    }
    else
    {
        cout << "Ôàéë îòêðûò!" << endl;

        for (int i = 0; !file1.eof(); i++)
        {
            getline(file1, str);

            countStr++;

            if (countStr >= N1 && countStr <= N2) {
                for (int i = 0; i < str.length(); i++)
                {
                    if ((str[0] == 'À'))
                        flag = true;
                }
            }
            if (flag)
                file2 << str << '\n';

            flag = false;

        }
        cout << countStr;

    }

    file1.close();
    file2.close();

}

void count_maxletters_A()
{
    ifstream newf("F2.txt");

    string str;

    int countStr = 0;
    int count_A = 0;
    int max_count_A = 0;
    int numStr = 0;

    if (!newf.is_open())
    {
        cout << " Îøèáêà îòêðûòèÿ ôàéëà !" << endl;
    }
    else
    {
        cout << "Ôàéë îòêðûò!" << endl;

        for (int i = 0; !newf.eof(); i++)
        {
            count_A = 0;
            getline(newf, str);

            countStr++;

            for (int i = 0; i < str.length(); i++)
            {
                if (str[i] == 'Á','Â','Ã','Ä','Æ','Ç','Ê','Ë','Ì','Í','Ï','Ð','Ñ','Ò','Ô','Õ','Ö','×','Ø','Ù','Ú','Ü')
                    count_A++;
            }
            if (count_A > max_count_A)
            {
                max_count_A = count_A;
                numStr = countStr;
            }
        }
        cout << numStr;
    }

    newf.close();

}
