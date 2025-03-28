#include <stdio.h>

#define Maximum_number_of_questions_user_can_answer 5

int main() {

    char questions[Maximum_number_of_questions_user_can_answer][100] = {
        "Which river is considered the longest river in Bangladesh?",
        "In which year was the first private university in Bangladesh established?",
        "What is the largest planet in our solar system?",
        "What is the chemical symbol for water?",
        "Who wrote 'Romeo and Juliet'?"
    };


    char options[Maximum_number_of_questions_user_can_answer][4][100] = {
        {"1. Meghna", "2. Padma", "3. Jamuna", "4. Ganges"},
        {"1. 1985", "2. 1992", "3. 2000", "4. 1971"},
        {"1. Earth", "2. Mars", "3. Jupiter", "4. Saturn"},
        {"1. H2O", "2. O2", "3. CO2", "4. N2"},
        {"1. Shakespeare", "2. Dickens", "3. Twain", "4. Austen"}
    };

    int correct_answer[Maximum_number_of_questions_user_can_answer] = {2, 2, 3, 1, 1};


    int user_answer, score = 0, Number_of_questions_user_want_to_answer;

    // start form here-----------------------------------------------
    puts("Welcome to The Quiz Game!\n\n");

    printf("How many questions would you like to answer (1-%d)? ", Maximum_number_of_questions_user_can_answer);
    scanf("%d", &Number_of_questions_user_want_to_answer);


    if (Number_of_questions_user_want_to_answer < 1 || Number_of_questions_user_want_to_answer > Maximum_number_of_questions_user_can_answer) {
        printf("Invalid number, Please input correct number.\n");
        return 1;
    }

    // Loop will go to each question
    for (int i = 0; i < Number_of_questions_user_want_to_answer; i++) {
        // Print the question
        printf("\n%s\n", questions[i]);

        // Print the options
        for (int j = 0; j < 4; j++) {
            printf("%s\n", options[i][j]);
        }


        printf("Your answer (1-4): ");
        scanf("%d", &user_answer);

        // user answer is correct or not?
        if (user_answer == correct_answer[i]) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong! The correct answer is option %d.\n", correct_answer[i]);
        }
    }
//------------------------loop finish

    printf("\nYour total score: %d out of %d\n", score, Number_of_questions_user_want_to_answer);

//string work------------------

    char result_for_user_after_quiz[100] = "You finished the quiz with a score of ";
    char score_str[10];
    sprintf(score_str, "%d", score);  // Convert score to string
    strcat(result_for_user_after_quiz, score_str);  // Concatenate score to the result message
    strcat(result_for_user_after_quiz, " out of ");

    char total_questions_str[10];
    sprintf(total_questions_str, "%d", Number_of_questions_user_want_to_answer);
    strcat(result_for_user_after_quiz, total_questions_str);
    strcat(result_for_user_after_quiz, ".");

    // Print the result message
    printf("%s\n", result_for_user_after_quiz);

    getch();

    return 0;
}
