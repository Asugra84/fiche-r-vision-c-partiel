/*========================================================================================================================================
                                               LES NOMBRES PREMIERS A l'AIDE DE LA SPIRALE
   =======================================================================================================================================
*/

#include <iostream>
#include <cmath>

using namespace std;

const int N = 100; // Nombre maximum de nombres à afficher

// Fonction qui vérifie si un nombre est premier
bool estPremier(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int x = 0, y = 0, c = 1; // Position courante et compteur
    int dx = 1, dy = 0;      // Direction de déplacement

    // Boucle jusqu'à ce que N nombres aient été affichés
    while (c <= N)
    {
        // Affiche le nombre courant s'il est premier
        if (estPremier(c))
        {
            cout << c << " ";
        }

        // Calcul de la prochaine position
        if (x == y || (x < 0 && x == -y) || (x > 0 && x == 1 - y))
        {
            // Changement de direction
            int temp = dx;
            dx = -dy;
            dy = temp;
        }
        x += dx;
        y += dy;
        c++;
    }

    return 0;
}

/*========================================================================================================================================
                                               Coder UNE PHRASE avec la spirale de Wilhame
   =======================================================================================================================================
*/

#include <iostream>
#include <cmath>

using namespace std;

const int N = 26; // Nombre maximum de lettres à afficher

int main()
{
    int x = 0, y = 0, c = 0; // Position courante et compteur
    int dx = 1, dy = 0;      // Direction de déplacement

    // Tableau de lettres de la phrase à afficher
    char lettres[] = {'U', 'g', 'o', ' ', 'e', 't', ' ', 'L', 'y', 'e', 's', ' ', 's', 'o', 'n', 't', ' ', 'a', 'm', 'i', 's', ' ', 'd', 'e', 'p', 'u', 'i', 's'};

    // Boucle jusqu'à ce que N lettres aient été affichées
    while (c < N)
    {
        cout << lettres[c] << " "; // Affiche la lettre courante

        // Calcul de la prochaine position
        if (x == y || (x < 0 && x == -y) || (x > 0 && x == 1 - y))
        {
            // Changement de direction
            int temp = dx;
            dx = -dy;
            dy = temp;
        }
        x += dx;
        y += dy;
        c++;
    }

    return 0;
}

/*========================================================================================================================================
                                               Décoder UNE PHRASE avec la spirale de Wilhame
   =======================================================================================================================================
*/

#include <iostream>
#include <cmath>

using namespace std;

const int N = 26;  // Nombre maximum de lettres à afficher


int main()
{
    int x = 0, y = 0, c = 0; // Position courante et compteur
    int dx = 1, dy = 0;      // Direction de déplacement

    // Tableau de lettres de la phrase à afficher
    char lettres[N];

    // Boucle jusqu'à ce que N lettres aient été lues
    while (c < N)
    {
        cin >> lettres[c]; // Lit la lettre courante

        // Calcul de la prochaine position
        if (x == y || (x < 0 && x == -y) || (x > 0 && x == 1 - y))
        {
            // Changement de direction
            int temp = dx;
            dx = -dy;
            dy = temp;
        }
        x += dx;
        y += dy;
        c++;
    }

    // Affiche le message décodé
    for (int i = 0; i < N; i++)
    {
        cout << lettres[i];
    }

    return 0;
}
