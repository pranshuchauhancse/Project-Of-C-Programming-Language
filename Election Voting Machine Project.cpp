#include <stdio.h>
#include <string.h>

int main() {
    int BJPpartyVotes = 0, CongresspartyVotes = 0, AAPpartyVotes = 0;
    int numVoters, i, gender, age, choice;
    char title[4], name[50];
    int voteAgain = 1; 
    
    printf("Welcome to the Election Voting Machine\n");
    printf("Please provide the following details:\n");

    printf("Enter the number of voters: ");
    scanf("%d", &numVoters);

    do {
        for (i = 0; i < numVoters; i++) {
            printf("\nVoter %d details:\n", i + 1);

            printf("Gender (1 for Male, 2 for Female): ");
            scanf("%d", &gender);

            printf("Title (Mr./Mrs.): ");
            scanf("%s", title);

            printf("Name: ");
            scanf("%s", name);

            printf("Age: ");
            scanf("%d", &age);

           
            if (age < 18) {
                printf("You are not eligible to vote. Minimum voting age is 18.\n");
                continue; 
            }

            do {
                printf("Choose the party to vote for:\n");
                printf("1. BJP Party\n");
                printf("2. Congress Party\n");
                printf("3. AAP Party\n");
                printf("Enter your choice (1/2/3): ");
                scanf("%d", &choice);

                
                switch (choice) {
                    case 1:
                        printf("Thank you for voting for BJP Party!\n");
                        BJPpartyVotes++;
                        break;
                    case 2:
                        printf("Thank you for voting for Congress Party!\n");
                        CongresspartyVotes++;
                        break;
                    case 3:
                        printf("Thank you for voting for AAP Party!\n");
                        AAPpartyVotes++;
                        break;
                    default:
                        printf("Invalid choice! Please select a valid option.\n");
                        continue; 
                }

                printf("\nCurrent Votes:\n");
                printf("BJP Party : %d\n", BJPpartyVotes);
                printf("Congress Party : %d\n", CongresspartyVotes);
                printf("AAP Party : %d\n", AAPpartyVotes);

                printf("Do you want to vote again? (1 for Yes / 0 for No): ");
                scanf("%d", &voteAgain);
            } while (voteAgain != 0);
        }

        printf("Voting for all voters has been completed.\n");
        printf("Do you want to run the election again? (1 for Yes / 0 for No): ");
        scanf("%d", &voteAgain);
    } while (voteAgain != 0); 
    
    if (BJPpartyVotes > CongresspartyVotes && BJPpartyVotes > AAPpartyVotes) {
        printf("BJP Party wins the election!\n");
    } else if (CongresspartyVotes > BJPpartyVotes && CongresspartyVotes > AAPpartyVotes) {
        printf("Congress Party wins the election!\n");
    } else if (AAPpartyVotes > BJPpartyVotes && AAPpartyVotes > CongresspartyVotes) {
        printf("AAP Party wins the election!\n");
    } else {
        printf("It's a tie!\n");
    }

    return 0;
}

