#include <stdio.h>
#include<stdbool.h>
#include<string.h>
typedef struct {
    char first[15], middle[15], last[15];
} Name;

typedef struct {
    int EmpId;
    Name name;
   float Salary; 
} Employee;

void addEmployee(Employee E[], int n, char firstName[], char middleName[], char lastName[], int empId, float salary) {
    /*
    n - Length of Employee array
    Add employee with Name(firstName, middleName, lastName), empId, salary to array of employees E
    */
    E[n].EmpId = empId;
    E[n].Salary = salary;
    strcpy(E[n].name.first, firstName);
    strcpy(E[n].name.middle, middleName);
    strcpy(E[n].name.last, lastName);
}

bool search(Employee E[], int n, int empId) {
    /*
    n - Length of Employee array
    Search for employee with empId in array of employees E
    Return true if found, else false
    */
    for (int i = 0; i  < n; i++) {
        if(E[i].EmpId == empId)
            return true;
    }
    return false;
}
int main() {
    int q, t, n = 0;
    Employee E[10];
    int empId;
    float salary;
    char firstName[30], middleName[30], lastName[30];
    
    scanf("%d", &q);
    while (q--) {
        scanf("%d", &t);
        
        if (t == 1) {
            scanf("%d%f%s%s%s", &empId, &salary, firstName, middleName, lastName);
            addEmployee(E, n, firstName, middleName, lastName, empId, salary);
            n += 1;
        } else {
            scanf("%d", &empId);
            printf("%d\n", search(E, n, empId));
        }
    }
}