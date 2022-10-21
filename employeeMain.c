#include <string.h> 
#include <stdlib.h> 
#include "employee.h" 
int main(void){ 
    //defined in employeeSearchOne.c 
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind); 
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind); 
    PtrToEmployee searchEmployeeByPhoneNumber(const Employee table[], int sizeTable, char * PhonenumberToFind); 
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salaryToFind);   
    //defined in employeeTable.c 
    extern Employee EmployeeTable[];     
    extern const int EmployeeTableEntries;      
    PtrToEmployee matchPtr;  //Declaration 
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 4.50); 
    //Example not found 
    if (matchPtr != NULL) 
        printf("Employee with salary 4.50 is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee with salary 4.50 is NOT found in the record\n"); 
//Example found 
    matchPtr = searchEmployeeByPhoneNumber(EmployeeTable, EmployeeTableEntries, "714-555-2749"); 
    if (matchPtr != NULL) 
        printf("Employee with phone number 714-555-2749 is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee with phone number 714-555-2749 is NOT found in the record\n"); 
    return EXIT_SUCCESS; 

} 