#include <stdio.h>
#include <string.h>

typedef struct {
    char name[100];
    char phone[15];
    char email[100];
} Contact;

Contact contacts[100];
int contact_count = 0;

void addContact() {
    if (contact_count >= 100) {
        printf("Le carnet de contacts est plein\n");
        return;
    }

    printf("Entrez le nom : ");
    scanf(" %[^\n]", contacts[contact_count].name);

    printf("Entrez le numero de telephone : ");
    scanf(" %[^\n]", contacts[contact_count].phone);

    printf("Entrez l'adresse e-mail : ");
    scanf(" %[^\n]", contacts[contact_count].email);

    contact_count++;
    printf("Contact ajoute avec succes \n");
}

void displayContacts() {
    if (contact_count == 0) {
        printf("Aucun contact disponible.\n");
        return;
    }

    printf("\nListe des contacts :\n");
    for (int i = 0; i < contact_count; i++) {
        printf("Nom : %s\n", contacts[i].name);
        printf("Telephone : %s\n", contacts[i].phone);
        printf("E-mail : %s\n\n", contacts[i].email);
    }
}

void searchContact() {
    char search_name[100];
    printf("Entrez le nom du contact a rechercher : ");
    scanf(" %[^\n]", search_name);

    for (int i = 0; i < contact_count; i++) {
        if (strcmp(contacts[i].name, search_name) == 0) {
            printf("Contact trouve :\n");
            printf("Nom : %s\n", contacts[i].name);
            printf("Telephone : %s\n", contacts[i].phone);
            printf("E-mail : %s\n\n", contacts[i].email);
            return;
        }
    }
    printf("Contact non trouve.\n");
}

void modifyContact() {
    char modify_name[100];
    printf("Entrez le nom du contact à modifier : ");
    scanf(" %[^\n]", modify_name);

    for (int i = 0; i < contact_count; i++) {
        if (strcmp(contacts[i].name, modify_name) == 0) {
            printf("Entrez le nouveau numero de telephone : ");
            scanf(" %[^\n]", contacts[i].phone);
            printf("Entrez la nouvelle adresse e-mail : ");
            scanf(" %[^\n]", contacts[i].email);
            printf("Contact modifie avec succes !\n");
            return;
        }
    }
    printf("Contact non trouve.\n");
}

void deleteContact() {
    char delete_name[100];
    printf("Entrez le nom du contact à supprimer : ");
    scanf(" %[^\n]", delete_name);

    for (int i = 0; i < contact_count; i++) {
        if (strcmp(contacts[i].name, delete_name) == 0) {
            contacts[i] = contacts[contact_count - 1];
            contact_count--;
            printf("Contact supprime avec succes !\n");
            return;
        }
    }
    printf("Contact non trouve.\n");
}

int main() {
    int choice;

    do {
        printf("\nMenu de gestion de contacts :\n");
        printf("1. Ajouter un contact\n");
        printf("2. Afficher tous les contacts\n");
        printf("3. Rechercher un contact\n");
        printf("4. Modifier un contact\n");
        printf("5. Supprimer un contact\n");
        printf("6. Quitter\n");
        printf("Choisissez une option : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                displayContacts();
                break;
            case 3:
                searchContact();
                break;
            case 4:
                modifyContact();
                break;
            case 5:
                deleteContact();
                break;
            case 6:
                printf("Au revoir !\n");
                break;
            default:
                printf("Option invalide. Veuillez ressayer.\n");
        }
    } while (choice != 6);

    return 0;
}




