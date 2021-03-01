#include <iostream>
using namespace std;
struct commands_n {
    string title;
    string city;
    int number_of_players;
    int points;
};

int main() {
    setlocale(LC_ALL, "Russian");
    commands_n commands[10];

    for (int i = 1; i <= 10; i++) {
        commands[i].points = 0;
    }

    commands[1].title = "���������";
    commands[1].city = "Krasnodar";
    commands[1].number_of_players = 42;
    commands[1].points = 8;

    commands[2].title = "�������";
    commands[2].city = "Moscow";
    commands[2].number_of_players = 65;
    commands[2].points = 17;

    commands[3].title = "�����";
    commands[3].city = "Perm";
    commands[3].number_of_players = 34;
    commands[3].points = 14;

    commands[4].title = " �����";
    commands[4].city = "Saint-Petersburg";
    commands[4].number_of_players = 89;
    commands[4].points = 35;

    commands[5].title = "������";
    commands[5].city = "Rostov_on_Don";
    commands[5].number_of_players = 72;
    commands[5].points = 34;

    commands[6].title = "������";
    commands[6].city = "Moscow";
    commands[6].number_of_players = 63;
    commands[6].points = 16;

    for (int i = 1; i <= 10; i++) {
        if (commands[i].points > 0) {
            cout << i << ")";
            cout << "��������: " << commands[i].title << endl;
            cout << "�����: " << commands[i].city << endl;
            cout << "������: " << commands[i].number_of_players << endl;
            cout << "����: " << commands[i].points << endl << endl;

        }
    }
    int ptlim = 0;
    cout << "������� ����������� ���������� �����. " << endl;
    cin >> ptlim;
    for (int i = 1; i <= 10; i++) {
        if (commands[i].points < ptlim) {
            commands[i].points = 0;
        }
    }
    int G = 0;
    for (int i = 1; i <= 9; i++) {
        if (commands[i].points == 0) {
            G = i;
            while ((commands[G].points == 0) && (G < 9)) {
                G++;
            }
            commands[i].title = commands[G].title;
            commands[i].city = commands[G].city;
            commands[i].number_of_players = commands[G].number_of_players;
            commands[i].points = commands[G].points;
            commands[G].number_of_players = 0;
        }
    }
    cout << "������ ������ ��������������� �� ���������� �����.: " << endl;
    for (int i = 1; i <= 10; i++) {
        if (commands[i].points > 0) {
            cout << i << ")";
            cout << "��������: " << commands[i].title << endl;
            cout << "�����: " << commands[i].city << endl;
            cout << "������: " << commands[i].number_of_players << endl;
            cout << "����: " << commands[i].points << endl << endl;
            G = 0;

        }
    }
    cout << "������� ������ �� ����� �������: " << endl;
    for (int i = G; i < G + 2; i++) {

        cout << "��������: ";
        cin >> commands[i].title;

        cout << "�����: ";
        cin >> commands[i].city;

        cout << "������: ";
        cin >> commands[i].number_of_players;

        cout << "����: ";
        cin >> commands[i].points;
        cout << endl;
    }
    cout << "���������� ������ ������: " << endl;
    for (int i = 1; i <= 10; i++) {
        if ((commands[i].points > 0) && (commands[i].number_of_players > 0)) {
            cout << i << ")";
            cout << "��������: " << commands[i].title << endl;
            cout << "�����: " << commands[i].city << endl;
            cout << "������: " << commands[i].number_of_players << endl;
            cout << "����: " << commands[i].points << endl << endl;
            G++;
        }
    }
    return 0;
}
