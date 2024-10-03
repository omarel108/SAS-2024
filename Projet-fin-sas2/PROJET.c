#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//1. Structures de Données
typedef struct {
    char nom[50];
    char prenom[50];
    char telephone[15];
    int age;
    char statut[20]; // validé, reporté, annulé, traité
    int reference;    // référence unique
    char date_reservation[11]; // format YYYY-MM-DD
} Reservation;

Reservation reservations[100]; // tableau pour stocker jusqu'à 100 réservations
int nombre_reservations = 0;

//2. Génération de Références Uniques
int generate_reference() {
    return nombre_reservations + 1; // simple incrémentation
}

//3. Insertion par Défaut

void ajouter_reservations_par_defaut() {
    strcpy(reservations[nombre_reservations].nom, "Omar");
    strcpy(reservations[nombre_reservations].prenom, "Alaoui");
    strcpy(reservations[nombre_reservations].telephone, "0612345678");
    reservations[nombre_reservations].age = 30;
    strcpy(reservations[nombre_reservations].statut, "valide");
    reservations[nombre_reservations].reference = generate_reference();
    strcpy(reservations[nombre_reservations].date_reservation, "2024-10-05");
    nombre_reservations++;

    // Ajout des 9 autres réservations par défaut
    strcpy(reservations[nombre_reservations].nom, "Amine");
    strcpy(reservations[nombre_reservations].prenom, "Khal");
    strcpy(reservations[nombre_reservations].telephone, "0623456789");
    reservations[nombre_reservations].age = 25;
    strcpy(reservations[nombre_reservations].statut, "reporte");
    reservations[nombre_reservations].reference = generate_reference();
    strcpy(reservations[nombre_reservations].date_reservation, "2024-10-06");
    nombre_reservations++;

    strcpy(reservations[nombre_reservations].nom, "Brahim");
    strcpy(reservations[nombre_reservations].prenom, "Alou");
    strcpy(reservations[nombre_reservations].telephone, "0634567890");
    reservations[nombre_reservations].age = 40;
    strcpy(reservations[nombre_reservations].statut, "annule");
    reservations[nombre_reservations].reference = generate_reference();
    strcpy(reservations[nombre_reservations].date_reservation, "2024-10-07");
    nombre_reservations++;

    strcpy(reservations[nombre_reservations].nom, "Samir");
    strcpy(reservations[nombre_reservations].prenom, "Mabrok");
    strcpy(reservations[nombre_reservations].telephone, "0645678901");
    reservations[nombre_reservations].age = 35;
    strcpy(reservations[nombre_reservations].statut, "traite");
    reservations[nombre_reservations].reference = generate_reference();
    strcpy(reservations[nombre_reservations].date_reservation, "2024-10-08");
    nombre_reservations++;

    strcpy(reservations[nombre_reservations].nom, "Samia");
    strcpy(reservations[nombre_reservations].prenom, "Sfro");
    strcpy(reservations[nombre_reservations].telephone, "0656789012");
    reservations[nombre_reservations].age = 22;
    strcpy(reservations[nombre_reservations].statut, "valide");
    reservations[nombre_reservations].reference = generate_reference();
    strcpy(reservations[nombre_reservations].date_reservation, "2024-10-09");
    nombre_reservations++;

    strcpy(reservations[nombre_reservations].nom, "Morouane");
    strcpy(reservations[nombre_reservations].prenom, "Drissi");
    strcpy(reservations[nombre_reservations].telephone, "0667890123");
    reservations[nombre_reservations].age = 28;
    strcpy(reservations[nombre_reservations].statut, "reporte");
    reservations[nombre_reservations].reference = generate_reference();
    strcpy(reservations[nombre_reservations].date_reservation, "2024-10-10");
    nombre_reservations++;

    strcpy(reservations[nombre_reservations].nom, "Karim");
    strcpy(reservations[nombre_reservations].prenom, "Ayat");
    strcpy(reservations[nombre_reservations].telephone, "0678901234");
    reservations[nombre_reservations].age = 31;
    strcpy(reservations[nombre_reservations].statut, "annule");
    reservations[nombre_reservations].reference = generate_reference();
    strcpy(reservations[nombre_reservations].date_reservation, "2024-10-11");
    nombre_reservations++;

    strcpy(reservations[nombre_reservations].nom, "Rabiaa");
    strcpy(reservations[nombre_reservations].prenom, "Sekali");
    strcpy(reservations[nombre_reservations].telephone, "0689012345");
    reservations[nombre_reservations].age = 29;
    strcpy(reservations[nombre_reservations].statut, "traite");
    reservations[nombre_reservations].reference = generate_reference();
    strcpy(reservations[nombre_reservations].date_reservation, "2024-10-12");
    nombre_reservations++;

    strcpy(reservations[nombre_reservations].nom, "Rafik");
    strcpy(reservations[nombre_reservations].prenom, "Rochdi");
    strcpy(reservations[nombre_reservations].telephone, "0690123456");
    reservations[nombre_reservations].age = 26;
    strcpy(reservations[nombre_reservations].statut, "valide");
    reservations[nombre_reservations].reference = generate_reference();
    strcpy(reservations[nombre_reservations].date_reservation, "2024-10-13");
    nombre_reservations++;

    strcpy(reservations[nombre_reservations].nom, "Farid");
    strcpy(reservations[nombre_reservations].prenom, "Samia");
    strcpy(reservations[nombre_reservations].telephone, "0701234567");
    reservations[nombre_reservations].age = 24;
    strcpy(reservations[nombre_reservations].statut, "reporte");
    reservations[nombre_reservations].reference = generate_reference();
    strcpy(reservations[nombre_reservations].date_reservation, "2024-10-14");
    nombre_reservations++;
}





