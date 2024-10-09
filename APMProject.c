#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure for patient information
struct Patient {
    char name[50];
    int age;
    char ailment[100];
    char treatment[100];
};

// Function to add a new patient
void admitPatient() {
    struct Patient p;
    FILE *file = fopen("patients.txt", "a"); // Open the file in append mode
    
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    // Get patient details
    printf("Enter patient's name: ");
    scanf(" %[^\n]", p.name);  // Fixed scanf format
    printf("Enter patient's age: ");
    scanf("%d", &p.age);
    printf("Enter patient's ailment: ");
    scanf(" %[^\n]", p.ailment);  // Fixed scanf format
    printf("Enter prescribed treatment: ");
    scanf(" %[^\n]", p.treatment);  // Fixed scanf format

    // Write patient details to file
    fprintf(file, "Name: %s\nAge: %d\nAilment: %s\nTreatment: %s\n\n", p.name, p.age, p.ailment, p.treatment);
    
    fclose(file); // Close the file
    printf("Patient admitted successfully.\n");
}

// Function to display all admitted patients
void displayPatients() {
    char ch;
    FILE *file = fopen("patients.txt", "r"); // Open the file in read mode
    
    if (file == NULL) {
        printf("No patient records found.\n");
        return;
    }

    // Display the contents of the file
    printf("\n--- List of Admitted Patients ---\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file); // Close the file
}

// Function to discharge a patient
void dischargePatient() {
    char name[50];
    struct Patient p;
    int found = 0;

    FILE *file = fopen("patients.txt", "r");   // Open the file in read mode
    FILE *tempFile = fopen("temp.txt", "w");   // Temporary file to store updated patient list
    
    if (file == NULL) {
        printf("No patient records found.\n");
        return;
    }

    // Get the name of the patient to discharge
    printf("Enter the name of the patient to discharge: ");
    scanf(" %[^\n]", name);  // Fixed scanf format

    // Read each patient's data and write all except the one to discharge
    while (fscanf(file, "Name: %[^\n]\nAge: %d\nAilment: %[^\n]\nTreatment: %[^\n]\n\n", p.name, &p.age, p.ailment, p.treatment) != EOF) {
        if (strcmp(p.name, name) != 0) {
            // Write the patient data to the temporary file
            fprintf(tempFile, "Name: %s\nAge: %d\nAilment: %s\nTreatment: %s\n\n", p.name, p.age, p.ailment, p.treatment);
        } else {
            found = 1;
        }
    }

    fclose(file);    // Close original file
    fclose(tempFile); // Close temporary file

    // Replace the original file with the updated one
    remove("patients.txt");
    rename("temp.txt", "patients.txt");

    if (found) {
        printf("Patient '%s' discharged successfully.\n", name);
    } else {
        printf("Patient '%s' not found in records.\n", name);
    }
}

int main() {
    int choice;

    while (1) {
        // Display menu
        printf("\nAyurvedic Hospital Management\n");
        printf("1. Admit a new patient\n");
        printf("2. Display admitted patients\n");
        printf("3. Discharge a patient\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                admitPatient();
                break;
            case 2:
                displayPatients();
                break;
            case 3:
                dischargePatient();
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

