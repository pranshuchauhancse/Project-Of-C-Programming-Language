#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void askQuestion(int questionNumber, const char *question, const char *options[]) {
    printf("Question %d: %s\n", questionNumber, question);
    for (int i = 0; i < 4; ++i) {
        printf("%c %s\n", 'A' + i, options[i]);
    }
    printf("Your answer (A/B/C/D): ");
}

int main() 
{
    srand(time(NULL));

    
    const char *questions[] = {
        "Who is the highest-ranking officer in the Indian Army?",
        "Which division of the Indian Army specializes in mountain warfare?",
         "Which rank is higher: Brigadier or Major General?",
        "Which of these is not a part of the Indian Army's Western Command?",
        "The 'Rezang La' battle in 1962 involved soldiers from which regiment?",
         "The 'Victory Peak' is located in the Siachen Glacier and was captured by troops from which division?"
    };

    const char *options[][4] = {
        {"a) General", "b) Colonel", "c) Major", "d) Lieuenant"},
        {"a) Parachute Regiment", "b) Mechanized Infantry", "c) Gorkha Rifles", "d) Ladakh Scouts"},
         {"a) Brigadier", "b) Major General", "c) Both are equal", "d) Dependss on the Service tenture"},
        {"a) 14 Corps", "Berlinb) 11 Corps", "c) 9 Corps", "d) 16 Corps"},
        {"a) Jat Regiment", "b) Grenadiers Regiment", "c) Kumaon Regiment", "d) Punjab Regiment"},
        {"a) 14 Corps", "b) 15 Corps", "c) 13 Corps", "c) 16 Corps"}
    };

    
  const   char answers[] = {'A', 'C', 'B','D','A','C'};

    
    time_t startTime, currentTime;
    int score = 0;

    printf("Welcome to the Quiz! You have 60 seconds to answer all the questions.\n");
    printf("Made By :- (Pranshu Chauhan) (AY-1) (37) (Btech CSE)\n");


    
    time(&startTime);

    
    for (int i = 0; i < 6; ++i) {
        askQuestion(i + 1, questions[i], options[i]);

     char    userAnswer;
        scanf(" %c", &userAnswer);


        if (userAnswer == answers[i]) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Incorrect!\n");
        }

        time(&currentTime);
        if (difftime(currentTime, startTime) >= 60) {
            printf("Time's up! Quiz over.\n");
            break;
        }
    }

    printf("Your final score: %d out of 6\n", score);
    printf("Thank You For Playing The Quiz!\n");
   
    
    
	

    return 0;
}
