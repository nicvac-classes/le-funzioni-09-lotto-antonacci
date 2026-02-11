#include <iostream>
using namespace std;

int main() {
    int k, n, w;

    n = 5;
    int g[n], e[n];

    visualizzamenu();
    do {
        cin >> k;
        if (k == 1) {
            gioca(g, n);
        }
        if (k == 2) {
            estrazionenumeri(e, n);
        }
        if (k == 3) {
            w = controllavincita(e, g, n);
            if (w == 0) {
                cout << "Non hai vinto " << endl;
            }
            if (w == 1) {
                cout << "Un numero è stato estratto" << endl;
            }
            if (w == 2) {
                cout << "2 numeri estyratti" << endl;
            }
            if (w == 3) {
                cout << "3  numeri estyratti" << endl;
            }
            if (w == 4) {
                cout << "4  numeri estyratti" << endl;
            }
            if (w == 5) {
                cout << "5 numeri estyratti" << endl;
            }
        }
    } while (k != 0);
    return 0;
}

int controllavincita(int e[], int g[], int n) {
    int w, i;

    w = 0;
    i = 0;
    while (i < n) {
        if (e[i] == g[i]) {
            w = w + 1;
        }
        i = i + 1;
    }
    
    return w;
}

void estrazionenumeri(int e[], int n) {
    int i;

    i = 0;
    while (i < n) {
        e[i] = rand() % (n * 10);
        cout << e[i] << endl;
        i = i + 1;
    }
}

void gioca(int g[], int n) {
    int i, p;

    i = 0;
    cout << "Fai 5 puntate" << endl;
    while (i < n) {
        cout << 1 + i << endl;
        cin >> p;
        g[i] = p;
        i = i + 1;
    }
}

void visualizzamenu() {
    cout << "Se scivi 1 visualizzi la giocata, se scrivi 2 visualizzi i numeri, se scrivi 3 visualizzi la vincita" << endl;
}