//4. Ajouter une Réservation
void ajouter_reservation() {
    Reservation res;
    printf("Nom: ");
    scanf("%s", res.nom);
    printf("Prenom: ");
    scanf("%s", res.prenom);
    printf("Telephone: ");
    scanf("%s", res.telephone);
    printf("age: ");
    scanf("%d", &res.age);
    printf("Statut (valide, reporte, annule, traite): ");
    scanf("%s", res.statut);
    printf("Date de reservation (YYYY-MM-DD): ");
    scanf("%s", res.date_reservation);

    res.reference = generate_reference();
    reservations[nombre_reservations++] = res;
}

//5. Modifier ou Supprimer une Réservation
void modifier_reservation(int reference) {
    for (int i = 0; i < nombre_reservations; i++) {
        if (reservations[i].reference == reference) {
            printf("Nouveau Nom: ");
            char input[50];
            scanf("%s", input);
            if (strlen(input) > 0)
                strcpy(reservations[i].nom, input);


            printf("Nouveau Prenom: ");
            scanf("%s", input);
            if (strlen(input) > 0)
                strcpy(reservations[i].prenom, input);


            printf("Nouveau Telephone: ");
            scanf("%s", input);
            if (strlen(input) > 0)
                strcpy(reservations[i].telephone, input);


            printf("Nouvel age: ");
            int age;
            scanf("%d", &age);
            if (age > 0) reservations[i].age = age;


            printf("Nouveau Statut: ");
            scanf("%s", input);
            if (strlen(input) > 0)
                strcpy(reservations[i].statut, input);

            printf("Nouvelle Date de reservation (YYYY-MM-DD): ");
            scanf("%s", input);
            if (strlen(input) > 0) strcpy(reservations[i].date_reservation, input);

            return;
        }
    }
    printf("Réservation non trouvee.\n");
}


void supprimer_reservation(int reference) {
    for (int i = 0; i < nombre_reservations; i++) {
        if (reservations[i].reference == reference) {
            for (int j = i; j < nombre_reservations - 1; j++) {
                reservations[j] = reservations[j + 1];
            }
            nombre_reservations--;
            printf("Reservation supprimee.\n");
            return;
        }
    }
    printf("Reservation non trouvee.\n");
}

//6. Afficher les Détails d'une Réservation
void afficher_details_reservation(int reference) {
    for (int i = 0; i < nombre_reservations; i++) {
        if (reservations[i].reference == reference) {
            printf("Nom: %s, Prenom: %s, Teléphone: %s, Age: %d, Statut: %s, Date: %s\n",
                   reservations[i].nom, reservations[i].prenom, reservations[i].telephone,
                   reservations[i].age, reservations[i].statut, reservations[i].date_reservation);
            return;
        }
    }
    printf("Reservation non trouvee.\n");
}

//7. Tri des Réservations (Tri à Bulles)
void trier_reservations_par_nom() {
    for (int i = 0; i < nombre_reservations - 1; i++) {
        for (int j = 0; j < nombre_reservations - i - 1; j++) {
            if (strcmp(reservations[j].nom, reservations[j + 1].nom) > 0) {
                Reservation temp = reservations[j];
                reservations[j] = reservations[j + 1];
                reservations[j + 1] = temp;
            }
        }
    }
}

void trier_reservations_par_statut() {
    for (int i = 0; i < nombre_reservations - 1; i++) {
        for (int j = 0; j < nombre_reservations - i - 1; j++) {
            if (strcmp(reservations[j].statut, reservations[j + 1].statut) > 0) {
                Reservation temp = reservations[j];
                reservations[j] = reservations[j + 1];
                reservations[j + 1] = temp;
            }
        }
    }
}


