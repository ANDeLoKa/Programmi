#include <iostream>
//using namespace std;

double media_ponderata(double, int, int, int);

int main() {
    
    double media_esistente = 0.0; int crediti_tot = 0, voto = 0, crediti = 0;
    std::cout<<"Inserisci la media esistente: ";
    std::cin>>media_esistente;
    std::cout<<"Inserisci i crediti totali acquisiti: ";
    std::cin>>crediti_tot;
    std::cout<<"Inserisci il nuovo voto: ";
    std::cin>>voto;
    std::cout<<"Inserisci i crediti del nuovo voto: ";
    std::cin>>crediti;

    std::cout<<"La media ponderata e': "<<media_ponderata(media_esistente, crediti_tot, voto, crediti)<<std::endl;
    return 0;
}

double media_ponderata(double m_esistente, int cr_tot, int voto, int cr) {
    return (m_esistente*(cr_tot) + (voto*cr)) / (cr_tot + cr);
}