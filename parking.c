#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int carSlots;
int bikeSlots;
int maxCarSlots;
int maxBikeSlots;
int totalCollection = 0;

void saveReport() {
    FILE *fp = fopen("report.txt", "w");
    if (fp == NULL) {
        printf("Error saving file!\n");
        return;
    }

    fprintf(fp, "------ DAILY REPORT ------\n");
    fprintf(fp, "Total Collection: Rs. %d\n", totalCollection);
    fprintf(fp, "Available Car Slots: %d\n", carSlots);
    fprintf(fp, "Available Bike Slots: %d\n", bikeSlots);

    fclose(fp);
    printf("Report saved successfully!\n");
}

void status() {
    printf("\n------ PARKING STATUS ------\n");
    printf("Available Car Slots  : %d\n", carSlots);
    printf("Available Bike Slots : %d\n", bikeSlots);
}

void carEntry() {
    if (carSlots > 0) {
        carSlots--;
        printf("Car parked successfully!\n");
    } else {
        printf("No Car Slots Available!\n");
    }
}

void bikeEntry() {
    if (bikeSlots > 0) {
        bikeSlots--;
        printf("Bike parked successfully!\n");
    } else {
        printf("No Bike Slots Available!\n");
    }
}

void carExit() {
    if (carSlots < maxCarSlots) {
        int hours, fee;
        printf("Enter parking hours: ");
        if (scanf("%d", &hours) != 1 || hours <= 0) {
            printf("Invalid input!\n");
            while(getchar() != '\n'); // clear buffer
            return;
        }

        fee = hours * 20;
        totalCollection += fee;
        carSlots++;

        printf("Car exited.\n");
        printf("Parking Fee: Rs. %d\n", fee);
    } else {
        printf("No cars currently parked!\n");
    }
}

void bikeExit() {
    if (bikeSlots < maxBikeSlots) {
        int hours, fee;
        printf("Enter parking hours: ");
        if (scanf("%d", &hours) != 1 || hours <= 0) {
            printf("Invalid input!\n");
            while(getchar() != '\n');
            return;
        }

        fee = hours * 10;
        totalCollection += fee;
        bikeSlots++;

        printf("Bike exited.\n");
        printf("Parking Fee: Rs. %d\n", fee);
    } else {
        printf("No bikes currently parked!\n");
    }
}

int adminLogin() {
    char username[20], password[20];

    printf("Enter Admin Username: ");
    scanf("%s", username);
    printf("Enter Admin Password: ");
    scanf("%s", password);

    if (strcmp(username, "admin") == 0 && strcmp(password, "1234") == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int choice;

    printf("Enter Total Car Slots: ");
    scanf("%d", &maxCarSlots);
    printf("Enter Total Bike Slots: ");
    scanf("%d", &maxBikeSlots);

    carSlots = maxCarSlots;
    bikeSlots = maxBikeSlots;

    do {
        printf("\n====== SMART PARKING SYSTEM ======\n");
        printf("1. Car Entry\n");
        printf("2. Bike Entry\n");
        printf("3. Car Exit\n");
        printf("4. Bike Exit\n");
        printf("5. Check Parking Status\n");
        printf("6. Admin Panel\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input!\n");
            while(getchar() != '\n');
            continue;
        }

        switch(choice) {
            case 1: carEntry(); break;
            case 2: bikeEntry(); break;
            case 3: carExit(); break;
            case 4: bikeExit(); break;
            case 5: status(); break;

            case 6:
                if (adminLogin()) {
                    printf("\n--- ADMIN PANEL ---\n");
                    printf("Total Collection: Rs. %d\n", totalCollection);
                    saveReport();
                } else {
                    printf("Invalid Admin Credentials!\n");
                }
                break;

            case 7:
                printf("System Closed.\n");
                break;

            default:
                printf("Invalid Choice! Please select 1-7 only.\n");
        }

    } while(choice != 7);

    return 0;
}