//8. Recherche des Réservations (Recherche Séquentielle)
void rechercher_par_reference(int reference) {
    for (int i = 0; i < nombre_reservations; i++) {
        if (reservations[i].reference == reference) {
            afficher_details_reservation(reference);
            return;
        }
    }
    printf("Reservation non trouvee.\n");
}

void rechercher_par_nom(char* nom) {
    for (int i = 0; i < nombre_reservations; i++) {
        if (strcmp(reservations[i].nom, nom) == 0) {
            afficher_details_reservation(reservations[i].reference);
            return;
        }
    }
    printf("Reservation non trouvee.\n");
}


//9. Statistiques
float calculer_moyenne_age() {
    if (nombre_reservations == 0)
        return 0.0;
    int total_age = 0;
    for (int i = 0; i < nombre_reservations; i++) {
        total_age += reservations[i].age;
    }
    return (float)total_age / nombre_reservations;
}

void statistiques_par_tranche_age() {
    int tranche_0_18 = 0, tranche_19_35 = 0, tranche_36_plus = 0;
    for (int i = 0; i < nombre_reservations; i++) {
        if (reservations[i].age <= 18)
            tranche_0_18++;
        else if (reservations[i].age <= 35)
            tranche_19_35++;
        else
            tranche_36_plus++;
    }
    printf("Patients par tranche d'age : 0-18: %d, 19-35: %d, 36+: %d\n", tranche_0_18, tranche_19_35, tranche_36_plus);
}

void statistiques_par_statut() {
    int count_valide = 0, count_reporte = 0, count_annule = 0, count_traite = 0;
    for (int i = 0; i < nombre_reservations; i++) {
        if (strcmp(reservations[i].statut, "valide") == 0) count_valide++;
        else if (strcmp(reservations[i].statut, "reporte") == 0) count_reporte++;
        else if (strcmp(reservations[i].statut, "annule") == 0) count_annule++;
        else if (strcmp(reservations[i].statut, "traite") == 0) count_traite++;
    }
    printf("Statistiques par statut : valide: %d, reporte: %d, annule: %d, traite: %d\n",
           count_valide, count_reporte, count_annule, count_traite);
}


//10. Boucle Principale
void menu_principal() {
    ajouter_reservations_par_defaut(); // Ajout des réservations par défaut
    int choix; // Déclaration de la variable de choix
    do {
        printf("\nMenu :\n");
        printf("1. Ajouter une reservation\n");
        printf("2. Modifier une reservation\n");
        printf("3. Supprimer une reservation\n");
        printf("4. Afficher les details d'une reservation\n");
        printf("5. Trier les reservations par nom\n");
        printf("6. Trier les reservations par statut\n");
        printf("7. Rechercher une reservation\n");
        printf("8. Statistiques\n");
        printf("9. Quitter\n");

        printf("Choisissez une option : ");
        scanf("%d", &choix);

        if (choix == 1) {
            ajouter_reservation();
        } else if (choix == 2) {
            int reference;
            printf("Entrez la reference de la reservation a modifier : ");
            scanf("%d", &reference);
            modifier_reservation(reference);
        } else if (choix == 3) {
            int reference;
            printf("Entrez la reference de la reservation a supprimer : ");
            scanf("%d", &reference);
            supprimer_reservation(reference);
        } else if (choix == 4) {
            int reference;
            printf("Entrez la reference de la reservation a afficher : ");
            scanf("%d", &reference);
            afficher_details_reservation(reference);
        } else if (choix == 5) {
            trier_reservations_par_nom();
            printf("Reservations triees par nom.\n");
        } else if (choix == 6) {
            trier_reservations_par_statut();
            printf("Reservations triees par statut.\n");
        } else if (choix == 7) {
            printf("1. Rechercher par Reference\n");
            printf("2. Rechercher par Nom\n");
            int recherche_choix;
            printf("Choisissez une option : ");
            scanf("%d", &recherche_choix);
            if (recherche_choix == 1) {
                int reference;
                printf("Entrez la reference a rechercher : ");
                scanf("%d", &reference);
                rechercher_par_reference(reference);
            } else if (recherche_choix == 2) {
                char nom[50];
                printf("Entrez le nom a rechercher : ");
                scanf("%s", nom);
                rechercher_par_nom(nom);
            } else {
                printf("Choix invalide.\n");
            }
        } else if (choix == 8) {
            printf("Moyenne d'age: %.2f\n",
              calculer_moyenne_age());
              statistiques_par_tranche_age();
              statistiques_par_statut();
        } else if (choix == 9) {
            printf("Au revoir !\n");
        } else {
            printf("Choix invalide.\n");
        }
    } while (choix != 9); // Condition pour quitter
}
int main() {
    menu_principal();
    return 0;
}
