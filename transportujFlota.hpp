#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    {
    if (towar == 0) {
        return 0; // Nie tworzymy żadnego statku, gdy towar = 0
    }

    Stocznia stocznia;
    unsigned int sumaPrzetransportowanegoTowaru = 0;
    unsigned int liczbaZaglowcow = 0;

    while (sumaPrzetransportowanegoTowaru < towar) {
        Statek* statek = stocznia(); // Tworzenie losowego statku
        unsigned int przetransportowanyTowar = statek->transportuj();
        sumaPrzetransportowanegoTowaru += przetransportowanyTowar;

        // Sprawdzenie, czy stworzony statek był żaglowcem
        if (dynamic_cast<Zaglowiec*>(statek) != nullptr) {
            ++liczbaZaglowcow;
        }

        delete statek; // Usuwanie stworzonego statku
    }

    return liczbaZaglowcow;
}
    return 0;
}
