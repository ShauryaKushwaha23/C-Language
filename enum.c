#include <stdio.h>

typedef enum {
    SUCCESS, FAILURE, PENDING
}Status;

void connectStatus(Status status);
    // Function to handle connection status


int main() {

    //enum = A user-defined data type that consists of a set of named integer constants.
    //       Benefit: Replaces numbers with readable names

    Status status = SUCCESS;

    connectStatus(status);
    
    return 0;
}

void connectStatus(Status status){

    switch(status){
        case SUCCESS:
            printf("Connection successful.\n");
            break;
        case FAILURE:
            printf("Connection failed.\n");
            break;
        case PENDING:
            printf("Connecting.......\n");
            break;
    }

}